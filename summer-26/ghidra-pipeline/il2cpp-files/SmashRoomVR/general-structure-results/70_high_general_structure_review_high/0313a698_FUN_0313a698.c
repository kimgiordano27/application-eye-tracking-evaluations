/*
FUNCTION_NAME: FUN_0313a698
ENTRY_POINT: 0313a698
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0313a698(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((DAT_03ff1eea & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d7f8b0);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1eea = 1;
  }
  if ((char)param_1[9] == '\0') {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  uVar2 = FUN_038feca0(uVar2,0);
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                            );
  FUN_038ff018(lVar3,uVar2,0);
  param_1[8] = lVar3;
  thunk_FUN_01b4f09c(param_1 + 8,lVar3);
  puVar1 = PTR_DAT_03d7f8b0;
  if (param_1[4] != 0) {
    plVar6 = (long *)(param_1[4] + 0x48);
    lVar3 = *plVar6;
    uVar2 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d7f8b0);
    FUN_02518558(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1b0),0);
    lVar3 = Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar3,uVar2,0);
    if (lVar3 == 0) {
      lVar4 = 0;
      *plVar6 = 0;
    }
    else {
      uVar2 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01afa9e0(lVar3,uVar2);
      if (lVar4 == 0) {
LAB_0313a7ac:
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(lVar3,uVar2);
      }
      *plVar6 = lVar4;
      uVar2 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_01afa9e0(lVar3,uVar2);
      if (lVar4 == 0) goto LAB_0313a7ac;
    }
    thunk_FUN_01b4f09c(plVar6,lVar4);
    if (param_1[4] != 0) {
      uVar2 = *(undefined8 *)(param_1[4] + 0x58);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar5 = FUN_0391f968(uVar2,0,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      if (param_1[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0313a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1a8))
                  (param_1,*(undefined8 *)(param_1[4] + 0x58),*(undefined8 *)(*param_1 + 0x1b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


