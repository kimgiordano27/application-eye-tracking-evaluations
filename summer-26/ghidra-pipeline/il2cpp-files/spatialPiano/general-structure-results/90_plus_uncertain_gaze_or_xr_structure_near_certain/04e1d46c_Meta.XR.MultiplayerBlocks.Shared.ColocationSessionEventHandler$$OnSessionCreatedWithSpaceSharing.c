/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpaceSharing
ENTRY_POINT: 04e1d46c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpaceSharing
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  uint unaff_w19;
  long unaff_x23;
  int unaff_w24;
  long lVar4;
  long unaff_x25;
  long lVar5;
  
  FUN_02f08768(PTR_DAT_067c99a0);
  *(undefined1 *)(unaff_x25 + 0xe19) = 1;
  puVar1 = PTR_DAT_067c99a0;
  if ((int)unaff_w19 < (int)(unaff_w24 + unaff_w19)) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = (long)(int)(unaff_w24 + unaff_w19) - (long)(int)unaff_w19;
    lVar4 = unaff_x23 + (long)(int)unaff_w19 * 0x10 + 0x20;
    do {
      uVar3 = *(uint *)(unaff_x23 + 0x18);
      if (uVar3 <= unaff_w19) {
LAB_04e1d520:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        uVar3 = *(uint *)(unaff_x23 + 0x18);
      }
      if (uVar3 <= unaff_w19) goto LAB_04e1d520;
      uVar2 = FUN_05ff9c24(lVar4);
      if ((uVar2 & 1) != 0) {
        return unaff_w19;
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
      unaff_w19 = unaff_w19 + 1;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


