/*
FUNCTION_NAME: System.Comparison<XRView>$$Invoke
ENTRY_POINT: 027104e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


undefined4 System_Comparison<XRView>__Invoke(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x20;
  code *pcVar19;
  int iVar20;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  uVar7 = FUN_032e04b8(param_1,0);
  uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
  uVar9 = FUN_032e935c(uVar7,uVar8,0);
  puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar2 = PTR_DAT_04230588;
  if ((uVar9 & 1) == 0) {
    lVar10 = *unaff_x25;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01c72394();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar7 = FUN_032e04b8(uVar7,0);
    uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
    uVar9 = FUN_032e935c(uVar7,uVar8,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_042306a0;
    if ((uVar9 & 1) != 0) {
      iVar20 = 0;
      uVar6 = 0;
      do {
        lVar10 = *unaff_x25;
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
        lVar17 = *unaff_x25;
        uVar1 = *(ushort *)(lVar17 + 0x135);
        lVar10 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_01c72394(lVar17);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar10 = *unaff_x25;
        }
        pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01c72394(lVar10);
        }
        iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
        if (iVar4 <= iVar20) {
LAB_02712040:
          if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar6;
        }
        lVar10 = *unaff_x25;
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
        lVar17 = *unaff_x25;
        uVar1 = *(ushort *)(lVar17 + 0x135);
        lVar10 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_01c72394(lVar17);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar10 = *unaff_x25;
        }
        uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01c72394(lVar10);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
        *(int *)(unaff_x29 + -0xc) = iVar20;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
        (**(code **)(lVar10 + 0x10))(uVar7);
        lVar10 = *unaff_x25;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
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
        iVar20 = iVar20 + 1;
      } while( true );
    }
    lVar10 = *unaff_x25;
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01c72394();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar7 = FUN_032e04b8(uVar7,0);
    uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
    uVar9 = FUN_032e935c(uVar7,uVar8,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_042305d0;
    if ((uVar9 & 1) == 0) {
      lVar10 = *unaff_x25;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar7 = FUN_032e04b8(uVar7,0);
      uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
      uVar9 = FUN_032e935c(uVar7,uVar8,0);
      puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar2 = PTR_DAT_042305a8;
      if ((uVar9 & 1) == 0) {
        lVar10 = *unaff_x25;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        uVar7 = FUN_032e04b8(uVar7,0);
        uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
        uVar9 = FUN_032e935c(uVar7,uVar8,0);
        puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
        puVar2 = PTR_DAT_0422fd80;
        if ((uVar9 & 1) == 0) {
          lVar10 = *unaff_x25;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x26);
          }
          uVar7 = FUN_032e04b8(uVar7,0);
          uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
          uVar9 = FUN_032e935c(uVar7,uVar8,0);
          puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
          puVar2 = PTR_DAT_04230670;
          if ((uVar9 & 1) == 0) {
            lVar10 = *unaff_x25;
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x26);
            }
            uVar7 = FUN_032e04b8(uVar7,0);
            uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
            uVar9 = FUN_032e935c(uVar7,uVar8,0);
            puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
            puVar2 = PTR_DAT_04230478;
            if ((uVar9 & 1) == 0) {
              lVar10 = *unaff_x25;
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*unaff_x26);
              }
              uVar7 = FUN_032e04b8(uVar7,0);
              uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
              uVar9 = FUN_032e935c(uVar7,uVar8,0);
              puVar3 = 
              VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
              puVar2 = PTR_DAT_042304e0;
              if ((uVar9 & 1) == 0) {
                lVar10 = *unaff_x25;
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                uVar7 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18);
                if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*unaff_x26);
                }
                uVar7 = FUN_032e04b8(uVar7,0);
                uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                uVar9 = FUN_032e935c(uVar7,uVar8,0);
                puVar3 = 
                VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
                puVar2 = PTR_DAT_042304a8;
                if ((uVar9 & 1) == 0) {
                  thunk_FUN_01c273e8(PTR_DAT_04230a40);
                  uVar7 = thunk_FUN_01c496e0();
                  uVar8 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
                  FUN_032cd310(uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
                  FUN_01c5d37c(uVar7);
                }
                iVar20 = 0;
                uVar6 = 0;
                while( true ) {
                  lVar10 = *unaff_x25;
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
                  lVar17 = *unaff_x25;
                  uVar1 = *(ushort *)(lVar17 + 0x135);
                  lVar10 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_01c72394(lVar17);
                    uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                    lVar10 = *unaff_x25;
                  }
                  pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar10 = FUN_01c72394(lVar10);
                  }
                  iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
                  if (iVar4 <= iVar20) goto LAB_02712040;
                  lVar10 = *unaff_x25;
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
                  lVar17 = *unaff_x25;
                  uVar1 = *(ushort *)(lVar17 + 0x135);
                  lVar10 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_01c72394(lVar17);
                    uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                    lVar10 = *unaff_x25;
                  }
                  uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar10 = FUN_01c72394(lVar10);
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
                  *(int *)(unaff_x29 + -0xc) = iVar20;
                  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
                  (**(code **)(lVar10 + 0x10))(uVar7);
                  lVar10 = *unaff_x25;
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                        (*(long *)(lVar10 + 0xc0) + 0x20));
                  if (plVar11 == (long *)0x0) goto LAB_02712378;
                  if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                  puVar16 = (ulong *)thunk_FUN_01c49834();
                  uVar18 = *puVar16;
                  uVar9 = uVar18 & 0x7ff0000000000000;
                  if ((-uVar18 & 0x7ff0000000000000) != 0) {
                    uVar9 = uVar18;
                  }
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  uVar6 = FUN_0322441c(uVar6,(uint)(uVar9 >> 0x20) ^ (uint)uVar9,0);
                  iVar20 = iVar20 + 1;
                }
              }
              else {
                iVar20 = 0;
                uVar6 = 0;
                while( true ) {
                  lVar10 = *unaff_x25;
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
                  lVar17 = *unaff_x25;
                  uVar1 = *(ushort *)(lVar17 + 0x135);
                  lVar10 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_01c72394(lVar17);
                    uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                    lVar10 = *unaff_x25;
                  }
                  pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                  if ((uVar1 & 1) == 0) {
                    lVar10 = FUN_01c72394(lVar10);
                  }
                  iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
                  if (iVar4 <= iVar20) goto LAB_02712040;
                  lVar10 = *unaff_x25;
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
                  lVar17 = *unaff_x25;
                  uVar1 = *(ushort *)(lVar17 + 0x135);
                  lVar10 = lVar17;
                  if ((uVar1 & 1) == 0) {
                    lVar17 = FUN_01c72394(lVar17);
                    uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                    lVar10 = *unaff_x25;
                  }
                  uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                  if ((uVar1 & 1) == 0) {
                    lVar10 = FUN_01c72394(lVar10);
                  }
                  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
                  *(int *)(unaff_x29 + -0xc) = iVar20;
                  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
                  (**(code **)(lVar10 + 0x10))(uVar7);
                  lVar10 = *unaff_x25;
                  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                    lVar10 = FUN_01c72394();
                  }
                  plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                        (*(long *)(lVar10 + 0xc0) + 0x20));
                  if (plVar11 == (long *)0x0) goto LAB_02712378;
                  if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                  puVar14 = (undefined4 *)thunk_FUN_01c49834();
                  *(undefined4 *)(unaff_x29 + -0x4c) = *puVar14;
                  uVar5 = FUN_032e3e6c(unaff_x29 + -0x4c,0);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar3);
                  }
                  uVar6 = FUN_0322441c(uVar6,uVar5,0);
                  iVar20 = iVar20 + 1;
                }
              }
            }
            else {
              iVar20 = 0;
              uVar6 = 0;
              while( true ) {
                lVar10 = *unaff_x25;
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
                lVar17 = *unaff_x25;
                uVar1 = *(ushort *)(lVar17 + 0x135);
                lVar10 = lVar17;
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_01c72394(lVar17);
                  uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                  lVar10 = *unaff_x25;
                }
                pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
                if ((uVar1 & 1) == 0) {
                  lVar10 = FUN_01c72394(lVar10);
                }
                iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
                if (iVar4 <= iVar20) goto LAB_02712040;
                lVar10 = *unaff_x25;
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
                lVar17 = *unaff_x25;
                uVar1 = *(ushort *)(lVar17 + 0x135);
                lVar10 = lVar17;
                if ((uVar1 & 1) == 0) {
                  lVar17 = FUN_01c72394(lVar17);
                  uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                  lVar10 = *unaff_x25;
                }
                uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
                if ((uVar1 & 1) == 0) {
                  lVar10 = FUN_01c72394(lVar10);
                }
                lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
                *(int *)(unaff_x29 + -0xc) = iVar20;
                *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
                *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
                (**(code **)(lVar10 + 0x10))(uVar7);
                lVar10 = *unaff_x25;
                if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                  lVar10 = FUN_01c72394();
                }
                plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)
                                                      (*(long *)(lVar10 + 0xc0) + 0x20));
                if (plVar11 == (long *)0x0) goto LAB_02712378;
                if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
                puVar15 = (undefined8 *)thunk_FUN_01c49834();
                *(undefined8 *)(unaff_x29 + -0x48) = *puVar15;
                uVar5 = FUN_032d0404(unaff_x29 + -0x48,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8(*(long *)puVar3);
                }
                uVar6 = FUN_0322441c(uVar6,uVar5,0);
                iVar20 = iVar20 + 1;
              }
            }
          }
          else {
            iVar20 = 0;
            uVar6 = 0;
            while( true ) {
              lVar10 = *unaff_x25;
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
              lVar17 = *unaff_x25;
              uVar1 = *(ushort *)(lVar17 + 0x135);
              lVar10 = lVar17;
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_01c72394(lVar17);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar10 = *unaff_x25;
              }
              pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar10 = FUN_01c72394(lVar10);
              }
              iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
              if (iVar4 <= iVar20) goto LAB_02712040;
              lVar10 = *unaff_x25;
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
              lVar17 = *unaff_x25;
              uVar1 = *(ushort *)(lVar17 + 0x135);
              lVar10 = lVar17;
              if ((uVar1 & 1) == 0) {
                lVar17 = FUN_01c72394(lVar17);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar10 = *unaff_x25;
              }
              uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar10 = FUN_01c72394(lVar10);
              }
              lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
              *(int *)(unaff_x29 + -0xc) = iVar20;
              *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
              *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
              (**(code **)(lVar10 + 0x10))(uVar7);
              lVar10 = *unaff_x25;
              if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
                lVar10 = FUN_01c72394();
              }
              plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20))
              ;
              if (plVar11 == (long *)0x0) goto LAB_02712378;
              if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar15 = (undefined8 *)thunk_FUN_01c49834();
              *(undefined8 *)(unaff_x29 + -0x40) = *puVar15;
              uVar5 = FUN_032eee44(unaff_x29 + -0x40,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar3);
              }
              uVar6 = FUN_0322441c(uVar6,uVar5,0);
              iVar20 = iVar20 + 1;
            }
          }
        }
        else {
          iVar20 = 0;
          uVar6 = 0;
          while( true ) {
            lVar10 = *unaff_x25;
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
            lVar17 = *unaff_x25;
            uVar1 = *(ushort *)(lVar17 + 0x135);
            lVar10 = lVar17;
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_01c72394(lVar17);
              uVar1 = *(ushort *)(*unaff_x25 + 0x135);
              lVar10 = *unaff_x25;
            }
            pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar10 = FUN_01c72394(lVar10);
            }
            iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
            if (iVar4 <= iVar20) goto LAB_02712040;
            lVar10 = *unaff_x25;
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
            lVar17 = *unaff_x25;
            uVar1 = *(ushort *)(lVar17 + 0x135);
            lVar10 = lVar17;
            if ((uVar1 & 1) == 0) {
              lVar17 = FUN_01c72394(lVar17);
              uVar1 = *(ushort *)(*unaff_x25 + 0x135);
              lVar10 = *unaff_x25;
            }
            uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar10 = FUN_01c72394(lVar10);
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
            *(int *)(unaff_x29 + -0xc) = iVar20;
            *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
            *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
            (**(code **)(lVar10 + 0x10))(uVar7);
            lVar10 = *unaff_x25;
            if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_01c72394();
            }
            plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
            if (plVar11 == (long *)0x0) goto LAB_02712378;
            if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
            puVar14 = (undefined4 *)thunk_FUN_01c49834();
            *(undefined4 *)(unaff_x29 + -0x38) = *puVar14;
            uVar5 = FUN_032cf300(unaff_x29 + -0x38,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar3);
            }
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            iVar20 = iVar20 + 1;
          }
        }
      }
      else {
        iVar20 = 0;
        uVar6 = 0;
        while( true ) {
          lVar10 = *unaff_x25;
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
          lVar17 = *unaff_x25;
          uVar1 = *(ushort *)(lVar17 + 0x135);
          lVar10 = lVar17;
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_01c72394(lVar17);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar10 = *unaff_x25;
          }
          pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
          }
          iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
          if (iVar4 <= iVar20) goto LAB_02712040;
          lVar10 = *unaff_x25;
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
          lVar17 = *unaff_x25;
          uVar1 = *(ushort *)(lVar17 + 0x135);
          lVar10 = lVar17;
          if ((uVar1 & 1) == 0) {
            lVar17 = FUN_01c72394(lVar17);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar10 = *unaff_x25;
          }
          uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar10 = FUN_01c72394(lVar10);
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
          *(int *)(unaff_x29 + -0xc) = iVar20;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
          (**(code **)(lVar10 + 0x10))(uVar7);
          lVar10 = *unaff_x25;
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01c72394();
          }
          plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
          if (plVar11 == (long *)0x0) goto LAB_02712378;
          if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
          puVar14 = (undefined4 *)thunk_FUN_01c49834();
          *(undefined4 *)(unaff_x29 + -0x34) = *puVar14;
          uVar5 = FUN_032edfe0(unaff_x29 + -0x34,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          iVar20 = iVar20 + 1;
        }
      }
    }
    else {
      iVar20 = 0;
      uVar6 = 0;
      while( true ) {
        lVar10 = *unaff_x25;
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
        lVar17 = *unaff_x25;
        uVar1 = *(ushort *)(lVar17 + 0x135);
        lVar10 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_01c72394(lVar17);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar10 = *unaff_x25;
        }
        pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01c72394(lVar10);
        }
        iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
        if (iVar4 <= iVar20) goto LAB_02712040;
        lVar10 = *unaff_x25;
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
        lVar17 = *unaff_x25;
        uVar1 = *(ushort *)(lVar17 + 0x135);
        lVar10 = lVar17;
        if ((uVar1 & 1) == 0) {
          lVar17 = FUN_01c72394(lVar17);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar10 = *unaff_x25;
        }
        uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_01c72394(lVar10);
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
        *(int *)(unaff_x29 + -0xc) = iVar20;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
        (**(code **)(lVar10 + 0x10))(uVar7);
        lVar10 = *unaff_x25;
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01c72394();
        }
        plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
        if (plVar11 == (long *)0x0) goto LAB_02712378;
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
        puVar13 = (undefined2 *)thunk_FUN_01c49834();
        *(undefined2 *)(unaff_x29 + -0x30) = *puVar13;
        uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(unaff_x29 + -0x30,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        iVar20 = iVar20 + 1;
      }
    }
  }
  else {
    iVar20 = 0;
    uVar6 = 0;
    while( true ) {
      lVar10 = *unaff_x25;
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
      lVar17 = *unaff_x25;
      uVar1 = *(ushort *)(lVar17 + 0x135);
      lVar10 = lVar17;
      if ((uVar1 & 1) == 0) {
        lVar17 = FUN_01c72394(lVar17);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar10 = *unaff_x25;
      }
      pcVar19 = (code *)**(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_01c72394(lVar10);
      }
      iVar4 = (*pcVar19)(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x28));
      if (iVar4 <= iVar20) goto LAB_02712040;
      lVar10 = *unaff_x25;
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
      lVar17 = *unaff_x25;
      uVar1 = *(ushort *)(lVar17 + 0x135);
      lVar10 = lVar17;
      if ((uVar1 & 1) == 0) {
        lVar17 = FUN_01c72394(lVar17);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar10 = *unaff_x25;
      }
      uVar7 = **(undefined8 **)(*(long *)(lVar17 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar10 = FUN_01c72394(lVar10);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = iVar20;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
      (**(code **)(lVar10 + 0x10))(uVar7);
      lVar10 = *unaff_x25;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01c72394();
      }
      plVar11 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x20));
      if (plVar11 == (long *)0x0) goto LAB_02712378;
      if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
      puVar12 = (undefined1 *)thunk_FUN_01c49834();
      *(undefined1 *)(unaff_x29 + -0x28) = *puVar12;
      uVar5 = FUN_032e2e50(unaff_x29 + -0x28,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      iVar20 = iVar20 + 1;
    }
  }
LAB_0271237c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


