/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.JavaScriptUtils$$ShouldEscapeJavaScriptString
ENTRY_POINT: 0175adbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Newtonsoft_Json_Utilities_JavaScriptUtils__ShouldEscapeJavaScriptString
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  lVar3 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40));
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__;
  if (lVar3 != 0) {
    uVar5 = *(uint *)(unaff_x19 + 3);
    if (2 < uVar5) {
      unaff_x19[6] = *unaff_x21;
      lVar3 = *(long *)puVar2;
      if (lVar3 != 0) {
        lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar3 == 0) goto LAB_0175aecc;
        uVar5 = *(uint *)(unaff_x19 + 3);
      }
      puVar1 = Method_UnityEngine_Mesh_SetListForChannel<Vector3>__;
      if (3 < uVar5) {
        unaff_x19[7] = *(long *)puVar2;
        lVar3 = *(long *)puVar1;
        if (lVar3 != 0) {
          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar3 == 0) goto LAB_0175aecc;
          uVar5 = *(uint *)(unaff_x19 + 3);
        }
        puVar2 = 
        Field_<PrivateImplementationDetails>_8A0E648F758E0FC7AFC990F725E75075D192CF76D73C000CFCBAA51C386E06F2
        ;
        if (4 < uVar5) {
          unaff_x19[8] = *(long *)puVar1;
          lVar3 = *(long *)puVar2;
          if (lVar3 != 0) {
            lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar3 == 0) goto LAB_0175aecc;
            uVar5 = *(uint *)(unaff_x19 + 3);
          }
          puVar1 = UnityEngine_UI_ScrollRect_TypeInfo;
          if (5 < uVar5) {
            unaff_x19[9] = *(long *)puVar2;
            lVar3 = *(long *)puVar1;
            if (lVar3 != 0) {
              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar3 == 0) goto LAB_0175aecc;
              uVar5 = *(uint *)(unaff_x19 + 3);
            }
            if (6 < uVar5) {
              unaff_x19[10] = *(long *)puVar1;
              *(long **)(*(long *)(*unaff_x20 + 0xb8) + 0x28) = unaff_x19;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0175aecc:
  uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar4,0);
}


