/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionSetupExtensions$$AddBinding
ENTRY_POINT: 03a30030
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a301e0) */

long UnityEngine_InputSystem_InputActionSetupExtensions__AddBinding
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x03a30030:
  if (!(bool)in_ZR) goto LAB_03a3001c;
LAB_03a30034:
  puVar3 = (undefined8 *)FUN_01ecb238();
  do {
    uVar4 = (*(code *)*puVar3)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f116d0();
      if (plVar5 == (long *)0x0) goto LAB_03a30198;
      lVar6 = *plVar5;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_03a30170;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_03a300b0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03a300b0:
    plVar5 = (long *)(*(code *)*puVar3)();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar5 = (long *)thunk_FUN_01f11920();
    if ((long *)*unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar1 = (long *)*plVar5;
    plVar5 = (long *)plVar5[1];
    lVar6 = *unaff_x23;
    if ((plVar1 != (long *)0x0) && (*plVar1 != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar1,lVar6);
    }
    if ((plVar5 != (long *)0x0) && (*plVar5 != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar5,lVar6);
    }
    (**(code **)(*(long *)*unaff_x19 + 0x188))();
    param_1 = *unaff_x20;
    param_3 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03a30034;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03a3001c:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x03a30030;
    }
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03a3018c;
    }
  }
LAB_03a30170:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03a3018c:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
LAB_03a30198:
  return *unaff_x19;
}


