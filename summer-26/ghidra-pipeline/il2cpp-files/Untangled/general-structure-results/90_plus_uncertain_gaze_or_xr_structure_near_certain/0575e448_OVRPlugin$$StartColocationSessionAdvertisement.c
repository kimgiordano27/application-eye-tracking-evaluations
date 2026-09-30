/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 0575e448
PROGRAM: Untangled-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__StartColocationSessionAdvertisement(void)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xa8f) = 1;
  if (unaff_x19 != (long *)0x0) {
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)PTR_DAT_06d02350) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar5);
      }
      if (0 < (int)plVar5[2]) {
        sVar2 = FUN_05460528(plVar5,0,0);
        if (sVar2 == 0x2f) {
          iVar3 = FUN_0546a5d0(plVar5,0x2f,0);
          puVar1 = PTR_DAT_06d02800;
          if (0 < iVar3) {
            uVar6 = FUN_05466d54(plVar5,1,iVar3 + -1,0);
            uVar7 = FUN_054693ec(plVar5,iVar3 + 1,0);
            uVar4 = FUN_056eb914(uVar7,0);
            uVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
            FUN_05f80ed8(uVar7,uVar6,uVar4,0);
            return uVar7;
          }
        }
      }
      thunk_FUN_02f239f0(PTR_DAT_06d59968);
      uVar6 = FUN_05692378();
      uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d59970);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,uVar7);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


