/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 02908e38
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(ulong param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  long unaff_x19;
  uint unaff_w20;
  uint *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  uint *unaff_x25;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    thunk_FUN_0159f088(PTR_DAT_06d9bc98);
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    *(undefined1 *)(unaff_x19 + 0xcc1) = 1;
  }
  *unaff_x21 = 0;
  puVar3 = PTR_DAT_06ddaad8;
  if (0 < (int)unaff_w20) {
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(unaff_x24 + uVar4 * 2);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      if ((0x20 < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x100002600U) == 0)) {
        uVar2 = *unaff_x21;
        *unaff_x21 = uVar2 + 1;
        if (unaff_w22 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        *(ushort *)(unaff_x23 + (long)(int)uVar2 * 2) = uVar1;
        if (uVar2 + 1 == unaff_w22) {
          unaff_w20 = (int)uVar4 + 1;
          break;
        }
      }
      uVar4 = uVar4 + 1;
    } while (unaff_w20 != uVar4);
  }
  *unaff_x25 = unaff_w20;
  return;
}


