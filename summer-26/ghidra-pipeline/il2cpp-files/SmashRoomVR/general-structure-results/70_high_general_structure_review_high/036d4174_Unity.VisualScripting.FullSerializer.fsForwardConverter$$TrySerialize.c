/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsForwardConverter$$TrySerialize
ENTRY_POINT: 036d4174
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_FullSerializer_fsForwardConverter__TrySerialize(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x24;
  
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03d9d4e0);
  thunk_FUN_01ad9084(PTR_DAT_03d9d4e8);
  thunk_FUN_01ad9084(
                    Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                    );
  thunk_FUN_01ad9084(Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
  thunk_FUN_01ad9084(StringLiteral_5532);
  *(undefined1 *)(unaff_x21 + 0x5b5) = 1;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x150);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar1 = (long *)(unaff_x19 + 0x150);
  uVar2 = FUN_0391f968(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*plVar1 == 0) goto LAB_036d42f8;
    lVar4 = *(long *)(*plVar1 + 0x118);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                              );
    FUN_02200540();
    if (lVar4 == 0) goto LAB_036d42f8;
    FUN_02205390(lVar4,uVar3,*(undefined8 *)StringLiteral_5532);
  }
  FUN_01f3f854(plVar1);
  lVar4 = *plVar1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(lVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*plVar1 != 0) {
    lVar4 = *(long *)(*plVar1 + 0x118);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Oculus_Interaction_Samples_PoseUseSample_<>c__DisplayClass10_0_<Start>b__1__
                              );
    FUN_02200540();
    if (lVar4 != 0) {
      FUN_02205354(lVar4,uVar3,
                   *(undefined8 *)
                    Method_DinoFracture_PreFracturedGeometry_<>c_<GenerateFractureMeshes>b__6_0__);
      return;
    }
  }
LAB_036d42f8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


