/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 02b18c10
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar7);
  }
  if (unaff_x23 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_01de26bc();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
  }
  thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x30),lVar7);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_01e10808((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_02b18514();
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar3 = FUN_033a87c8(uVar3,0);
    if (in_stack_00000008 == 0) goto LAB_02b18df4;
    lVar7 = FUN_032df734(in_stack_00000008,*(undefined8 *)StringLiteral_2869,uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    if (lVar7 == 0) {
      FUN_033b3310(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar1 = thunk_FUN_01de26bc(lVar7,lVar4);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar7,lVar4);
    }
    if (0 < *(int *)(lVar1 + 0x18)) {
      uVar5 = 0;
      plVar6 = (long *)(lVar1 + 0x20);
      do {
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        if (uVar2 <= uVar5) {
LAB_02b18df0:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (*plVar6 == 0) {
          FUN_033b3310(0x11,0);
          uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        }
        if (uVar2 <= uVar5) goto LAB_02b18df0;
        FUN_02b185f4();
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 2;
      } while ((long)uVar5 < (long)*(int *)(lVar1 + 0x18));
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar7 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
  if (lVar7 != 0) {
    FUN_029bf94c();
    return;
  }
LAB_02b18df4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


