/*
FUNCTION_NAME: FUN_0329ecac
ENTRY_POINT: 0329ecac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0329ecac(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  
  puVar2 = 
  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
  ;
                    /* try { // try from 0329ecd8 to 0339ecff has its CatchHandler @ 0329ef9c */
  if ((DAT_03ff57db & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d864a0);
    thunk_FUN_01ad9084(PTR_DAT_03d864a8);
    thunk_FUN_01ad9084(PTR_DAT_03d864b0);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
                    /* try { // try from 0329ed34 to 0339ed5b has its CatchHandler @ 0329ef94 */
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d864b8);
    thunk_FUN_01ad9084(PTR_DAT_03d864c0);
    thunk_FUN_01ad9084(PTR_DAT_03d864c8);
    thunk_FUN_01ad9084(PTR_DAT_03d864d0);
    thunk_FUN_01ad9084(PTR_DAT_03d864d8);
    thunk_FUN_01ad9084(PTR_DAT_03d864e0);
                    /* try { // try from 0329eda0 to 0339edd3 has its CatchHandler @ 0329ef98 */
    thunk_FUN_01ad9084(PTR_DAT_03d864e8);
    thunk_FUN_01ad9084(PTR_DAT_03d864f0);
    thunk_FUN_01ad9084(PTR_DAT_03d864f8);
    thunk_FUN_01ad9084(PTR_DAT_03d86500);
    thunk_FUN_01ad9084(PTR_DAT_03d86508);
    thunk_FUN_01ad9084(PTR_DAT_03d86510);
    thunk_FUN_01ad9084(PTR_DAT_03d86518);
    DAT_03ff57db = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (DAT_03fed259 == '\0') {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed259 = '\x01';
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar2;
  }
  puVar3 = Method_System_Threading_Tasks_TaskSchedulerAwaitTaskContinuation_<>c_<Run>b__2_0__;
  uVar1 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  plVar12 = (long *)(param_5 + 0x30);
  if (*plVar12 != 0) {
    FUN_02eefbd8(*plVar12,0,0);
    local_64[0] = FUN_03230bf4(0x80000000,0);
    lVar5 = *plVar12;
    uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,local_64);
    puVar4 = 
    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
    ;
    puVar3 = 
    Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__;
    if (lVar5 != 0) {
      FUN_02ef1280(lVar5,*(undefined8 *)PTR_DAT_03d864c0,uVar6,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      local_68 = FUN_032537a4(0);
      lVar5 = *plVar12;
      uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_68);
      puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_19__;
      if (lVar5 != 0) {
        FUN_02ef1280(lVar5,*(undefined8 *)PTR_DAT_03d864d8,uVar6,0);
        local_80 = *(undefined8 *)puVar4;
        uStack_78 = 0xffffffffffffffff;
        local_70 = uVar1;
        uVar6 = FUN_030750fc(&local_80,0);
        if (*plVar12 != 0) {
          FUN_02ef1280(*plVar12,*(undefined8 *)PTR_DAT_03d864f8,uVar6,0);
          if (DAT_03ff1bfa == '\0') {
            thunk_FUN_01ad9084(
                              Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                              );
            DAT_03ff1bfa = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar5 = *(long *)puVar2;
          }
          local_98 = *(undefined8 *)puVar4;
          local_88 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x14);
          uStack_90 = 0xffffffffffffffff;
          uVar6 = FUN_030750fc(&local_98,0);
          puVar2 = PTR_DAT_03d864b0;
          if (*plVar12 != 0) {
            FUN_02ef1280(*plVar12,*(undefined8 *)PTR_DAT_03d864d0,uVar6,0);
            lVar5 = *plVar12;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar5 != 0) {
              FUN_02ef1280(lVar5,*(undefined8 *)PTR_DAT_03d86518,
                           **(undefined8 **)(*(long *)puVar2 + 0xb8),0);
              lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
              if (lVar5 != 0) {
                FUN_0329f7b0(lVar5,0);
                puVar4 = Method_System_Collections_SortedList_SortedListEnumerator_get_Current__;
                lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                if (lVar5 != 0) {
                  FUN_0329f840(lVar5,plVar12,0);
                  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar6;
                  thunk_FUN_01b4f09c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar6);
                  uVar15 = FUN_0322cfb8(uVar1,0);
                  lVar14 = *plVar12;
                  uVar16 = param_2;
                  uVar18 = param_3;
                  plVar7 = (long *)FUN_01b47fd0(*(undefined8 *)puVar4,4);
                  local_9c = uVar15;
                  lVar5 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_9c);
                  if (plVar7 != (long *)0x0) {
                    if ((lVar5 != 0) &&
                       (lVar8 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar7 + 0x40)),
                       lVar8 == 0)) {
LAB_0329f5b0:
                      uVar6 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                      FUN_01b48050(uVar6,0);
                    }
                    if ((int)plVar7[3] != 0) {
                      plVar7[4] = lVar5;
                      thunk_FUN_01b4f09c(plVar7 + 4,lVar5);
                      local_a0 = param_2;
                      lVar5 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_a0);
                      if ((lVar5 != 0) &&
                         (lVar8 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar7 + 0x40)),
                         lVar8 == 0)) goto LAB_0329f5b0;
                      if (1 < *(uint *)(plVar7 + 3)) {
                        plVar7[5] = lVar5;
                        thunk_FUN_01b4f09c(plVar7 + 5,lVar5);
                        local_a4 = param_3;
                        lVar5 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_a4);
                        if ((lVar5 != 0) &&
                           (lVar8 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) goto LAB_0329f5b0;
                        if (2 < *(uint *)(plVar7 + 3)) {
                          plVar7[6] = lVar5;
                          thunk_FUN_01b4f09c(plVar7 + 6,lVar5);
                          local_a8 = param_4;
                          lVar5 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_a8);
                          if ((lVar5 != 0) &&
                             (lVar8 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_0329f5b0;
                          if (3 < *(uint *)(plVar7 + 3)) {
                            plVar7[7] = lVar5;
                            thunk_FUN_01b4f09c(plVar7 + 7,lVar5);
                            if (lVar14 != 0) {
                              FUN_02ef1eb0(lVar14,*(undefined8 *)PTR_DAT_03d864c8,plVar7,0);
                              local_ac = FUN_0322d568(uVar1,0);
                              lVar5 = *plVar12;
                              uVar15 = uVar16;
                              uVar17 = uVar18;
                              uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_ac);
                              local_b0 = uVar16;
                              uVar9 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_b0);
                              local_b4 = uVar18;
                              uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_b4);
                              if (lVar5 != 0) {
                                FUN_02ef1e50(lVar5,*(undefined8 *)PTR_DAT_03d86510,uVar6,uVar9,
                                             uVar10,0);
                                local_b8 = FUN_0322d7cc(uVar1,0);
                                lVar5 = *plVar12;
                                uVar16 = uVar15;
                                uVar18 = uVar17;
                                uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_b8);
                                local_bc = uVar15;
                                uVar9 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_bc);
                                local_c0 = uVar17;
                                uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_c0);
                                if (lVar5 != 0) {
                                  FUN_02ef1e50(lVar5,*(undefined8 *)PTR_DAT_03d864e0,uVar6,uVar9,
                                               uVar10,0);
                                  local_c4 = FUN_0322c524(uVar1,0);
                                  lVar5 = *plVar12;
                                  uVar15 = uVar16;
                                  uVar17 = uVar18;
                                  uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_c4);
                                  local_c8 = uVar16;
                                  uVar9 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_c8);
                                  local_cc = uVar18;
                                  uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_cc);
                                  if (lVar5 != 0) {
                                    FUN_02ef1e50(lVar5,*(undefined8 *)PTR_DAT_03d864f0,uVar6,uVar9,
                                                 uVar10,0);
                                    local_d0 = FUN_0322cafc(uVar1,0);
                                    lVar5 = *plVar12;
                                    uVar16 = uVar15;
                                    uVar18 = uVar17;
                                    uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_d0);
                                    local_d4 = uVar15;
                                    uVar9 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_d4);
                                    local_d8 = uVar17;
                                    uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_d8);
                                    if (lVar5 != 0) {
                                      FUN_02ef1e50(lVar5,*(undefined8 *)PTR_DAT_03d86508,uVar6,uVar9
                                                   ,uVar10,0);
                                      local_dc = FUN_0322cd60(uVar1,0);
                                      lVar5 = *plVar12;
                                      uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_dc);
                                      local_e0 = uVar16;
                                      uVar9 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_e0);
                                      local_e4 = uVar18;
                                      uVar10 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_e4);
                                      if (lVar5 != 0) {
                                        FUN_02ef1e50(lVar5,*(undefined8 *)PTR_DAT_03d864e8,uVar6,
                                                     uVar9,uVar10,0);
                                        local_e8 = FUN_0322f12c(1,0x80000000,0);
                                        lVar5 = *plVar12;
                                        uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_e8);
                                        if (lVar5 != 0) {
                                          FUN_02ef1280(lVar5,*(undefined8 *)PTR_DAT_03d86500,uVar6,0
                                                      );
                                          local_ec = FUN_0322f12c(4,0x80000000,0);
                                          lVar5 = *plVar12;
                                          uVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_ec
                                                                    );
                                          if (lVar5 != 0) {
                                            FUN_02ef1280(lVar5,*(undefined8 *)PTR_DAT_03d864b8,uVar6
                                                         ,0);
                                            puVar3 = PTR_DAT_03d864a8;
                                            puVar2 = 
                                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                            ;
                                            lVar5 = *(long *)(param_5 + 0x28);
                                            if (lVar5 != 0) {
                                              iVar13 = 0;
                                              while (iVar13 < *(int *)(lVar5 + 0x18)) {
                                                lVar5 = FUN_02b59714(lVar5,iVar13,
                                                                     *(undefined8 *)puVar3);
                                                if (lVar5 == 0) goto LAB_0329f52c;
                                                FUN_0329f7b0(lVar5,0);
                                                if ((*(long *)(param_5 + 0x28) == 0) ||
                                                   (lVar5 = FUN_02b59714(*(long *)(param_5 + 0x28),
                                                                         iVar13,*(undefined8 *)
                                                                                 puVar3), lVar5 == 0
                                                   )) goto LAB_0329f52c;
                                                FUN_0329f840(lVar5,plVar12,0);
                                                lVar5 = *(long *)(param_5 + 0x28);
                                                iVar13 = iVar13 + 1;
                                                if (lVar5 == 0) goto LAB_0329f52c;
                                              }
                                              uVar6 = *(undefined8 *)(param_5 + 0x20);
                                              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                                thunk_FUN_01ac7298();
                                              }
                                              uVar11 = FUN_0391f968(uVar6,0,0);
                                              if ((uVar11 & 1) == 0) {
                                                return;
                                              }
                                              plVar12 = *(long **)(param_5 + 0x30);
                                              if (plVar12 != (long *)0x0) {
                                                plVar7 = *(long **)(param_5 + 0x20);
                                                uVar6 = (**(code **)(*plVar12 + 0x168))
                                                                  (plVar12,*(undefined8 *)
                                                                            (*plVar12 + 0x170));
                                                if (plVar7 != (long *)0x0) {
                                                  (**(code **)(*plVar7 + 0x5e8))
                                                            (plVar7,uVar6,
                                                             *(undefined8 *)(*plVar7 + 0x5f0));
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_0329f52c;
                          }
                        }
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_01b48180();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0329f52c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


