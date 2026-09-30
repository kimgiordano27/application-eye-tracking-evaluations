/*
FUNCTION_NAME: FUN_0392b448
ENTRY_POINT: 0392b448
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
FUN_0392b448(undefined8 param_1,undefined8 param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined8 param_7,long *param_8,undefined4 param_9,
            undefined4 param_10,uint param_11,long param_12)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_58;
  float local_54;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffb190 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffb190 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(param_8,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (param_8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar2 = (**(code **)(*param_8 + 0x178))(param_8,*(undefined8 *)(*param_8 + 0x180));
  if ((param_3 + (float)param_1 <= (float)iVar2) &&
     (iVar2 = (**(code **)(*param_8 + 0x198))(param_8,*(undefined8 *)(*param_8 + 0x1a0)),
     param_4 + (float)param_2 <= (float)iVar2)) {
    if ((float)param_7 <= 0.0) {
      thunk_FUN_01ad9084(
                        Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                        );
      uVar4 = thunk_FUN_01afaadc();
      uVar5 = thunk_FUN_01ad9084(PTR_DAT_03dab640);
      FUN_02fd7c54(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01ad9084(PTR_DAT_03dab630);
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar4,uVar5);
    }
    if ((param_12 != 0) && (0 < (int)*(ulong *)(param_12 + 0x18))) {
      uVar3 = 0;
      uVar6 = *(ulong *)(param_12 + 0x18) & 0xffffffff;
      puVar7 = (undefined8 *)(param_12 + 0x28);
      do {
        if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar4 = puVar7[-1];
        uVar5 = *puVar7;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03922f24(uVar5,param_8);
        if ((uVar6 & 1) != 0) {
          uVar5 = thunk_FUN_01ad9084(PTR_DAT_03dab628);
          uVar4 = FUN_02ede300(uVar5,uVar4,0);
          goto LAB_0392b658;
        }
        uVar6 = (ulong)*(uint *)(param_12 + 0x18);
        uVar3 = uVar3 + 1;
        puVar7 = puVar7 + 2;
      } while ((long)uVar3 < (long)(int)*(uint *)(param_12 + 0x18));
    }
    uVar4 = FUN_0392ae90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11 & 1,param_12);
    return uVar4;
  }
  uVar4 = thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                            );
  uVar4 = FUN_01b47fd0(uVar4,6);
  puVar1 = 
  Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__;
  local_54 = (float)param_1;
  uVar5 = thunk_FUN_01ad9084(
                            Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                            );
  uVar5 = thunk_FUN_01afa70c(uVar5,&local_54);
  FUN_01852fbc(uVar4);
  FUN_01855950(uVar4,uVar5);
  FUN_01855748(uVar4,0,uVar5);
  local_58 = (float)param_2;
  uVar5 = thunk_FUN_01ad9084(puVar1);
  uVar5 = thunk_FUN_01afa70c(uVar5,&local_58);
  FUN_01852fbc(uVar4);
  FUN_01855950(uVar4,uVar5);
  FUN_01855748(uVar4,1,uVar5);
  local_a4 = param_3;
  uVar5 = thunk_FUN_01ad9084(puVar1);
  uVar5 = thunk_FUN_01afa70c(uVar5,&local_a4);
  FUN_01852fbc(uVar4);
  FUN_01855950(uVar4,uVar5);
  FUN_01855748(uVar4,2,uVar5);
  local_a8 = param_4;
  uVar5 = thunk_FUN_01ad9084(puVar1);
  uVar5 = thunk_FUN_01afa70c(uVar5,&local_a8);
  FUN_01852fbc(uVar4);
  FUN_01855950(uVar4,uVar5);
  FUN_01855748(uVar4,3,uVar5);
  FUN_01852fbc(param_8);
  local_ac = (**(code **)(*param_8 + 0x178))(param_8,*(undefined8 *)(*param_8 + 0x180));
  puVar1 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  uVar5 = thunk_FUN_01ad9084(
                            Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                            );
  uVar5 = thunk_FUN_01afa70c(uVar5,&local_ac);
  FUN_01852fbc(uVar4);
  FUN_01855950(uVar4,uVar5);
  FUN_01855748(uVar4,4,uVar5);
  FUN_01852fbc(param_8);
  local_b0 = (**(code **)(*param_8 + 0x198))(param_8,*(undefined8 *)(*param_8 + 0x1a0));
  uVar5 = thunk_FUN_01ad9084(puVar1);
  uVar5 = thunk_FUN_01afa70c(uVar5,&local_b0);
  FUN_01852fbc(uVar4);
  FUN_01855950(uVar4,uVar5);
  FUN_01855748(uVar4,5,uVar5);
  uVar5 = thunk_FUN_01ad9084(PTR_DAT_03dab638);
  uVar4 = FUN_02ee71a8(uVar5,uVar4,0);
LAB_0392b658:
  thunk_FUN_01ad9084(
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                    );
  uVar5 = thunk_FUN_01afaadc();
  FUN_02fd7c54(uVar5,uVar4,0);
  uVar4 = thunk_FUN_01ad9084(PTR_DAT_03dab630);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar5,uVar4);
}


