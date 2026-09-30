/*
FUNCTION_NAME: FUN_01c2fd5c
ENTRY_POINT: 01c2fd5c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01c2fd5c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed509 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_874A158EE5E9824634584F1FFF431FA5FC62C2D71CA9FCDCAA012D8A6A926392
                      );
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
                      );
    DAT_03fed509 = 1;
  }
  FUN_02e4a158(param_1,0);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  FUN_01c2fc80(param_1);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar6,0);
  puVar1 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x98);
  plVar3 = (long *)FUN_01b47fd0(*(undefined8 *)
                                 Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                ,8);
  local_34 = *(undefined4 *)(param_1 + 0xa4);
  lVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_34);
  if (plVar3 == (long *)0x0) {
LAB_01c30100:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_01c300f4:
    uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_01b4f09c(plVar3 + 4,lVar4);
    local_38 = *(undefined4 *)(param_1 + 0xa8);
    lVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_38);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_01c300f4;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_01b4f09c(plVar3 + 5,lVar4);
      local_3c = *(undefined4 *)(param_1 + 0xac);
      lVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_3c);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_01c300f4;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_01b4f09c(plVar3 + 6,lVar4);
        puVar1 = 
        Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__;
        local_40 = *(undefined4 *)(param_1 + 0xb4);
        lVar4 = thunk_FUN_01afa70c(*(undefined8 *)
                                    Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                                   ,&local_40);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_01c300f4;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_01b4f09c(plVar3 + 7,lVar4);
          local_44 = *(undefined4 *)(param_1 + 0xd8);
          lVar4 = thunk_FUN_01afa70c(*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_874A158EE5E9824634584F1FFF431FA5FC62C2D71CA9FCDCAA012D8A6A926392
                                     ,&local_44);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_01c300f4;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_01b4f09c(plVar3 + 8,lVar4);
            local_48 = *(undefined4 *)(param_1 + 0xbc);
            lVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_48);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_01c300f4;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_01b4f09c(plVar3 + 9,lVar4);
              local_4c = *(undefined4 *)(param_1 + 0xc0);
              lVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_4c);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_01c300f4;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = lVar4;
                thunk_FUN_01b4f09c(plVar3 + 10,lVar4);
                local_50 = *(undefined4 *)(param_1 + 0xc4);
                lVar4 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_50);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_01afa9e0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_01c300f4;
                if (7 < *(uint *)(plVar3 + 3)) {
                  plVar3[0xb] = lVar4;
                  thunk_FUN_01b4f09c(plVar3 + 0xb,lVar4);
                  uVar6 = FUN_02ee71a8(*(undefined8 *)
                                        Field_<PrivateImplementationDetails>_A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
                                       ,plVar3,0);
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
                    return;
                  }
                  goto LAB_01c30100;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


