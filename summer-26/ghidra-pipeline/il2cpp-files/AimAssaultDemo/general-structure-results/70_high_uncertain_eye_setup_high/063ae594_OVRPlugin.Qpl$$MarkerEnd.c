/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerEnd
ENTRY_POINT: 063ae594
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063aeb20) */
/* WARNING: Removing unreachable block (ram,0x063aeb58) */

int OVRPlugin_Qpl__MarkerEnd(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  long lVar17;
  long unaff_x21;
  undefined1 uStack000000000000000c;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xf98));
  FUN_0373b518(PTR_DAT_07d867b8);
  FUN_0373b518(PTR_DAT_07d896f8);
  FUN_0373b518(PTR_DAT_07db6fa0);
  FUN_0373b518(PTR_DAT_07db6fa8);
  FUN_0373b518(PTR_DAT_07d89700);
  *(undefined1 *)(unaff_x21 + 0x6c1) = 1;
  if (unaff_x19 == (long *)0x0) {
LAB_063aeb4c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar4 = (**(code **)(*unaff_x19 + 0x178))();
  puVar2 = PTR_DAT_07db6f78;
  iVar6 = 8;
  switch(uVar4) {
  case 1:
  case 9:
  case 0x12:
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f98 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f98)
       ) goto LAB_063aeb50;
    plVar10 = (long *)unaff_x19[4];
    if (plVar10 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      if (*plVar10 != *(long *)(PTR_DAT_07d86548 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar10);
      }
      lVar17 = *(long *)PTR_DAT_07db6f78;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar17 = *(long *)puVar2;
      }
      plVar9 = (long *)**(long **)(lVar17 + 0xb8);
      if (plVar9 == (long *)0x0) goto LAB_063aeb4c;
      iVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x1f0));
    }
    *(int *)((long)unaff_x19 + 0x2c) = iVar5;
    iVar6 = 5;
    if ((char)unaff_x19[6] == '\0') {
      iVar6 = 1;
    }
    iVar6 = iVar6 + iVar5;
    goto LAB_063aeb28;
  case 3:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f88 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07db6f88)
       ) {
      plVar10 = (long *)FUN_063afc7c();
      puVar3 = PTR_DAT_07db6fa8;
      puVar2 = PTR_DAT_07d89700;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar6 = 4;
      do {
        lVar17 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_063ae828;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar2,0);
LAB_063ae828:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar15 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_063aeb24;
          lVar17 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar15 == 0) goto LAB_063aeaa4;
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_063aea8c;
        }
        lVar17 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_063ae884;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar3,0);
LAB_063ae884:
        lVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        iVar5 = FUN_063ae52c();
        iVar7 = FUN_063ae52c();
        iVar6 = iVar6 + iVar5 + iVar7 + 1;
      } while( true );
    }
    goto LAB_063aeb50;
  case 4:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f70 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07db6f70)
       ) {
      plVar10 = (long *)FUN_063afdb0();
      puVar3 = PTR_DAT_07db6fa0;
      puVar2 = PTR_DAT_07d89700;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar17 = 0;
      iVar6 = 4;
      do {
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_063ae974;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar2,0);
LAB_063ae974:
        uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar15 & 1) == 0) goto LAB_063aea0c;
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_063ae9d0;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar3,0);
LAB_063ae9d0:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
        iVar5 = FUN_0632e3c8(lVar17,0);
        iVar7 = FUN_063ae52c();
        iVar6 = iVar7 + iVar6 + iVar5 + 2;
        lVar17 = lVar17 + 1;
      } while( true );
    }
LAB_063aeb50:
                    /* WARNING: Subroutine does not return */
    FUN_0373bb54();
  case 5:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f80 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f80)
       ) goto LAB_063aeb50;
    lVar17 = unaff_x19[4];
    if (lVar17 == 0) goto LAB_063aeb4c;
    uVar12 = *(undefined8 *)PTR_DAT_07d867b8;
    lVar8 = thunk_FUN_037787d0(lVar17,uVar12);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar17,uVar12);
    }
    iVar6 = *(int *)(lVar8 + 0x18) + 5;
    goto LAB_063aeb28;
  case 6:
  case 10:
    iVar6 = 0;
    break;
  case 7:
    iVar6 = 0xc;
    break;
  case 8:
    iVar6 = 1;
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6f90 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6f90)
       ) goto LAB_063aeb50;
    iVar5 = FUN_063ae52c();
    iVar6 = FUN_063ae52c();
    iVar6 = iVar6 + iVar5;
LAB_063aeb28:
    *(int *)(unaff_x19 + 3) = iVar6;
    break;
  default:
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar12 = FUN_061d52c8(0);
    FUN_031a5e18();
    uStack000000000000000c = (**(code **)(*unaff_x19 + 0x178))();
    uVar13 = thunk_FUN_037a15ac(PTR_DAT_07db6fb0);
    uVar13 = thunk_FUN_037784fc(uVar13,&stack0x0000000c);
    uVar14 = thunk_FUN_037a15ac(PTR_DAT_07db6fb8);
    uVar12 = FUN_063349e4(uVar14,uVar12,uVar13,0);
    thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
    uVar13 = thunk_FUN_037788cc();
    uVar14 = thunk_FUN_037a15ac(PTR_DAT_07d98ee8);
    FUN_061a5334(uVar13,uVar14,uVar12,0);
    uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db6fc0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar13,uVar12);
  case 0x10:
    iVar6 = 4;
  }
  return iVar6;
LAB_063aea0c:
  if (plVar10 != (long *)0x0) {
    lVar17 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_063aeb08;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_063aeb08:
    (*(code *)*puVar11)(plVar10,puVar11[1]);
  }
  goto LAB_063aeb24;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_063aea8c:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_063aeae0;
    }
  }
LAB_063aeaa4:
  puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07d896f8,0);
LAB_063aeae0:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_063aeb24:
  iVar6 = iVar6 + 1;
  goto LAB_063aeb28;
}


