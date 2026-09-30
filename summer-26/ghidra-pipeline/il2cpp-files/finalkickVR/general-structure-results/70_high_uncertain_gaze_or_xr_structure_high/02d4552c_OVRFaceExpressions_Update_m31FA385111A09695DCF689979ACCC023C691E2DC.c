/*
FUNCTION_NAME: OVRFaceExpressions_Update_m31FA385111A09695DCF689979ACCC023C691E2DC
ENTRY_POINT: 02d4552c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_8
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRFaceExpressions_Update_m31FA385111A09695DCF689979ACCC023C691E2DC
               (OVRFaceExpressions_tE0032B40BA8AC928D0E4B889475E0BDD125E40FC *param_1)

{
  byte bVar1;
  
  if ((OVRFaceExpressions_Update_m31FA385111A09695DCF689979ACCC023C691E2DC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRFaceExpressions_Update_m31FA385111A09695DCF689979ACCC023C691E2DC::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_GetFaceState_mA78C1DD614A2F02BFBF088BBA8E72F37759FAD5C
                    (0xffffffff,0xffffffff,param_1 + 0x28,0);
  if ((bVar1 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (byte)param_1[0x38] & 1;
  }
  NullCheck(param_1);
  OVRFaceExpressions_set_ValidExpressions_m4202692C83283D6FFA2D3BE91CE5D92AEF5250DB_inline
            (param_1,bVar1 != 0,(MethodInfo *)0x0);
  bVar1 = OVRFaceExpressions_get_ValidExpressions_m104B2F37F221A654302720F9FE6D8F324411365E_inline
                    (param_1,(MethodInfo *)0x0);
  if ((bVar1 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (byte)param_1[0x39] & 1;
  }
  NullCheck(param_1);
  OVRFaceExpressions_set_EyeFollowingBlendshapesValid_mB0ED1FF38009397BB1CDA8282204D91E46B1E021_inline
            (param_1,bVar1 != 0,(MethodInfo *)0x0);
  return;
}


