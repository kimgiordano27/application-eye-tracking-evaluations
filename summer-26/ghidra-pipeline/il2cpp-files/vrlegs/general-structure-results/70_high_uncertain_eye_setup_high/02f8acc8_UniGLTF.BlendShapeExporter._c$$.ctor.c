/*
FUNCTION_NAME: UniGLTF.BlendShapeExporter.<>c$$.ctor
ENTRY_POINT: 02f8acc8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f8add4) */

void UniGLTF_BlendShapeExporter_<>c___ctor(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int in_w8;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long unaff_x26;
  char cStack000000000000001c;
  
  if (in_w8 != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x26 == 0) {
    if (((unaff_w24 != 0) &&
        ((unaff_w23 < *(int *)(unaff_x20 + 0x20) || (uVar3 = FUN_02f8b74c(), (uVar3 & 1) != 0)))) &&
       ((*(int *)(unaff_x20 + 0x24) < *(int *)(unaff_x20 + 0x1c) ||
        (uVar3 = FUN_02f8b74c(), (uVar3 & 1) != 0)))) {
      cStack000000000000001c = '\0';
      FUN_027e0bd8();
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar1 = *(int *)(unaff_x20 + 0x24);
      iVar2 = FUN_02f89ff4();
      *(int *)(unaff_x20 + 0x24) = iVar2 + iVar1;
      if (cStack000000000000001c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


