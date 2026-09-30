/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$ToString
ENTRY_POINT: 026cb27c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_TextureRectMatrixf__ToString(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  
  do {
    unaff_x24 = unaff_x24 + 2;
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 8))();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) {
      *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      lVar1 = FUN_03f038c8(0);
      if (lVar1 != 0) {
        FUN_04d772fc();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    if (uVar2 <= unaff_x23) break;
    if (*unaff_x24 == 0) {
      FUN_031dba18(0x11,0);
      uVar2 = (ulong)*(uint *)(unaff_x22 + 0x18);
    }
  } while (unaff_x23 < uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


