/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 02907d84
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  undefined *puVar5;
  
  puVar5 = PTR_DAT_06ddaad8;
  if (unaff_x22 == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e01970);
    uVar2 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar3 = thunk_FUN_0159f088(PTR_DAT_06e10578);
    FUN_028f2804(uVar2,uVar3);
  }
  else {
    if ((int)unaff_w20 < 0) {
      thunk_FUN_0159f088(PTR_DAT_06df0bd0);
      uVar2 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar3 = thunk_FUN_0159f088(PTR_DAT_06e2f568);
      puVar5 = PTR_DAT_06e5e700;
    }
    else if ((int)unaff_w21 < 0) {
      thunk_FUN_0159f088(PTR_DAT_06df0bd0);
      uVar2 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar3 = thunk_FUN_0159f088(PTR_DAT_06e5f160);
      puVar5 = PTR_DAT_06df1170;
    }
    else {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if ((int)unaff_w21 <= (int)(uVar1 - unaff_w20)) {
        if ((uVar1 < unaff_w21) || (uVar1 - unaff_w21 < unaff_w20)) {
          FUN_031db0c8(0);
        }
                    /* try { // try from 02907dd0 to 02a07ddf has its CatchHandler @ 02907de0 */
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
                    /* catch() { ... } // from try @ 02907d5c with catch @ 02907de0
                       catch() { ... } // from try @ 02907dd0 with catch @ 02907de0 */
                    /* try { // try from 02907de4 to 02a07de7 has its CatchHandler @ 02907df0 */
                    /* try { // try from 02907de8 to 02a07df3 has its CatchHandler @ 02907c6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02907de4 with catch @ 02907df0
                        */
        FUN_02907b18(unaff_x22 + (int)unaff_w21 + 0x20,unaff_w20,unaff_w19);
        return;
      }
      thunk_FUN_0159f088(PTR_DAT_06df0bd0);
      uVar2 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar3 = thunk_FUN_0159f088(PTR_DAT_06e5f160);
      puVar5 = PTR_DAT_06e2f960;
    }
    uVar4 = thunk_FUN_0159f088(puVar5);
    FUN_028f5dac(uVar2,uVar3,uVar4);
  }
  uVar3 = thunk_FUN_0159f088(PTR_DAT_06d8fa10);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar2,uVar3);
}


