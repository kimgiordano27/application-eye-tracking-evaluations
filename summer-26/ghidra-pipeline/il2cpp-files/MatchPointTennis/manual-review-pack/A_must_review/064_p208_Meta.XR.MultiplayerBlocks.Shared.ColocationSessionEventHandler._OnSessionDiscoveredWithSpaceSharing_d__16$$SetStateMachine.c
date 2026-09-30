/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpaceSharing>d__16$$SetStateMachine
ENTRY_POINT: 0775e1d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpaceSharing>d__16__SetStateMachine
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool in_ZR;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x25;
  ulong uVar13;
  
  if (!in_ZR) {
    puVar9 = (undefined8 *)PTR_DAT_09f32b08;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      puVar9 = (undefined8 *)PTR_DAT_09f32b08;
    }
LAB_0775e36c:
    FUN_094c6b48(*puVar9,0);
    return 0;
  }
  lVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32af8);
  FUN_07441bc0(lVar5,*(undefined8 *)PTR_DAT_09f32af0);
  puVar4 = PTR_DAT_09f32b00;
  puVar3 = PTR_DAT_09f32ae8;
  puVar2 = PTR_DAT_09f1e538;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (lVar8 != 0) {
    uVar13 = 0;
    do {
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar13) {
        return lVar5;
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar13) {
LAB_0775e3b8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar10 = *(long *)(unaff_x19 + 0x20);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0775e3b8;
      uVar12 = *(undefined8 *)(lVar8 + uVar13 * 8 + 0x20);
      uVar11 = *(undefined8 *)(lVar10 + uVar13 * 8 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar6 = FUN_0952c404(uVar12,0,0);
      if ((uVar6 & 1) != 0) {
LAB_0775e39c:
        puVar9 = (undefined8 *)PTR_DAT_09f32b10;
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          puVar9 = (undefined8 *)PTR_DAT_09f32b10;
        }
        goto LAB_0775e36c;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar6 = FUN_0952c404(uVar11,0,0);
      if ((uVar6 & 1) != 0) goto LAB_0775e39c;
      lVar8 = *(long *)(unaff_x19 + 0x18);
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_0775e3b8;
      uVar1 = *(undefined4 *)(lVar8 + uVar13 * 4 + 0x20);
      uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f31288);
      FUN_07725bf0(uVar7,uVar12,uVar1,0);
      lVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
      FUN_07725d3c(lVar8,0);
      if (lVar8 == 0) break;
      *(undefined8 *)(lVar8 + 0x10) = uVar11;
      thunk_FUN_044bb4b4((undefined8 *)(lVar8 + 0x10),uVar11);
      lVar10 = *(long *)(unaff_x19 + 0x28);
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_0775e3b8;
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar10 + uVar13 * 4 + 0x20);
      if (lVar5 == 0) break;
      FUN_0744298c(lVar5,uVar7,lVar8,*(undefined8 *)puVar3);
      lVar8 = *(long *)(unaff_x19 + 0x10);
      uVar13 = uVar13 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


