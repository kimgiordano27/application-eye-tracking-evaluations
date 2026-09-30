/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest
ENTRY_POINT: 072a34a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__UpdateTextureCopyRequest(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  uint uVar4;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar5;
  int in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  do {
    if (unaff_x29 <= param_1) break;
    if (*(int *)(*(long *)PTR_DAT_092c22f8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07299060(unaff_x23,in_stack_00000018._4_4_ + 0x20,(long)&stack0x00000028 + 4,
                 &stack0x00000028,(long)&stack0x00000020 + 4,&stack0x00000020);
    lVar2 = *(long *)(unaff_x20 + 0x188);
    if (lVar2 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_072a3718;
    iVar1 = (int)unaff_x28;
    lVar2 = *(long *)(lVar2 + unaff_x26 * 8 + 0x20);
    uVar5 = FUN_072a4664(uStack0000000000000024);
    if (lVar2 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar2 + 0x18) <= (uint)(unaff_w24 + iVar1)) goto LAB_072a3718;
    lVar3 = *(long *)(unaff_x20 + 0x188);
    *(undefined4 *)(lVar2 + unaff_x27 + unaff_x28 * 4 + 0x20) = uVar5;
    if (lVar3 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a3718;
    lVar2 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
    uVar5 = FUN_072a4664(uStack0000000000000020);
    if (lVar2 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w24 + iVar1 + 1U) goto LAB_072a3718;
    lVar3 = *(long *)(unaff_x20 + 0x188);
    *(undefined4 *)(lVar2 + unaff_x27 + unaff_x28 * 4 + 0x24) = uVar5;
    if (lVar3 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a3718;
    lVar2 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
    uVar5 = FUN_072a4664(uStack000000000000002c);
    if (lVar2 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w24 + iVar1 + 2U) goto LAB_072a3718;
    lVar3 = *(long *)(unaff_x20 + 0x188);
    *(undefined4 *)(lVar2 + unaff_x27 + unaff_x28 * 4 + 0x28) = uVar5;
    if (lVar3 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) goto LAB_072a3718;
    lVar2 = *(long *)(lVar3 + unaff_x26 * 8 + 0x20);
    uVar5 = FUN_072a4664(uStack0000000000000028);
    if (lVar2 == 0) goto LAB_072a3650;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w24 + iVar1 + 3U) goto LAB_072a3718;
    unaff_x23 = *(long *)(unaff_x20 + 0xc0);
    lVar3 = unaff_x28 * 4;
    unaff_x28 = unaff_x28 + 4;
    *(undefined4 *)(lVar2 + unaff_x27 + lVar3 + 0x2c) = uVar5;
    if (unaff_x23 == 0) goto LAB_072a3650;
    param_1 = *(long *)(unaff_x23 + 0x28);
  } while (unaff_x25 + unaff_x28 < 0x23d);
  if (unaff_x29 < param_1) {
    Meta_XR_ImmersiveDebugger_Manager_Hook___ctor(unaff_x23,(int)param_1 - (int)unaff_x29);
    unaff_x23 = *(long *)(unaff_x20 + 0xc0);
    if (unaff_x23 == 0) goto LAB_072a3650;
    uVar4 = (in_stack_00000010 + (int)unaff_x28) - 4;
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar4 = (int)unaff_x28 + in_stack_00000010;
  }
  if (*(long *)(unaff_x23 + 0x28) < unaff_x29) {
    FUN_07297dc4(unaff_x23,(int)unaff_x29 - (int)*(long *)(unaff_x23 + 0x28));
  }
  if (0x23f < (int)uVar4) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x188);
  if (lVar2 != 0) {
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
      FUN_0769c874(*(undefined8 *)(lVar2 + unaff_x26 * 8 + 0x20),uVar4,0x243 - uVar4,0);
      return;
    }
LAB_072a3718:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_072a3650:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


