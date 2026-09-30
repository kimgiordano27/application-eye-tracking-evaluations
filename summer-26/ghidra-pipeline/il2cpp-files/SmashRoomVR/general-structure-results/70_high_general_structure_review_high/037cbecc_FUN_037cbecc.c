/*
FUNCTION_NAME: FUN_037cbecc
ENTRY_POINT: 037cbecc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_037cbecc(long param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = StringLiteral_2360;
  if ((DAT_03ff8103 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da3f38);
    thunk_FUN_01ad9084(StringLiteral_2360);
    thunk_FUN_01ad9084(PTR_DAT_03da3f40);
    thunk_FUN_01ad9084(PTR_DAT_03da3f48);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2203);
    DAT_03ff8103 = 1;
  }
  puVar2 = StringLiteral_2203;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar3 = UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable__get_trackRotation
                    (*(undefined8 *)puVar2,0);
  if ((lVar3 != 0) &&
     (FUN_01e975a4(lVar3,param_1,*(undefined8 *)PTR_DAT_03da3f38),
     puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, param_1 != 0))
  {
    lVar3 = FUN_01ed712c(param_1,*(undefined8 *)PTR_DAT_03da3f48);
    lVar8 = *(long *)puVar1;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar8);
    }
    uVar4 = FUN_03922f24(lVar3,0,0);
    if (((uVar4 & 1) != 0) && ((param_2 & 1) != 0)) {
      lVar3 = FUN_01ed7044(param_1,*(undefined8 *)PTR_DAT_03da3f40);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if ((param_3 & 1) != 0) {
        FUN_01852fbc(param_1);
        uVar5 = FUN_039230bc(param_1,0);
        uVar6 = thunk_FUN_01ad9084(PTR_DAT_03da3f50);
        uVar7 = thunk_FUN_01ad9084(PTR_DAT_03da3f58);
        uVar5 = FUN_02ee6c30(uVar6,uVar5,uVar7,0);
        thunk_FUN_01ad9084(StringLiteral_2234);
        uVar6 = thunk_FUN_01afaadc();
        FUN_030406c4(uVar6,uVar5,0);
        uVar5 = thunk_FUN_01ad9084(PTR_DAT_03da3f60);
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar6,uVar5);
      }
      uVar5 = 0;
    }
    else {
      if (lVar3 == 0) goto LAB_037cc034;
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
    }
    return uVar5;
  }
LAB_037cc034:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


