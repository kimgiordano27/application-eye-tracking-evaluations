/*
FUNCTION_NAME: System.Collections.Generic.Comparer<UIRenderDevice.AllocToUpdate>$$get_Default
ENTRY_POINT: 02705d60
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


undefined4 System_Collections_Generic_Comparer<UIRenderDevice_AllocToUpdate>__get_Default(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  uVar5 = FUN_032e935c();
  puVar2 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar1 = PTR_DAT_042305a8;
  if ((uVar5 & 1) == 0) {
    lVar6 = *unaff_x23;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
    uVar14 = FUN_032e04b8(uVar14,0);
    uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
    uVar5 = FUN_032e935c(uVar14,uVar9,0);
    puVar2 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar1 = PTR_DAT_0422fd80;
    if ((uVar5 & 1) != 0) {
      iVar13 = 0;
      uVar4 = 0;
      do {
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar15 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
        lVar6 = *(long *)(lVar15 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar6 = *(long *)(lVar15 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (**(int **)(lVar6 + 0xb8) <= iVar13) {
          return uVar4;
        }
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if ((*(byte *)(*unaff_x23 + 0x135) & 1) == 0) {
          FUN_01c72394();
        }
        in_stack_00000008 = FUN_027038d0();
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),
                                            &stack0x00000008);
        if (plVar7 == (long *)0x0) {
LAB_02706e98:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_02706e9c;
        puVar8 = (undefined4 *)thunk_FUN_01c49834();
        uStack0000000000000028 = *puVar8;
        uVar3 = FUN_032cf300(&stack0x00000028,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar4 = FUN_0322441c(uVar4,uVar3,0);
        iVar13 = iVar13 + 1;
      } while( true );
    }
    lVar6 = *unaff_x23;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394();
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x24);
    }
    uVar14 = FUN_032e04b8(uVar14,0);
    uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
    uVar5 = FUN_032e935c(uVar14,uVar9,0);
    puVar2 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar1 = PTR_DAT_04230670;
    if ((uVar5 & 1) == 0) {
      lVar6 = *unaff_x23;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x24);
      }
      uVar14 = FUN_032e04b8(uVar14,0);
      uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
      uVar5 = FUN_032e935c(uVar14,uVar9,0);
      puVar2 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
      puVar1 = PTR_DAT_04230478;
      if ((uVar5 & 1) == 0) {
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x24);
        }
        uVar14 = FUN_032e04b8(uVar14,0);
        uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
        uVar5 = FUN_032e935c(uVar14,uVar9,0);
        puVar2 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
        puVar1 = PTR_DAT_042304e0;
        if ((uVar5 & 1) == 0) {
          lVar6 = *unaff_x23;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x24);
          }
          uVar14 = FUN_032e04b8(uVar14,0);
          uVar9 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
          uVar5 = FUN_032e935c(uVar14,uVar9,0);
          puVar2 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
          puVar1 = PTR_DAT_042304a8;
          if ((uVar5 & 1) == 0) {
            thunk_FUN_01c273e8(PTR_DAT_04230a40);
            uVar14 = thunk_FUN_01c496e0();
            uVar9 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
            FUN_032cd310(uVar14,uVar9,0);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar14);
          }
          iVar13 = 0;
          uVar4 = 0;
          while( true ) {
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar15 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
            lVar6 = *(long *)(lVar15 + 0x20);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar6 = *(long *)(lVar15 + 0x20);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (**(int **)(lVar6 + 0xb8) <= iVar13) {
              return uVar4;
            }
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            if ((*(byte *)(*unaff_x23 + 0x135) & 1) == 0) {
              FUN_01c72394();
            }
            in_stack_00000008 = FUN_027038d0();
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),
                                                &stack0x00000008);
            if (plVar7 == (long *)0x0) goto LAB_02706e98;
            if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) break;
            puVar11 = (ulong *)thunk_FUN_01c49834();
            uVar12 = *puVar11;
            uVar5 = uVar12 & 0x7ff0000000000000;
            if ((-uVar12 & 0x7ff0000000000000) != 0) {
              uVar5 = uVar12;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar4 = FUN_0322441c(uVar4,(uint)(uVar5 >> 0x20) ^ (uint)uVar5,0);
            iVar13 = iVar13 + 1;
          }
        }
        else {
          iVar13 = 0;
          uVar4 = 0;
          while( true ) {
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar15 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
            lVar6 = *(long *)(lVar15 + 0x20);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar6 = *(long *)(lVar15 + 0x20);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (**(int **)(lVar6 + 0xb8) <= iVar13) {
              return uVar4;
            }
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            if ((*(byte *)(*unaff_x23 + 0x135) & 1) == 0) {
              FUN_01c72394();
            }
            in_stack_00000008 = FUN_027038d0();
            lVar6 = *unaff_x23;
            if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_01c72394();
            }
            plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),
                                                &stack0x00000008);
            if (plVar7 == (long *)0x0) goto LAB_02706e98;
            if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) break;
            puVar8 = (undefined4 *)thunk_FUN_01c49834();
            in_stack_00000010._4_4_ = *puVar8;
            uVar3 = FUN_032e3e6c((long)&stack0x00000010 + 4,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar2);
            }
            uVar4 = FUN_0322441c(uVar4,uVar3,0);
            iVar13 = iVar13 + 1;
          }
        }
      }
      else {
        iVar13 = 0;
        uVar4 = 0;
        while( true ) {
          lVar6 = *unaff_x23;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar6 = *unaff_x23;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          lVar15 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
          lVar6 = *(long *)(lVar15 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar6 = *(long *)(lVar15 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          if (**(int **)(lVar6 + 0xb8) <= iVar13) {
            return uVar4;
          }
          lVar6 = *unaff_x23;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if ((*(byte *)(*unaff_x23 + 0x135) & 1) == 0) {
            FUN_01c72394();
          }
          in_stack_00000008 = FUN_027038d0();
          lVar6 = *unaff_x23;
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394();
          }
          plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),
                                              &stack0x00000008);
          if (plVar7 == (long *)0x0) goto LAB_02706e98;
          if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) break;
          puVar10 = (undefined8 *)thunk_FUN_01c49834();
          in_stack_00000018 = *puVar10;
          uVar3 = FUN_032d0404(&stack0x00000018,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar4 = FUN_0322441c(uVar4,uVar3,0);
          iVar13 = iVar13 + 1;
        }
      }
    }
    else {
      iVar13 = 0;
      uVar4 = 0;
      while( true ) {
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar15 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
        lVar6 = *(long *)(lVar15 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar6 = *(long *)(lVar15 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (**(int **)(lVar6 + 0xb8) <= iVar13) {
          return uVar4;
        }
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if ((*(byte *)(*unaff_x23 + 0x135) & 1) == 0) {
          FUN_01c72394();
        }
        in_stack_00000008 = FUN_027038d0();
        lVar6 = *unaff_x23;
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394();
        }
        plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),
                                            &stack0x00000008);
        if (plVar7 == (long *)0x0) goto LAB_02706e98;
        if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) break;
        puVar10 = (undefined8 *)thunk_FUN_01c49834();
        in_stack_00000020 = *puVar10;
        uVar3 = FUN_032eee44(&stack0x00000020,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar4 = FUN_0322441c(uVar4,uVar3,0);
        iVar13 = iVar13 + 1;
      }
    }
  }
  else {
    iVar13 = 0;
    uVar4 = 0;
    while( true ) {
      lVar6 = *unaff_x23;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar6 = *unaff_x23;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      lVar15 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      lVar6 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar6 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      if (**(int **)(lVar6 + 0xb8) <= iVar13) {
        return uVar4;
      }
      lVar6 = *unaff_x23;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if ((*(byte *)(*unaff_x23 + 0x135) & 1) == 0) {
        FUN_01c72394();
      }
      in_stack_00000008 = FUN_027038d0();
      lVar6 = *unaff_x23;
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394();
      }
      plVar7 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20),
                                          &stack0x00000008);
      if (plVar7 == (long *)0x0) goto LAB_02706e98;
      if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) break;
      puVar8 = (undefined4 *)thunk_FUN_01c49834();
      uStack000000000000002c = *puVar8;
      uVar3 = FUN_032edfe0((long)&stack0x00000028 + 4,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar2);
      }
      uVar4 = FUN_0322441c(uVar4,uVar3,0);
      iVar13 = iVar13 + 1;
    }
  }
LAB_02706e9c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


