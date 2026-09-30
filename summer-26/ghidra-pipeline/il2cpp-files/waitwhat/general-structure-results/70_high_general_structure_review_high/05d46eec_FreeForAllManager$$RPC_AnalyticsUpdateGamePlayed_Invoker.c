/*
FUNCTION_NAME: FreeForAllManager$$RPC_AnalyticsUpdateGamePlayed@Invoker
ENTRY_POINT: 05d46eec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FreeForAllManager__RPC_AnalyticsUpdateGamePlayed_Invoker(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x48));
  FUN_03188a78(PTR_DAT_0711f050);
  FUN_03188a78(PTR_DAT_0711f058);
  FUN_03188a78(PTR_DAT_0711f060);
  FUN_03188a78(PTR_DAT_0711f068);
  FUN_03188a78(PTR_DAT_0711f070);
  FUN_03188a78(PTR_DAT_0711f078);
  FUN_03188a78(PTR_DAT_0711f080);
  FUN_03188a78(PTR_DAT_0711f088);
  FUN_03188a78(PTR_DAT_0711f090);
  FUN_03188a78(PTR_DAT_0711f098);
  FUN_03188a78(PTR_DAT_0711f0a0);
  FUN_03188a78(PTR_DAT_0711f0a8);
  FUN_03188a78(PTR_DAT_0711f0b0);
  FUN_03188a78(PTR_DAT_0711f0b8);
  FUN_03188a78(PTR_DAT_0711f0c0);
  FUN_03188a78(PTR_DAT_0711f0c8);
  FUN_03188a78(PTR_DAT_0711f0d0);
  FUN_03188a78(PTR_DAT_0711f0d8);
  FUN_03188a78(PTR_DAT_0711f0e0);
  FUN_03188a78(PTR_DAT_0711f0e8);
  FUN_03188a78(PTR_DAT_0711f0f0);
  FUN_03188a78(PTR_DAT_0711f0f8);
  FUN_03188a78(PTR_DAT_0711f100);
  FUN_03188a78(PTR_DAT_0711f108);
  FUN_03188a78(PTR_DAT_0711f110);
  FUN_03188a78(PTR_DAT_0711f118);
  FUN_03188a78(PTR_DAT_0711f120);
  FUN_03188a78(PTR_DAT_0711f128);
  FUN_03188a78(PTR_DAT_0711f130);
  FUN_03188a78(PTR_DAT_0711f138);
  FUN_03188a78(PTR_DAT_0711f140);
  FUN_03188a78(PTR_DAT_0711f148);
  FUN_03188a78(PTR_DAT_0711f150);
  FUN_03188a78(PTR_DAT_0711f158);
  FUN_03188a78(PTR_DAT_0711f160);
  FUN_03188a78(PTR_DAT_0711f168);
  FUN_03188a78(PTR_DAT_0711f170);
  FUN_03188a78(PTR_DAT_0711f178);
  FUN_03188a78(PTR_DAT_0711f180);
  FUN_03188a78(PTR_DAT_0711f188);
  FUN_03188a78(PTR_DAT_0711f190);
  FUN_03188a78(PTR_DAT_0711f198);
  FUN_03188a78(PTR_DAT_0711f1a0);
  FUN_03188a78(PTR_DAT_0711f1a8);
  FUN_03188a78(PTR_DAT_0711f1b0);
  FUN_03188a78(PTR_DAT_0711f1b8);
  FUN_03188a78(PTR_DAT_0711f1c0);
  FUN_03188a78(PTR_DAT_0711f1c8);
  FUN_03188a78(PTR_DAT_0711f1d0);
  FUN_03188a78(PTR_DAT_0711f1d8);
  FUN_03188a78(PTR_DAT_0711f1e0);
  FUN_03188a78(PTR_DAT_0711f1e8);
  FUN_03188a78(PTR_DAT_0711f1f0);
  *(undefined1 *)(unaff_x21 + 0x873) = 1;
  if (unaff_w20 == 3) {
    puVar2 = (undefined8 *)PTR_DAT_0711f110;
    if (0x53 < unaff_w19) goto FUN_05d471e4;
    puVar1 = &DAT_06d46b00;
  }
  else if (unaff_w20 == 2) {
    puVar2 = (undefined8 *)PTR_DAT_0711f040;
    if (0x45 < unaff_w19) goto FUN_05d471e4;
    puVar1 = &DAT_06d468d0;
  }
  else {
    puVar2 = (undefined8 *)PTR_DAT_0711ef28;
    if ((unaff_w20 & 0xfffffffa) != 0) goto FUN_05d471e4;
    if (unaff_w20 < 2) {
      puVar2 = (undefined8 *)PTR_DAT_0711eff0;
      if (0x17 < unaff_w19) goto FUN_05d471e4;
      puVar1 = &DAT_06d46da0;
    }
    else {
      puVar2 = (undefined8 *)PTR_DAT_0711ee18;
      if (0x19 < unaff_w19) goto FUN_05d471e4;
      puVar1 = &DAT_06d46e60;
    }
  }
  puVar2 = *(undefined8 **)(puVar1 + (ulong)unaff_w19 * 8);
FUN_05d471e4:
  return *puVar2;
}


