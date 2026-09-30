/*
FUNCTION_NAME: FUN_03b1a8f8
ENTRY_POINT: 03b1a8f8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long FUN_03b1a8f8(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  if ((DAT_03ffdb08 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__);
    thunk_FUN_01ad9084(PTR_DAT_03db6b70);
    thunk_FUN_01ad9084(PTR_DAT_03db6b78);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db6b80);
    thunk_FUN_01ad9084(PTR_DAT_03db6b88);
    thunk_FUN_01ad9084(PTR_DAT_03db6b90);
    thunk_FUN_01ad9084(PTR_DAT_03db6b98);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cc38);
    thunk_FUN_01ad9084(PTR_DAT_03db6ba0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d910);
    thunk_FUN_01ad9084(PTR_DAT_03db6ba8);
    thunk_FUN_01ad9084(PTR_DAT_03d9d920);
    thunk_FUN_01ad9084(PTR_DAT_03d9d930);
    thunk_FUN_01ad9084(PTR_DAT_03d9d970);
    thunk_FUN_01ad9084(PTR_DAT_03db6bb0);
    thunk_FUN_01ad9084(PTR_DAT_03d9d9b0);
    thunk_FUN_01ad9084(PTR_DAT_03db6bb8);
    thunk_FUN_01ad9084(PTR_DAT_03db6bc0);
    thunk_FUN_01ad9084(PTR_DAT_03db6bc8);
    thunk_FUN_01ad9084(PTR_DAT_03db6bd0);
    thunk_FUN_01ad9084(PTR_DAT_03db6bd8);
    thunk_FUN_01ad9084(PTR_DAT_03db6be0);
    thunk_FUN_01ad9084(PTR_DAT_03db6be8);
    thunk_FUN_01ad9084(PTR_DAT_03db6bf0);
    thunk_FUN_01ad9084(PTR_DAT_03db6bf8);
    DAT_03ffdb08 = 1;
  }
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((0 < param_2) || (param_5 != 0xf)) {
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_1 == 0) goto LAB_03b1b2dc;
      uVar4 = FUN_038ffa48(param_1,*(undefined8 *)PTR_DAT_03d9d930,0);
      if ((uVar4 & 1) == 0) {
        uVar13 = FUN_039230bc(param_1,0);
        puVar10 = (undefined8 *)PTR_DAT_03db6ba8;
      }
      else {
        uVar4 = FUN_038ffa48(param_1,*(undefined8 *)PTR_DAT_03d9d9b0,0);
        if ((uVar4 & 1) == 0) {
          uVar13 = FUN_039230bc(param_1,0);
          puVar10 = (undefined8 *)PTR_DAT_03db6be0;
        }
        else {
          uVar4 = FUN_038ffa48(param_1,*(undefined8 *)PTR_DAT_03d9d910,0);
          if ((uVar4 & 1) == 0) {
            uVar13 = FUN_039230bc(param_1,0);
            puVar10 = (undefined8 *)PTR_DAT_03db6bf0;
          }
          else {
            uVar4 = FUN_038ffa48(param_1,*(undefined8 *)PTR_DAT_03d9d920,0);
            if ((uVar4 & 1) == 0) {
              uVar13 = FUN_039230bc(param_1,0);
              puVar10 = (undefined8 *)PTR_DAT_03db6bd0;
            }
            else {
              uVar4 = FUN_038ffa48(param_1,*(undefined8 *)PTR_DAT_03d9d970,0);
              if ((uVar4 & 1) == 0) {
                uVar13 = FUN_039230bc(param_1,0);
                puVar10 = (undefined8 *)PTR_DAT_03db6bb0;
              }
              else {
                uVar4 = FUN_038ffa48(param_1,*(undefined8 *)PTR_DAT_03db6be8,0);
                plVar12 = (long *)PTR_DAT_03d9cc38;
                if ((uVar4 & 1) != 0) {
                  lVar5 = *(long *)PTR_DAT_03d9cc38;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar5 = *plVar12;
                  }
                  if (**(long **)(lVar5 + 0xb8) != 0) {
                    iVar1 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
                    if (0 < iVar1) {
                      iVar11 = 0;
                      while( true ) {
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar5 = *plVar12;
                        }
                        if ((**(long **)(lVar5 + 0xb8) == 0) ||
                           (lVar5 = FUN_02b59714(**(long **)(lVar5 + 0xb8),iVar11,
                                                 *(undefined8 *)PTR_DAT_03db6b90), lVar5 == 0))
                        goto LAB_03b1b2dc;
                        uVar13 = *(undefined8 *)(lVar5 + 0x10);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        uVar4 = FUN_03922f24(uVar13,param_1,0);
                        if ((((((uVar4 & 1) != 0) && (*(int *)(lVar5 + 0x24) == param_2)) &&
                             (*(int *)(lVar5 + 0x28) == param_3)) &&
                            ((*(int *)(lVar5 + 0x2c) == param_4 &&
                             (*(int *)(lVar5 + 0x30) == param_6)))) &&
                           ((*(int *)(lVar5 + 0x34) == param_7 &&
                            (*(int *)(lVar5 + 0x3c) == param_5)))) {
                          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
                          return *(long *)(lVar5 + 0x18);
                        }
                        if (iVar1 + -1 == iVar11) break;
                        lVar5 = *(long *)PTR_DAT_03d9cc38;
                        iVar11 = iVar11 + 1;
                        plVar12 = (long *)PTR_DAT_03d9cc38;
                      }
                    }
                    lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03db6b98);
                    *(undefined4 *)(lVar5 + 0x2c) = 8;
                    FUN_03081994(lVar5,0);
                    *(undefined4 *)(lVar5 + 0x20) = 1;
                    *(long *)(lVar5 + 0x10) = param_1;
                    thunk_FUN_01b4f09c((long *)(lVar5 + 0x10),param_1);
                    lVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                              );
                    FUN_038ff0a8(lVar6,param_1,0);
                    plVar12 = (long *)(lVar5 + 0x18);
                    *plVar12 = lVar6;
                    thunk_FUN_01b4f09c(plVar12,lVar6);
                    if (*plVar12 != 0) {
                      FUN_03923d4c(*plVar12,0x3d,0);
                      lVar9 = *(long *)(lVar5 + 0x18);
                      *(int *)(lVar5 + 0x24) = param_2;
                      *(int *)(lVar5 + 0x28) = param_3;
                      *(int *)(lVar5 + 0x2c) = param_4;
                      *(int *)(lVar5 + 0x30) = param_6;
                      *(int *)(lVar5 + 0x34) = param_7;
                      *(int *)(lVar5 + 0x3c) = param_5;
                      *(bool *)(lVar5 + 0x38) = param_3 != 0 && 0 < param_7;
                      plVar7 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                                  ,8);
                      puVar3 = 
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      ;
                      local_64 = param_2;
                      lVar6 = thunk_FUN_01afa70c(*(undefined8 *)
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                 ,&local_64);
                      if (plVar7 != (long *)0x0) {
                        if ((lVar6 != 0) &&
                           (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) {
LAB_03b1b2e4:
                          uVar13 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                          FUN_01b48050(uVar13,0);
                        }
                        if ((int)plVar7[3] != 0) {
                          plVar7[4] = lVar6;
                          thunk_FUN_01b4f09c(plVar7 + 4,lVar6);
                          local_68 = param_3;
                          lVar6 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03db6ba0,&local_68);
                          if ((lVar6 != 0) &&
                             (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_03b1b2e4;
                          if (1 < *(uint *)(plVar7 + 3)) {
                            plVar7[5] = lVar6;
                            thunk_FUN_01b4f09c(plVar7 + 5,lVar6);
                            local_6c = param_4;
                            lVar6 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03db6b78,&local_6c);
                            if ((lVar6 != 0) &&
                               (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) goto LAB_03b1b2e4;
                            if (2 < *(uint *)(plVar7 + 3)) {
                              plVar7[6] = lVar6;
                              thunk_FUN_01b4f09c(plVar7 + 6,lVar6);
                              local_70 = param_7;
                              lVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_70);
                              if ((lVar6 != 0) &&
                                 (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar8 == 0)) goto LAB_03b1b2e4;
                              if (3 < *(uint *)(plVar7 + 3)) {
                                plVar7[7] = lVar6;
                                thunk_FUN_01b4f09c(plVar7 + 7,lVar6);
                                local_74 = param_6;
                                lVar6 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_74);
                                if ((lVar6 != 0) &&
                                   (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_03b1b2e4;
                                if (4 < *(uint *)(plVar7 + 3)) {
                                  plVar7[8] = lVar6;
                                  thunk_FUN_01b4f09c(plVar7 + 8,lVar6);
                                  local_78 = param_5;
                                  lVar6 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03db6b70,
                                                             &local_78);
                                  if ((lVar6 != 0) &&
                                     (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)
                                                                        (*plVar7 + 0x40)),
                                     lVar8 == 0)) goto LAB_03b1b2e4;
                                  if (5 < *(uint *)(plVar7 + 3)) {
                                    plVar7[9] = lVar6;
                                    thunk_FUN_01b4f09c(plVar7 + 9,lVar6);
                                    local_7c[0] = *(undefined1 *)(lVar5 + 0x38);
                                    lVar6 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Net_Sockets_Socket_<>c_<ReceiveAsyncApm>b__15_0__
                                                  ,local_7c);
                                    if ((lVar6 != 0) &&
                                       (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                       lVar8 == 0)) goto LAB_03b1b2e4;
                                    if (6 < *(uint *)(plVar7 + 3)) {
                                      plVar7[10] = lVar6;
                                      thunk_FUN_01b4f09c(plVar7 + 10,lVar6);
                                      lVar6 = FUN_039230bc(param_1,0);
                                      if ((lVar6 != 0) &&
                                         (lVar8 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)
                                                                            (*plVar7 + 0x40)),
                                         lVar8 == 0)) goto LAB_03b1b2e4;
                                      puVar3 = PTR_DAT_03d9cc38;
                                      if (7 < *(uint *)(plVar7 + 3)) {
                                        plVar7[0xb] = lVar6;
                                        thunk_FUN_01b4f09c(plVar7 + 0xb,lVar6);
                                        uVar13 = FUN_02ee71a8(*(undefined8 *)PTR_DAT_03db6bf8,plVar7
                                                              ,0);
                                        if (lVar9 != 0) {
                                          FUN_0392316c(lVar9,uVar13,0);
                                          if (*plVar12 != 0) {
                                            FUN_03900624((float)param_2,*plVar12,
                                                         *(undefined8 *)PTR_DAT_03d9d930,0);
                                            if (*plVar12 != 0) {
                                              FUN_03900624((float)param_3,*plVar12,
                                                           *(undefined8 *)PTR_DAT_03d9d9b0,0);
                                              if (*plVar12 != 0) {
                                                FUN_03900624((float)param_4,*plVar12,
                                                             *(undefined8 *)PTR_DAT_03d9d910,0);
                                                if (*plVar12 != 0) {
                                                  FUN_03900624((float)param_6,*plVar12,
                                                               *(undefined8 *)PTR_DAT_03d9d920,0);
                                                  if (*plVar12 != 0) {
                                                    FUN_03900624((float)param_7,*plVar12,
                                                                 *(undefined8 *)PTR_DAT_03d9d970,0);
                                                    if (*plVar12 != 0) {
                                                      FUN_03900624((float)param_5,*plVar12,
                                                                   *(undefined8 *)PTR_DAT_03db6be8,0
                                                                  );
                                                      if (*(long *)(lVar5 + 0x18) != 0) {
                                                        uVar14 = 0;
                                                        if (*(char *)(lVar5 + 0x38) != '\0') {
                                                          uVar14 = 0x3f800000;
                                                        }
                                                        FUN_03900624(uVar14,*(long *)(lVar5 + 0x18),
                                                                     *(undefined8 *)PTR_DAT_03db6bd8
                                                                     ,0);
                                                        if (*plVar12 != 0) {
                                                          if (*(char *)(lVar5 + 0x38) == '\0') {
                                                            FUN_038ffb40(*plVar12,*(undefined8 *)
                                                                                   PTR_DAT_03db6bb8,
                                                                         0);
                                                          }
                                                          else {
                                                            FUN_038ffafc();
                                                          }
                                                          lVar6 = *(long *)puVar3;
                                                          if (*(int *)(lVar6 + 0xe0) == 0) {
                                                            thunk_FUN_01ac7298();
                                                            lVar6 = *(long *)puVar3;
                                                          }
                                                          lVar6 = **(long **)(lVar6 + 0xb8);
                                                          if (lVar6 != 0) {
                                                            lVar9 = *(long *)(lVar6 + 0x10);
                                                            lVar8 = *(long *)PTR_DAT_03db6b80;
                                                            *(int *)(lVar6 + 0x1c) =
                                                                 *(int *)(lVar6 + 0x1c) + 1;
                                                            if (lVar9 != 0) {
                                                              uVar2 = *(uint *)(lVar6 + 0x18);
                                                              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                                plVar7 = (long *)(lVar9 + (long)(int
                                                  )uVar2 * 8 + 0x20);
                                                  *plVar7 = lVar5;
                                                  thunk_FUN_01b4f09c(plVar7,lVar5);
                                                  }
                                                  else {
                                                    FUN_02b599e4(lVar6,lVar5,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar8 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  return *plVar12;
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
                                        goto LAB_03b1b2dc;
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
                    }
                  }
LAB_03b1b2dc:
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar13 = FUN_039230bc(param_1,0);
                puVar10 = (undefined8 *)PTR_DAT_03db6bc8;
              }
            }
          }
        }
      }
      uVar13 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03db6bc0,uVar13,*puVar10,0);
      if (*(int *)(*(long *)PTR_DAT_03d9cc38 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cc38);
      }
      FUN_03b1b2f0(uVar13,param_1);
    }
  }
  return param_1;
}


