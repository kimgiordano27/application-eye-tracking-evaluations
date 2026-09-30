/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcAudioSampleRate
ENTRY_POINT: 02c45944
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c45a38) */

void OVRPlugin_Media__SetMrcAudioSampleRate(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  long lVar5;
  long lVar6;
  char cStack000000000000000c;
  
  FUN_017fc350(PTR_DAT_0380c6e8);
  FUN_017fc350(PTR_DAT_0380c6f0);
  FUN_017fc350(PTR_DAT_0380c6f8);
  *(undefined1 *)(unaff_x21 + 0xb3) = 1;
  cStack000000000000000c = '\0';
  lVar6 = *(long *)(unaff_x19 + 0x48);
  thunk_FUN_0181f594();
  if (unaff_x20 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x38);
    thunk_FUN_0181f594();
    if (((uVar1 >> 0x15 & 1) == 0) ||
       (uVar1 = *(uint *)(unaff_x20 + 0x38), thunk_FUN_0181f594(), (uVar1 >> 0x13 & 1) != 0)) {
      if (lVar6 != 0) goto LAB_02c45a44;
    }
    else if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 0x40);
      lVar5 = *plVar4;
      thunk_FUN_0181f594();
      if (lVar5 == 0) {
        thunk_FUN_0181f594();
        uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c6f0);
        FUN_02825fb4(uVar3,*(undefined8 *)PTR_DAT_0380c6e8);
        FUN_01818258(plVar4,uVar3,0);
      }
      lVar5 = *plVar4;
      thunk_FUN_0181f594();
      if (lVar5 != 0) {
        cStack000000000000000c = '\0';
        FUN_02c317e4(lVar5,&stack0x0000000c,0);
        FUN_02826708(lVar5);
        if (cStack000000000000000c != '\0') {
          thunk_FUN_0184c01c(lVar5,0);
        }
      }
LAB_02c45a44:
      thunk_FUN_0181f594();
      iVar2 = FUN_018183c4(lVar6 + 0x3c);
      if (iVar2 == 0) {
        FUN_02c450b0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


