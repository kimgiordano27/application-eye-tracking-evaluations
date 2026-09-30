/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 04f87138
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000000;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_04f87180;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04f87180:
  (*(code *)*puVar3)((long)&stack0x00000000 + 4);
  iVar1 = *(int *)(unaff_x19 + 0x38);
  bVar2 = (in_stack_00000000._4_4_ & 0x20f) == 0;
  if ((iVar1 != 0) && ((unaff_s9 < DAT_01032234 || (iVar1 != 1)))) {
    bVar2 = (bool)((in_stack_00000000._4_4_ & 0x20f) == 0 &
                  ((iVar1 != 2 || (unaff_s8 < DAT_01032234 || unaff_s9 < DAT_01032234)) ^ 0xffU));
  }
  *(bool *)(unaff_x19 + 100) = bVar2;
  *(undefined4 *)(unaff_x19 + 0x78) = 0;
  *(float *)(unaff_x19 + 0x74) = 1.0 - unaff_s8;
  return;
}


