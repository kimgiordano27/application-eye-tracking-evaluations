/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$get_TelemetryAnnotation
ENTRY_POINT: 06462b10
PROGRAM: DirtBikerVR-libil2cpp.so
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
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_000000b8;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x24 + 0x123) = 1;
  lVar1 = *(long *)(unaff_x21 + 0x10);
  uStack000000000000000c = 0;
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if ((lVar1 != 0) &&
     (uStack000000000000000c = *(undefined4 *)(lVar1 + 0x18), unaff_x20 != (long *)0x0)) {
    FUN_07c3d5c0((long)(int)unaff_x20[1] + *unaff_x20,&stack0x0000000c,4,0);
    lVar1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 4;
    if (lVar1 != 0) {
      iVar2 = 0;
      do {
        if (*(int *)(lVar1 + 0x18) <= iVar2) {
          if (*(long *)(unaff_x23 + 0x28) == in_stack_000000b8) {
            return;
          }
          goto LAB_06462c1c;
        }
        FUN_04dd1e50(&stack0x00000010,lVar1,iVar2,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
        memcpy(&stack0x00000060,&stack0x00000010,0x50);
        FUN_07c3d5c0((long)(int)unaff_x20[1] + *unaff_x20,&stack0x00000060,0x50,0);
        lVar1 = *(long *)(unaff_x21 + 0x10);
        iVar2 = iVar2 + 1;
        *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 0x50;
      } while (lVar1 != 0);
    }
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_000000b8) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_06462c1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


