/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 03adc110
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint unaff_w22;
  
  Unity_VisualScripting_Multiply<__Il2CppFullySharedGenericType>__get_defaultB
            (param_1,param_2,*(undefined8 *)(in_x9 + 0x78));
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w22;
  if (iVar1 != 0 && (int)unaff_w22 <= *(int *)(unaff_x19 + 0x18)) {
    FUN_04f53d58(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w22 + 1,iVar1,0);
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    if (unaff_w22 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w22 * 0x10;
      *(undefined8 *)(lVar2 + 0x20) = unaff_x21;
      *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


