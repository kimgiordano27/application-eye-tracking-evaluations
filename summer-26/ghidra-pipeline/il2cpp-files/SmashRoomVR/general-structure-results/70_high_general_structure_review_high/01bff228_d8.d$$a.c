/*
FUNCTION_NAME: d8.d$$a
ENTRY_POINT: 01bff228
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void d8_d__a(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x22;
  undefined8 uVar8;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
                    /* catch() { ... } // from try @ 01bff284 with catch @ 01bff23c */
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_1__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_2__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_3__
                      );
                    /* try { // try from 01bff278 to 01cff283 has its CatchHandler @ 01bff2a0 */
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_4__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_5__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_6__
                      );
    *(undefined1 *)(unaff_x23 + 0x36b) = 1;
  }
  puVar1 = 
  Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_2__;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  puVar3 = 
  Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_6__;
  puVar2 = 
  Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_5__;
  uVar6 = FUN_02fbaa54();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  lVar7 = FUN_0339b050(uVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar7 != 0) {
    uVar6 = FUN_02eea8e4(lVar7,0);
    iVar5 = FUN_0392ec44(unaff_x19 + 0x30,0);
    if (iVar5 == unaff_w20) {
      uVar6 = FUN_02edd6e8(*(undefined8 *)
                            Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_4__
                           ,uVar6,0);
    }
    puVar4 = 
    Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_3__;
    puVar3 = 
    Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_1__;
    puVar2 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar7 = FUN_01f25754(uVar8,*(undefined8 *)puVar3);
    in_stack_00000008._4_4_ = unaff_w20 + 1;
    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
    uVar6 = FUN_02ee7120(*(undefined8 *)puVar4,uVar8,uVar6,0);
    if (lVar7 != 0) {
      FUN_036e3460(lVar7,uVar6,1,0);
      lVar7 = FUN_036dfed8(lVar7,0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (uVar6 = FUN_0391c27c(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0)) {
        FUN_03929660(lVar7,uVar6,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


