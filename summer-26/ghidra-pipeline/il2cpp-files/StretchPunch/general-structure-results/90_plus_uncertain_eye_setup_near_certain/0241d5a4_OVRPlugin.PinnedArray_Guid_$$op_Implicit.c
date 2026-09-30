/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$op_Implicit
ENTRY_POINT: 0241d5a4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__op_Implicit(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_01dde7f8();
  uVar1 = thunk_FUN_01de27b8();
  lVar2 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8(lVar2);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar3 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar3 != 0) {
    lVar4 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar4 + -8) == lVar2) goto FUN_0241d61c;
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 != 0);
  }
  FUN_01dde8fc();
FUN_0241d61c:
  FUN_02990b84(uVar1);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01dde7f8();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0241df28();
  return;
}


