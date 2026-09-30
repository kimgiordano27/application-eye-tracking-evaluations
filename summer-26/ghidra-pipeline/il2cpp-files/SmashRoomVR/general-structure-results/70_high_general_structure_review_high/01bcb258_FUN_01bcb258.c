/*
FUNCTION_NAME: FUN_01bcb258
ENTRY_POINT: 01bcb258
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long FUN_01bcb258(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar1 = Method_PortalGunScript_<ResetTelportaion>d__32_System_Collections_IEnumerator_Reset__;
  if ((DAT_03fed1d6 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_PoseDetection_PoseFromBody_<>c_<_ctor>b__24_0__
                      );
                    /* try { // try from 01bcb2b0 to 01ccb2bb has its CatchHandler @ 01bcb2d4 */
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
                    /* try { // try from 01bcb2bc to 01ccb2ef has its CatchHandler @ 01bcb090 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__0__
                      );
                    /* catch() { ... } // from try @ 01bcb2b0 with catch @ 01bcb2d4 */
    thunk_FUN_01ad9084(
                      Method_PortalGunScript_<ResetTelportaion>d__32_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
    DAT_03fed1d6 = 1;
  }
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  FUN_03081994(lVar3,0);
  puVar2 = Method_UnityEngine_UIElements_Experimental_PointerOutLinkTagEvent_<>c_<_cctor>b__0_0__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_5;
    thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x10),param_5);
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar4 = FUN_01f25754(uVar6,*(undefined8 *)puVar2);
    if ((lVar4 != 0) &&
       (lVar5 = FUN_01e8ac5c(lVar4,*(undefined8 *)
                                    Method_Oculus_Interaction_Body_PoseDetection_PoseFromBody_<>c_<_ctor>b__24_0__
                            ),
       puVar2 = Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__,
       puVar1 = Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__0__,
       lVar5 != 0)) {
      FUN_03b194d8(param_1,lVar5,0);
      FUN_03b19570(param_2,lVar5,0);
      lVar7 = *(long *)(lVar5 + 0x128);
      uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
      FUN_02200540(uVar6,lVar3,*(undefined8 *)puVar1,0);
      if (lVar7 != 0) {
        FUN_02205354(lVar7,uVar6,
                     *(undefined8 *)
                      Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__)
        ;
        FUN_03b19608(lVar5,param_6 & 1,0);
        FUN_01bcab48(param_3,lVar4,param_7);
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


