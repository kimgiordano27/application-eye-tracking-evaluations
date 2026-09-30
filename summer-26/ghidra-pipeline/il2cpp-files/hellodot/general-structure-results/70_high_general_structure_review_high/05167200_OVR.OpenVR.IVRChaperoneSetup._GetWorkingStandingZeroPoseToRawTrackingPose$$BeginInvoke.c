/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 05167200
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607470);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607478);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607480);
  *(undefined1 *)(unaff_x20 + 3) = 1;
  if (*(char *)(unaff_x19 + 0x28) != '\0') {
    return;
  }
  uVar5 = *(undefined8 *)PTR_DAT_06607478;
  lVar2 = FUN_05ef2cf0();
  if (lVar2 != 0) {
    uVar3 = FUN_05efa158(lVar2,0);
    lVar2 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8918,6);
    if (lVar2 != 0) {
      uVar4 = *(uint *)(lVar2 + 0x18);
      if ((((uVar4 != 0) &&
           (*(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_06607480, uVar4 != 1)) &&
          (*(undefined8 *)(lVar2 + 0x28) = uVar5, 2 < uVar4)) &&
         ((*(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_06607468, uVar4 != 3 &&
          (*(undefined8 *)(lVar2 + 0x38) = uVar3, 4 < uVar4)))) {
        *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_06607470;
        puVar1 = PTR_DAT_06607460;
        if (*(int *)(*(long *)PTR_DAT_06607460 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          uVar4 = *(uint *)(lVar2 + 0x18);
        }
        if (5 < uVar4) {
          *(undefined8 *)(lVar2 + 0x48) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
          uVar5 = FUN_04db97ac(lVar2,0);
          if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
            thunk_FUN_02cd038c(*(long *)PTR_DAT_065c8c48);
          }
          FUN_05eb3754(uVar5);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


