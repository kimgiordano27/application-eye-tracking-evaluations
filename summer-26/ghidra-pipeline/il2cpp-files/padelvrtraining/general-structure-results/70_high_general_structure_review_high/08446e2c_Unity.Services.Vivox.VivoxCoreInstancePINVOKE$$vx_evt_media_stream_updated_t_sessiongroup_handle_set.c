/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_sessiongroup_handle_set
ENTRY_POINT: 08446e2c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x084473f8) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_sessiongroup_handle_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 *unaff_x23;
  undefined1 auVar15 [16];
  
  FUN_03d2d2b0(PTR_DAT_0927b1a8);
  FUN_03d2d2b0(PTR_DAT_091a14e0);
  FUN_03d2d2b0(PTR_DAT_091af380);
  FUN_03d2d2b0(PTR_DAT_091af388);
  FUN_03d2d2b0(PTR_DAT_091a1508);
  FUN_03d2d2b0(PTR_DAT_091af1c8);
  FUN_03d2d2b0(PTR_DAT_091af1d0);
  FUN_03d2d2b0(PTR_DAT_091a2770);
  FUN_03d2d2b0(PTR_DAT_091a5a20);
  FUN_03d2d2b0(PTR_DAT_091a1438);
  FUN_03d2d2b0(PTR_DAT_091a85e0);
  FUN_03d2d2b0(PTR_DAT_091a85f0);
  FUN_03d2d2b0(PTR_DAT_091a85f8);
  FUN_03d2d2b0(PTR_DAT_091a1440);
  FUN_03d2d2b0(PTR_DAT_091a1448);
  FUN_03d2d2b0(PTR_DAT_0927ccc8);
  FUN_03d2d2b0(PTR_DAT_091a8600);
  FUN_03d2d2b0(PTR_DAT_091a8608);
  FUN_03d2d2b0(PTR_DAT_091b2d80);
  FUN_03d2d2b0(PTR_DAT_091a8618);
  *(undefined1 *)(unaff_x22 + 0xdc1) = 1;
  lVar6 = thunk_FUN_03d2ef40(*unaff_x23);
  FUN_06b6d004(lVar6,*unaff_x19);
  puVar2 = PTR_DAT_0927b1a8;
  if (unaff_x21 == (long *)0x0) {
LAB_084473ec:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar10 = *unaff_x21;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0927b1a8) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_08446f90;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370();
LAB_08446f90:
  puVar3 = PTR_DAT_091a8588;
  uVar8 = (*(code *)*puVar7)();
  uVar11 = FUN_06fd246c(uVar8,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08446ffc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370();
LAB_08446ffc:
    uVar8 = (*(code *)*puVar7)();
    uVar8 = FUN_06fc5244(*(undefined8 *)PTR_DAT_091a8618,uVar8,0);
    if (lVar6 == 0) goto LAB_084473ec;
    FUN_06b6dddc(lVar6,*(undefined8 *)PTR_DAT_091a8608,uVar8,*(undefined8 *)puVar3);
  }
  if (*(int *)(*(long *)PTR_DAT_091a0bf0 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar8 = FUN_08a08fd8(0);
  puVar7 = (undefined8 *)PTR_DAT_0927ccc8;
  puVar5 = PTR_DAT_0927c368;
  puVar4 = PTR_DAT_091a8600;
  puVar1 = PTR_DAT_091a85f8;
  puVar2 = PTR_DAT_091a2770;
  if (lVar6 == 0) goto LAB_084473ec;
  FUN_06b6dddc(lVar6,*(undefined8 *)PTR_DAT_091a85e0,uVar8,*(undefined8 *)puVar3);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar1;
  }
  FUN_06b6dddc(lVar6,*(undefined8 *)puVar4,*puVar7,*(undefined8 *)puVar3);
  lVar10 = FUN_03d2d394(*(undefined8 *)puVar2,1);
  puVar1 = PTR_DAT_091a1448;
  if (lVar10 == 0) goto LAB_084473ec;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_084473f0;
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_091a1448;
  thunk_FUN_03d1023c();
  lVar9 = FUN_03d2d394(*(undefined8 *)puVar2,2);
  if (lVar9 == 0) goto LAB_084473ec;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_084473f0:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d550();
  }
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_03d1023c((undefined8 *)(lVar9 + 0x20));
  puVar2 = PTR_DAT_091a5a20;
  if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_084473f0;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_091a85f0;
  uVar8 = thunk_FUN_03d1023c();
  uVar8 = FUN_08432024(uVar8,lVar9);
  uVar11 = FUN_06fd246c(uVar8,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_06b6dddc(lVar6,*(undefined8 *)PTR_DAT_091a1438,uVar8,*(undefined8 *)puVar3);
  }
  uVar14 = *(undefined8 *)puVar2;
  uVar8 = FUN_084320fc(uVar11,lVar10);
  uVar11 = FUN_06fd246c(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_06fd18b4(uVar14,*(undefined8 *)puVar2,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_06fd18b4(uVar14,*(undefined8 *)PTR_DAT_091b2d80,0), (uVar11 & 1) == 0))
    goto LAB_08447204;
    uVar8 = *(undefined8 *)puVar1;
  }
  FUN_06b6dddc(lVar6,*(undefined8 *)PTR_DAT_091a1440,uVar8,*(undefined8 *)puVar3);
LAB_08447204:
  if ((unaff_x20 == 0) || (plVar13 = *(long **)(unaff_x20 + 0x28), plVar13 == (long *)0x0)) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_091af380) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_08447264;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)PTR_DAT_091af380,0);
LAB_08447264:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  puVar1 = PTR_DAT_091af388;
  puVar3 = PTR_DAT_091af2c8;
  puVar2 = PTR_DAT_091a1508;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  do {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_084472dc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar2,0);
LAB_084472dc:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) break;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_08447338;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar1,0);
LAB_08447338:
    auVar15 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    FUN_06b6ddc8(lVar6,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar3);
  } while( true );
  if (plVar13 == (long *)0x0) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_091a14e0) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto FUN_084473c0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)PTR_DAT_091a14e0,0);
FUN_084473c0:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


