/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 04f87334
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy
               (long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  int *piVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_stack_00000008;
  
  piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar4 + 6) * 0x10 + 0x138);
      goto LAB_04f87374;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f87374:
  (*(code *)*puVar2)(&stack0x00000004);
  fVar1 = in_stack_00000008;
  lVar3 = *(long *)(unaff_x19 + 0x48);
  if (lVar3 != 0) {
    fVar7 = *(float *)(unaff_x19 + 0x40);
    fVar8 = *(float *)(unaff_x19 + 0x80);
    fVar5 = (float)(**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    fVar7 = fVar7 * fVar5;
    fVar5 = 1.0;
    if (fVar7 <= 1.0) {
      fVar5 = fVar7;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar5;
    }
    *(float *)(unaff_x19 + 0x80) = fVar8 + (fVar1 - fVar8) * fVar6;
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      thunk_FUN_05c229f4(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x5c),0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_05c247c4(*(undefined4 *)(unaff_x19 + 0x68),*(long *)(unaff_x19 + 0x30),
                     *(undefined4 *)(unaff_x19 + 0x54),0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          thunk_FUN_05c229f4(*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                             *(undefined4 *)(unaff_x19 + 0x60),0);
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            FUN_05c247c4(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                         *(undefined4 *)(unaff_x19 + 0x50),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


