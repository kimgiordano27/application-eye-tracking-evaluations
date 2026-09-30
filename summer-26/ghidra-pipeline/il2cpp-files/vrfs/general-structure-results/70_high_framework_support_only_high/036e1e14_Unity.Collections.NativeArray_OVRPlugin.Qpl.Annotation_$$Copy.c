/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 036e1e14
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  
  uVar2 = thunk_FUN_01625c74(param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(long *)(param_1 + 0x28) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_01656ef8((long *)(param_1 + 0x20),param_2);
  cVar1 = *(char *)(param_3 + 0x52);
  *(long *)(param_1 + 0x40) = param_1;
  uVar3 = FUN_0160ee14(param_3);
  if ((uVar3 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (param_2 == 0) {
        uVar2 = thunk_FUN_015f058c(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar2,0);
      }
LAB_036e1ec0:
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      goto LAB_036e1f14;
    }
    if (*(char *)(param_1 + 0x70) == '\0') {
      pcVar5 = FUN_012a3538;
    }
    else {
      uVar3 = thunk_FUN_016258a8(param_3);
      uVar4 = FUN_0160f1c8(param_3);
      if ((uVar3 & 1) == 0) {
        if ((uVar4 & 1) == 0) {
          pcVar5 = FUN_012a35e4;
        }
        else {
          pcVar5 = FUN_012a3614;
        }
      }
      else if ((uVar4 & 1) == 0) {
        pcVar5 = FUN_012a36a0;
      }
      else {
        pcVar5 = FUN_012a36f8;
      }
    }
  }
  else if ((*(byte *)(param_3 + 0x53) >> 4 & 1) == 0) {
    if (cVar1 != '\x02') goto LAB_036e1ec0;
    pcVar5 = FUN_012a355c;
  }
  else if (cVar1 == '\x02') {
    pcVar5 = FUN_012a3570;
  }
  else {
    pcVar5 = FUN_012a35a8;
  }
  *(code **)(param_1 + 0x18) = pcVar5;
LAB_036e1f14:
  *(code **)(param_1 + 0x38) = FUN_012a34e0;
  return;
}


