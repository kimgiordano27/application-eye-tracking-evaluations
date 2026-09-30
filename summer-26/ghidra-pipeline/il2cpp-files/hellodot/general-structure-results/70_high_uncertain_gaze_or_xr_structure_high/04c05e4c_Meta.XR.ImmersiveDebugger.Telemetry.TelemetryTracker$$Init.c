/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 04c05e4c
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_04f7383c();
  puVar5 = PTR_DAT_065e4f68;
  puVar7 = PTR_DAT_065e3f60;
  puVar2 = PTR_DAT_065de380;
  puVar1 = PTR_DAT_065dcac8;
  if (unaff_x20 != 0) {
    *(long *)(unaff_x20 + 0x10) = unaff_x19;
    *(undefined8 *)(unaff_x20 + 0x20) = unaff_x21;
    puVar4 = PTR_DAT_065e3f38;
    puVar3 = PTR_DAT_065e3a48;
    FUN_04bf44f0(*(undefined8 *)(unaff_x19 + 0x90),*(undefined8 *)puVar5,0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    puVar6 = PTR_DAT_065e3f50;
    puVar5 = PTR_DAT_065e3f40;
    puVar1 = PTR_DAT_065c89a0;
    FUN_0354cb00(uVar11,*(undefined8 *)puVar2,*(undefined8 *)puVar7);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
    FUN_04a4fd88();
    lVar8 = *(long *)puVar3;
    uVar10 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
                    /* try { // try from 04c05f14 to 04d06017 has its CatchHandler @ 04c05f14
                       catch() { ... } // from try @ 04c05f14 with catch @ 04c05f14
                       catch() { ... } // from try @ 04c060dc with catch @ 04c05f14
                       catch() { ... } // from try @ 04c06194 with catch @ 04c05f14
                       catch() { ... } // from try @ 04c06230 with catch @ 04c05f14 */
      lVar8 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_065e3f48;
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    uVar9 = thunk_FUN_02cea894(*(undefined8 *)puVar6);
    FUN_04bfb770(uVar9,uVar11,uVar10,uVar12);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar9;
    uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar5);
    FUN_04bfb7f8(uVar11,uVar9);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_03532dc0(uVar11,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


