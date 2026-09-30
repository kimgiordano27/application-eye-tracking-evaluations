/*
FUNCTION_NAME: FUN_01c301a8
ENTRY_POINT: 01c301a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01c301a8(long param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
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
  if ((DAT_03fed50a & 1) == 0) {
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
                      Field_<PrivateImplementationDetails>_BD3331923AE2D87F6296377CB80C86CE12BF445ED38D4485D28FACFEC06BFF5B
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
                      );
    DAT_03fed50a = 1;
  }
  FUN_02e4a5cc(param_1,param_2,param_3 & 1,0);
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar5,0);
  if ((uVar2 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x90);
    uVar5 = FUN_0303def8((undefined4 *)(param_1 + 0xb0),
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_BD3331923AE2D87F6296377CB80C86CE12BF445ED38D4485D28FACFEC06BFF5B
                         ,0);
    if (plVar6 == (long *)0x0) goto LAB_01c305bc;
    (**(code **)(*plVar6 + 0x558))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x560));
  }
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar5,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x98);
  plVar6 = (long *)FUN_01b47fd0(*(undefined8 *)
                                 Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                ,8);
  puVar1 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  local_34 = *(undefined4 *)(param_1 + 0xa4);
  lVar3 = thunk_FUN_01afa70c(*(undefined8 *)
                              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                             ,&local_34);
  if (plVar6 == (long *)0x0) {
LAB_01c305bc:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
LAB_01c305b0:
    uVar5 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar5,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar3;
    thunk_FUN_01b4f09c(plVar6 + 4,lVar3);
    local_38 = *(undefined4 *)(param_1 + 0xa8);
    lVar3 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_38);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
    goto LAB_01c305b0;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar3;
      thunk_FUN_01b4f09c(plVar6 + 5,lVar3);
      local_3c = *(undefined4 *)(param_1 + 0xac);
      lVar3 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_3c);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
      goto LAB_01c305b0;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar3;
        thunk_FUN_01b4f09c(plVar6 + 6,lVar3);
        puVar1 = 
        Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__;
        local_40 = *(undefined4 *)(param_1 + 0xb4);
        lVar3 = thunk_FUN_01afa70c(*(undefined8 *)
                                    Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                                   ,&local_40);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
        goto LAB_01c305b0;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar3;
          thunk_FUN_01b4f09c(plVar6 + 7,lVar3);
          local_44 = *(undefined4 *)(param_1 + 0xd8);
          lVar3 = thunk_FUN_01afa70c(*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_874A158EE5E9824634584F1FFF431FA5FC62C2D71CA9FCDCAA012D8A6A926392
                                     ,&local_44);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
          goto LAB_01c305b0;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar3;
            thunk_FUN_01b4f09c(plVar6 + 8,lVar3);
            local_48 = *(undefined4 *)(param_1 + 0xbc);
            lVar3 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_48);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
            goto LAB_01c305b0;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar3;
              thunk_FUN_01b4f09c(plVar6 + 9,lVar3);
              local_4c = *(undefined4 *)(param_1 + 0xc0);
              lVar3 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_4c);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
              goto LAB_01c305b0;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar3;
                thunk_FUN_01b4f09c(plVar6 + 10,lVar3);
                local_50 = *(undefined4 *)(param_1 + 0xc4);
                lVar3 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_50);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_01afa9e0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
                goto LAB_01c305b0;
                if (7 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xb] = lVar3;
                  thunk_FUN_01b4f09c(plVar6 + 0xb,lVar3);
                  uVar5 = FUN_02ee71a8(*(undefined8 *)
                                        Field_<PrivateImplementationDetails>_A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
                                       ,plVar6,0);
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
                    return;
                  }
                  goto LAB_01c305bc;
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


