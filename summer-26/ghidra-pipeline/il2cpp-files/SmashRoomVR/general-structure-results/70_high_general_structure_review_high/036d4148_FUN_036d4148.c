/*
FUNCTION_NAME: FUN_036d4148
ENTRY_POINT: 036d4148
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036d4148(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff75b5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9d4e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d4e8);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_5532);
    DAT_03ff75b5 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar1 = (long *)(param_1 + 0x150);
  uVar3 = FUN_0391f968(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if (*plVar1 == 0) goto LAB_036d42f8;
    lVar5 = *(long *)(*plVar1 + 0x118);
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                              );
    FUN_02200540(uVar4,param_1,*(undefined8 *)PTR_DAT_03d9d4e8,0);
    if (lVar5 == 0) goto LAB_036d42f8;
    FUN_02205390(lVar5,uVar4,*(undefined8 *)StringLiteral_5532);
  }
  FUN_01f3f854(plVar1,param_2,*(undefined8 *)PTR_DAT_03d9d4e0);
  lVar5 = *plVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar5,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*plVar1 != 0) {
    lVar5 = *(long *)(*plVar1 + 0x118);
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                              );
    FUN_02200540(uVar4,param_1,*(undefined8 *)PTR_DAT_03d9d4e8,0);
    if (lVar5 != 0) {
      FUN_02205354(lVar5,uVar4,
                   *(undefined8 *)
                    Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
      return;
    }
  }
LAB_036d42f8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


