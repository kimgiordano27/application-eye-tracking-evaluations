/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 06e2bd48
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  long *plVar8;
  long *unaff_x26;
  
  puVar4 = (undefined8 *)FUN_03cf1348();
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    unaff_x20 = *(undefined8 *)PTR_DAT_08e939e8;
  }
  uVar5 = FUN_06f74e14(unaff_x20,0);
  puVar1 = PTR_DAT_08e86a58;
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar8 = *(long **)(lVar6 + 0x50);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e86a58) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_06e2be44;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e86a58,4);
LAB_06e2be44:
    uVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    lVar6 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
          goto LAB_06e2bea4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)puVar1,0x14);
LAB_06e2bea4:
    (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
  }
  puVar1 = PTR_DAT_08e78268;
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,unaff_x20,*(undefined8 *)puVar1);
  return;
}


