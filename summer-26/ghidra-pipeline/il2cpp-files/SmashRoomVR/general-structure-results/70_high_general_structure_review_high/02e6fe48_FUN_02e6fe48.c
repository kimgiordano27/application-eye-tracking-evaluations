/*
FUNCTION_NAME: FUN_02e6fe48
ENTRY_POINT: 02e6fe48
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02e6fe48(long param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0452 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_5694);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                      );
    thunk_FUN_01ad9084(StringLiteral_5695);
    thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_5532);
    thunk_FUN_01ad9084(StringLiteral_5696);
    thunk_FUN_01ad9084(StringLiteral_5697);
    thunk_FUN_01ad9084(StringLiteral_5698);
    thunk_FUN_01ad9084(StringLiteral_5699);
    thunk_FUN_01ad9084(StringLiteral_5700);
    DAT_03ff0452 = 1;
  }
  plVar5 = (long *)(param_1 + 0xb8);
  lVar8 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03922f24(lVar8,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped___ctor();
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    thunk_FUN_01b4f09c(plVar5,uVar3);
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  if (((*plVar5 == 0) || (lVar8 = *(long *)(*plVar5 + 0x30), lVar8 == 0)) ||
     (*(byte *)(param_1 + 0xc0) == (param_2 & 1))) {
    return;
  }
  *(byte *)(param_1 + 0xc0) = param_2 & 1;
  lVar9 = *(long *)(lVar8 + 0x18);
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                            );
  FUN_02200540(uVar3,param_1,*(undefined8 *)StringLiteral_5699,0);
  if (lVar9 != 0) {
    if ((param_2 & 1) == 0) {
      FUN_02205390(lVar9,uVar3,*(undefined8 *)StringLiteral_5532);
      lVar9 = *(long *)(lVar8 + 0x20);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5695);
      FUN_0220108c(uVar3,param_1,*(undefined8 *)StringLiteral_5698,0);
      if (lVar9 == 0) goto LAB_02e7013c;
      FUN_0222585c(lVar9,uVar3,*(undefined8 *)StringLiteral_5697);
      plVar5 = (long *)StringLiteral_5694;
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5694);
      FUN_02e701ec(uVar3,param_1,*(undefined8 *)StringLiteral_5700);
      plVar4 = (long *)FUN_03084da8(uVar7,uVar3,0);
    }
    else {
      FUN_02205354(lVar9,uVar3,
                   *(undefined8 *)
                    Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
      lVar9 = *(long *)(lVar8 + 0x20);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5695);
      FUN_0220108c(uVar3,param_1,*(undefined8 *)StringLiteral_5698,0);
      if (lVar9 == 0) goto LAB_02e7013c;
      FUN_02225820(lVar9,uVar3,*(undefined8 *)StringLiteral_5696);
      plVar5 = (long *)StringLiteral_5694;
      uVar7 = *(undefined8 *)(lVar8 + 0x10);
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5694);
      FUN_02e701ec(uVar3,param_1,*(undefined8 *)StringLiteral_5700);
      plVar4 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(uVar7,uVar3,0);
    }
    plVar6 = (long *)(lVar8 + 0x10);
    if (plVar4 == (long *)0x0) {
      *plVar6 = 0;
    }
    else {
      lVar8 = *plVar5;
      if ((*plVar4 != lVar8) || (*plVar6 = (long)plVar4, *plVar4 != lVar8)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar4);
      }
    }
    thunk_FUN_01b4f09c(plVar6,plVar4);
    return;
  }
LAB_02e7013c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


