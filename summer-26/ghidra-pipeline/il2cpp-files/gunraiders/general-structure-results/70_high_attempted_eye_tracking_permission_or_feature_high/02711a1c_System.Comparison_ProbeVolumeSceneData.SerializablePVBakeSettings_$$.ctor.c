/*
FUNCTION_NAME: System.Comparison<ProbeVolumeSceneData.SerializablePVBakeSettings>$$.ctor
ENTRY_POINT: 02711a1c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable
*/


undefined4 System_Comparison<ProbeVolumeSceneData_SerializablePVBakeSettings>___ctor(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined8 uVar16;
  code *pcVar17;
  int iVar18;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  
  lVar7 = FUN_01c72394();
  uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*unaff_x26);
  }
  uVar16 = FUN_032e04b8(uVar16,0);
  uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
  uVar9 = FUN_032e935c(uVar16,uVar8,0);
  puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
  puVar2 = PTR_DAT_04230478;
  if ((uVar9 & 1) == 0) {
    lVar7 = *unaff_x25;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar16 = FUN_032e04b8(uVar16,0);
    uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
    uVar9 = FUN_032e935c(uVar16,uVar8,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_042304e0;
    if ((uVar9 & 1) != 0) {
      iVar18 = 0;
      uVar6 = 0;
      do {
        lVar7 = *unaff_x25;
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar14 = *unaff_x25;
        uVar1 = *(ushort *)(lVar14 + 0x135);
        lVar7 = lVar14;
        if ((uVar1 & 1) == 0) {
          lVar14 = FUN_01c72394(lVar14);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar7 = *unaff_x25;
        }
        pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x28);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_01c72394(lVar7);
        }
        iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
        if (iVar4 <= iVar18) {
LAB_02712040:
          if (*(long *)(unaff_x24 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar6;
        }
        lVar7 = *unaff_x25;
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar14 = *unaff_x25;
        uVar1 = *(ushort *)(lVar14 + 0x135);
        lVar7 = lVar14;
        if ((uVar1 & 1) == 0) {
          lVar14 = FUN_01c72394(lVar14);
          uVar1 = *(ushort *)(*unaff_x25 + 0x135);
          lVar7 = *unaff_x25;
        }
        uVar16 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          lVar7 = FUN_01c72394(lVar7);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
        *(int *)(unaff_x29 + -0xc) = iVar18;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
        (**(code **)(lVar7 + 0x10))(uVar16);
        lVar7 = *unaff_x25;
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01c72394();
        }
        plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
        if (plVar10 == (long *)0x0) {
LAB_02712378:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) goto LAB_0271237c;
        puVar12 = (undefined4 *)thunk_FUN_01c49834();
        *(undefined4 *)(unaff_x29 + -0x4c) = *puVar12;
        uVar5 = FUN_032e3e6c(unaff_x29 + -0x4c,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar3);
        }
        uVar6 = FUN_0322441c(uVar6,uVar5,0);
        iVar18 = iVar18 + 1;
      } while( true );
    }
    lVar7 = *unaff_x25;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x26);
    }
    uVar16 = FUN_032e04b8(uVar16,0);
    uVar8 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
    uVar9 = FUN_032e935c(uVar16,uVar8,0);
    puVar3 = VoxelBusters_EssentialKit_NotificationServicesRequestPermissionResult_TypeInfo;
    puVar2 = PTR_DAT_042304a8;
    if ((uVar9 & 1) == 0) {
      thunk_FUN_01c273e8(PTR_DAT_04230a40);
      uVar16 = thunk_FUN_01c496e0();
      uVar8 = thunk_FUN_01c273e8(Oculus_Platform_MessageWithUserReportID_TypeInfo);
      FUN_032cd310(uVar16,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar16);
    }
    iVar18 = 0;
    uVar6 = 0;
    while( true ) {
      lVar7 = *unaff_x25;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar14 = *unaff_x25;
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar7 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_01c72394(lVar14);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar7 = *unaff_x25;
      }
      pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01c72394(lVar7);
      }
      iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      if (iVar4 <= iVar18) goto LAB_02712040;
      lVar7 = *unaff_x25;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar14 = *unaff_x25;
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar7 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_01c72394(lVar14);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar7 = *unaff_x25;
      }
      uVar16 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01c72394(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = iVar18;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
      (**(code **)(lVar7 + 0x10))(uVar16);
      lVar7 = *unaff_x25;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
      if (plVar10 == (long *)0x0) goto LAB_02712378;
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
      puVar13 = (ulong *)thunk_FUN_01c49834();
      uVar15 = *puVar13;
      uVar9 = uVar15 & 0x7ff0000000000000;
      if ((-uVar15 & 0x7ff0000000000000) != 0) {
        uVar9 = uVar15;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_0322441c(uVar6,(uint)(uVar9 >> 0x20) ^ (uint)uVar9,0);
      iVar18 = iVar18 + 1;
    }
  }
  else {
    iVar18 = 0;
    uVar6 = 0;
    while( true ) {
      lVar7 = *unaff_x25;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar14 = *unaff_x25;
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar7 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_01c72394(lVar14);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar7 = *unaff_x25;
      }
      pcVar17 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01c72394(lVar7);
      }
      iVar4 = (*pcVar17)(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      if (iVar4 <= iVar18) goto LAB_02712040;
      lVar7 = *unaff_x25;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar14 = *unaff_x25;
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar7 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_01c72394(lVar14);
        uVar1 = *(ushort *)(*unaff_x25 + 0x135);
        lVar7 = *unaff_x25;
      }
      uVar16 = **(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_01c72394(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0xc) = iVar18;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x18) = unaff_x20;
      (**(code **)(lVar7 + 0x10))(uVar16);
      lVar7 = *unaff_x25;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      plVar10 = (long *)thunk_FUN_01c49334(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
      if (plVar10 == (long *)0x0) goto LAB_02712378;
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) break;
      puVar11 = (undefined8 *)thunk_FUN_01c49834();
      *(undefined8 *)(unaff_x29 + -0x48) = *puVar11;
      uVar5 = FUN_032d0404(unaff_x29 + -0x48,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)puVar3);
      }
      uVar6 = FUN_0322441c(uVar6,uVar5,0);
      iVar18 = iVar18 + 1;
    }
  }
LAB_0271237c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


