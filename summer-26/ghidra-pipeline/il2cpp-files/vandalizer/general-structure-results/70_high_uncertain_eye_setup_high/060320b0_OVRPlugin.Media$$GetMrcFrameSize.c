/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 060320b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Media__GetMrcFrameSize(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  FUN_031f20f4(PTR_DAT_0759b3a8);
  FUN_031f20f4(PTR_DAT_075f78c8);
  FUN_031f20f4(PTR_DAT_075f7908);
  *(undefined1 *)(unaff_x26 + 0xbf0) = 1;
  uVar1 = thunk_FUN_0322ed78(*unaff_x25,&stack0x0000000c);
  uVar1 = FUN_05c7ecc4(*unaff_x24,uVar1,0);
  lVar2 = thunk_FUN_0322f148(*unaff_x23);
  FUN_06e5a7e4(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_03e0d654(lVar2,*(undefined8 *)PTR_DAT_075f4930), lVar2 != 0)) {
    FUN_06eeca3c(0x3f800000,lVar2,0);
    FUN_06eecf98(lVar2,1,0);
    FUN_06eecc98(lVar2,0,0);
    FUN_06eed2d8(lVar2,3,0);
    lVar3 = FUN_06e5502c(lVar2,0);
    if (lVar3 != 0) {
      FUN_06e6b558();
      FUN_06e5502c(lVar2,0);
      FUN_05f9d090();
      FUN_06eeec54(lVar2,0);
      lVar3 = FUN_06e550fc(lVar2,0);
      if (lVar3 != 0) {
        FUN_06e59c44(lVar3,0,0);
        lVar3 = FUN_06e550fc(lVar2,0);
        if (lVar3 != 0) {
          FUN_06e59a08(lVar3,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


