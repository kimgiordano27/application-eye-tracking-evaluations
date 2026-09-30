/*
FUNCTION_NAME: System.Comparison<ushort>$$Invoke
ENTRY_POINT: 0270fef0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_21;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


undefined4 System_Comparison<ushort>__Invoke(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *unaff_x19;
  long unaff_x20;
  long lVar21;
  long unaff_x21;
  code *pcVar22;
  int iVar23;
  undefined8 uVar24;
  long unaff_x24;
  long *plVar25;
  long unaff_x29;
  
  FUN_01c5d288();
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
  *(undefined1 *)(unaff_x20 + 0x7de) = 1;
  plVar25 = (long *)(unaff_x21 + 0x20);
  lVar9 = *plVar25;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01c72394();
  }
  puVar2 = PTR_DAT_0422fb28;
  lVar21 = (long)&stack0x00000000 -
           ((ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x20) + 0xfc) + 0xf & 0x1fffffff0);
  *(undefined1 *)(unaff_x29 + -0x24) = 0;
  *(undefined1 *)(unaff_x29 + -0x28) = 0;
  *(undefined2 *)(unaff_x29 + -0x2c) = 0;
  *(undefined2 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x4c) = 0;
  uVar10 = FUN_03224414(0);
  lVar9 = *plVar25;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01c72394(lVar9);
  }
  puVar3 = PTR_DAT_0422fb48;
  uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar24 = FUN_032e04b8(uVar24,0);
  uVar11 = FUN_032e04b8(*(undefined8 *)puVar3,0);
  uVar12 = FUN_032e935c(uVar24,uVar11,0);
  puVar4 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar3 = PTR_DAT_042303a0;
  if ((uVar10 & 1) == 0) {
    if ((uVar12 & 1) == 0) {
      lVar9 = *plVar25;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar24 = FUN_032e04b8(uVar24,0);
      uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
      uVar10 = FUN_032e935c(uVar24,uVar11,0);
      if ((uVar10 & 1) == 0) {
        lVar9 = *plVar25;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01c72394();
        }
        uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar24 = FUN_032e04b8(uVar24,0);
        uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
        uVar10 = FUN_032e935c(uVar24,uVar11,0);
        if ((uVar10 & 1) == 0) {
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar24 = FUN_032e04b8(uVar24,0);
          uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
          uVar10 = FUN_032e935c(uVar24,uVar11,0);
          if ((uVar10 & 1) == 0) {
            lVar9 = *plVar25;
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394();
            }
            uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar2);
            }
            uVar24 = FUN_032e04b8(uVar24,0);
            uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
            uVar10 = FUN_032e935c(uVar24,uVar11,0);
            if ((uVar10 & 1) == 0) {
              lVar9 = *plVar25;
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01c72394();
              }
              uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar2);
              }
              uVar24 = FUN_032e04b8(uVar24,0);
              uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
              uVar10 = FUN_032e935c(uVar24,uVar11,0);
              if ((uVar10 & 1) == 0) {
                lVar9 = *plVar25;
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01c72394();
                }
                uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar2);
                }
                uVar24 = FUN_032e04b8(uVar24,0);
                uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
                uVar10 = FUN_032e935c(uVar24,uVar11,0);
                if ((uVar10 & 1) == 0) {
                  lVar9 = *plVar25;
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar2);
                  }
                  uVar24 = FUN_032e04b8(uVar24,0);
                  uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
                  uVar10 = FUN_032e935c(uVar24,uVar11,0);
                  if ((uVar10 & 1) == 0) {
                    lVar9 = *plVar25;
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)puVar2);
                    }
                    uVar24 = FUN_032e04b8(uVar24,0);
                    uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                    uVar10 = FUN_032e935c(uVar24,uVar11,0);
                    if ((uVar10 & 1) == 0) {
                      lVar9 = *plVar25;
                      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                        lVar9 = FUN_01c72394();
                      }
                      uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)puVar2);
                      }
                      uVar24 = FUN_032e04b8(uVar24,0);
                      uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                      uVar10 = FUN_032e935c(uVar24,uVar11,0);
                      if ((uVar10 & 1) == 0) goto LAB_02712380;
                      uVar12 = *unaff_x19;
                      uVar10 = uVar12 & 0x7ff0000000000000;
                      if ((-uVar12 & 0x7ff0000000000000) != 0) {
                        uVar10 = uVar12;
                      }
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      uVar12 = FUN_0322441c(0,(uint)(uVar10 >> 0x20) ^ (uint)uVar10,0);
                      uVar20 = unaff_x19[1];
                      uVar10 = uVar20 & 0x7ff0000000000000;
                      if ((-uVar20 & 0x7ff0000000000000) != 0) {
                        uVar10 = uVar20;
                      }
                      uVar8 = (uint)(uVar10 >> 0x20) ^ (uint)uVar10;
                    }
                    else {
                      uVar7 = FUN_032e3e6c();
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                          );
                      }
                      uVar7 = FUN_0322441c(0,uVar7,0);
                      uVar6 = FUN_032e3e6c((long)unaff_x19 + 4,0);
                      uVar7 = FUN_0322441c(uVar7,uVar6,0);
                      uVar6 = FUN_032e3e6c(unaff_x19 + 1,0);
                      uVar12 = FUN_0322441c(uVar7,uVar6,0);
                      uVar12 = uVar12 & 0xffffffff;
                      uVar8 = FUN_032e3e6c((long)unaff_x19 + 0xc,0);
                    }
                  }
                  else {
                    uVar7 = FUN_032d0404();
                    if (*(int *)(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)
                                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                        );
                    }
                    uVar12 = FUN_0322441c(0,uVar7,0);
                    uVar12 = uVar12 & 0xffffffff;
                    uVar8 = FUN_032d0404(unaff_x19 + 1,0);
                  }
                }
                else {
                  uVar7 = FUN_032eee44();
                  if (*(int *)(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                      );
                  }
                  uVar12 = FUN_0322441c(0,uVar7,0);
                  uVar12 = uVar12 & 0xffffffff;
                  uVar8 = FUN_032eee44(unaff_x19 + 1,0);
                }
              }
              else {
                uVar7 = FUN_032cf300();
                if (*(int *)(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)
                                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                    );
                }
                uVar7 = FUN_0322441c(0,uVar7,0);
                uVar6 = FUN_032cf300((long)unaff_x19 + 4,0);
                uVar7 = FUN_0322441c(uVar7,uVar6,0);
                uVar6 = FUN_032cf300(unaff_x19 + 1,0);
                uVar12 = FUN_0322441c(uVar7,uVar6,0);
                uVar12 = uVar12 & 0xffffffff;
                uVar8 = FUN_032cf300((long)unaff_x19 + 0xc,0);
              }
            }
            else {
              uVar7 = FUN_032edfe0();
              if (*(int *)(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  );
              }
              uVar7 = FUN_0322441c(0,uVar7,0);
              uVar6 = FUN_032edfe0((long)unaff_x19 + 4,0);
              uVar7 = FUN_0322441c(uVar7,uVar6,0);
              uVar6 = FUN_032edfe0(unaff_x19 + 1,0);
              uVar12 = FUN_0322441c(uVar7,uVar6,0);
              uVar12 = uVar12 & 0xffffffff;
              uVar8 = FUN_032edfe0((long)unaff_x19 + 0xc,0);
            }
          }
          else {
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value();
            if (*(int *)(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                );
            }
            uVar7 = FUN_0322441c(0,uVar7,0);
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 2,0);
            uVar7 = FUN_0322441c(uVar7,uVar6,0);
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 4,0);
            uVar7 = FUN_0322441c(uVar7,uVar6,0);
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 6,0);
            uVar7 = FUN_0322441c(uVar7,uVar6,0);
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(unaff_x19 + 1,0);
            uVar7 = FUN_0322441c(uVar7,uVar6,0);
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 10,0);
            uVar7 = FUN_0322441c(uVar7,uVar6,0);
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 0xc,0);
            uVar12 = FUN_0322441c(uVar7,uVar6,0);
            uVar12 = uVar12 & 0xffffffff;
            uVar8 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 0xe,0);
          }
        }
        else {
          uVar7 = FUN_032ed11c();
          if (*(int *)(*(long *)
                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              );
          }
          uVar7 = FUN_0322441c(0,uVar7,0);
          uVar6 = FUN_032ed11c((long)unaff_x19 + 2,0);
          uVar7 = FUN_0322441c(uVar7,uVar6,0);
          uVar6 = FUN_032ed11c((long)unaff_x19 + 4,0);
          uVar7 = FUN_0322441c(uVar7,uVar6,0);
          uVar6 = FUN_032ed11c((long)unaff_x19 + 6,0);
          uVar7 = FUN_0322441c(uVar7,uVar6,0);
          uVar6 = FUN_032ed11c(unaff_x19 + 1,0);
          uVar7 = FUN_0322441c(uVar7,uVar6,0);
          uVar6 = FUN_032ed11c((long)unaff_x19 + 10,0);
          uVar7 = FUN_0322441c(uVar7,uVar6,0);
          uVar6 = FUN_032ed11c((long)unaff_x19 + 0xc,0);
          uVar12 = FUN_0322441c(uVar7,uVar6,0);
          uVar12 = uVar12 & 0xffffffff;
          uVar8 = FUN_032ed11c((long)unaff_x19 + 0xe,0);
        }
      }
      else {
        uVar7 = FUN_032e2e50();
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            );
        }
        uVar7 = FUN_0322441c(0,uVar7,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 1,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 2,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 3,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 4,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 5,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 6,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 7,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50(unaff_x19 + 1,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 9,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 10,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 0xb,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 0xc,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 0xd,0);
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        uVar6 = FUN_032e2e50((long)unaff_x19 + 0xe,0);
        uVar12 = FUN_0322441c(uVar7,uVar6,0);
        uVar12 = uVar12 & 0xffffffff;
        uVar8 = FUN_032e2e50((long)unaff_x19 + 0xf,0);
      }
    }
    else {
      uVar7 = FUN_0324b7a0();
      if (*(int *)(*(long *)
                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          );
      }
      uVar7 = FUN_0322441c(0,uVar7,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 1,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 2,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 3,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 4,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 5,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 6,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 7,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0(unaff_x19 + 1,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 9,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 10,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 0xb,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 0xc,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 0xd,0);
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      uVar6 = FUN_0324b7a0((long)unaff_x19 + 0xe,0);
      uVar12 = FUN_0322441c(uVar7,uVar6,0);
      uVar12 = uVar12 & 0xffffffff;
      uVar8 = FUN_0324b7a0((long)unaff_x19 + 0xf,0);
    }
    uVar7 = FUN_0322441c(uVar12,uVar8,0);
LAB_02712040:
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((uVar12 & 1) == 0) {
    lVar9 = *plVar25;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394();
    }
    uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar24 = FUN_032e04b8(uVar24,0);
    uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
    uVar10 = FUN_032e935c(uVar24,uVar11,0);
    puVar4 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar3 = PTR_DAT_04230588;
    if ((uVar10 & 1) == 0) {
      lVar9 = *plVar25;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar24 = FUN_032e04b8(uVar24,0);
      uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
      uVar10 = FUN_032e935c(uVar24,uVar11,0);
      puVar4 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar3 = PTR_DAT_042306a0;
      if ((uVar10 & 1) != 0) {
        iVar23 = 0;
        uVar7 = 0;
        do {
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar19 = *plVar25;
          uVar1 = *(ushort *)(lVar19 + 0x135);
          lVar9 = lVar19;
          if ((uVar1 & 1) == 0) {
            lVar19 = FUN_01c72394(lVar19);
            uVar1 = *(ushort *)(*plVar25 + 0x135);
            lVar9 = *plVar25;
          }
          pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_01c72394(lVar9);
          }
          iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
          if (iVar5 <= iVar23) goto LAB_02712040;
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar19 = *plVar25;
          uVar1 = *(ushort *)(lVar19 + 0x135);
          lVar9 = lVar19;
          if ((uVar1 & 1) == 0) {
            lVar19 = FUN_01c72394(lVar19);
            uVar1 = *(ushort *)(*plVar25 + 0x135);
            lVar9 = *plVar25;
          }
          uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_01c72394(lVar9);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
          *(int *)(unaff_x29 + -0xc) = iVar23;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(long *)(unaff_x29 + -0x18) = lVar21;
          (**(code **)(lVar9 + 0x10))(uVar24);
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20),
                                               lVar21);
          if (plVar13 == (long *)0x0) {
LAB_02712378:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_0271237c;
          puVar15 = (undefined2 *)thunk_FUN_01c49834();
          *(undefined2 *)(unaff_x29 + -0x2c) = *puVar15;
          uVar6 = FUN_032ed11c(unaff_x29 + -0x2c,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar4);
          }
          uVar7 = FUN_0322441c(uVar7,uVar6,0);
          iVar23 = iVar23 + 1;
        } while( true );
      }
      lVar9 = *plVar25;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar24 = FUN_032e04b8(uVar24,0);
      uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
      uVar10 = FUN_032e935c(uVar24,uVar11,0);
      puVar4 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar3 = PTR_DAT_042305d0;
      if ((uVar10 & 1) == 0) {
        lVar9 = *plVar25;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01c72394();
        }
        uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar24 = FUN_032e04b8(uVar24,0);
        uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
        uVar10 = FUN_032e935c(uVar24,uVar11,0);
        puVar4 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
        puVar3 = PTR_DAT_042305a8;
        if ((uVar10 & 1) == 0) {
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar24 = FUN_032e04b8(uVar24,0);
          uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
          uVar10 = FUN_032e935c(uVar24,uVar11,0);
          puVar4 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
          puVar3 = PTR_DAT_0422fd80;
          if ((uVar10 & 1) == 0) {
            lVar9 = *plVar25;
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394();
            }
            uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar2);
            }
            uVar24 = FUN_032e04b8(uVar24,0);
            uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
            uVar10 = FUN_032e935c(uVar24,uVar11,0);
            puVar4 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
            puVar3 = PTR_DAT_04230670;
            if ((uVar10 & 1) == 0) {
              lVar9 = *plVar25;
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01c72394();
              }
              uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar2);
              }
              uVar24 = FUN_032e04b8(uVar24,0);
              uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
              uVar10 = FUN_032e935c(uVar24,uVar11,0);
              puVar4 = 
              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
              puVar3 = PTR_DAT_04230478;
              if ((uVar10 & 1) == 0) {
                lVar9 = *plVar25;
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01c72394();
                }
                uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar2);
                }
                uVar24 = FUN_032e04b8(uVar24,0);
                uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                uVar10 = FUN_032e935c(uVar24,uVar11,0);
                puVar4 = 
                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                puVar3 = PTR_DAT_042304e0;
                if ((uVar10 & 1) == 0) {
                  lVar9 = *plVar25;
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar2);
                  }
                  uVar24 = FUN_032e04b8(uVar24,0);
                  uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                  uVar10 = FUN_032e935c(uVar24,uVar11,0);
                  puVar3 = 
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                  puVar2 = PTR_DAT_042304a8;
                  if ((uVar10 & 1) == 0) {
LAB_02712380:
                    thunk_FUN_01c273e8(PTR_DAT_04230a40);
                    uVar24 = thunk_FUN_01c496e0();
                    uVar11 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
                    FUN_032cd310(uVar24,uVar11,0);
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d37c(uVar24);
                  }
                  iVar23 = 0;
                  uVar7 = 0;
                  while( true ) {
                    lVar9 = *plVar25;
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar19 = *plVar25;
                    uVar1 = *(ushort *)(lVar19 + 0x135);
                    lVar9 = lVar19;
                    if ((uVar1 & 1) == 0) {
                      lVar19 = FUN_01c72394(lVar19);
                      uVar1 = *(ushort *)(*plVar25 + 0x135);
                      lVar9 = *plVar25;
                    }
                    pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar9 = FUN_01c72394(lVar9);
                    }
                    iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
                    if (iVar5 <= iVar23) goto LAB_02712040;
                    lVar9 = *plVar25;
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar19 = *plVar25;
                    uVar1 = *(ushort *)(lVar19 + 0x135);
                    lVar9 = lVar19;
                    if ((uVar1 & 1) == 0) {
                      lVar19 = FUN_01c72394(lVar19);
                      uVar1 = *(ushort *)(*plVar25 + 0x135);
                      lVar9 = *plVar25;
                    }
                    uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar9 = FUN_01c72394(lVar9);
                    }
                    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
                    *(int *)(unaff_x29 + -0xc) = iVar23;
                    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                    *(long *)(unaff_x29 + -0x18) = lVar21;
                    (**(code **)(lVar9 + 0x10))(uVar24);
                    lVar9 = *plVar25;
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar9 + 0xc0) + 0x20),lVar21);
                    if (plVar13 == (long *)0x0) goto LAB_02712378;
                    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                    puVar18 = (ulong *)thunk_FUN_01c49834();
                    uVar12 = *puVar18;
                    uVar10 = uVar12 & 0x7ff0000000000000;
                    if ((-uVar12 & 0x7ff0000000000000) != 0) {
                      uVar10 = uVar12;
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar7 = FUN_0322441c(uVar7,(uint)(uVar10 >> 0x20) ^ (uint)uVar10,0);
                    iVar23 = iVar23 + 1;
                  }
                }
                else {
                  iVar23 = 0;
                  uVar7 = 0;
                  while( true ) {
                    lVar9 = *plVar25;
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar19 = *plVar25;
                    uVar1 = *(ushort *)(lVar19 + 0x135);
                    lVar9 = lVar19;
                    if ((uVar1 & 1) == 0) {
                      lVar19 = FUN_01c72394(lVar19);
                      uVar1 = *(ushort *)(*plVar25 + 0x135);
                      lVar9 = *plVar25;
                    }
                    pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar9 = FUN_01c72394(lVar9);
                    }
                    iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
                    if (iVar5 <= iVar23) goto LAB_02712040;
                    lVar9 = *plVar25;
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar19 = *plVar25;
                    uVar1 = *(ushort *)(lVar19 + 0x135);
                    lVar9 = lVar19;
                    if ((uVar1 & 1) == 0) {
                      lVar19 = FUN_01c72394(lVar19);
                      uVar1 = *(ushort *)(*plVar25 + 0x135);
                      lVar9 = *plVar25;
                    }
                    uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar9 = FUN_01c72394(lVar9);
                    }
                    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
                    *(int *)(unaff_x29 + -0xc) = iVar23;
                    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                    *(long *)(unaff_x29 + -0x18) = lVar21;
                    (**(code **)(lVar9 + 0x10))(uVar24);
                    lVar9 = *plVar25;
                    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                      lVar9 = FUN_01c72394();
                    }
                    plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar9 + 0xc0) + 0x20),lVar21);
                    if (plVar13 == (long *)0x0) goto LAB_02712378;
                    if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                    puVar16 = (undefined4 *)thunk_FUN_01c49834();
                    *(undefined4 *)(unaff_x29 + -0x4c) = *puVar16;
                    uVar6 = FUN_032e3e6c(unaff_x29 + -0x4c,0);
                    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)puVar4);
                    }
                    uVar7 = FUN_0322441c(uVar7,uVar6,0);
                    iVar23 = iVar23 + 1;
                  }
                }
              }
              else {
                iVar23 = 0;
                uVar7 = 0;
                while( true ) {
                  lVar9 = *plVar25;
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar19 = *plVar25;
                  uVar1 = *(ushort *)(lVar19 + 0x135);
                  lVar9 = lVar19;
                  if ((uVar1 & 1) == 0) {
                    lVar19 = FUN_01c72394(lVar19);
                    uVar1 = *(ushort *)(*plVar25 + 0x135);
                    lVar9 = *plVar25;
                  }
                  pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar9 = FUN_01c72394(lVar9);
                  }
                  iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
                  if (iVar5 <= iVar23) goto LAB_02712040;
                  lVar9 = *plVar25;
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar19 = *plVar25;
                  uVar1 = *(ushort *)(lVar19 + 0x135);
                  lVar9 = lVar19;
                  if ((uVar1 & 1) == 0) {
                    lVar19 = FUN_01c72394(lVar19);
                    uVar1 = *(ushort *)(*plVar25 + 0x135);
                    lVar9 = *plVar25;
                  }
                  uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar9 = FUN_01c72394(lVar9);
                  }
                  lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
                  *(int *)(unaff_x29 + -0xc) = iVar23;
                  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                  *(long *)(unaff_x29 + -0x18) = lVar21;
                  (**(code **)(lVar9 + 0x10))(uVar24);
                  lVar9 = *plVar25;
                  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    lVar9 = FUN_01c72394();
                  }
                  plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                        (*(long *)(lVar9 + 0xc0) + 0x20),lVar21);
                  if (plVar13 == (long *)0x0) goto LAB_02712378;
                  if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                  puVar17 = (undefined8 *)thunk_FUN_01c49834();
                  *(undefined8 *)(unaff_x29 + -0x48) = *puVar17;
                  uVar6 = FUN_032d0404(unaff_x29 + -0x48,0);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar4);
                  }
                  uVar7 = FUN_0322441c(uVar7,uVar6,0);
                  iVar23 = iVar23 + 1;
                }
              }
            }
            else {
              iVar23 = 0;
              uVar7 = 0;
              while( true ) {
                lVar9 = *plVar25;
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01c72394();
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01c72394();
                }
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar19 = *plVar25;
                uVar1 = *(ushort *)(lVar19 + 0x135);
                lVar9 = lVar19;
                if ((uVar1 & 1) == 0) {
                  lVar19 = FUN_01c72394(lVar19);
                  uVar1 = *(ushort *)(*plVar25 + 0x135);
                  lVar9 = *plVar25;
                }
                pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar9 = FUN_01c72394(lVar9);
                }
                iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
                if (iVar5 <= iVar23) goto LAB_02712040;
                lVar9 = *plVar25;
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01c72394();
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01c72394();
                }
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar19 = *plVar25;
                uVar1 = *(ushort *)(lVar19 + 0x135);
                lVar9 = lVar19;
                if ((uVar1 & 1) == 0) {
                  lVar19 = FUN_01c72394(lVar19);
                  uVar1 = *(ushort *)(*plVar25 + 0x135);
                  lVar9 = *plVar25;
                }
                uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
                if ((uVar1 & 1) == 0) {
                  lVar9 = FUN_01c72394(lVar9);
                }
                lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
                *(int *)(unaff_x29 + -0xc) = iVar23;
                *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                *(long *)(unaff_x29 + -0x18) = lVar21;
                (**(code **)(lVar9 + 0x10))(uVar24);
                lVar9 = *plVar25;
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_01c72394();
                }
                plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20)
                                                     ,lVar21);
                if (plVar13 == (long *)0x0) goto LAB_02712378;
                if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
                puVar17 = (undefined8 *)thunk_FUN_01c49834();
                *(undefined8 *)(unaff_x29 + -0x40) = *puVar17;
                uVar6 = FUN_032eee44(unaff_x29 + -0x40,0);
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar4);
                }
                uVar7 = FUN_0322441c(uVar7,uVar6,0);
                iVar23 = iVar23 + 1;
              }
            }
          }
          else {
            iVar23 = 0;
            uVar7 = 0;
            while( true ) {
              lVar9 = *plVar25;
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01c72394();
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01c72394();
              }
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar19 = *plVar25;
              uVar1 = *(ushort *)(lVar19 + 0x135);
              lVar9 = lVar19;
              if ((uVar1 & 1) == 0) {
                lVar19 = FUN_01c72394(lVar19);
                uVar1 = *(ushort *)(*plVar25 + 0x135);
                lVar9 = *plVar25;
              }
              pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar9 = FUN_01c72394(lVar9);
              }
              iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
              if (iVar5 <= iVar23) goto LAB_02712040;
              lVar9 = *plVar25;
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01c72394();
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01c72394();
              }
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar19 = *plVar25;
              uVar1 = *(ushort *)(lVar19 + 0x135);
              lVar9 = lVar19;
              if ((uVar1 & 1) == 0) {
                lVar19 = FUN_01c72394(lVar19);
                uVar1 = *(ushort *)(*plVar25 + 0x135);
                lVar9 = *plVar25;
              }
              uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar9 = FUN_01c72394(lVar9);
              }
              lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
              *(int *)(unaff_x29 + -0xc) = iVar23;
              *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
              *(long *)(unaff_x29 + -0x18) = lVar21;
              (**(code **)(lVar9 + 0x10))(uVar24);
              lVar9 = *plVar25;
              if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                lVar9 = FUN_01c72394();
              }
              plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20),
                                                   lVar21);
              if (plVar13 == (long *)0x0) goto LAB_02712378;
              if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
              puVar16 = (undefined4 *)thunk_FUN_01c49834();
              *(undefined4 *)(unaff_x29 + -0x38) = *puVar16;
              uVar6 = FUN_032cf300(unaff_x29 + -0x38,0);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar4);
              }
              uVar7 = FUN_0322441c(uVar7,uVar6,0);
              iVar23 = iVar23 + 1;
            }
          }
        }
        else {
          iVar23 = 0;
          uVar7 = 0;
          while( true ) {
            lVar9 = *plVar25;
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394();
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394();
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar19 = *plVar25;
            uVar1 = *(ushort *)(lVar19 + 0x135);
            lVar9 = lVar19;
            if ((uVar1 & 1) == 0) {
              lVar19 = FUN_01c72394(lVar19);
              uVar1 = *(ushort *)(*plVar25 + 0x135);
              lVar9 = *plVar25;
            }
            pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar9 = FUN_01c72394(lVar9);
            }
            iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
            if (iVar5 <= iVar23) goto LAB_02712040;
            lVar9 = *plVar25;
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394();
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394();
            }
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar19 = *plVar25;
            uVar1 = *(ushort *)(lVar19 + 0x135);
            lVar9 = lVar19;
            if ((uVar1 & 1) == 0) {
              lVar19 = FUN_01c72394(lVar19);
              uVar1 = *(ushort *)(*plVar25 + 0x135);
              lVar9 = *plVar25;
            }
            uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar9 = FUN_01c72394(lVar9);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
            *(int *)(unaff_x29 + -0xc) = iVar23;
            *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
            *(long *)(unaff_x29 + -0x18) = lVar21;
            (**(code **)(lVar9 + 0x10))(uVar24);
            lVar9 = *plVar25;
            if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
              lVar9 = FUN_01c72394();
            }
            plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20),
                                                 lVar21);
            if (plVar13 == (long *)0x0) goto LAB_02712378;
            if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
            puVar16 = (undefined4 *)thunk_FUN_01c49834();
            *(undefined4 *)(unaff_x29 + -0x34) = *puVar16;
            uVar6 = FUN_032edfe0(unaff_x29 + -0x34,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar4);
            }
            uVar7 = FUN_0322441c(uVar7,uVar6,0);
            iVar23 = iVar23 + 1;
          }
        }
      }
      else {
        iVar23 = 0;
        uVar7 = 0;
        while( true ) {
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar19 = *plVar25;
          uVar1 = *(ushort *)(lVar19 + 0x135);
          lVar9 = lVar19;
          if ((uVar1 & 1) == 0) {
            lVar19 = FUN_01c72394(lVar19);
            uVar1 = *(ushort *)(*plVar25 + 0x135);
            lVar9 = *plVar25;
          }
          pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_01c72394(lVar9);
          }
          iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
          if (iVar5 <= iVar23) goto LAB_02712040;
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar19 = *plVar25;
          uVar1 = *(ushort *)(lVar19 + 0x135);
          lVar9 = lVar19;
          if ((uVar1 & 1) == 0) {
            lVar19 = FUN_01c72394(lVar19);
            uVar1 = *(ushort *)(*plVar25 + 0x135);
            lVar9 = *plVar25;
          }
          uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_01c72394(lVar9);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
          *(int *)(unaff_x29 + -0xc) = iVar23;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(long *)(unaff_x29 + -0x18) = lVar21;
          (**(code **)(lVar9 + 0x10))(uVar24);
          lVar9 = *plVar25;
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01c72394();
          }
          plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20),
                                               lVar21);
          if (plVar13 == (long *)0x0) goto LAB_02712378;
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
          puVar15 = (undefined2 *)thunk_FUN_01c49834();
          *(undefined2 *)(unaff_x29 + -0x30) = *puVar15;
          uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(unaff_x29 + -0x30,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar4);
          }
          uVar7 = FUN_0322441c(uVar7,uVar6,0);
          iVar23 = iVar23 + 1;
        }
      }
    }
    else {
      iVar23 = 0;
      uVar7 = 0;
      while( true ) {
        lVar9 = *plVar25;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01c72394();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01c72394();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar19 = *plVar25;
        uVar1 = *(ushort *)(lVar19 + 0x135);
        lVar9 = lVar19;
        if ((uVar1 & 1) == 0) {
          lVar19 = FUN_01c72394(lVar19);
          uVar1 = *(ushort *)(*plVar25 + 0x135);
          lVar9 = *plVar25;
        }
        pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_01c72394(lVar9);
        }
        iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
        if (iVar5 <= iVar23) goto LAB_02712040;
        lVar9 = *plVar25;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01c72394();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01c72394();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar19 = *plVar25;
        uVar1 = *(ushort *)(lVar19 + 0x135);
        lVar9 = lVar19;
        if ((uVar1 & 1) == 0) {
          lVar19 = FUN_01c72394(lVar19);
          uVar1 = *(ushort *)(*plVar25 + 0x135);
          lVar9 = *plVar25;
        }
        uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_01c72394(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
        *(int *)(unaff_x29 + -0xc) = iVar23;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(long *)(unaff_x29 + -0x18) = lVar21;
        (**(code **)(lVar9 + 0x10))(uVar24);
        lVar9 = *plVar25;
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01c72394();
        }
        plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20),lVar21)
        ;
        if (plVar13 == (long *)0x0) goto LAB_02712378;
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
        puVar14 = (undefined1 *)thunk_FUN_01c49834();
        *(undefined1 *)(unaff_x29 + -0x28) = *puVar14;
        uVar6 = FUN_032e2e50(unaff_x29 + -0x28,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar4);
        }
        uVar7 = FUN_0322441c(uVar7,uVar6,0);
        iVar23 = iVar23 + 1;
      }
    }
  }
  else {
    iVar23 = 0;
    uVar7 = 0;
    while( true ) {
      lVar9 = *plVar25;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar19 = *plVar25;
      uVar1 = *(ushort *)(lVar19 + 0x135);
      lVar9 = lVar19;
      if ((uVar1 & 1) == 0) {
        lVar19 = FUN_01c72394(lVar19);
        uVar1 = *(ushort *)(*plVar25 + 0x135);
        lVar9 = *plVar25;
      }
      pcVar22 = (code *)**(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_01c72394(lVar9);
      }
      iVar5 = (*pcVar22)(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x28));
      if (iVar5 <= iVar23) goto LAB_02712040;
      lVar9 = *plVar25;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar19 = *plVar25;
      uVar1 = *(ushort *)(lVar19 + 0x135);
      lVar9 = lVar19;
      if ((uVar1 & 1) == 0) {
        lVar19 = FUN_01c72394(lVar19);
        uVar1 = *(ushort *)(*plVar25 + 0x135);
        lVar9 = *plVar25;
      }
      uVar24 = **(undefined8 **)(*(long *)(lVar19 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_01c72394(lVar9);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = iVar23;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(long *)(unaff_x29 + -0x18) = lVar21;
      (**(code **)(lVar9 + 0x10))(uVar24);
      lVar9 = *plVar25;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01c72394();
      }
      plVar13 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x20),lVar21);
      if (plVar13 == (long *)0x0) goto LAB_02712378;
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) break;
      puVar14 = (undefined1 *)thunk_FUN_01c49834();
      *(undefined1 *)(unaff_x29 + -0x24) = *puVar14;
      uVar6 = FUN_0324b7a0(unaff_x29 + -0x24,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar4);
      }
      uVar7 = FUN_0322441c(uVar7,uVar6,0);
      iVar23 = iVar23 + 1;
    }
  }
LAB_0271237c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


