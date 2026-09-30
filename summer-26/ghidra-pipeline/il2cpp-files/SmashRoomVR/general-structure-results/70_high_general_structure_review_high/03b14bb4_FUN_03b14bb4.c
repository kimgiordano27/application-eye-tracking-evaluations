/*
FUNCTION_NAME: FUN_03b14bb4
ENTRY_POINT: 03b14bb4
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


void FUN_03b14bb4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_03ffdac6 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d9cc18);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db6ae0);
    thunk_FUN_01ad9084(PTR_DAT_03db6ae8);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
    DAT_03ffdac6 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  FUN_03b22b10(param_1,0);
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_03b14d6c;
      lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x118);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                                );
      FUN_02200540(uVar3,param_1,*(undefined8 *)PTR_DAT_03db6ae0,0);
      if (lVar4 == 0) goto LAB_03b14d6c;
      FUN_02205354(lVar4,uVar3,
                   *(undefined8 *)
                    Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
    }
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x118);
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                                  );
        FUN_02200540(uVar3,param_1,*(undefined8 *)PTR_DAT_03db6ae8,0);
        if (lVar4 != 0) {
          FUN_02205354(lVar4,uVar3,
                       *(undefined8 *)
                        Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
          goto LAB_03b14d34;
        }
      }
LAB_03b14d6c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
LAB_03b14d34:
  if (*(int *)(*(long *)PTR_DAT_03d9cc18 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_039a303c(param_1,0);
  FUN_03b13e34(param_1);
  return;
}


