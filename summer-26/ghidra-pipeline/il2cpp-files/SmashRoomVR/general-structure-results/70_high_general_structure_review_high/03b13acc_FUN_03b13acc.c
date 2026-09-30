/*
FUNCTION_NAME: FUN_03b13acc
ENTRY_POINT: 03b13acc
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


void FUN_03b13acc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffdac0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db6ae0);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_5532);
    DAT_03ffdac0 = 1;
  }
  plVar4 = (long *)(param_1 + 0x48);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar5,0);
  if ((uVar2 & 1) != 0) {
    if (*plVar4 == 0) goto LAB_03b13c60;
    lVar5 = *(long *)(*plVar4 + 0x118);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                              );
    FUN_02200540(uVar3,param_1,*(undefined8 *)PTR_DAT_03db6ae0,0);
    if (lVar5 == 0) goto LAB_03b13c60;
    FUN_02205390(lVar5,uVar3,*(undefined8 *)StringLiteral_5532);
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  thunk_FUN_01b4f09c(plVar4,param_2);
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar5 = *plVar4;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(lVar5,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar4 != 0) {
        lVar5 = *(long *)(*plVar4 + 0x118);
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                                  );
        FUN_02200540(uVar3,param_1,*(undefined8 *)PTR_DAT_03db6ae0,0);
        if (lVar5 != 0) {
          FUN_02205354(lVar5,uVar3,
                       *(undefined8 *)
                        Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
          goto LAB_03b13c48;
        }
      }
LAB_03b13c60:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
LAB_03b13c48:
  FUN_03b139fc(param_1);
  return;
}


