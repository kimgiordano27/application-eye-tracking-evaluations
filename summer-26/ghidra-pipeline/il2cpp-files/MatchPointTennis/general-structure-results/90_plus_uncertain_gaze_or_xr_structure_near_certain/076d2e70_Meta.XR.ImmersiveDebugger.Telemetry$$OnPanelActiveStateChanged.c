/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$OnPanelActiveStateChanged
ENTRY_POINT: 076d2e70
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__OnPanelActiveStateChanged(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar7;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  *unaff_x21 = unaff_x20;
  thunk_FUN_044bb4b4();
  lVar7 = *unaff_x21;
  lVar3 = FUN_04447c90(*unaff_x22,1);
  puVar2 = PTR_DAT_09f2e628;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(undefined8 *)(lVar3 + 0x20) = unaff_x19;
    thunk_FUN_044bb4b4();
    lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_07a80df4(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(long *)(lVar4 + 0x18) = lVar3;
    thunk_FUN_044bb4b4((long *)(lVar4 + 0x18),lVar3);
    if (lVar7 != 0) {
      lVar3 = *(long *)(lVar7 + 0x10);
      lVar6 = *(long *)PTR_DAT_09f2e610;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_044bb4b4(plVar5,lVar4);
          return;
        }
        FUN_05bade44(lVar7,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


