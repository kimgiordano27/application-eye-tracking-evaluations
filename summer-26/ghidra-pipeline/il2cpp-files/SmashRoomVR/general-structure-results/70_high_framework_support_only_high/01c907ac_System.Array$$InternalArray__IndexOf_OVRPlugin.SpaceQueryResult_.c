/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01c907ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xb50));
  thunk_FUN_01ad9084(StringLiteral_538);
  *(undefined1 *)(unaff_x21 + 0x847) = 1;
  lVar4 = *unaff_x19;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(lVar4 + 0x38);
  if (lVar1 == 0) {
    FUN_01ae9ed0(lVar4);
    lVar1 = *(long *)(lVar4 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar1 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (lVar2 != 0) {
    FUN_01d37da0(lVar2,uVar3,**(undefined8 **)(lVar1 + 0xb8),*(undefined8 *)StringLiteral_540);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


