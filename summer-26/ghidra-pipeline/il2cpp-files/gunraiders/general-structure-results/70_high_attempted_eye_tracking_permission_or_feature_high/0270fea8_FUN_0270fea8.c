/*
FUNCTION_NAME: FUN_0270fea8
ENTRY_POINT: 0270fea8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_21;attempted_eye_tracking_permission_or_feature_enable
*/


undefined4 FUN_0270fea8(ulong *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  code *pcVar23;
  int iVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90 [2];
  undefined2 local_8c [2];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  int *local_80;
  undefined1 *puStack_78;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_045307de & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fb48);
    FUN_01c5d288(PTR_DAT_042303a0);
    FUN_01c5d288(PTR_DAT_0422fb78);
    FUN_01c5d288(PTR_DAT_042304a8);
    FUN_01c5d288(VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb80);
    FUN_01c5d288(PTR_DAT_042305d0);
    FUN_01c5d288(PTR_DAT_0422fb88);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(PTR_DAT_0422fb90);
    FUN_01c5d288(PTR_DAT_04230478);
    FUN_01c5d288(PTR_DAT_0422fb20);
    FUN_01c5d288(PTR_DAT_04230588);
    FUN_01c5d288(PTR_DAT_0422fbd0);
    FUN_01c5d288(PTR_DAT_042304e0);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(PTR_DAT_0422fbe8);
    FUN_01c5d288(PTR_DAT_042306a0);
    FUN_01c5d288(PTR_DAT_0422fbf0);
    FUN_01c5d288(PTR_DAT_042305a8);
    FUN_01c5d288(PTR_DAT_0422fbf8);
    FUN_01c5d288(PTR_DAT_04230670);
    DAT_045307de = 1;
  }
  plVar26 = (long *)(param_2 + 0x20);
  lVar10 = *plVar26;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01c72394();
  }
  puVar3 = PTR_DAT_0422fb28;
  puVar22 = auStack_b0 +
            -((ulong)*(uint *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x20) + 0xfc) + 0xf &
             0x1fffffff0);
  local_84[0] = 0;
  local_88[0] = 0;
  local_8c[0] = 0;
  local_90[0] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_ac = 0;
  uVar11 = FUN_03224414(0);
  lVar10 = *plVar26;
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01c72394(lVar10);
  }
  puVar4 = PTR_DAT_0422fb48;
  uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar25 = FUN_032e04b8(uVar25,0);
  uVar12 = FUN_032e04b8(*(undefined8 *)puVar4,0);
  uVar13 = FUN_032e935c(uVar25,uVar12,0);
  puVar5 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar4 = PTR_DAT_042303a0;
  if ((uVar11 & 1) == 0) {
    if ((uVar13 & 1) == 0) {
      lVar10 = *plVar26;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar25 = FUN_032e04b8(uVar25,0);
      uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
      uVar11 = FUN_032e935c(uVar25,uVar12,0);
      if ((uVar11 & 1) == 0) {
        lVar10 = *plVar26;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar25 = FUN_032e04b8(uVar25,0);
        uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
        uVar11 = FUN_032e935c(uVar25,uVar12,0);
        if ((uVar11 & 1) == 0) {
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar25 = FUN_032e04b8(uVar25,0);
          uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
          uVar11 = FUN_032e935c(uVar25,uVar12,0);
          if ((uVar11 & 1) == 0) {
            lVar10 = *plVar26;
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar3);
            }
            uVar25 = FUN_032e04b8(uVar25,0);
            uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
            uVar11 = FUN_032e935c(uVar25,uVar12,0);
            if ((uVar11 & 1) == 0) {
              lVar10 = *plVar26;
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar3);
              }
              uVar25 = FUN_032e04b8(uVar25,0);
              uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
              uVar11 = FUN_032e935c(uVar25,uVar12,0);
              if ((uVar11 & 1) == 0) {
                lVar10 = *plVar26;
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar3);
                }
                uVar25 = FUN_032e04b8(uVar25,0);
                uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
                uVar11 = FUN_032e935c(uVar25,uVar12,0);
                if ((uVar11 & 1) == 0) {
                  lVar10 = *plVar26;
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar3);
                  }
                  uVar25 = FUN_032e04b8(uVar25,0);
                  uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
                  uVar11 = FUN_032e935c(uVar25,uVar12,0);
                  if ((uVar11 & 1) == 0) {
                    lVar10 = *plVar26;
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)puVar3);
                    }
                    uVar25 = FUN_032e04b8(uVar25,0);
                    uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                    uVar11 = FUN_032e935c(uVar25,uVar12,0);
                    if ((uVar11 & 1) == 0) {
                      lVar10 = *plVar26;
                      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                        lVar10 = FUN_01c72394();
                      }
                      uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)puVar3);
                      }
                      uVar25 = FUN_032e04b8(uVar25,0);
                      uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                      uVar11 = FUN_032e935c(uVar25,uVar12,0);
                      if ((uVar11 & 1) == 0) goto LAB_02712380;
                      uVar13 = *param_1;
                      uVar11 = uVar13 & 0x7ff0000000000000;
                      if ((-uVar13 & 0x7ff0000000000000) != 0) {
                        uVar11 = uVar13;
                      }
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      uVar13 = FUN_0322441c(0,(uint)(uVar11 >> 0x20) ^ (uint)uVar11,0);
                      uVar21 = param_1[1];
                      uVar11 = uVar21 & 0x7ff0000000000000;
                      if ((-uVar21 & 0x7ff0000000000000) != 0) {
                        uVar11 = uVar21;
                      }
                      uVar9 = (uint)(uVar11 >> 0x20) ^ (uint)uVar11;
                    }
                    else {
                      uVar8 = FUN_032e3e6c(param_1,0);
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                          );
                      }
                      uVar8 = FUN_0322441c(0,uVar8,0);
                      uVar7 = FUN_032e3e6c((long)param_1 + 4,0);
                      uVar8 = FUN_0322441c(uVar8,uVar7,0);
                      uVar7 = FUN_032e3e6c(param_1 + 1,0);
                      uVar13 = FUN_0322441c(uVar8,uVar7,0);
                      uVar13 = uVar13 & 0xffffffff;
                      uVar9 = FUN_032e3e6c((long)param_1 + 0xc,0);
                    }
                  }
                  else {
                    uVar8 = FUN_032d0404(param_1,0);
                    if (*(int *)(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)
                                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                        );
                    }
                    uVar13 = FUN_0322441c(0,uVar8,0);
                    uVar13 = uVar13 & 0xffffffff;
                    uVar9 = FUN_032d0404(param_1 + 1,0);
                  }
                }
                else {
                  uVar8 = FUN_032eee44(param_1,0);
                  if (*(int *)(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                      );
                  }
                  uVar13 = FUN_0322441c(0,uVar8,0);
                  uVar13 = uVar13 & 0xffffffff;
                  uVar9 = FUN_032eee44(param_1 + 1,0);
                }
              }
              else {
                uVar8 = FUN_032cf300(param_1,0);
                if (*(int *)(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)
                                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                    );
                }
                uVar8 = FUN_0322441c(0,uVar8,0);
                uVar7 = FUN_032cf300((long)param_1 + 4,0);
                uVar8 = FUN_0322441c(uVar8,uVar7,0);
                uVar7 = FUN_032cf300(param_1 + 1,0);
                uVar13 = FUN_0322441c(uVar8,uVar7,0);
                uVar13 = uVar13 & 0xffffffff;
                uVar9 = FUN_032cf300((long)param_1 + 0xc,0);
              }
            }
            else {
              uVar8 = FUN_032edfe0(param_1,0);
              if (*(int *)(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  );
              }
              uVar8 = FUN_0322441c(0,uVar8,0);
              uVar7 = FUN_032edfe0((long)param_1 + 4,0);
              uVar8 = FUN_0322441c(uVar8,uVar7,0);
              uVar7 = FUN_032edfe0(param_1 + 1,0);
              uVar13 = FUN_0322441c(uVar8,uVar7,0);
              uVar13 = uVar13 & 0xffffffff;
              uVar9 = FUN_032edfe0((long)param_1 + 0xc,0);
            }
          }
          else {
            uVar8 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(param_1,0);
            if (*(int *)(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                );
            }
            uVar8 = FUN_0322441c(0,uVar8,0);
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 2,0);
            uVar8 = FUN_0322441c(uVar8,uVar7,0);
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 4,0);
            uVar8 = FUN_0322441c(uVar8,uVar7,0);
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 6,0);
            uVar8 = FUN_0322441c(uVar8,uVar7,0);
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(param_1 + 1,0);
            uVar8 = FUN_0322441c(uVar8,uVar7,0);
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 10,0);
            uVar8 = FUN_0322441c(uVar8,uVar7,0);
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 0xc,0);
            uVar13 = FUN_0322441c(uVar8,uVar7,0);
            uVar13 = uVar13 & 0xffffffff;
            uVar9 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 0xe,0);
          }
        }
        else {
          uVar8 = FUN_032ed11c(param_1,0);
          if (*(int *)(*(long *)
                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              );
          }
          uVar8 = FUN_0322441c(0,uVar8,0);
          uVar7 = FUN_032ed11c((long)param_1 + 2,0);
          uVar8 = FUN_0322441c(uVar8,uVar7,0);
          uVar7 = FUN_032ed11c((long)param_1 + 4,0);
          uVar8 = FUN_0322441c(uVar8,uVar7,0);
          uVar7 = FUN_032ed11c((long)param_1 + 6,0);
          uVar8 = FUN_0322441c(uVar8,uVar7,0);
          uVar7 = FUN_032ed11c(param_1 + 1,0);
          uVar8 = FUN_0322441c(uVar8,uVar7,0);
          uVar7 = FUN_032ed11c((long)param_1 + 10,0);
          uVar8 = FUN_0322441c(uVar8,uVar7,0);
          uVar7 = FUN_032ed11c((long)param_1 + 0xc,0);
          uVar13 = FUN_0322441c(uVar8,uVar7,0);
          uVar13 = uVar13 & 0xffffffff;
          uVar9 = FUN_032ed11c((long)param_1 + 0xe,0);
        }
      }
      else {
        uVar8 = FUN_032e2e50(param_1,0);
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            );
        }
        uVar8 = FUN_0322441c(0,uVar8,0);
        uVar7 = FUN_032e2e50((long)param_1 + 1,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 2,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 3,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 4,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 5,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 6,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 7,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50(param_1 + 1,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 9,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 10,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 0xb,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 0xc,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 0xd,0);
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        uVar7 = FUN_032e2e50((long)param_1 + 0xe,0);
        uVar13 = FUN_0322441c(uVar8,uVar7,0);
        uVar13 = uVar13 & 0xffffffff;
        uVar9 = FUN_032e2e50((long)param_1 + 0xf,0);
      }
    }
    else {
      uVar8 = FUN_0324b7a0(param_1,0);
      if (*(int *)(*(long *)
                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          );
      }
      uVar8 = FUN_0322441c(0,uVar8,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 1,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 2,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 3,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 4,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 5,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 6,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 7,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0(param_1 + 1,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 9,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 10,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 0xb,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 0xc,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 0xd,0);
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      uVar7 = FUN_0324b7a0((long)param_1 + 0xe,0);
      uVar13 = FUN_0322441c(uVar8,uVar7,0);
      uVar13 = uVar13 & 0xffffffff;
      uVar9 = FUN_0324b7a0((long)param_1 + 0xf,0);
    }
    uVar8 = FUN_0322441c(uVar13,uVar9,0);
LAB_02712040:
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((uVar13 & 1) == 0) {
    lVar10 = *plVar26;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01c72394();
    }
    uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar3);
    }
    uVar25 = FUN_032e04b8(uVar25,0);
    uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
    uVar11 = FUN_032e935c(uVar25,uVar12,0);
    puVar5 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar4 = PTR_DAT_04230588;
    if ((uVar11 & 1) == 0) {
      lVar10 = *plVar26;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar25 = FUN_032e04b8(uVar25,0);
      uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
      uVar11 = FUN_032e935c(uVar25,uVar12,0);
      puVar5 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar4 = PTR_DAT_042306a0;
      if ((uVar11 & 1) != 0) {
        iVar24 = 0;
        uVar8 = 0;
        do {
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar20 = *plVar26;
          uVar1 = *(ushort *)(lVar20 + 0x135);
          lVar10 = lVar20;
          if ((uVar1 & 1) == 0) {
            lVar20 = FUN_01c72394(lVar20);
            uVar1 = *(ushort *)(*plVar26 + 0x135);
            lVar10 = *plVar26;
          }
          pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
          }
          iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
          if (iVar6 <= iVar24) goto LAB_02712040;
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar20 = *plVar26;
          uVar1 = *(ushort *)(lVar20 + 0x135);
          lVar10 = lVar20;
          if ((uVar1 & 1) == 0) {
            lVar20 = FUN_01c72394(lVar20);
            uVar1 = *(ushort *)(*plVar26 + 0x135);
            lVar10 = *plVar26;
          }
          uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
          local_80 = &local_6c;
          puStack_78 = puVar22;
          local_6c = iVar24;
          (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),
                                               puVar22);
          if (plVar14 == (long *)0x0) {
LAB_02712378:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) goto LAB_0271237c;
          puVar16 = (undefined2 *)thunk_FUN_01c49834();
          local_8c[0] = *puVar16;
          uVar7 = FUN_032ed11c(local_8c,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar5);
          }
          uVar8 = FUN_0322441c(uVar8,uVar7,0);
          iVar24 = iVar24 + 1;
        } while( true );
      }
      lVar10 = *plVar26;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar25 = FUN_032e04b8(uVar25,0);
      uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
      uVar11 = FUN_032e935c(uVar25,uVar12,0);
      puVar5 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar4 = PTR_DAT_042305d0;
      if ((uVar11 & 1) == 0) {
        lVar10 = *plVar26;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar25 = FUN_032e04b8(uVar25,0);
        uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
        uVar11 = FUN_032e935c(uVar25,uVar12,0);
        puVar5 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
        puVar4 = PTR_DAT_042305a8;
        if ((uVar11 & 1) == 0) {
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar25 = FUN_032e04b8(uVar25,0);
          uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
          uVar11 = FUN_032e935c(uVar25,uVar12,0);
          puVar5 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
          puVar4 = PTR_DAT_0422fd80;
          if ((uVar11 & 1) == 0) {
            lVar10 = *plVar26;
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar3);
            }
            uVar25 = FUN_032e04b8(uVar25,0);
            uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
            uVar11 = FUN_032e935c(uVar25,uVar12,0);
            puVar5 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
            puVar4 = PTR_DAT_04230670;
            if ((uVar11 & 1) == 0) {
              lVar10 = *plVar26;
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar3);
              }
              uVar25 = FUN_032e04b8(uVar25,0);
              uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
              uVar11 = FUN_032e935c(uVar25,uVar12,0);
              puVar5 = 
              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
              puVar4 = PTR_DAT_04230478;
              if ((uVar11 & 1) == 0) {
                lVar10 = *plVar26;
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar3);
                }
                uVar25 = FUN_032e04b8(uVar25,0);
                uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                uVar11 = FUN_032e935c(uVar25,uVar12,0);
                puVar5 = 
                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                puVar4 = PTR_DAT_042304e0;
                if ((uVar11 & 1) == 0) {
                  lVar10 = *plVar26;
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  uVar25 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar3);
                  }
                  uVar25 = FUN_032e04b8(uVar25,0);
                  uVar12 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                  uVar11 = FUN_032e935c(uVar25,uVar12,0);
                  puVar4 = 
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                  puVar3 = PTR_DAT_042304a8;
                  if ((uVar11 & 1) == 0) {
LAB_02712380:
                    thunk_FUN_01c273e8(PTR_DAT_04230a40);
                    uVar25 = thunk_FUN_01c496e0();
                    uVar12 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
                    FUN_032cd310(uVar25,uVar12,0);
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d37c(uVar25,param_2);
                  }
                  iVar24 = 0;
                  uVar8 = 0;
                  while( true ) {
                    lVar10 = *plVar26;
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar20 = *plVar26;
                    uVar1 = *(ushort *)(lVar20 + 0x135);
                    lVar10 = lVar20;
                    if ((uVar1 & 1) == 0) {
                      lVar20 = FUN_01c72394(lVar20);
                      uVar1 = *(ushort *)(*plVar26 + 0x135);
                      lVar10 = *plVar26;
                    }
                    pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar10 = FUN_01c72394(lVar10);
                    }
                    iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
                    if (iVar6 <= iVar24) goto LAB_02712040;
                    lVar10 = *plVar26;
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar20 = *plVar26;
                    uVar1 = *(ushort *)(lVar20 + 0x135);
                    lVar10 = lVar20;
                    if ((uVar1 & 1) == 0) {
                      lVar20 = FUN_01c72394(lVar20);
                      uVar1 = *(ushort *)(*plVar26 + 0x135);
                      lVar10 = *plVar26;
                    }
                    uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar10 = FUN_01c72394(lVar10);
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
                    local_80 = &local_6c;
                    puStack_78 = puVar22;
                    local_6c = iVar24;
                    (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
                    lVar10 = *plVar26;
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar10 + 0xc0) + 0x20),puVar22)
                    ;
                    if (plVar14 == (long *)0x0) goto LAB_02712378;
                    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                    puVar19 = (ulong *)thunk_FUN_01c49834();
                    uVar13 = *puVar19;
                    uVar11 = uVar13 & 0x7ff0000000000000;
                    if ((-uVar13 & 0x7ff0000000000000) != 0) {
                      uVar11 = uVar13;
                    }
                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar8 = FUN_0322441c(uVar8,(uint)(uVar11 >> 0x20) ^ (uint)uVar11,0);
                    iVar24 = iVar24 + 1;
                  }
                }
                else {
                  iVar24 = 0;
                  uVar8 = 0;
                  while( true ) {
                    lVar10 = *plVar26;
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar20 = *plVar26;
                    uVar1 = *(ushort *)(lVar20 + 0x135);
                    lVar10 = lVar20;
                    if ((uVar1 & 1) == 0) {
                      lVar20 = FUN_01c72394(lVar20);
                      uVar1 = *(ushort *)(*plVar26 + 0x135);
                      lVar10 = *plVar26;
                    }
                    pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar10 = FUN_01c72394(lVar10);
                    }
                    iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
                    if (iVar6 <= iVar24) goto LAB_02712040;
                    lVar10 = *plVar26;
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar20 = *plVar26;
                    uVar1 = *(ushort *)(lVar20 + 0x135);
                    lVar10 = lVar20;
                    if ((uVar1 & 1) == 0) {
                      lVar20 = FUN_01c72394(lVar20);
                      uVar1 = *(ushort *)(*plVar26 + 0x135);
                      lVar10 = *plVar26;
                    }
                    uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar10 = FUN_01c72394(lVar10);
                    }
                    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
                    local_80 = &local_6c;
                    puStack_78 = puVar22;
                    local_6c = iVar24;
                    (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
                    lVar10 = *plVar26;
                    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                      lVar10 = FUN_01c72394();
                    }
                    plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar10 + 0xc0) + 0x20),puVar22)
                    ;
                    if (plVar14 == (long *)0x0) goto LAB_02712378;
                    if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
                    puVar17 = (undefined4 *)thunk_FUN_01c49834();
                    local_ac = *puVar17;
                    uVar7 = FUN_032e3e6c(&local_ac,0);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)puVar5);
                    }
                    uVar8 = FUN_0322441c(uVar8,uVar7,0);
                    iVar24 = iVar24 + 1;
                  }
                }
              }
              else {
                iVar24 = 0;
                uVar8 = 0;
                while( true ) {
                  lVar10 = *plVar26;
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar20 = *plVar26;
                  uVar1 = *(ushort *)(lVar20 + 0x135);
                  lVar10 = lVar20;
                  if ((uVar1 & 1) == 0) {
                    lVar20 = FUN_01c72394(lVar20);
                    uVar1 = *(ushort *)(*plVar26 + 0x135);
                    lVar10 = *plVar26;
                  }
                  pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar10 = FUN_01c72394(lVar10);
                  }
                  iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
                  if (iVar6 <= iVar24) goto LAB_02712040;
                  lVar10 = *plVar26;
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar20 = *plVar26;
                  uVar1 = *(ushort *)(lVar20 + 0x135);
                  lVar10 = lVar20;
                  if ((uVar1 & 1) == 0) {
                    lVar20 = FUN_01c72394(lVar20);
                    uVar1 = *(ushort *)(*plVar26 + 0x135);
                    lVar10 = *plVar26;
                  }
                  uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar10 = FUN_01c72394(lVar10);
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
                  local_80 = &local_6c;
                  puStack_78 = puVar22;
                  local_6c = iVar24;
                  (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
                  lVar10 = *plVar26;
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                        (*(long *)(lVar10 + 0xc0) + 0x20),puVar22);
                  if (plVar14 == (long *)0x0) goto LAB_02712378;
                  if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
                  puVar18 = (undefined8 *)thunk_FUN_01c49834();
                  local_a8 = *puVar18;
                  uVar7 = FUN_032d0404(&local_a8,0);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar5);
                  }
                  uVar8 = FUN_0322441c(uVar8,uVar7,0);
                  iVar24 = iVar24 + 1;
                }
              }
            }
            else {
              iVar24 = 0;
              uVar8 = 0;
              while( true ) {
                lVar10 = *plVar26;
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar20 = *plVar26;
                uVar1 = *(ushort *)(lVar20 + 0x135);
                lVar10 = lVar20;
                if ((uVar1 & 1) == 0) {
                  lVar20 = FUN_01c72394(lVar20);
                  uVar1 = *(ushort *)(*plVar26 + 0x135);
                  lVar10 = *plVar26;
                }
                pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar10 = FUN_01c72394(lVar10);
                }
                iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
                if (iVar6 <= iVar24) goto LAB_02712040;
                lVar10 = *plVar26;
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar20 = *plVar26;
                uVar1 = *(ushort *)(lVar20 + 0x135);
                lVar10 = lVar20;
                if ((uVar1 & 1) == 0) {
                  lVar20 = FUN_01c72394(lVar20);
                  uVar1 = *(ushort *)(*plVar26 + 0x135);
                  lVar10 = *plVar26;
                }
                uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
                if ((uVar1 & 1) == 0) {
                  lVar10 = FUN_01c72394(lVar10);
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
                local_80 = &local_6c;
                puStack_78 = puVar22;
                local_6c = iVar24;
                (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
                lVar10 = *plVar26;
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                      (*(long *)(lVar10 + 0xc0) + 0x20),puVar22);
                if (plVar14 == (long *)0x0) goto LAB_02712378;
                if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
                puVar18 = (undefined8 *)thunk_FUN_01c49834();
                local_a0 = *puVar18;
                uVar7 = FUN_032eee44(&local_a0,0);
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar5);
                }
                uVar8 = FUN_0322441c(uVar8,uVar7,0);
                iVar24 = iVar24 + 1;
              }
            }
          }
          else {
            iVar24 = 0;
            uVar8 = 0;
            while( true ) {
              lVar10 = *plVar26;
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar20 = *plVar26;
              uVar1 = *(ushort *)(lVar20 + 0x135);
              lVar10 = lVar20;
              if ((uVar1 & 1) == 0) {
                lVar20 = FUN_01c72394(lVar20);
                uVar1 = *(ushort *)(*plVar26 + 0x135);
                lVar10 = *plVar26;
              }
              pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar10 = FUN_01c72394(lVar10);
              }
              iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
              if (iVar6 <= iVar24) goto LAB_02712040;
              lVar10 = *plVar26;
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar20 = *plVar26;
              uVar1 = *(ushort *)(lVar20 + 0x135);
              lVar10 = lVar20;
              if ((uVar1 & 1) == 0) {
                lVar20 = FUN_01c72394(lVar20);
                uVar1 = *(ushort *)(*plVar26 + 0x135);
                lVar10 = *plVar26;
              }
              uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar10 = FUN_01c72394(lVar10);
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
              local_80 = &local_6c;
              puStack_78 = puVar22;
              local_6c = iVar24;
              (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
              lVar10 = *plVar26;
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),
                                                   puVar22);
              if (plVar14 == (long *)0x0) goto LAB_02712378;
              if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
              puVar17 = (undefined4 *)thunk_FUN_01c49834();
              local_98 = CONCAT44(local_98._4_4_,*puVar17);
              uVar7 = FUN_032cf300(&local_98,0);
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar5);
              }
              uVar8 = FUN_0322441c(uVar8,uVar7,0);
              iVar24 = iVar24 + 1;
            }
          }
        }
        else {
          iVar24 = 0;
          uVar8 = 0;
          while( true ) {
            lVar10 = *plVar26;
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar20 = *plVar26;
            uVar1 = *(ushort *)(lVar20 + 0x135);
            lVar10 = lVar20;
            if ((uVar1 & 1) == 0) {
              lVar20 = FUN_01c72394(lVar20);
              uVar1 = *(ushort *)(*plVar26 + 0x135);
              lVar10 = *plVar26;
            }
            pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar10 = FUN_01c72394(lVar10);
            }
            iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
            if (iVar6 <= iVar24) goto LAB_02712040;
            lVar10 = *plVar26;
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar20 = *plVar26;
            uVar1 = *(ushort *)(lVar20 + 0x135);
            lVar10 = lVar20;
            if ((uVar1 & 1) == 0) {
              lVar20 = FUN_01c72394(lVar20);
              uVar1 = *(ushort *)(*plVar26 + 0x135);
              lVar10 = *plVar26;
            }
            uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar10 = FUN_01c72394(lVar10);
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
            local_80 = &local_6c;
            puStack_78 = puVar22;
            local_6c = iVar24;
            (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
            lVar10 = *plVar26;
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),
                                                 puVar22);
            if (plVar14 == (long *)0x0) goto LAB_02712378;
            if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
            puVar17 = (undefined4 *)thunk_FUN_01c49834();
            local_98 = CONCAT44(*puVar17,(undefined4)local_98);
            uVar7 = FUN_032edfe0((long)&local_98 + 4,0);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar5);
            }
            uVar8 = FUN_0322441c(uVar8,uVar7,0);
            iVar24 = iVar24 + 1;
          }
        }
      }
      else {
        iVar24 = 0;
        uVar8 = 0;
        while( true ) {
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar20 = *plVar26;
          uVar1 = *(ushort *)(lVar20 + 0x135);
          lVar10 = lVar20;
          if ((uVar1 & 1) == 0) {
            lVar20 = FUN_01c72394(lVar20);
            uVar1 = *(ushort *)(*plVar26 + 0x135);
            lVar10 = *plVar26;
          }
          pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
          }
          iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
          if (iVar6 <= iVar24) goto LAB_02712040;
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar20 = *plVar26;
          uVar1 = *(ushort *)(lVar20 + 0x135);
          lVar10 = lVar20;
          if ((uVar1 & 1) == 0) {
            lVar20 = FUN_01c72394(lVar20);
            uVar1 = *(ushort *)(*plVar26 + 0x135);
            lVar10 = *plVar26;
          }
          uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
          local_80 = &local_6c;
          puStack_78 = puVar22;
          local_6c = iVar24;
          (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
          lVar10 = *plVar26;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),
                                               puVar22);
          if (plVar14 == (long *)0x0) goto LAB_02712378;
          if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
          puVar16 = (undefined2 *)thunk_FUN_01c49834();
          local_90[0] = *puVar16;
          uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(local_90,0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar5);
          }
          uVar8 = FUN_0322441c(uVar8,uVar7,0);
          iVar24 = iVar24 + 1;
        }
      }
    }
    else {
      iVar24 = 0;
      uVar8 = 0;
      while( true ) {
        lVar10 = *plVar26;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar20 = *plVar26;
        uVar1 = *(ushort *)(lVar20 + 0x135);
        lVar10 = lVar20;
        if ((uVar1 & 1) == 0) {
          lVar20 = FUN_01c72394(lVar20);
          uVar1 = *(ushort *)(*plVar26 + 0x135);
          lVar10 = *plVar26;
        }
        pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01c72394(lVar10);
        }
        iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
        if (iVar6 <= iVar24) goto LAB_02712040;
        lVar10 = *plVar26;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar20 = *plVar26;
        uVar1 = *(ushort *)(lVar20 + 0x135);
        lVar10 = lVar20;
        if ((uVar1 & 1) == 0) {
          lVar20 = FUN_01c72394(lVar20);
          uVar1 = *(ushort *)(*plVar26 + 0x135);
          lVar10 = *plVar26;
        }
        uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01c72394(lVar10);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
        local_80 = &local_6c;
        puStack_78 = puVar22;
        local_6c = iVar24;
        (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
        lVar10 = *plVar26;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),
                                             puVar22);
        if (plVar14 == (long *)0x0) goto LAB_02712378;
        if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
        puVar15 = (undefined1 *)thunk_FUN_01c49834();
        local_88[0] = *puVar15;
        uVar7 = FUN_032e2e50(local_88,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar5);
        }
        uVar8 = FUN_0322441c(uVar8,uVar7,0);
        iVar24 = iVar24 + 1;
      }
    }
  }
  else {
    iVar24 = 0;
    uVar8 = 0;
    while( true ) {
      lVar10 = *plVar26;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar20 = *plVar26;
      uVar1 = *(ushort *)(lVar20 + 0x135);
      lVar10 = lVar20;
      if ((uVar1 & 1) == 0) {
        lVar20 = FUN_01c72394(lVar20);
        uVar1 = *(ushort *)(*plVar26 + 0x135);
        lVar10 = *plVar26;
      }
      pcVar23 = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_01c72394(lVar10);
      }
      iVar6 = (*pcVar23)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
      if (iVar6 <= iVar24) goto LAB_02712040;
      lVar10 = *plVar26;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar20 = *plVar26;
      uVar1 = *(ushort *)(lVar20 + 0x135);
      lVar10 = lVar20;
      if ((uVar1 & 1) == 0) {
        lVar20 = FUN_01c72394(lVar20);
        uVar1 = *(ushort *)(*plVar26 + 0x135);
        lVar10 = *plVar26;
      }
      uVar25 = **(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_01c72394(lVar10);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
      local_80 = &local_6c;
      puStack_78 = puVar22;
      local_6c = iVar24;
      (**(code **)(lVar10 + 0x10))(uVar25,lVar10,param_1,&local_80,puVar22);
      lVar10 = *plVar26;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      plVar14 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20),puVar22)
      ;
      if (plVar14 == (long *)0x0) goto LAB_02712378;
      if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) break;
      puVar15 = (undefined1 *)thunk_FUN_01c49834();
      local_84[0] = *puVar15;
      uVar7 = FUN_0324b7a0(local_84,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar5);
      }
      uVar8 = FUN_0322441c(uVar8,uVar7,0);
      iVar24 = iVar24 + 1;
    }
  }
LAB_0271237c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


