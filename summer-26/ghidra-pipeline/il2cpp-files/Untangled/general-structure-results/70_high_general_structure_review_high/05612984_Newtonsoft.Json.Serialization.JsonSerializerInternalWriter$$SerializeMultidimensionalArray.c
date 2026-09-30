/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 05612984
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  
  if (unaff_w23 == 0) {
    plVar1 = (long *)thunk_FUN_02ef1808(*unaff_x22);
    FUN_05612a68(plVar1,unaff_w21);
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar2 = *unaff_x22;
    }
    plVar3 = (long *)FUN_02f07e88(lVar2);
    *plVar3 = (long)plVar1;
    uVar4 = FUN_02f07e88(*unaff_x22);
    thunk_FUN_02f411dc(uVar4,plVar1);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
  }
  return;
}


