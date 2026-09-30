/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 05be8280
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((*(byte *)(unaff_x20 + 0xd37) & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116be0);
    FUN_03188a78(PTR_DAT_07116578);
    *(undefined1 *)(unaff_x20 + 0xd37) = 1;
  }
  FUN_05066054();
  puVar3 = PTR_DAT_07116578;
  puVar2 = PTR_DAT_070ce558;
  lVar7 = *(long *)(unaff_x19 + 0x88);
  if (lVar7 != 0) {
    uVar6 = 0;
    do {
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar6) {
        return;
      }
      uVar4 = FUN_03188b1c(*(undefined8 *)puVar3,*(undefined4 *)(unaff_x19 + 0x80));
      if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_05be83a4:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      iVar1 = *(int *)(unaff_x19 + 0x80);
      *(undefined8 *)(lVar7 + uVar6 * 8 + 0x20) = uVar4;
      if (0 < iVar1) {
        uVar8 = 0;
        do {
          lVar7 = *(long *)(unaff_x19 + 0x88);
          if (lVar7 == 0) goto LAB_05be8388;
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_05be83a4;
          lVar7 = *(long *)(lVar7 + uVar6 * 8 + 0x20);
          if (DAT_07546bbe == '\0') {
            FUN_03188a78(puVar2);
            DAT_07546bbe = '\x01';
          }
          if (lVar7 == 0) goto LAB_05be8388;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_05be83a4;
          puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          uVar4 = *puVar5;
          lVar7 = lVar7 + uVar8 * 0x10;
          uVar8 = uVar8 + 1;
          *(undefined8 *)(lVar7 + 0x28) = puVar5[1];
          *(undefined8 *)(lVar7 + 0x20) = uVar4;
        } while ((long)uVar8 < (long)*(int *)(unaff_x19 + 0x80));
      }
      lVar7 = *(long *)(unaff_x19 + 0x88);
      uVar6 = uVar6 + 1;
    } while (lVar7 != 0);
  }
LAB_05be8388:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


