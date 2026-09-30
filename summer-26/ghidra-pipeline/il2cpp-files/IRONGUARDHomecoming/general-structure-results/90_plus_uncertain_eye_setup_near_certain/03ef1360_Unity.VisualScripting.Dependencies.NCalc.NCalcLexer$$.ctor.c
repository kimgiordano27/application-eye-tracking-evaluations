/*
FUNCTION_NAME: Unity.VisualScripting.Dependencies.NCalc.NCalcLexer$$.ctor
ENTRY_POINT: 03ef1360
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_VisualScripting_Dependencies_NCalc_NCalcLexer___ctor
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long *plVar6;
  long in_stack_00000018;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_01ecb238();
      goto LAB_03ef138c;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_03ef138c:
  uVar2 = (*(code *)*puVar1)();
  *(undefined8 *)(in_stack_00000018 + 0x30) = uVar2;
  thunk_FUN_01f51358();
  plVar6 = *(long **)(in_stack_00000018 + 0x30);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03ef1410;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03ef1410:
  uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  if ((uVar4 & 1) == 0) {
    FUN_03ef1570();
    *(undefined8 *)(in_stack_00000018 + 0x30) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x30),0);
    uVar2 = 0;
  }
  else {
    plVar6 = *(long **)(in_stack_00000018 + 0x30);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0457d358) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03ef14a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_0457d358,0);
LAB_03ef14a0:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x18) = uVar2;
    thunk_FUN_01f51358();
    uVar2 = 1;
    *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  }
  return uVar2;
}


