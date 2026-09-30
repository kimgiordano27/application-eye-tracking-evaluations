/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 06df121c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar6;
  uint unaff_w26;
  undefined8 unaff_x27;
  undefined8 uVar7;
  undefined8 unaff_x28;
  undefined8 uVar8;
  uint uVar9;
  undefined8 unaff_x29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    FUN_03d8f26c();
    do {
      uVar3 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),unaff_x24,unaff_x28,unaff_x29,unaff_x27,
                         *(undefined8 *)(unaff_x23 + 0x28));
      unaff_w26 = unaff_w26 | uVar3 >> 0x1f;
      uVar3 = unaff_w21;
      do {
        unaff_w21 = unaff_w26;
        uVar9 = unaff_w20 + unaff_w21;
        if (*(uint *)(unaff_x19 + 0x18) <= uVar9) goto LAB_06df1328;
        lVar6 = (long)(int)uVar9;
        lVar1 = unaff_x19 + lVar6 * 0x10;
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        if (unaff_x23 == 0) goto LAB_06df132c;
        uVar8 = *(undefined8 *)(lVar1 + 0x28);
        if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        iVar4 = (**(code **)(unaff_x23 + 0x18))
                          (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,
                           uVar7,uVar8,*(undefined8 *)(unaff_x23 + 0x28));
        if (-1 < iVar4) {
          uVar9 = unaff_w20 + uVar3;
          lVar6 = (long)(int)uVar9;
LAB_06df12e4:
          if (uVar9 < *(uint *)(unaff_x19 + 0x18)) {
            lVar1 = unaff_x19 + lVar6 * 0x10;
            puVar5 = (undefined8 *)(lVar1 + 0x20);
            *puVar5 = in_stack_00000008;
            *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
            thunk_FUN_03d1023c(puVar5,0);
            return;
          }
          goto LAB_06df1328;
        }
        if ((*(uint *)(unaff_x19 + 0x18) <= uVar9) ||
           (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar3)) goto LAB_06df1328;
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        lVar2 = unaff_x19 + (long)(int)(unaff_w20 + uVar3) * 0x10;
        puVar5 = (undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *puVar5 = uVar7;
        thunk_FUN_03d1023c(puVar5,0);
        if (iStack0000000000000004 < (int)unaff_w21) goto LAB_06df12e4;
        unaff_w26 = unaff_w21 * 2;
        uVar3 = unaff_w21;
      } while (in_stack_00000018._4_4_ <= (int)unaff_w26);
      uVar3 = unaff_w26 + iStack0000000000000000;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar3 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar3)) {
LAB_06df1328:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      if (unaff_x23 == 0) {
LAB_06df132c:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar1 = unaff_x19 + (long)(int)(uVar3 - 1) * 0x10;
      lVar6 = unaff_x19 + (long)(int)uVar3 * 0x10;
      unaff_x24 = *(undefined8 *)(lVar1 + 0x20);
      unaff_x28 = *(undefined8 *)(lVar1 + 0x28);
      unaff_x29 = *(undefined8 *)(lVar6 + 0x20);
      unaff_x27 = *(undefined8 *)(lVar6 + 0x28);
    } while ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) != 0);
  } while( true );
}


