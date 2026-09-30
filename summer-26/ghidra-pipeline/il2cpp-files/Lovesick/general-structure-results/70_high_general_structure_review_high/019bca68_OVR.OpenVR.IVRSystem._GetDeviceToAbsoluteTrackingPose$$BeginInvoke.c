/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 019bca68
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__BeginInvoke
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(unaff_x21 + 0x848);
  FUN_013752a0(param_2,*param_1);
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = param_2;
  lVar2 = thunk_FUN_00d62348(*puVar3);
  puVar1 = UnityEngine_UIElements_StyleComplexSelector_<>c_TypeInfo;
  if (lVar2 != 0) {
    FUN_017e5570(lVar2,0);
    *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)Method_System_Reflection_RuntimeFieldInfo_SetValueDirect__;
      FUN_017b46ec(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar4;
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = lVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


