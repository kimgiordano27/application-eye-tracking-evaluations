/*
FUNCTION_NAME: FUN_05ac73ac
ENTRY_POINT: 05ac73ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ac73ac(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__;
  if ((DAT_066d438d & 1) == 0) {
    FUN_02b3c81c(Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__);
    FUN_02b3c81c(PTR_DAT_0631ee88);
    FUN_02b3c81c(
                Method_System_Linq_Enumerable_ToDictionary<KeyValuePair<string,_string>,_string,_string>__
                );
    FUN_02b3c81c(
                Method_System_Linq_Enumerable_ToDictionary<JsonProperty,_JsonProperty,_JsonSerializerInternalReader_PropertyPresence>__
                );
    FUN_02b3c81c(Method_System_Linq_Enumerable_ToArray<InputControlScheme_DeviceRequirement>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__);
    DAT_066d438d = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                Method_System_Linq_Enumerable_ToDictionary<NamedValue,_string,_string>__
                              );
    FUN_05ac71fc(uVar3,0,*(undefined8 *)
                          Method_System_Linq_Enumerable_ToDictionary<KeyValuePair<string,_string>,_string,_string>__
                );
    if (*(int *)(*(long *)PTR_DAT_0631ee88 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = FUN_0316a0a4(uVar3,*(undefined8 *)
                                Method_System_Linq_Enumerable_ToArray<OpenXRSettings_ColorSubmissionModeGroup>__
                        );
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
  return;
}


