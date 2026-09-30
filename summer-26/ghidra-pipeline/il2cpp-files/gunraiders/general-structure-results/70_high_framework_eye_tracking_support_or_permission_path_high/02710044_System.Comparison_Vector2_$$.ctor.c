/*
FUNCTION_NAME: System.Comparison<Vector2>$$.ctor
ENTRY_POINT: 02710044
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;attempted_use
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4 System_Comparison<Vector2>___ctor(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  code *pcVar20;
  int iVar21;
  undefined8 uVar22;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  *(undefined2 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x4c) = 0;
  uVar8 = FUN_03224414();
  lVar17 = *unaff_x25;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = FUN_01c72394(lVar17);
  }
  puVar2 = PTR_DAT_0422fb48;
  uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar22 = FUN_032e04b8(uVar22,0);
  uVar9 = FUN_032e04b8(*(undefined8 *)puVar2,0);
  uVar10 = FUN_032e935c(uVar22,uVar9,0);
  puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar2 = PTR_DAT_042303a0;
  if ((uVar8 & 1) == 0) {
    if ((uVar10 & 1) == 0) {
      lVar17 = *unaff_x25;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar22 = FUN_032e04b8(uVar22,0);
      uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
      uVar8 = FUN_032e935c(uVar22,uVar9,0);
      if ((uVar8 & 1) == 0) {
        lVar17 = *unaff_x25;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01c72394();
        }
        uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        uVar22 = FUN_032e04b8(uVar22,0);
        uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
        uVar8 = FUN_032e935c(uVar22,uVar9,0);
        if ((uVar8 & 1) == 0) {
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x26);
          }
          uVar22 = FUN_032e04b8(uVar22,0);
          uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
          uVar8 = FUN_032e935c(uVar22,uVar9,0);
          if ((uVar8 & 1) == 0) {
            lVar17 = *unaff_x25;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_01c72394();
            }
            uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x26);
            }
            uVar22 = FUN_032e04b8(uVar22,0);
            uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
            uVar8 = FUN_032e935c(uVar22,uVar9,0);
            if ((uVar8 & 1) == 0) {
              lVar17 = *unaff_x25;
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_01c72394();
              }
              uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*unaff_x26);
              }
              uVar22 = FUN_032e04b8(uVar22,0);
              uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
              uVar8 = FUN_032e935c(uVar22,uVar9,0);
              if ((uVar8 & 1) == 0) {
                lVar17 = *unaff_x25;
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  lVar17 = FUN_01c72394();
                }
                uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
                if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*unaff_x26);
                }
                uVar22 = FUN_032e04b8(uVar22,0);
                uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
                uVar8 = FUN_032e935c(uVar22,uVar9,0);
                if ((uVar8 & 1) == 0) {
                  lVar17 = *unaff_x25;
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_01c72394();
                  }
                  uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*unaff_x26);
                  }
                  uVar22 = FUN_032e04b8(uVar22,0);
                  uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
                  uVar8 = FUN_032e935c(uVar22,uVar9,0);
                  if ((uVar8 & 1) == 0) {
                    lVar17 = *unaff_x25;
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
                    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*unaff_x26);
                    }
                    uVar22 = FUN_032e04b8(uVar22,0);
                    uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                    uVar8 = FUN_032e935c(uVar22,uVar9,0);
                    if ((uVar8 & 1) == 0) {
                      lVar17 = *unaff_x25;
                      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                        lVar17 = FUN_01c72394();
                      }
                      uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
                      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*unaff_x26);
                      }
                      uVar22 = FUN_032e04b8(uVar22,0);
                      uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                      uVar8 = FUN_032e935c(uVar22,uVar9,0);
                      if ((uVar8 & 1) == 0) goto LAB_02712380;
                      uVar10 = *unaff_x19;
                      uVar8 = uVar10 & 0x7ff0000000000000;
                      if ((-uVar10 & 0x7ff0000000000000) != 0) {
                        uVar8 = uVar10;
                      }
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      uVar10 = FUN_0322441c(0,(uint)(uVar8 >> 0x20) ^ (uint)uVar8,0);
                      uVar19 = unaff_x19[1];
                      uVar8 = uVar19 & 0x7ff0000000000000;
                      if ((-uVar19 & 0x7ff0000000000000) != 0) {
                        uVar8 = uVar19;
                      }
                      uVar7 = (uint)(uVar8 >> 0x20) ^ (uint)uVar8;
                    }
                    else {
                      uVar6 = FUN_032e3e6c();
                      if (*(int *)(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8(*(long *)
                                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                          );
                      }
                      uVar6 = FUN_0322441c(0,uVar6,0);
                      uVar5 = FUN_032e3e6c((long)unaff_x19 + 4,0);
                      uVar6 = FUN_0322441c(uVar6,uVar5,0);
                      uVar5 = FUN_032e3e6c(unaff_x19 + 1,0);
                      uVar10 = FUN_0322441c(uVar6,uVar5,0);
                      uVar10 = uVar10 & 0xffffffff;
                      uVar7 = FUN_032e3e6c((long)unaff_x19 + 0xc,0);
                    }
                  }
                  else {
                    uVar6 = FUN_032d0404();
                    if (*(int *)(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)
                                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                        );
                    }
                    uVar10 = FUN_0322441c(0,uVar6,0);
                    uVar10 = uVar10 & 0xffffffff;
                    uVar7 = FUN_032d0404(unaff_x19 + 1,0);
                  }
                }
                else {
                  uVar6 = FUN_032eee44();
                  if (*(int *)(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                      );
                  }
                  uVar10 = FUN_0322441c(0,uVar6,0);
                  uVar10 = uVar10 & 0xffffffff;
                  uVar7 = FUN_032eee44(unaff_x19 + 1,0);
                }
              }
              else {
                uVar6 = FUN_032cf300();
                if (*(int *)(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)
                                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                    );
                }
                uVar6 = FUN_0322441c(0,uVar6,0);
                uVar5 = FUN_032cf300((long)unaff_x19 + 4,0);
                uVar6 = FUN_0322441c(uVar6,uVar5,0);
                uVar5 = FUN_032cf300(unaff_x19 + 1,0);
                uVar10 = FUN_0322441c(uVar6,uVar5,0);
                uVar10 = uVar10 & 0xffffffff;
                uVar7 = FUN_032cf300((long)unaff_x19 + 0xc,0);
              }
            }
            else {
              uVar6 = FUN_032edfe0();
              if (*(int *)(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)
                                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                  );
              }
              uVar6 = FUN_0322441c(0,uVar6,0);
              uVar5 = FUN_032edfe0((long)unaff_x19 + 4,0);
              uVar6 = FUN_0322441c(uVar6,uVar5,0);
              uVar5 = FUN_032edfe0(unaff_x19 + 1,0);
              uVar10 = FUN_0322441c(uVar6,uVar5,0);
              uVar10 = uVar10 & 0xffffffff;
              uVar7 = FUN_032edfe0((long)unaff_x19 + 0xc,0);
            }
          }
          else {
            uVar6 = Newtonsoft_Json_Converters_XElementWrapper__get_Value();
            if (*(int *)(*(long *)
                          VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                                );
            }
            uVar6 = FUN_0322441c(0,uVar6,0);
            uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 2,0);
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 4,0);
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 6,0);
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(unaff_x19 + 1,0);
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 10,0);
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 0xc,0);
            uVar10 = FUN_0322441c(uVar6,uVar5,0);
            uVar10 = uVar10 & 0xffffffff;
            uVar7 = Newtonsoft_Json_Converters_XElementWrapper__get_Value((long)unaff_x19 + 0xe,0);
          }
        }
        else {
          uVar6 = FUN_032ed11c();
          if (*(int *)(*(long *)
                        VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                              );
          }
          uVar6 = FUN_0322441c(0,uVar6,0);
          uVar5 = FUN_032ed11c((long)unaff_x19 + 2,0);
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          uVar5 = FUN_032ed11c((long)unaff_x19 + 4,0);
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          uVar5 = FUN_032ed11c((long)unaff_x19 + 6,0);
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          uVar5 = FUN_032ed11c(unaff_x19 + 1,0);
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          uVar5 = FUN_032ed11c((long)unaff_x19 + 10,0);
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          uVar5 = FUN_032ed11c((long)unaff_x19 + 0xc,0);
          uVar10 = FUN_0322441c(uVar6,uVar5,0);
          uVar10 = uVar10 & 0xffffffff;
          uVar7 = FUN_032ed11c((long)unaff_x19 + 0xe,0);
        }
      }
      else {
        uVar6 = FUN_032e2e50();
        if (*(int *)(*(long *)
                      VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                            );
        }
        uVar6 = FUN_0322441c(0,uVar6,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 1,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 2,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 3,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 4,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 5,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 6,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 7,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50(unaff_x19 + 1,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 9,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 10,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 0xb,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 0xc,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 0xd,0);
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        uVar5 = FUN_032e2e50((long)unaff_x19 + 0xe,0);
        uVar10 = FUN_0322441c(uVar6,uVar5,0);
        uVar10 = uVar10 & 0xffffffff;
        uVar7 = FUN_032e2e50((long)unaff_x19 + 0xf,0);
      }
    }
    else {
      uVar6 = FUN_0324b7a0();
      if (*(int *)(*(long *)
                    VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo
                          );
      }
      uVar6 = FUN_0322441c(0,uVar6,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 1,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 2,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 3,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 4,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 5,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 6,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 7,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0(unaff_x19 + 1,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 9,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 10,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 0xb,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 0xc,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 0xd,0);
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      uVar5 = FUN_0324b7a0((long)unaff_x19 + 0xe,0);
      uVar10 = FUN_0322441c(uVar6,uVar5,0);
      uVar10 = uVar10 & 0xffffffff;
      uVar7 = FUN_0324b7a0((long)unaff_x19 + 0xf,0);
    }
    uVar6 = FUN_0322441c(uVar10,uVar7,0);
LAB_02712040:
    if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if ((uVar10 & 1) == 0) {
    lVar17 = *unaff_x25;
    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
      lVar17 = FUN_01c72394();
    }
    uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar22 = FUN_032e04b8(uVar22,0);
    uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
    uVar8 = FUN_032e935c(uVar22,uVar9,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_04230588;
    if ((uVar8 & 1) == 0) {
      lVar17 = *unaff_x25;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar22 = FUN_032e04b8(uVar22,0);
      uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
      uVar8 = FUN_032e935c(uVar22,uVar9,0);
      puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar2 = PTR_DAT_042306a0;
      if ((uVar8 & 1) != 0) {
        iVar21 = 0;
        uVar6 = 0;
        do {
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar18 = *unaff_x25;
          uVar1 = *(ushort *)(lVar18 + 0x135);
          lVar17 = lVar18;
          if ((uVar1 & 1) == 0) {
            lVar18 = FUN_01c72394(lVar18);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar17 = *unaff_x25;
          }
          pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_01c72394(lVar17);
          }
          iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
          if (iVar4 <= iVar21) goto LAB_02712040;
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar18 = *unaff_x25;
          uVar1 = *(ushort *)(lVar18 + 0x135);
          lVar17 = lVar18;
          if ((uVar1 & 1) == 0) {
            lVar18 = FUN_01c72394(lVar18);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar17 = *unaff_x25;
          }
          uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_01c72394(lVar17);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
          *(int *)(unaff_x29 + -0xc) = iVar21;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
          (**(code **)(lVar17 + 0x10))(uVar22);
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x20));
          if (plVar11 == (long *)0x0) {
LAB_02712378:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_0271237c;
          puVar13 = (undefined2 *)thunk_FUN_01c49834();
          *(undefined2 *)(unaff_x29 + -0x2c) = *puVar13;
          uVar5 = FUN_032ed11c(unaff_x29 + -0x2c,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          iVar21 = iVar21 + 1;
        } while( true );
      }
      lVar17 = *unaff_x25;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar22 = FUN_032e04b8(uVar22,0);
      uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
      uVar8 = FUN_032e935c(uVar22,uVar9,0);
      puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar2 = PTR_DAT_042305d0;
      if ((uVar8 & 1) == 0) {
        lVar17 = *unaff_x25;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01c72394();
        }
        uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        uVar22 = FUN_032e04b8(uVar22,0);
        uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
        uVar8 = FUN_032e935c(uVar22,uVar9,0);
        puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
        puVar2 = PTR_DAT_042305a8;
        if ((uVar8 & 1) == 0) {
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x26);
          }
          uVar22 = FUN_032e04b8(uVar22,0);
          uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
          uVar8 = FUN_032e935c(uVar22,uVar9,0);
          puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
          puVar2 = PTR_DAT_0422fd80;
          if ((uVar8 & 1) == 0) {
            lVar17 = *unaff_x25;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_01c72394();
            }
            uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x26);
            }
            uVar22 = FUN_032e04b8(uVar22,0);
            uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
            uVar8 = FUN_032e935c(uVar22,uVar9,0);
            puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
            puVar2 = PTR_DAT_04230670;
            if ((uVar8 & 1) == 0) {
              lVar17 = *unaff_x25;
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_01c72394();
              }
              uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*unaff_x26);
              }
              uVar22 = FUN_032e04b8(uVar22,0);
              uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
              uVar8 = FUN_032e935c(uVar22,uVar9,0);
              puVar3 = 
              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
              puVar2 = PTR_DAT_04230478;
              if ((uVar8 & 1) == 0) {
                lVar17 = *unaff_x25;
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  lVar17 = FUN_01c72394();
                }
                uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
                if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*unaff_x26);
                }
                uVar22 = FUN_032e04b8(uVar22,0);
                uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                uVar8 = FUN_032e935c(uVar22,uVar9,0);
                puVar3 = 
                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                puVar2 = PTR_DAT_042304e0;
                if ((uVar8 & 1) == 0) {
                  lVar17 = *unaff_x25;
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_01c72394();
                  }
                  uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18);
                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*unaff_x26);
                  }
                  uVar22 = FUN_032e04b8(uVar22,0);
                  uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                  uVar8 = FUN_032e935c(uVar22,uVar9,0);
                  puVar3 = 
                  VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                  puVar2 = PTR_DAT_042304a8;
                  if ((uVar8 & 1) == 0) {
LAB_02712380:
                    thunk_FUN_01c273e8(PTR_DAT_04230a40);
                    uVar22 = thunk_FUN_01c496e0();
                    uVar9 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
                    FUN_032cd310(uVar22,uVar9,0);
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d37c(uVar22);
                  }
                  iVar21 = 0;
                  uVar6 = 0;
                  while( true ) {
                    lVar17 = *unaff_x25;
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar18 = *unaff_x25;
                    uVar1 = *(ushort *)(lVar18 + 0x135);
                    lVar17 = lVar18;
                    if ((uVar1 & 1) == 0) {
                      lVar18 = FUN_01c72394(lVar18);
                      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                      lVar17 = *unaff_x25;
                    }
                    pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_01c72394(lVar17);
                    }
                    iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
                    if (iVar4 <= iVar21) goto LAB_02712040;
                    lVar17 = *unaff_x25;
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar18 = *unaff_x25;
                    uVar1 = *(ushort *)(lVar18 + 0x135);
                    lVar17 = lVar18;
                    if ((uVar1 & 1) == 0) {
                      lVar18 = FUN_01c72394(lVar18);
                      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                      lVar17 = *unaff_x25;
                    }
                    uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_01c72394(lVar17);
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
                    *(int *)(unaff_x29 + -0xc) = iVar21;
                    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
                    (**(code **)(lVar17 + 0x10))(uVar22);
                    lVar17 = *unaff_x25;
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar17 + 0xc0) + 0x20));
                    if (plVar11 == (long *)0x0) goto LAB_02712378;
                    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                    puVar16 = (ulong *)thunk_FUN_01c49834();
                    uVar10 = *puVar16;
                    uVar8 = uVar10 & 0x7ff0000000000000;
                    if ((-uVar10 & 0x7ff0000000000000) != 0) {
                      uVar8 = uVar10;
                    }
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    uVar6 = FUN_0322441c(uVar6,(uint)(uVar8 >> 0x20) ^ (uint)uVar8,0);
                    iVar21 = iVar21 + 1;
                  }
                }
                else {
                  iVar21 = 0;
                  uVar6 = 0;
                  while( true ) {
                    lVar17 = *unaff_x25;
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar18 = *unaff_x25;
                    uVar1 = *(ushort *)(lVar18 + 0x135);
                    lVar17 = lVar18;
                    if ((uVar1 & 1) == 0) {
                      lVar18 = FUN_01c72394(lVar18);
                      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                      lVar17 = *unaff_x25;
                    }
                    pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_01c72394(lVar17);
                    }
                    iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
                    if (iVar4 <= iVar21) goto LAB_02712040;
                    lVar17 = *unaff_x25;
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar18 = *unaff_x25;
                    uVar1 = *(ushort *)(lVar18 + 0x135);
                    lVar17 = lVar18;
                    if ((uVar1 & 1) == 0) {
                      lVar18 = FUN_01c72394(lVar18);
                      uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                      lVar17 = *unaff_x25;
                    }
                    uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
                    if ((uVar1 & 1) == 0) {
                      lVar17 = FUN_01c72394(lVar17);
                    }
                    lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
                    *(int *)(unaff_x29 + -0xc) = iVar21;
                    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
                    (**(code **)(lVar17 + 0x10))(uVar22);
                    lVar17 = *unaff_x25;
                    if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                      lVar17 = FUN_01c72394();
                    }
                    plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                          (*(long *)(lVar17 + 0xc0) + 0x20));
                    if (plVar11 == (long *)0x0) goto LAB_02712378;
                    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                    puVar14 = (undefined4 *)thunk_FUN_01c49834();
                    *(undefined4 *)(unaff_x29 + -0x4c) = *puVar14;
                    uVar5 = FUN_032e3e6c(unaff_x29 + -0x4c,0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)puVar3);
                    }
                    uVar6 = FUN_0322441c(uVar6,uVar5,0);
                    iVar21 = iVar21 + 1;
                  }
                }
              }
              else {
                iVar21 = 0;
                uVar6 = 0;
                while( true ) {
                  lVar17 = *unaff_x25;
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_01c72394();
                  }
                  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_01c72394();
                  }
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar18 = *unaff_x25;
                  uVar1 = *(ushort *)(lVar18 + 0x135);
                  lVar17 = lVar18;
                  if ((uVar1 & 1) == 0) {
                    lVar18 = FUN_01c72394(lVar18);
                    uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                    lVar17 = *unaff_x25;
                  }
                  pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_01c72394(lVar17);
                  }
                  iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
                  if (iVar4 <= iVar21) goto LAB_02712040;
                  lVar17 = *unaff_x25;
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_01c72394();
                  }
                  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_01c72394();
                  }
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar18 = *unaff_x25;
                  uVar1 = *(ushort *)(lVar18 + 0x135);
                  lVar17 = lVar18;
                  if ((uVar1 & 1) == 0) {
                    lVar18 = FUN_01c72394(lVar18);
                    uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                    lVar17 = *unaff_x25;
                  }
                  uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_01c72394(lVar17);
                  }
                  lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
                  *(int *)(unaff_x29 + -0xc) = iVar21;
                  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
                  (**(code **)(lVar17 + 0x10))(uVar22);
                  lVar17 = *unaff_x25;
                  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                    lVar17 = FUN_01c72394();
                  }
                  plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                        (*(long *)(lVar17 + 0xc0) + 0x20));
                  if (plVar11 == (long *)0x0) goto LAB_02712378;
                  if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                  puVar15 = (undefined8 *)thunk_FUN_01c49834();
                  *(undefined8 *)(unaff_x29 + -0x48) = *puVar15;
                  uVar5 = FUN_032d0404(unaff_x29 + -0x48,0);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar3);
                  }
                  uVar6 = FUN_0322441c(uVar6,uVar5,0);
                  iVar21 = iVar21 + 1;
                }
              }
            }
            else {
              iVar21 = 0;
              uVar6 = 0;
              while( true ) {
                lVar17 = *unaff_x25;
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  lVar17 = FUN_01c72394();
                }
                lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  lVar17 = FUN_01c72394();
                }
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar18 = *unaff_x25;
                uVar1 = *(ushort *)(lVar18 + 0x135);
                lVar17 = lVar18;
                if ((uVar1 & 1) == 0) {
                  lVar18 = FUN_01c72394(lVar18);
                  uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                  lVar17 = *unaff_x25;
                }
                pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_01c72394(lVar17);
                }
                iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
                if (iVar4 <= iVar21) goto LAB_02712040;
                lVar17 = *unaff_x25;
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  lVar17 = FUN_01c72394();
                }
                lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  lVar17 = FUN_01c72394();
                }
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar18 = *unaff_x25;
                uVar1 = *(ushort *)(lVar18 + 0x135);
                lVar17 = lVar18;
                if ((uVar1 & 1) == 0) {
                  lVar18 = FUN_01c72394(lVar18);
                  uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                  lVar17 = *unaff_x25;
                }
                uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_01c72394(lVar17);
                }
                lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
                *(int *)(unaff_x29 + -0xc) = iVar21;
                *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
                (**(code **)(lVar17 + 0x10))(uVar22);
                lVar17 = *unaff_x25;
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  lVar17 = FUN_01c72394();
                }
                plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                      (*(long *)(lVar17 + 0xc0) + 0x20));
                if (plVar11 == (long *)0x0) goto LAB_02712378;
                if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                puVar15 = (undefined8 *)thunk_FUN_01c49834();
                *(undefined8 *)(unaff_x29 + -0x40) = *puVar15;
                uVar5 = FUN_032eee44(unaff_x29 + -0x40,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar3);
                }
                uVar6 = FUN_0322441c(uVar6,uVar5,0);
                iVar21 = iVar21 + 1;
              }
            }
          }
          else {
            iVar21 = 0;
            uVar6 = 0;
            while( true ) {
              lVar17 = *unaff_x25;
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_01c72394();
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_01c72394();
              }
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar18 = *unaff_x25;
              uVar1 = *(ushort *)(lVar18 + 0x135);
              lVar17 = lVar18;
              if ((uVar1 & 1) == 0) {
                lVar18 = FUN_01c72394(lVar18);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar17 = *unaff_x25;
              }
              pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_01c72394(lVar17);
              }
              iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
              if (iVar4 <= iVar21) goto LAB_02712040;
              lVar17 = *unaff_x25;
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_01c72394();
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_01c72394();
              }
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar18 = *unaff_x25;
              uVar1 = *(ushort *)(lVar18 + 0x135);
              lVar17 = lVar18;
              if ((uVar1 & 1) == 0) {
                lVar18 = FUN_01c72394(lVar18);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar17 = *unaff_x25;
              }
              uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_01c72394(lVar17);
              }
              lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
              *(int *)(unaff_x29 + -0xc) = iVar21;
              *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
              *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
              (**(code **)(lVar17 + 0x10))(uVar22);
              lVar17 = *unaff_x25;
              if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                lVar17 = FUN_01c72394();
              }
              plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x20))
              ;
              if (plVar11 == (long *)0x0) goto LAB_02712378;
              if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar14 = (undefined4 *)thunk_FUN_01c49834();
              *(undefined4 *)(unaff_x29 + -0x38) = *puVar14;
              uVar5 = FUN_032cf300(unaff_x29 + -0x38,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar3);
              }
              uVar6 = FUN_0322441c(uVar6,uVar5,0);
              iVar21 = iVar21 + 1;
            }
          }
        }
        else {
          iVar21 = 0;
          uVar6 = 0;
          while( true ) {
            lVar17 = *unaff_x25;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_01c72394();
            }
            lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_01c72394();
            }
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar18 = *unaff_x25;
            uVar1 = *(ushort *)(lVar18 + 0x135);
            lVar17 = lVar18;
            if ((uVar1 & 1) == 0) {
              lVar18 = FUN_01c72394(lVar18);
              uVar1 = *(ushort *)(*unaff_x25 + 0x135);
              lVar17 = *unaff_x25;
            }
            pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_01c72394(lVar17);
            }
            iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
            if (iVar4 <= iVar21) goto LAB_02712040;
            lVar17 = *unaff_x25;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_01c72394();
            }
            lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_01c72394();
            }
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar18 = *unaff_x25;
            uVar1 = *(ushort *)(lVar18 + 0x135);
            lVar17 = lVar18;
            if ((uVar1 & 1) == 0) {
              lVar18 = FUN_01c72394(lVar18);
              uVar1 = *(ushort *)(*unaff_x25 + 0x135);
              lVar17 = *unaff_x25;
            }
            uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_01c72394(lVar17);
            }
            lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
            *(int *)(unaff_x29 + -0xc) = iVar21;
            *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
            *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
            (**(code **)(lVar17 + 0x10))(uVar22);
            lVar17 = *unaff_x25;
            if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
              lVar17 = FUN_01c72394();
            }
            plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x20));
            if (plVar11 == (long *)0x0) goto LAB_02712378;
            if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
            puVar14 = (undefined4 *)thunk_FUN_01c49834();
            *(undefined4 *)(unaff_x29 + -0x34) = *puVar14;
            uVar5 = FUN_032edfe0(unaff_x29 + -0x34,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar3);
            }
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            iVar21 = iVar21 + 1;
          }
        }
      }
      else {
        iVar21 = 0;
        uVar6 = 0;
        while( true ) {
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar18 = *unaff_x25;
          uVar1 = *(ushort *)(lVar18 + 0x135);
          lVar17 = lVar18;
          if ((uVar1 & 1) == 0) {
            lVar18 = FUN_01c72394(lVar18);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar17 = *unaff_x25;
          }
          pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_01c72394(lVar17);
          }
          iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
          if (iVar4 <= iVar21) goto LAB_02712040;
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar18 = *unaff_x25;
          uVar1 = *(ushort *)(lVar18 + 0x135);
          lVar17 = lVar18;
          if ((uVar1 & 1) == 0) {
            lVar18 = FUN_01c72394(lVar18);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar17 = *unaff_x25;
          }
          uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_01c72394(lVar17);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
          *(int *)(unaff_x29 + -0xc) = iVar21;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
          (**(code **)(lVar17 + 0x10))(uVar22);
          lVar17 = *unaff_x25;
          if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_01c72394();
          }
          plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x20));
          if (plVar11 == (long *)0x0) goto LAB_02712378;
          if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
          puVar13 = (undefined2 *)thunk_FUN_01c49834();
          *(undefined2 *)(unaff_x29 + -0x30) = *puVar13;
          uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(unaff_x29 + -0x30,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          iVar21 = iVar21 + 1;
        }
      }
    }
    else {
      iVar21 = 0;
      uVar6 = 0;
      while( true ) {
        lVar17 = *unaff_x25;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01c72394();
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01c72394();
        }
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar18 = *unaff_x25;
        uVar1 = *(ushort *)(lVar18 + 0x135);
        lVar17 = lVar18;
        if ((uVar1 & 1) == 0) {
          lVar18 = FUN_01c72394(lVar18);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar17 = *unaff_x25;
        }
        pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_01c72394(lVar17);
        }
        iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
        if (iVar4 <= iVar21) goto LAB_02712040;
        lVar17 = *unaff_x25;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01c72394();
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01c72394();
        }
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar18 = *unaff_x25;
        uVar1 = *(ushort *)(lVar18 + 0x135);
        lVar17 = lVar18;
        if ((uVar1 & 1) == 0) {
          lVar18 = FUN_01c72394(lVar18);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar17 = *unaff_x25;
        }
        uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_01c72394(lVar17);
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
        *(int *)(unaff_x29 + -0xc) = iVar21;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
        (**(code **)(lVar17 + 0x10))(uVar22);
        lVar17 = *unaff_x25;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          lVar17 = FUN_01c72394();
        }
        plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x20));
        if (plVar11 == (long *)0x0) goto LAB_02712378;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
        puVar12 = (undefined1 *)thunk_FUN_01c49834();
        *(undefined1 *)(unaff_x29 + -0x28) = *puVar12;
        uVar5 = FUN_032e2e50(unaff_x29 + -0x28,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        iVar21 = iVar21 + 1;
      }
    }
  }
  else {
    iVar21 = 0;
    uVar6 = 0;
    while( true ) {
      lVar17 = *unaff_x25;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar18 = *unaff_x25;
      uVar1 = *(ushort *)(lVar18 + 0x135);
      lVar17 = lVar18;
      if ((uVar1 & 1) == 0) {
        lVar18 = FUN_01c72394(lVar18);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar17 = *unaff_x25;
      }
      pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar17 = FUN_01c72394(lVar17);
      }
      iVar4 = (*pcVar20)(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x28));
      if (iVar4 <= iVar21) goto LAB_02712040;
      lVar17 = *unaff_x25;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar18 = *unaff_x25;
      uVar1 = *(ushort *)(lVar18 + 0x135);
      lVar17 = lVar18;
      if ((uVar1 & 1) == 0) {
        lVar18 = FUN_01c72394(lVar18);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar17 = *unaff_x25;
      }
      uVar22 = **(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar17 = FUN_01c72394(lVar17);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = iVar21;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
      (**(code **)(lVar17 + 0x10))(uVar22);
      lVar17 = *unaff_x25;
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        lVar17 = FUN_01c72394();
      }
      plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x20));
      if (plVar11 == (long *)0x0) goto LAB_02712378;
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
      puVar12 = (undefined1 *)thunk_FUN_01c49834();
      *(undefined1 *)(unaff_x29 + -0x24) = *puVar12;
      uVar5 = FUN_0324b7a0(unaff_x29 + -0x24,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      iVar21 = iVar21 + 1;
    }
  }
LAB_0271237c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


