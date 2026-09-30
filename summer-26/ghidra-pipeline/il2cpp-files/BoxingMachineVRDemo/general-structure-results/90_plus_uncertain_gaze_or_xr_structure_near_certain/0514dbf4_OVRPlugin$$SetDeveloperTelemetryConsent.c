/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 0514dbf4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__SetDeveloperTelemetryConsent(void)

{
  int iVar1;
  byte bVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  char cVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  long unaff_x20;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long in_stack_00000018;
  
                    /* try { // try from 0514dbf4 to 0524dc1b has its CatchHandler @ 0514dca0 */
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06780c08);
  *(undefined1 *)(unaff_x20 + 0xdb6) = 1;
  puVar4 = PTR_DAT_0675f3d8;
  iVar1 = *(int *)(unaff_x19 + 0x10);
                    /* try { // try from 0514dc1c to 0524dc47 has its CatchHandler @ 0514d83c */
  lVar16 = *(long *)(unaff_x19 + 0x38);
  if (iVar1 == 2) goto LAB_0514deac;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    plVar14 = *(long **)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
                    /* try { // try from 0514dc48 to 0524dc4b has its CatchHandler @ 0514dc90 */
                    /* try { // try from 0514dc4c to 0524dc67 has its CatchHandler @ 0514d83c */
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 0514dc68 to 0524dc77 has its CatchHandler @ 0514dc90 */
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780ac0) {
                    /* catch() { ... } // from try @ 0514dbf4 with catch @ 0514dca0
                       catch() { ... } // from try @ 0514dc78 with catch @ 0514dca0 */
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0514dca8;
        }
        uVar11 = uVar11 - 1;
                    /* try { // try from 0514dc78 to 0524dc97 has its CatchHandler @ 0514dca0 */
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
                    /* catch() { ... } // from try @ 0514dba0 with catch @ 0514dc80 */
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar14,*(long *)PTR_DAT_06780ac0,0);
LAB_0514dca8:
    uVar6 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    *(undefined8 *)(in_stack_00000018 + 0x50) = uVar6;
    thunk_FUN_02dd37b4();
    unaff_x19 = in_stack_00000018;
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
  plVar14 = (long *)PTR_DAT_06780528;
  plVar3 = (long *)PTR_DAT_0676aab8;
LAB_0514dce8:
  do {
    plVar13 = *(long **)(unaff_x19 + 0x50);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar10 = *plVar13;
    lVar9 = *(long *)puVar4;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0514dd3c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar9,0);
LAB_0514dd3c:
    uVar11 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      FUN_0514e2bc();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar13 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *plVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0514dda8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar13,*plVar3,0);
LAB_0514dda8:
    plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
    if (plVar13 != (long *)0x0) {
      bVar2 = *(byte *)(*plVar14 + 0x130);
      if ((bVar2 <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) == *plVar14)) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(lVar16 + 0x10) == 0) {
          uVar6 = FUN_0513336c(plVar13);
          *(undefined8 *)(in_stack_00000018 + 0x58) = uVar6;
          thunk_FUN_02dd37b4();
          unaff_x19 = in_stack_00000018;
LAB_0514deac:
          plVar14 = *(long **)(unaff_x19 + 0x58);
          *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffc;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar10 = *plVar14;
          lVar9 = *(long *)puVar4;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar9) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0514df08;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d9a5d4(plVar14,lVar9,0);
LAB_0514df08:
          uVar11 = (*(code *)*puVar5)(plVar14,puVar5[1]);
          if ((uVar11 & 1) != 0) {
            plVar14 = *(long **)(in_stack_00000018 + 0x58);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar16 = *plVar14;
            uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar11 == 0) goto LAB_0514dfc0;
            piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            break;
          }
          FUN_0514e20c();
          *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
          thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
          unaff_x19 = in_stack_00000018;
          plVar14 = (long *)PTR_DAT_06780528;
          plVar3 = (long *)PTR_DAT_0676aab8;
        }
        else {
          lVar9 = FUN_051339f4(plVar13,*(long *)(lVar16 + 0x10),0);
          if (lVar9 != 0) {
            *(long *)(in_stack_00000018 + 0x18) = lVar9;
            thunk_FUN_02dd37b4((long *)(in_stack_00000018 + 0x18));
            *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
            return 1;
          }
          lVar9 = *(long *)(in_stack_00000018 + 0x40);
          cVar8 = '\0';
          if (lVar9 != 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            cVar8 = *(char *)(lVar9 + 0x20);
          }
          unaff_x19 = in_stack_00000018;
          if (cVar8 != '\0') {
            lVar9 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_04f8e414(0);
            uVar15 = *(undefined8 *)(lVar16 + 0x10);
            uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781d40);
            uVar6 = FUN_050f0ec0(uVar7,uVar6,uVar15,0);
            thunk_FUN_02dc61f4(PTR_DAT_0677d960);
            uVar7 = thunk_FUN_02d9d534();
            FUN_050931fc(uVar7,uVar6,0);
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781d48);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar7,uVar6);
          }
        }
        goto LAB_0514dce8;
      }
    }
    lVar9 = *(long *)(in_stack_00000018 + 0x40);
    cVar8 = '\0';
    if (lVar9 != 0) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      cVar8 = *(char *)(lVar9 + 0x20);
    }
    unaff_x19 = in_stack_00000018;
    if (cVar8 != '\0') {
      lVar9 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_04f8e414(0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar16 = *(long *)(lVar16 + 0x10);
      if (lVar16 == 0) {
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
        lVar16 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
      }
      else {
        uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
      }
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar14 = (long *)thunk_FUN_02d709fc(plVar13,0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar15 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
      uVar6 = FUN_050f0fe0(uVar7,uVar6,lVar16,uVar15,0);
      thunk_FUN_02dc61f4(PTR_DAT_0677d960);
      uVar7 = thunk_FUN_02d9d534();
      FUN_050931fc(uVar7,uVar6,0);
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781d48);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar7,uVar6);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780bf8) {
      puVar5 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0514dfdc;
    }
  }
LAB_0514dfc0:
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar14,*(long *)PTR_DAT_06780bf8,0);
LAB_0514dfdc:
  (*(code *)*puVar5)(plVar14,puVar5[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


