/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vuzp1q_f64
ENTRY_POINT: 039dcfd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x039dd0c0) */

undefined8 Unity_Burst_Intrinsics_Arm_Neon__vuzp1q_f64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x99a) = 1;
  puVar3 = StringLiteral_5831;
  puVar2 = StringLiteral_5830;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  uVar4 = FUN_039dd8a0();
  plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0340c37c(plVar5,0,0);
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_03a3a554(uVar6,uVar4,plVar5,0,0);
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_039dd09c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_039dd09c:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
  }
  return uVar6;
}


