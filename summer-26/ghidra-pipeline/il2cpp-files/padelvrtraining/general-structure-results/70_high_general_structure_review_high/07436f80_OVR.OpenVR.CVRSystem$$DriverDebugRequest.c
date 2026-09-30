/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$DriverDebugRequest
ENTRY_POINT: 07436f80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07437418) */
/* WARNING: Removing unreachable block (ram,0x07437498) */

void OVR_OpenVR_CVRSystem__DriverDebugRequest(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_03d2d2b0(PTR_DAT_092227e0);
  *(undefined1 *)(unaff_x20 + 0x6c8) = 1;
  if (DAT_098362c7 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a0f88);
    DAT_098362c7 = '\x01';
  }
  if (((*(long *)(unaff_x19 + 0x30) != 0) &&
      (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar10 != 0)) &&
     (plVar16 = *(long **)(lVar10 + 0x10), plVar16 != (long *)0x0)) {
    lVar11 = *plVar16;
    lVar10 = *(long *)PTR_DAT_091a0be8;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    uStack0000000000000000 = **(undefined8 **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar20 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_091a0f88 + 0xb8) + 1);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092225e0) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_07437048;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370(plVar16,*(long *)PTR_DAT_092225e0,0);
LAB_07437048:
    plVar16 = (long *)(*(code *)*puVar5)(plVar16,puVar5[1]);
    puVar4 = PTR_DAT_092227e0;
    puVar3 = PTR_DAT_0921fbf0;
    puVar2 = PTR_DAT_091a1508;
    puVar1 = PTR_DAT_091a0f90;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    do {
      lVar11 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_074370cc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar16,*(long *)puVar2,0);
LAB_074370cc:
      uVar14 = (*(code *)*puVar5)(plVar16,puVar5[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar16 == (long *)0x0)
        goto OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked__Invoke;
        lVar11 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_074373e4;
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_074373cc;
      }
      lVar11 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092225e8) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07437130;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar16,*(long *)PTR_DAT_092225e8,0);
LAB_07437130:
      lVar11 = (*(code *)*puVar5)(plVar16,puVar5[1]);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x60);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*(long *)PTR_DAT_091a0c40 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar6 = FUN_050a1198(uVar21,uVar7,*(undefined8 *)PTR_DAT_091a1480);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = FUN_04f82e34(lVar6,*(undefined8 *)PTR_DAT_092227d0);
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar18 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x28);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar12 = *plVar18;
      lVar9 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_074371e8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar18,lVar9,0);
LAB_074371e8:
      uVar14 = (*(code *)*puVar5)(plVar18,puVar5[1]);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548(uVar14,uVar14 & 0xffffffff);
      }
      FUN_07436194(lVar6,uVar14 & 0xffffffff,lVar11,*(undefined8 *)(unaff_x19 + 0x28),
                   *(undefined8 *)(unaff_x19 + 0x30));
      lVar6 = FUN_08a4d98c(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      FUN_08a5debc(*(undefined4 *)(unaff_x19 + 0x7c),*(undefined4 *)(unaff_x19 + 0x80),
                   *(undefined4 *)(unaff_x19 + 0x84),lVar6,0);
      if (DAT_098362c8 == '\0') {
        FUN_03d2d2b0(puVar1);
        DAT_098362c8 = '\x01';
      }
      puVar13 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_08a5d920(*puVar13,puVar13[1],puVar13[2],puVar13[3],lVar6,0);
      fVar19 = (float)((ulong)uStack0000000000000000 >> 0x20);
      FUN_08a5caa0(uStack0000000000000000,fVar19,fVar20,lVar6,0);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x70);
      fVar22 = *(float *)(unaff_x19 + 0x78);
      uVar14 = FUN_06fd246c(lVar10,0);
      if ((uVar14 & 1) == 0) {
        lVar10 = FUN_06fc5244(lVar10,*(undefined8 *)PTR_DAT_092227d8,0);
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      uStack000000000000001c = *(undefined4 *)(lVar11 + 0x10);
      uVar7 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_091feed0,(long)&stack0x00000018 + 4);
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      plVar18 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x28);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      lVar6 = *plVar18;
      uVar17 = *(undefined8 *)(lVar11 + 0x18);
      lVar11 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_07437338;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370(plVar18,lVar11,0);
LAB_07437338:
      uStack0000000000000018 = (*(code *)*puVar5)(plVar18,puVar5[1]);
      uVar8 = thunk_FUN_03d2eb70(*(undefined8 *)PTR_DAT_092226b0,&stack0x00000018);
      uVar7 = FUN_06fd28dc(*(undefined8 *)puVar4,uVar7,uVar17,uVar8,0);
      lVar10 = FUN_06fc5244(lVar10,uVar7,0);
      fVar20 = fVar20 + fVar22;
      uStack0000000000000000 =
           CONCAT44(fVar19 + (float)((ulong)uVar21 >> 0x20),
                    (float)uStack0000000000000000 + (float)uVar21);
    } while( true );
  }
  goto LAB_07437490;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_074373cc:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_091a14e0) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_07437400;
    }
  }
LAB_074373e4:
  puVar5 = (undefined8 *)FUN_03d8f370(plVar16,*(long *)PTR_DAT_091a14e0,0);
LAB_07437400:
  (*(code *)*puVar5)(plVar16,puVar5[1]);
OVR_OpenVR_CVRSystem__GetControllerStateWithPosePacked__Invoke:
  plVar16 = *(long **)(unaff_x19 + 0x88);
  if (plVar16 != (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_091a0be8;
    if (lVar10 != 0) {
      lVar11 = lVar10;
    }
    (**(code **)(*plVar16 + 0x558))(plVar16,lVar11,*(undefined8 *)(*plVar16 + 0x560));
    return;
  }
LAB_07437490:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


