/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameImageFlipped
ENTRY_POINT: 06967860
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcFrameImageFlipped(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w8;
  long unaff_x19;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9e200();
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    uVar3 = thunk_FUN_07c6140c(*(long *)(unaff_x19 + 0x28),0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x21);
    }
    uVar2 = FUN_07c9e200(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar4 = UnityEngine_TextCore_Text_FontAsset__get_atlasWidth(*(long *)(unaff_x19 + 0x28),0),
       puVar1 = PTR_DAT_084b6f78, lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(unaff_x19 + 0x30)) {
LAB_0696794c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(unaff_x19 + 0x30) * 8 + 0x20);
      if (lVar4 != 0) {
        FUN_07c6678c(lVar4,*(undefined8 *)PTR_DAT_084b6f78,0);
        if ((*(long *)(unaff_x19 + 0x28) != 0) &&
           (lVar4 = UnityEngine_TextCore_Text_FontAsset__get_atlasWidth
                              (*(long *)(unaff_x19 + 0x28),0), lVar4 != 0)) {
          if (*(uint *)(lVar4 + 0x18) <= *(uint *)(unaff_x19 + 0x30)) goto LAB_0696794c;
          lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(unaff_x19 + 0x30) * 8 + 0x20);
          if (lVar4 != 0) {
            FUN_07c6678c(lVar4,*(undefined8 *)puVar1,0);
            *(undefined1 *)(unaff_x19 + 0x48) = 0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


