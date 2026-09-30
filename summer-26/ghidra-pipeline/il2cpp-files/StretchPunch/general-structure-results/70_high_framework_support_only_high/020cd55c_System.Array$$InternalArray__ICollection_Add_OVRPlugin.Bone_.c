/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Bone>
ENTRY_POINT: 020cd55c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Bone>(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  
  if (param_1 == 0) {
    FUN_01dde854();
  }
  if (unaff_x21 == 0) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar2 = thunk_FUN_01de27b8();
    uVar4 = thunk_FUN_01dd295c(StringLiteral_1342);
    FUN_0328dba4(uVar2,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar2);
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01dde7f8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_02df7f0c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  lVar1 = FUN_03ef5558(1);
  if ((lVar1 != 0) && (uVar3 = FUN_03ef4ff0(lVar1,uVar2), (uVar3 & 1) != 0)) {
    return;
  }
  lVar1 = FUN_03ef547c();
  lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  uVar2 = thunk_FUN_01de27b8(lVar5);
  FUN_02df8630();
  if (lVar1 != 0) {
    FUN_03ef5210(lVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


