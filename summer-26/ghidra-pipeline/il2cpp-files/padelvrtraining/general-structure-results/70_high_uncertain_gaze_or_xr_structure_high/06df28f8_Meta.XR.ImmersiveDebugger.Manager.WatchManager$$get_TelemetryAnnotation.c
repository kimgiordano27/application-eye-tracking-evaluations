/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 06df28f8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__get_TelemetryAnnotation(void)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  uint uVar5;
  ulong unaff_x28;
  ulong unaff_x29;
  ulong uVar6;
  undefined8 uVar7;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  do {
    FUN_03d8f26c();
    do {
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,unaff_x25,unaff_x26,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) {
        uVar5 = (uint)unaff_x28;
        if ((*(uint *)(unaff_x22 + 0x18) <= uVar5) || (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1))
        goto LAB_06df29cc;
        uVar7 = *unaff_x27;
        lVar1 = unaff_x22 + (long)(int)(uVar5 + 1) * 0x10;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x27[1];
        *(undefined8 *)(lVar1 + 0x20) = uVar7;
        thunk_FUN_03d1023c(lVar1 + 0x28,0);
        uVar5 = uVar5 - 1;
        unaff_x28 = (ulong)uVar5;
        if ((int)uVar5 < unaff_w21) goto LAB_06df2974;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_06df29cc;
      }
      else {
LAB_06df2974:
        uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
        do {
          uVar6 = unaff_x29;
          uVar5 = (int)unaff_x28 + 1;
          if ((uint)uVar4 <= uVar5) goto LAB_06df29cc;
          lVar1 = unaff_x22 + (long)(int)uVar5 * 0x10;
          puVar3 = (undefined8 *)(lVar1 + 0x28);
          *puVar3 = unaff_x24;
          *(undefined8 *)(lVar1 + 0x20) = unaff_x23;
          thunk_FUN_03d1023c(puVar3,0);
          if (uVar6 == in_stack_00000000) {
            return;
          }
          uVar4 = *(ulong *)(unaff_x22 + 0x18);
          unaff_x29 = uVar6 + 1;
          if ((uint)uVar4 <= (uint)unaff_x29) goto LAB_06df29cc;
          lVar1 = unaff_x22 + unaff_x29 * 0x10;
          unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
          unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
          unaff_x28 = uVar6;
        } while ((long)uVar6 < in_stack_00000008);
        uVar5 = (uint)uVar6;
        if ((uint)uVar4 <= uVar5) {
LAB_06df29cc:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
      }
      unaff_x28 = (ulong)(int)uVar5;
      lVar1 = unaff_x22 + unaff_x28 * 0x10;
      unaff_x27 = (undefined8 *)(lVar1 + 0x20);
      unaff_x25 = *unaff_x27;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      unaff_x26 = *(undefined8 *)(lVar1 + 0x28);
    } while ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) != 0);
  } while( true );
}


