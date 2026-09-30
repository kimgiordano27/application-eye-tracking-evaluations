/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 019bca54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(void)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  lVar2 = thunk_FUN_00d62348();
  puVar1 = Method_Unity_XR_CoreUtils_Collections_HashSetList<IXRHoverInteractor>_AsList__;
  if (lVar2 != 0) {
    FUN_013752a0(lVar2,*(undefined8 *)StringLiteral_1706);
    *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = UnityEngine_UIElements_StyleComplexSelector_<>c_TypeInfo;
    if (lVar2 != 0) {
      FUN_017e5570(lVar2,0);
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)Method_System_Reflection_RuntimeFieldInfo_SetValueDirect__;
        FUN_017b46ec(lVar2,0);
        *(undefined8 *)(lVar2 + 0x10) = uVar3;
        *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = lVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


