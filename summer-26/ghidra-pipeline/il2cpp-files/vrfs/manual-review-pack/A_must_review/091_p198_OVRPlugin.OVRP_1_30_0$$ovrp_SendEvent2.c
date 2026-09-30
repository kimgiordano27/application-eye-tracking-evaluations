/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 0290830c
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


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  int unaff_w20;
  undefined4 unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  
  iVar1 = FUN_02907ef0(unaff_w19,unaff_w20 == 1);
  if (unaff_w26 - iVar1 < (int)unaff_w22) {
    thunk_FUN_0159f088(PTR_DAT_06df0bd0);
    uVar2 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar3 = thunk_FUN_0159f088(PTR_DAT_06dad9e8);
    uVar4 = thunk_FUN_0159f088(PTR_DAT_06e36210);
    FUN_028f5dac(uVar2,uVar3,uVar4);
    uVar3 = thunk_FUN_0159f088(PTR_DAT_06e231d8);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar2,uVar3);
  }
  if ((unaff_w22 < *(uint *)(unaff_x23 + 0x18)) && (*(int *)(unaff_x24 + 0x18) != 0)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_02907fa8(unaff_x23 + (long)(int)unaff_w22 * 2 + 0x20,unaff_x24 + 0x20,unaff_w21,unaff_w19,
                 unaff_w20 == 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


