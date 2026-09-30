/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_34
ENTRY_POINT: 03e21eb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_34(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x21;
  long in_stack_00000018;
  
  if (*(long *)(unaff_x21 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar1 = FUN_02728cf4(*(long *)(unaff_x21 + 0x50),*(undefined8 *)PTR_DAT_04579900);
  *(undefined8 *)(in_stack_00000018 + 0x48) = uVar1;
  thunk_FUN_01f51358();
  plVar6 = *(long **)(in_stack_00000018 + 0x48);
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffa;
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
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03e21f40;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03e21f40:
  uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if ((uVar4 & 1) == 0) {
    FUN_03e223f8();
    *(undefined8 *)(in_stack_00000018 + 0x48) = 0;
    thunk_FUN_01f51358((undefined8 *)(in_stack_00000018 + 0x48),0);
    uVar1 = 0;
  }
  else {
    plVar6 = *(long **)(in_stack_00000018 + 0x48);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_045798d8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03e2207c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_045798d8,0);
LAB_03e2207c:
    lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(undefined8 *)(in_stack_00000018 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
    thunk_FUN_01f51358();
    *(undefined4 *)(in_stack_00000018 + 0x10) = 4;
    uVar1 = 1;
  }
  return uVar1;
}


