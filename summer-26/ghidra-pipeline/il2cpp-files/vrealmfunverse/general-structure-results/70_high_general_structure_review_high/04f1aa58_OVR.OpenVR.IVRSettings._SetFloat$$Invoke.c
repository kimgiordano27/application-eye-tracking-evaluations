/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._SetFloat$$Invoke
ENTRY_POINT: 04f1aa58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long OVR_OpenVR_IVRSettings__SetFloat__Invoke(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02b3c81c(
              UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<XROrigin>_TypeInfo
              );
  FUN_02b3c81c(
              UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<XRInputModalityManager>_TypeInfo
              );
  *(undefined1 *)(unaff_x19 + 0x86d) = 1;
  lVar2 = thunk_FUN_02b79644(*unaff_x21);
  FUN_04f1a668();
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<XRInputModalityManager>_TypeInfo
  ;
  if (lVar2 != 0) {
    lVar3 = *(long *)
             UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<XRInputModalityManager>_TypeInfo
    ;
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
    *(undefined4 *)(lVar2 + 0x14) = 2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if (*(long *)(lVar3 + 0x30) != 0) {
        *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x10);
        thunk_FUN_02bb0e9c();
        return lVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


