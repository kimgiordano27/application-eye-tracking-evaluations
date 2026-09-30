/*
FUNCTION_NAME: System.Comparison<FriendSystem.PlatformFriend>$$Invoke
ENTRY_POINT: 02710d70
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


undefined4 System_Comparison<FriendSystem_PlatformFriend>__Invoke(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 unaff_x20;
  code *pcVar17;
  undefined8 uVar18;
  int iVar19;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  uVar7 = FUN_032e935c();
  puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar2 = PTR_DAT_042305d0;
  if ((uVar7 & 1) == 0) {
    lVar8 = *unaff_x25;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar18 = FUN_032e04b8(uVar18,0);
    uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
    uVar7 = FUN_032e935c(uVar18,uVar11,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_042305a8;
    if ((uVar7 & 1) != 0) {
      iVar19 = 0;
      uVar6 = 0;
      do {
        lVar8 = *unaff_x25;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar15 = *unaff_x25;
        uVar1 = *(ushort *)(lVar15 + 0x135);
        lVar8 = lVar15;
        if ((uVar1 & 1) == 0) {
          lVar15 = FUN_01c72394(lVar15);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar8 = *unaff_x25;
        }
        pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_01c72394(lVar8);
        }
        iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
        if (iVar4 <= iVar19) {
LAB_02712040:
          if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar6;
        }
        lVar8 = *unaff_x25;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar15 = *unaff_x25;
        uVar1 = *(ushort *)(lVar15 + 0x135);
        lVar8 = lVar15;
        if ((uVar1 & 1) == 0) {
          lVar15 = FUN_01c72394(lVar15);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar8 = *unaff_x25;
        }
        uVar18 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_01c72394(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
        *(int *)(unaff_x29 + -0xc) = iVar19;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
        (**(code **)(lVar8 + 0x10))(uVar18);
        lVar8 = *unaff_x25;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        plVar9 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
        if (plVar9 == (long *)0x0) {
LAB_02712378:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_0271237c;
        puVar12 = (undefined4 *)thunk_FUN_01c49834();
        *(undefined4 *)(unaff_x29 + -0x34) = *puVar12;
        uVar5 = FUN_032edfe0(unaff_x29 + -0x34,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        iVar19 = iVar19 + 1;
      } while( true );
    }
    lVar8 = *unaff_x25;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01c72394();
    }
    uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar18 = FUN_032e04b8(uVar18,0);
    uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
    uVar7 = FUN_032e935c(uVar18,uVar11,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_0422fd80;
    if ((uVar7 & 1) == 0) {
      lVar8 = *unaff_x25;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01c72394();
      }
      uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar18 = FUN_032e04b8(uVar18,0);
      uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
      uVar7 = FUN_032e935c(uVar18,uVar11,0);
      puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar2 = PTR_DAT_04230670;
      if ((uVar7 & 1) == 0) {
        lVar8 = *unaff_x25;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        uVar18 = FUN_032e04b8(uVar18,0);
        uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
        uVar7 = FUN_032e935c(uVar18,uVar11,0);
        puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
        puVar2 = PTR_DAT_04230478;
        if ((uVar7 & 1) == 0) {
          lVar8 = *unaff_x25;
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x26);
          }
          uVar18 = FUN_032e04b8(uVar18,0);
          uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
          uVar7 = FUN_032e935c(uVar18,uVar11,0);
          puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
          puVar2 = PTR_DAT_042304e0;
          if ((uVar7 & 1) == 0) {
            lVar8 = *unaff_x25;
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01c72394();
            }
            uVar18 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*unaff_x26);
            }
            uVar18 = FUN_032e04b8(uVar18,0);
            uVar11 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
            uVar7 = FUN_032e935c(uVar18,uVar11,0);
            puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
            puVar2 = PTR_DAT_042304a8;
            if ((uVar7 & 1) == 0) {
              thunk_FUN_01c273e8(PTR_DAT_04230a40);
              uVar18 = thunk_FUN_01c496e0();
              uVar11 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
              FUN_032cd310(uVar18,uVar11,0);
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar18);
            }
            iVar19 = 0;
            uVar6 = 0;
            while( true ) {
              lVar8 = *unaff_x25;
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar15 = *unaff_x25;
              uVar1 = *(ushort *)(lVar15 + 0x135);
              lVar8 = lVar15;
              if ((uVar1 & 1) == 0) {
                lVar15 = FUN_01c72394(lVar15);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar8 = *unaff_x25;
              }
              pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_01c72394(lVar8);
              }
              iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
              if (iVar4 <= iVar19) goto LAB_02712040;
              lVar8 = *unaff_x25;
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar15 = *unaff_x25;
              uVar1 = *(ushort *)(lVar15 + 0x135);
              lVar8 = lVar15;
              if ((uVar1 & 1) == 0) {
                lVar15 = FUN_01c72394(lVar15);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar8 = *unaff_x25;
              }
              uVar18 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_01c72394(lVar8);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
              *(int *)(unaff_x29 + -0xc) = iVar19;
              *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
              *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
              (**(code **)(lVar8 + 0x10))(uVar18);
              lVar8 = *unaff_x25;
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              plVar9 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
              if (plVar9 == (long *)0x0) goto LAB_02712378;
              if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar14 = (ulong *)thunk_FUN_01c49834();
              uVar16 = *puVar14;
              uVar7 = uVar16 & 0x7ff0000000000000;
              if ((-uVar16 & 0x7ff0000000000000) != 0) {
                uVar7 = uVar16;
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar6 = FUN_0322441c(uVar6,(uint)(uVar7 >> 0x20) ^ (uint)uVar7,0);
              iVar19 = iVar19 + 1;
            }
          }
          else {
            iVar19 = 0;
            uVar6 = 0;
            while( true ) {
              lVar8 = *unaff_x25;
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar15 = *unaff_x25;
              uVar1 = *(ushort *)(lVar15 + 0x135);
              lVar8 = lVar15;
              if ((uVar1 & 1) == 0) {
                lVar15 = FUN_01c72394(lVar15);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar8 = *unaff_x25;
              }
              pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_01c72394(lVar8);
              }
              iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
              if (iVar4 <= iVar19) goto LAB_02712040;
              lVar8 = *unaff_x25;
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar15 = *unaff_x25;
              uVar1 = *(ushort *)(lVar15 + 0x135);
              lVar8 = lVar15;
              if ((uVar1 & 1) == 0) {
                lVar15 = FUN_01c72394(lVar15);
                uVar1 = *(ushort *)(*unaff_x25 + 0x135);
                lVar8 = *unaff_x25;
              }
              uVar18 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
              if ((uVar1 & 1) == 0) {
                lVar8 = FUN_01c72394(lVar8);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
              *(int *)(unaff_x29 + -0xc) = iVar19;
              *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
              *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
              (**(code **)(lVar8 + 0x10))(uVar18);
              lVar8 = *unaff_x25;
              if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                lVar8 = FUN_01c72394();
              }
              plVar9 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
              if (plVar9 == (long *)0x0) goto LAB_02712378;
              if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
              puVar12 = (undefined4 *)thunk_FUN_01c49834();
              *(undefined4 *)(unaff_x29 + -0x4c) = *puVar12;
              uVar5 = FUN_032e3e6c(unaff_x29 + -0x4c,0);
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8(*(long *)puVar3);
              }
              uVar6 = FUN_0322441c(uVar6,uVar5,0);
              iVar19 = iVar19 + 1;
            }
          }
        }
        else {
          iVar19 = 0;
          uVar6 = 0;
          while( true ) {
            lVar8 = *unaff_x25;
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01c72394();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01c72394();
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar15 = *unaff_x25;
            uVar1 = *(ushort *)(lVar15 + 0x135);
            lVar8 = lVar15;
            if ((uVar1 & 1) == 0) {
              lVar15 = FUN_01c72394(lVar15);
              uVar1 = *(ushort *)(*unaff_x25 + 0x135);
              lVar8 = *unaff_x25;
            }
            pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x28);
            if ((uVar1 & 1) == 0) {
              lVar8 = FUN_01c72394(lVar8);
            }
            iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
            if (iVar4 <= iVar19) goto LAB_02712040;
            lVar8 = *unaff_x25;
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01c72394();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01c72394();
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar15 = *unaff_x25;
            uVar1 = *(ushort *)(lVar15 + 0x135);
            lVar8 = lVar15;
            if ((uVar1 & 1) == 0) {
              lVar15 = FUN_01c72394(lVar15);
              uVar1 = *(ushort *)(*unaff_x25 + 0x135);
              lVar8 = *unaff_x25;
            }
            uVar18 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
            if ((uVar1 & 1) == 0) {
              lVar8 = FUN_01c72394(lVar8);
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
            *(int *)(unaff_x29 + -0xc) = iVar19;
            *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
            *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
            (**(code **)(lVar8 + 0x10))(uVar18);
            lVar8 = *unaff_x25;
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01c72394();
            }
            plVar9 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
            if (plVar9 == (long *)0x0) goto LAB_02712378;
            if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
            puVar13 = (undefined8 *)thunk_FUN_01c49834();
            *(undefined8 *)(unaff_x29 + -0x48) = *puVar13;
            uVar5 = FUN_032d0404(unaff_x29 + -0x48,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar3);
            }
            uVar6 = FUN_0322441c(uVar6,uVar5,0);
            iVar19 = iVar19 + 1;
          }
        }
      }
      else {
        iVar19 = 0;
        uVar6 = 0;
        while( true ) {
          lVar8 = *unaff_x25;
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar15 = *unaff_x25;
          uVar1 = *(ushort *)(lVar15 + 0x135);
          lVar8 = lVar15;
          if ((uVar1 & 1) == 0) {
            lVar15 = FUN_01c72394(lVar15);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar8 = *unaff_x25;
          }
          pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x28);
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_01c72394(lVar8);
          }
          iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
          if (iVar4 <= iVar19) goto LAB_02712040;
          lVar8 = *unaff_x25;
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar15 = *unaff_x25;
          uVar1 = *(ushort *)(lVar15 + 0x135);
          lVar8 = lVar15;
          if ((uVar1 & 1) == 0) {
            lVar15 = FUN_01c72394(lVar15);
            uVar1 = *(ushort *)(*unaff_x25 + 0x135);
            lVar8 = *unaff_x25;
          }
          uVar18 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
          if ((uVar1 & 1) == 0) {
            lVar8 = FUN_01c72394(lVar8);
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
          *(int *)(unaff_x29 + -0xc) = iVar19;
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
          (**(code **)(lVar8 + 0x10))(uVar18);
          lVar8 = *unaff_x25;
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_01c72394();
          }
          plVar9 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
          if (plVar9 == (long *)0x0) goto LAB_02712378;
          if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
          puVar13 = (undefined8 *)thunk_FUN_01c49834();
          *(undefined8 *)(unaff_x29 + -0x40) = *puVar13;
          uVar5 = FUN_032eee44(unaff_x29 + -0x40,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar3);
          }
          uVar6 = FUN_0322441c(uVar6,uVar5,0);
          iVar19 = iVar19 + 1;
        }
      }
    }
    else {
      iVar19 = 0;
      uVar6 = 0;
      while( true ) {
        lVar8 = *unaff_x25;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar15 = *unaff_x25;
        uVar1 = *(ushort *)(lVar15 + 0x135);
        lVar8 = lVar15;
        if ((uVar1 & 1) == 0) {
          lVar15 = FUN_01c72394(lVar15);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar8 = *unaff_x25;
        }
        pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_01c72394(lVar8);
        }
        iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
        if (iVar4 <= iVar19) goto LAB_02712040;
        lVar8 = *unaff_x25;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar15 = *unaff_x25;
        uVar1 = *(ushort *)(lVar15 + 0x135);
        lVar8 = lVar15;
        if ((uVar1 & 1) == 0) {
          lVar15 = FUN_01c72394(lVar15);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar8 = *unaff_x25;
        }
        uVar18 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_01c72394(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
        *(int *)(unaff_x29 + -0xc) = iVar19;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
        (**(code **)(lVar8 + 0x10))(uVar18);
        lVar8 = *unaff_x25;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01c72394();
        }
        plVar9 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
        if (plVar9 == (long *)0x0) goto LAB_02712378;
        if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
        puVar12 = (undefined4 *)thunk_FUN_01c49834();
        *(undefined4 *)(unaff_x29 + -0x38) = *puVar12;
        uVar5 = FUN_032cf300(unaff_x29 + -0x38,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        iVar19 = iVar19 + 1;
      }
    }
  }
  else {
    iVar19 = 0;
    uVar6 = 0;
    while( true ) {
      lVar8 = *unaff_x25;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01c72394();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01c72394();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar15 = *unaff_x25;
      uVar1 = *(ushort *)(lVar15 + 0x135);
      lVar8 = lVar15;
      if ((uVar1 & 1) == 0) {
        lVar15 = FUN_01c72394(lVar15);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar8 = *unaff_x25;
      }
      pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_01c72394(lVar8);
      }
      iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28));
      if (iVar4 <= iVar19) goto LAB_02712040;
      lVar8 = *unaff_x25;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01c72394();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01c72394();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar15 = *unaff_x25;
      uVar1 = *(ushort *)(lVar15 + 0x135);
      lVar8 = lVar15;
      if ((uVar1 & 1) == 0) {
        lVar15 = FUN_01c72394(lVar15);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar8 = *unaff_x25;
      }
      uVar18 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_01c72394(lVar8);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = iVar19;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
      (**(code **)(lVar8 + 0x10))(uVar18);
      lVar8 = *unaff_x25;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01c72394();
      }
      plVar9 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x20));
      if (plVar9 == (long *)0x0) goto LAB_02712378;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
      puVar10 = (undefined2 *)thunk_FUN_01c49834();
      *(undefined2 *)(unaff_x29 + -0x30) = *puVar10;
      uVar5 = Newtonsoft_Json_Converters_XElementWrapper__get_Value(unaff_x29 + -0x30,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      iVar19 = iVar19 + 1;
    }
  }
LAB_0271237c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


