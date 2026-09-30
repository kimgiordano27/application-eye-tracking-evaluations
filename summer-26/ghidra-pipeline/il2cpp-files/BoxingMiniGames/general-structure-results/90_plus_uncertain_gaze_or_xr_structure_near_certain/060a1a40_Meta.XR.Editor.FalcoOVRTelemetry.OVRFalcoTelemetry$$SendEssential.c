/*
FUNCTION_NAME: Meta.XR.Editor.FalcoOVRTelemetry.OVRFalcoTelemetry$$SendEssential
ENTRY_POINT: 060a1a40
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_Editor_FalcoOVRTelemetry_OVRFalcoTelemetry__SendEssential(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  
  FUN_03642964(PTR_DAT_07a23758);
  *(undefined1 *)(unaff_x20 + 0x89e) = 1;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0xf8) + 0x20) == 0) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0609e0dc(&stack0x00000080);
      puVar1 = PTR_DAT_07a23750;
      lVar2 = *(long *)(unaff_x19 + 0xf8);
      while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 1) {
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uVar3 = FUN_0609e0dc(&stack0x00000060);
            FUN_060a18c8(uVar3,unaff_x19 + 0xb0,&stack0x00000080,&stack0x00000060);
            return;
          }
          break;
        }
        FUN_04bccb08(&stack0x00000030,lVar2,*(undefined8 *)puVar1);
        FUN_060a2f58();
        lVar2 = *(long *)(unaff_x19 + 0xf8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


