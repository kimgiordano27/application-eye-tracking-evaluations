/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnDestroy
ENTRY_POINT: 06e29408
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnDestroy(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 uVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e82448);
  FUN_03c8f898(PTR_DAT_08e938f8);
  FUN_03c8f898(PTR_DAT_08e938f0);
  *(undefined1 *)(unaff_x21 + 0x98) = 1;
  lVar5 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_07145224(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = unaff_x22;
    thunk_FUN_03d233cc();
    *(long *)(lVar5 + 0x20) = unaff_x19;
    thunk_FUN_03d233cc();
    if (unaff_x20 != 0) {
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(unaff_x20 + 0x18);
      thunk_FUN_03d233cc();
      uVar6 = FUN_06e28718();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
      thunk_FUN_03d233cc();
      puVar4 = PTR_DAT_08e938f8;
      puVar3 = PTR_DAT_08e938c8;
      puVar2 = PTR_DAT_08e938c0;
      puVar1 = PTR_DAT_08e82448;
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        FUN_0675cb84(*(long *)(unaff_x19 + 0x88),*(undefined8 *)(lVar5 + 0x28),
                     *(undefined8 *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_08e93860);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
        FUN_04d4bab0(uVar6,lVar5,*(undefined8 *)puVar4,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        FUN_0481749c(uVar7,uVar6,*(undefined8 *)puVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


