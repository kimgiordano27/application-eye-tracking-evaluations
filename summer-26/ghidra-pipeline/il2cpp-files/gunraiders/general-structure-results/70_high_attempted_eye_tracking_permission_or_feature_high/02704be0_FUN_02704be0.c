/*
FUNCTION_NAME: FUN_02704be0
ENTRY_POINT: 02704be0
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


undefined4 FUN_02704be0(ulong *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50 [2];
  undefined2 local_4c [2];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  if ((DAT_045307d1 & 1) == 0) {
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
    DAT_045307d1 = 1;
  }
  puVar1 = PTR_DAT_0422fb28;
  local_44[0] = 0;
  local_48[0] = 0;
  local_4c[0] = 0;
  local_50[0] = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  local_6c = 0;
  uVar7 = FUN_03224414(0);
  plVar21 = (long *)(param_2 + 0x20);
  lVar16 = *plVar21;
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_01c72394(lVar16);
  }
  puVar2 = PTR_DAT_0422fb48;
  uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar19 = FUN_032e04b8(uVar19,0);
  uVar8 = FUN_032e04b8(*(undefined8 *)puVar2,0);
  uVar9 = FUN_032e935c(uVar19,uVar8,0);
  puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar2 = PTR_DAT_042303a0;
  if ((uVar7 & 1) == 0) {
    if ((uVar9 & 1) == 0) {
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar1);
      }
      uVar19 = FUN_032e04b8(uVar19,0);
      uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
      uVar7 = FUN_032e935c(uVar19,uVar8,0);
      if ((uVar7 & 1) == 0) {
        lVar16 = *plVar21;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar1);
        }
        uVar19 = FUN_032e04b8(uVar19,0);
        uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
        uVar7 = FUN_032e935c(uVar19,uVar8,0);
        if ((uVar7 & 1) == 0) {
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar1);
          }
          uVar19 = FUN_032e04b8(uVar19,0);
          uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
          uVar7 = FUN_032e935c(uVar19,uVar8,0);
          if ((uVar7 & 1) == 0) {
            lVar16 = *plVar21;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar1);
            }
            uVar19 = FUN_032e04b8(uVar19,0);
            uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
            uVar7 = FUN_032e935c(uVar19,uVar8,0);
            if ((uVar7 & 1) == 0) {
              lVar16 = *plVar21;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar1);
              }
              uVar19 = FUN_032e04b8(uVar19,0);
              uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
              uVar7 = FUN_032e935c(uVar19,uVar8,0);
              if ((uVar7 & 1) == 0) {
                lVar16 = *plVar21;
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar1);
                }
                uVar19 = FUN_032e04b8(uVar19,0);
                uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
                uVar7 = FUN_032e935c(uVar19,uVar8,0);
                if ((uVar7 & 1) == 0) {
                  lVar16 = *plVar21;
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar1);
                  }
                  uVar19 = FUN_032e04b8(uVar19,0);
                  uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
                  uVar7 = FUN_032e935c(uVar19,uVar8,0);
                  if ((uVar7 & 1) == 0) {
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)puVar1);
                    }
                    uVar19 = FUN_032e04b8(uVar19,0);
                    uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                    uVar7 = FUN_032e935c(uVar19,uVar8,0);
                    if ((uVar7 & 1) == 0) {
                      lVar16 = *plVar21;
                      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                        lVar16 = FUN_01c72394();
                      }
                      uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)puVar1);
                      }
                      uVar19 = FUN_032e04b8(uVar19,0);
                      uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                      uVar7 = FUN_032e935c(uVar19,uVar8,0);
                      if ((uVar7 & 1) == 0) goto LAB_02706ea0;
                      uVar9 = *param_1;
                      uVar7 = uVar9 & 0x7ff0000000000000;
                      if ((-uVar9 & 0x7ff0000000000000) != 0) {
                        uVar7 = uVar9;
                      }
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      uVar9 = FUN_0322441c(0,(uint)(uVar7 >> 0x20) ^ (uint)uVar7,0);
                      uVar17 = param_1[1];
                      uVar7 = uVar17 & 0x7ff0000000000000;
                      if ((-uVar17 & 0x7ff0000000000000) != 0) {
                        uVar7 = uVar17;
                      }
                      uVar6 = (uint)(uVar7 >> 0x20) ^ (uint)uVar7;
                    }
                    else {
                      uVar5 = FUN_032e3e6c(param_1,0);
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                          );
                      }
                      uVar5 = FUN_0322441c(0,uVar5,0);
                      uVar4 = FUN_032e3e6c((long)param_1 + 4,0);
                      uVar5 = FUN_0322441c(uVar5,uVar4,0);
                      uVar4 = FUN_032e3e6c(param_1 + 1,0);
                      uVar9 = FUN_0322441c(uVar5,uVar4,0);
                      uVar9 = uVar9 & 0xffffffff;
                      uVar6 = FUN_032e3e6c((long)param_1 + 0xc,0);
                    }
                  }
                  else {
                    uVar5 = FUN_032d0404(param_1,0);
                    if (*(int *)(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)
                                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                        );
                    }
                    uVar9 = FUN_0322441c(0,uVar5,0);
                    uVar9 = uVar9 & 0xffffffff;
                    uVar6 = FUN_032d0404(param_1 + 1,0);
                  }
                }
                else {
                  uVar5 = FUN_032eee44(param_1,0);
                  if (*(int *)(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                      );
                  }
                  uVar9 = FUN_0322441c(0,uVar5,0);
                  uVar9 = uVar9 & 0xffffffff;
                  uVar6 = FUN_032eee44(param_1 + 1,0);
                }
              }
              else {
                uVar5 = FUN_032cf300(param_1,0);
                if (*(int *)(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)
                                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                    );
                }
                uVar5 = FUN_0322441c(0,uVar5,0);
                uVar4 = FUN_032cf300((long)param_1 + 4,0);
                uVar5 = FUN_0322441c(uVar5,uVar4,0);
                uVar4 = FUN_032cf300(param_1 + 1,0);
                uVar9 = FUN_0322441c(uVar5,uVar4,0);
                uVar9 = uVar9 & 0xffffffff;
                uVar6 = FUN_032cf300((long)param_1 + 0xc,0);
              }
            }
            else {
              uVar5 = FUN_032edfe0(param_1,0);
              if (*(int *)(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  );
              }
              uVar5 = FUN_0322441c(0,uVar5,0);
              uVar4 = FUN_032edfe0((long)param_1 + 4,0);
              uVar5 = FUN_0322441c(uVar5,uVar4,0);
              uVar4 = FUN_032edfe0(param_1 + 1,0);
              uVar9 = FUN_0322441c(uVar5,uVar4,0);
              uVar9 = uVar9 & 0xffffffff;
              uVar6 = FUN_032edfe0((long)param_1 + 0xc,0);
            }
          }
          else {
            uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(param_1,0);
            if (*(int *)(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                );
            }
            uVar5 = FUN_0322441c(0,uVar5,0);
            uVar4 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 2,0);
            uVar5 = FUN_0322441c(uVar5,uVar4,0);
            uVar4 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 4,0);
            uVar5 = FUN_0322441c(uVar5,uVar4,0);
            uVar4 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 6,0);
            uVar5 = FUN_0322441c(uVar5,uVar4,0);
            uVar4 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(param_1 + 1,0);
            uVar5 = FUN_0322441c(uVar5,uVar4,0);
            uVar4 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 10,0);
            uVar5 = FUN_0322441c(uVar5,uVar4,0);
            uVar4 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 0xc,0);
            uVar9 = FUN_0322441c(uVar5,uVar4,0);
            uVar9 = uVar9 & 0xffffffff;
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)param_1 + 0xe,0);
          }
        }
        else {
          uVar5 = FUN_032ed11c(param_1,0);
          if (*(int *)(*(long *)
                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              );
          }
          uVar5 = FUN_0322441c(0,uVar5,0);
          uVar4 = FUN_032ed11c((long)param_1 + 2,0);
          uVar5 = FUN_0322441c(uVar5,uVar4,0);
          uVar4 = FUN_032ed11c((long)param_1 + 4,0);
          uVar5 = FUN_0322441c(uVar5,uVar4,0);
          uVar4 = FUN_032ed11c((long)param_1 + 6,0);
          uVar5 = FUN_0322441c(uVar5,uVar4,0);
          uVar4 = FUN_032ed11c(param_1 + 1,0);
          uVar5 = FUN_0322441c(uVar5,uVar4,0);
          uVar4 = FUN_032ed11c((long)param_1 + 10,0);
          uVar5 = FUN_0322441c(uVar5,uVar4,0);
          uVar4 = FUN_032ed11c((long)param_1 + 0xc,0);
          uVar9 = FUN_0322441c(uVar5,uVar4,0);
          uVar9 = uVar9 & 0xffffffff;
          uVar6 = FUN_032ed11c((long)param_1 + 0xe,0);
        }
      }
      else {
        uVar5 = FUN_032e2e50(param_1,0);
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            );
        }
        uVar5 = FUN_0322441c(0,uVar5,0);
        uVar4 = FUN_032e2e50((long)param_1 + 1,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 2,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 3,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 4,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 5,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 6,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 7,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50(param_1 + 1,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 9,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 10,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 0xb,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 0xc,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 0xd,0);
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        uVar4 = FUN_032e2e50((long)param_1 + 0xe,0);
        uVar9 = FUN_0322441c(uVar5,uVar4,0);
        uVar9 = uVar9 & 0xffffffff;
        uVar6 = FUN_032e2e50((long)param_1 + 0xf,0);
      }
    }
    else {
      uVar5 = FUN_0324b7a0(param_1,0);
      if (*(int *)(*(long *)
                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          );
      }
      uVar5 = FUN_0322441c(0,uVar5,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 1,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 2,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 3,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 4,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 5,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 6,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 7,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0(param_1 + 1,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 9,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 10,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 0xb,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 0xc,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 0xd,0);
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      uVar4 = FUN_0324b7a0((long)param_1 + 0xe,0);
      uVar9 = FUN_0322441c(uVar5,uVar4,0);
      uVar9 = uVar9 & 0xffffffff;
      uVar6 = FUN_0324b7a0((long)param_1 + 0xf,0);
    }
    uVar5 = FUN_0322441c(uVar9,uVar6,0);
    return uVar5;
  }
  if ((uVar9 & 1) == 0) {
    lVar16 = *plVar21;
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_01c72394();
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    uVar19 = FUN_032e04b8(uVar19,0);
    uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
    uVar7 = FUN_032e935c(uVar19,uVar8,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_04230588;
    if ((uVar7 & 1) == 0) {
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar1);
      }
      uVar19 = FUN_032e04b8(uVar19,0);
      uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
      uVar7 = FUN_032e935c(uVar19,uVar8,0);
      puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar2 = PTR_DAT_042306a0;
      if ((uVar7 & 1) != 0) {
        iVar18 = 0;
        uVar5 = 0;
        do {
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
          lVar16 = *(long *)(lVar20 + 0x20);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar16 = *(long *)(lVar20 + 0x20);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (**(int **)(lVar16 + 0xb8) <= iVar18) {
            return uVar5;
          }
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          local_78 = FUN_027038d0(param_1,iVar18,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20),
                                               &local_78);
          if (plVar10 == (long *)0x0) {
LAB_02706e98:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_02706e9c;
          puVar12 = (undefined2 *)thunk_FUN_01c49834();
          local_4c[0] = *puVar12;
          uVar4 = FUN_032ed11c(local_4c,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar5 = FUN_0322441c(uVar5,uVar4,0);
          iVar18 = iVar18 + 1;
        } while( true );
      }
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar1);
      }
      uVar19 = FUN_032e04b8(uVar19,0);
      uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
      uVar7 = FUN_032e935c(uVar19,uVar8,0);
      puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar2 = PTR_DAT_042305d0;
      if ((uVar7 & 1) == 0) {
        lVar16 = *plVar21;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar1);
        }
        uVar19 = FUN_032e04b8(uVar19,0);
        uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
        uVar7 = FUN_032e935c(uVar19,uVar8,0);
        puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
        puVar2 = PTR_DAT_042305a8;
        if ((uVar7 & 1) == 0) {
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar1);
          }
          uVar19 = FUN_032e04b8(uVar19,0);
          uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
          uVar7 = FUN_032e935c(uVar19,uVar8,0);
          puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
          puVar2 = PTR_DAT_0422fd80;
          if ((uVar7 & 1) == 0) {
            lVar16 = *plVar21;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar1);
            }
            uVar19 = FUN_032e04b8(uVar19,0);
            uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
            uVar7 = FUN_032e935c(uVar19,uVar8,0);
            puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
            puVar2 = PTR_DAT_04230670;
            if ((uVar7 & 1) == 0) {
              lVar16 = *plVar21;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar1);
              }
              uVar19 = FUN_032e04b8(uVar19,0);
              uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
              uVar7 = FUN_032e935c(uVar19,uVar8,0);
              puVar3 = 
              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
              puVar2 = PTR_DAT_04230478;
              if ((uVar7 & 1) == 0) {
                lVar16 = *plVar21;
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar1);
                }
                uVar19 = FUN_032e04b8(uVar19,0);
                uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                uVar7 = FUN_032e935c(uVar19,uVar8,0);
                puVar3 = 
                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                puVar2 = PTR_DAT_042304e0;
                if ((uVar7 & 1) == 0) {
                  lVar16 = *plVar21;
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  uVar19 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar1);
                  }
                  uVar19 = FUN_032e04b8(uVar19,0);
                  uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                  uVar7 = FUN_032e935c(uVar19,uVar8,0);
                  puVar2 = 
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                  puVar1 = PTR_DAT_042304a8;
                  if ((uVar7 & 1) == 0) {
LAB_02706ea0:
                    thunk_FUN_01c273e8(PTR_DAT_04230a40);
                    uVar19 = thunk_FUN_01c496e0();
                    uVar8 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
                    FUN_032cd310(uVar19,uVar8,0);
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d37c(uVar19,param_2);
                  }
                  iVar18 = 0;
                  uVar5 = 0;
                  while( true ) {
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                    lVar16 = *(long *)(lVar20 + 0x20);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar16 = *(long *)(lVar20 + 0x20);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (**(int **)(lVar16 + 0xb8) <= iVar18) {
                      return uVar5;
                    }
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    local_78 = FUN_027038d0(param_1,iVar18,
                                            *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar16 + 0xc0) + 0x20),
                                                         &local_78);
                    if (plVar10 == (long *)0x0) goto LAB_02706e98;
                    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) break;
                    puVar15 = (ulong *)thunk_FUN_01c49834();
                    uVar9 = *puVar15;
                    uVar7 = uVar9 & 0x7ff0000000000000;
                    if ((-uVar9 & 0x7ff0000000000000) != 0) {
                      uVar7 = uVar9;
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar5 = FUN_0322441c(uVar5,(uint)(uVar7 >> 0x20) ^ (uint)uVar7,0);
                    iVar18 = iVar18 + 1;
                  }
                }
                else {
                  iVar18 = 0;
                  uVar5 = 0;
                  while( true ) {
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                    lVar16 = *(long *)(lVar20 + 0x20);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar16 = *(long *)(lVar20 + 0x20);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (**(int **)(lVar16 + 0xb8) <= iVar18) {
                      return uVar5;
                    }
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    local_78 = FUN_027038d0(param_1,iVar18,
                                            *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
                    lVar16 = *plVar21;
                    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                      lVar16 = FUN_01c72394();
                    }
                    plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar16 + 0xc0) + 0x20),
                                                         &local_78);
                    if (plVar10 == (long *)0x0) goto LAB_02706e98;
                    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                    puVar13 = (undefined4 *)thunk_FUN_01c49834();
                    local_6c = *puVar13;
                    uVar4 = FUN_032e3e6c(&local_6c,0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)puVar3);
                    }
                    uVar5 = FUN_0322441c(uVar5,uVar4,0);
                    iVar18 = iVar18 + 1;
                  }
                }
              }
              else {
                iVar18 = 0;
                uVar5 = 0;
                while( true ) {
                  lVar16 = *plVar21;
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar16 = *plVar21;
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                  lVar16 = *(long *)(lVar20 + 0x20);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar16 = *(long *)(lVar20 + 0x20);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  if (**(int **)(lVar16 + 0xb8) <= iVar18) {
                    return uVar5;
                  }
                  lVar16 = *plVar21;
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar16 = *plVar21;
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  local_78 = FUN_027038d0(param_1,iVar18,
                                          *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
                  lVar16 = *plVar21;
                  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_01c72394();
                  }
                  plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                        (*(long *)(lVar16 + 0xc0) + 0x20),&local_78)
                  ;
                  if (plVar10 == (long *)0x0) goto LAB_02706e98;
                  if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                  puVar14 = (undefined8 *)thunk_FUN_01c49834();
                  local_68 = *puVar14;
                  uVar4 = FUN_032d0404(&local_68,0);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar3);
                  }
                  uVar5 = FUN_0322441c(uVar5,uVar4,0);
                  iVar18 = iVar18 + 1;
                }
              }
            }
            else {
              iVar18 = 0;
              uVar5 = 0;
              while( true ) {
                lVar16 = *plVar21;
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar16 = *plVar21;
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
                lVar16 = *(long *)(lVar20 + 0x20);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar16 = *(long *)(lVar20 + 0x20);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                if (**(int **)(lVar16 + 0xb8) <= iVar18) {
                  return uVar5;
                }
                lVar16 = *plVar21;
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar16 = *plVar21;
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                local_78 = FUN_027038d0(param_1,iVar18,
                                        *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
                lVar16 = *plVar21;
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  lVar16 = FUN_01c72394();
                }
                plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                      (*(long *)(lVar16 + 0xc0) + 0x20),&local_78);
                if (plVar10 == (long *)0x0) goto LAB_02706e98;
                if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                puVar14 = (undefined8 *)thunk_FUN_01c49834();
                local_60 = *puVar14;
                uVar4 = FUN_032eee44(&local_60,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar3);
                }
                uVar5 = FUN_0322441c(uVar5,uVar4,0);
                iVar18 = iVar18 + 1;
              }
            }
          }
          else {
            iVar18 = 0;
            uVar5 = 0;
            while( true ) {
              lVar16 = *plVar21;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar16 = *plVar21;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
              lVar16 = *(long *)(lVar20 + 0x20);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar16 = *(long *)(lVar20 + 0x20);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              if (**(int **)(lVar16 + 0xb8) <= iVar18) {
                return uVar5;
              }
              lVar16 = *plVar21;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              if (*(int *)(lVar16 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar16 = *plVar21;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              local_78 = FUN_027038d0(param_1,iVar18,
                                      *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
              lVar16 = *plVar21;
              if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                lVar16 = FUN_01c72394();
              }
              plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20),
                                                   &local_78);
              if (plVar10 == (long *)0x0) goto LAB_02706e98;
              if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar13 = (undefined4 *)thunk_FUN_01c49834();
              local_58 = CONCAT44(local_58._4_4_,*puVar13);
              uVar4 = FUN_032cf300(&local_58,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar3);
              }
              uVar5 = FUN_0322441c(uVar5,uVar4,0);
              iVar18 = iVar18 + 1;
            }
          }
        }
        else {
          iVar18 = 0;
          uVar5 = 0;
          while( true ) {
            lVar16 = *plVar21;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar16 = *plVar21;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
            lVar16 = *(long *)(lVar20 + 0x20);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar16 = *(long *)(lVar20 + 0x20);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            if (**(int **)(lVar16 + 0xb8) <= iVar18) {
              return uVar5;
            }
            lVar16 = *plVar21;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar16 = *plVar21;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            local_78 = FUN_027038d0(param_1,iVar18,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40))
            ;
            lVar16 = *plVar21;
            if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
              lVar16 = FUN_01c72394();
            }
            plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20),
                                                 &local_78);
            if (plVar10 == (long *)0x0) goto LAB_02706e98;
            if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
            puVar13 = (undefined4 *)thunk_FUN_01c49834();
            local_58 = CONCAT44(*puVar13,(undefined4)local_58);
            uVar4 = FUN_032edfe0((long)&local_58 + 4,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar3);
            }
            uVar5 = FUN_0322441c(uVar5,uVar4,0);
            iVar18 = iVar18 + 1;
          }
        }
      }
      else {
        iVar18 = 0;
        uVar5 = 0;
        while( true ) {
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
          lVar16 = *(long *)(lVar20 + 0x20);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar16 = *(long *)(lVar20 + 0x20);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (**(int **)(lVar16 + 0xb8) <= iVar18) {
            return uVar5;
          }
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          local_78 = FUN_027038d0(param_1,iVar18,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
          lVar16 = *plVar21;
          if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_01c72394();
          }
          plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20),
                                               &local_78);
          if (plVar10 == (long *)0x0) goto LAB_02706e98;
          if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
          puVar12 = (undefined2 *)thunk_FUN_01c49834();
          local_50[0] = *puVar12;
          uVar4 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(local_50,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar5 = FUN_0322441c(uVar5,uVar4,0);
          iVar18 = iVar18 + 1;
        }
      }
    }
    else {
      iVar18 = 0;
      uVar5 = 0;
      while( true ) {
        lVar16 = *plVar21;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar16 = *plVar21;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
        lVar16 = *(long *)(lVar20 + 0x20);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar16 = *(long *)(lVar20 + 0x20);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        if (**(int **)(lVar16 + 0xb8) <= iVar18) {
          return uVar5;
        }
        lVar16 = *plVar21;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar16 = *plVar21;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        local_78 = FUN_027038d0(param_1,iVar18,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
        lVar16 = *plVar21;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01c72394();
        }
        plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20),
                                             &local_78);
        if (plVar10 == (long *)0x0) goto LAB_02706e98;
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
        puVar11 = (undefined1 *)thunk_FUN_01c49834();
        local_48[0] = *puVar11;
        uVar4 = FUN_032e2e50(local_48,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar5 = FUN_0322441c(uVar5,uVar4,0);
        iVar18 = iVar18 + 1;
      }
    }
  }
  else {
    iVar18 = 0;
    uVar5 = 0;
    while( true ) {
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      lVar20 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x28);
      lVar16 = *(long *)(lVar20 + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar16 = *(long *)(lVar20 + 0x20);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      if (**(int **)(lVar16 + 0xb8) <= iVar18) {
        return uVar5;
      }
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xc0) + 8);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      local_78 = FUN_027038d0(param_1,iVar18,*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x40));
      lVar16 = *plVar21;
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_01c72394();
      }
      plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x20),
                                           &local_78);
      if (plVar10 == (long *)0x0) goto LAB_02706e98;
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
      puVar11 = (undefined1 *)thunk_FUN_01c49834();
      local_44[0] = *puVar11;
      uVar4 = FUN_0324b7a0(local_44,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar5 = FUN_0322441c(uVar5,uVar4,0);
      iVar18 = iVar18 + 1;
    }
  }
LAB_02706e9c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


