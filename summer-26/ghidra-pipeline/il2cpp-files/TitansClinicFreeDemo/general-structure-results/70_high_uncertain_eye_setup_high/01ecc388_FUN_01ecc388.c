/*
FUNCTION_NAME: FUN_01ecc388
ENTRY_POINT: 01ecc388
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01ecc388(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 local_34;
  
  if ((DAT_0293d81a & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b1f68);
    thunk_FUN_01279b34(PTR_DAT_027b39e0);
    thunk_FUN_01279b34(PTR_DAT_027bbbb0);
    thunk_FUN_01279b34(PTR_DAT_027bbfd0);
    thunk_FUN_01279b34(PTR_DAT_027b1ca8);
    thunk_FUN_01279b34(PTR_DAT_027b3650);
    thunk_FUN_01279b34(PTR_DAT_027bbc60);
    thunk_FUN_01279b34(PTR_DAT_027bbfd8);
    thunk_FUN_01279b34(PTR_DAT_027b3f80);
    thunk_FUN_01279b34(PTR_DAT_027b1a80);
    DAT_0293d81a = 1;
  }
  if (param_2 == 0) goto LAB_01ecc9f8;
  iVar12 = *(int *)(param_2 + 0x18);
  if (iVar12 == 4) {
    lVar13 = *(long *)(param_2 + 0x30);
    if (lVar13 == 0) goto LAB_01ecc9f8;
    if (*(int *)(lVar13 + 0x10) < 1) {
      uVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1f68,0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_027b39e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01e89774(lVar13,0);
    }
    *(undefined8 *)(param_2 + 0xe8) = uVar5;
    thunk_FUN_01286abc();
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_01ecc9f8;
    lVar13 = FUN_01eccae8();
    if (lVar13 == param_2) {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_01ecc9f8;
      FUN_01ec8cdc();
    }
    if (*(int *)(param_2 + 0x24) == 1) {
      lVar13 = *(long *)(param_2 + 0xe8);
      goto LAB_01ecc518;
    }
LAB_01ecc520:
    if (*(long *)(param_1 + 0x88) != 0) {
      plVar7 = (long *)FUN_01eccae8();
      if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)PTR_DAT_027bbc60)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar7);
      }
      FUN_01ecdc10(param_1,*(undefined8 *)(param_2 + 0xe8),param_2,plVar7,0);
      return;
    }
    goto LAB_01ecc9f8;
  }
  plVar7 = (long *)(param_2 + 0xe8);
  if (*plVar7 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x7c);
    if (*(int *)(*(long *)PTR_DAT_027bbbb0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01ec359c(uVar1,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(param_2 + 0x24) == 1) {
        lVar13 = *plVar7;
LAB_01ecc518:
        FUN_01eca644(param_1,lVar13);
      }
      goto LAB_01ecc520;
    }
    iVar12 = *(int *)(param_2 + 0x18);
  }
  puVar4 = PTR_DAT_027bbbb0;
  if (1 < iVar12 - 1U) {
    if (iVar12 != 3) {
      uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3650);
      uVar5 = FUN_01230af8(uVar5,1);
      FUN_0103b050(param_2);
      local_34 = *(undefined4 *)(param_2 + 0x18);
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027bbfe0);
      uVar9 = thunk_FUN_0124b7d8(uVar9,&local_34);
      FUN_0103b050(uVar5);
      FUN_0103b3ac(uVar5,uVar9);
      FUN_0103b3e0(uVar5,0,uVar9);
      uVar9 = thunk_FUN_01279b34(PTR_DAT_027bbfe8);
      uVar5 = FUN_01f9b348(uVar9,uVar5,0);
      thunk_FUN_01279b34(PTR_DAT_027b5260);
      uVar9 = thunk_FUN_0124bba8();
      FUN_01eb38e0(uVar9,uVar5,0);
      uVar5 = thunk_FUN_01279b34(PTR_DAT_027bbff0);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar9,uVar5);
    }
    lVar13 = *(long *)(param_2 + 0x98);
    *(undefined1 *)(param_2 + 0xc0) = 0;
    if ((lVar13 == 0) || (*(int *)(param_2 + 0x80) < 1)) {
      bVar10 = false;
    }
    else {
      uVar2 = *(uint *)(lVar13 + 0x18);
      bVar10 = false;
      uVar6 = 0;
      do {
        if (uVar2 == uVar6) goto LAB_01ecc9f4;
        if (*(int *)(lVar13 + 0x20 + uVar6 * 4) != 0) {
          bVar10 = true;
          *(undefined1 *)(param_2 + 0xc0) = 1;
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(param_2 + 0x80));
    }
    if (*(long *)(param_2 + 0x70) != 0) {
      if (bVar10) {
        lVar13 = thunk_FUN_01f8c99c();
      }
      else {
        lVar13 = thunk_FUN_01f894b8(*(long *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),0);
      }
      *plVar7 = lVar13;
      thunk_FUN_01286abc(plVar7,lVar13);
    }
    puVar4 = PTR_DAT_027b1ca8;
    if (*(int *)(param_2 + 0x80) < 1) {
      iVar12 = 1;
    }
    else {
      lVar13 = *(long *)(param_2 + 0x88);
      if (lVar13 == 0) goto LAB_01ecc9f8;
      uVar6 = 0;
      iVar12 = 1;
      do {
        if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_01ecc9f4;
        lVar8 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        iVar12 = *(int *)(lVar13 + 0x20 + lVar8) * iVar12;
      } while ((long)uVar6 < (long)*(int *)(param_2 + 0x80));
    }
    uVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8);
    *(undefined8 *)(param_2 + 0xa8) = uVar5;
    thunk_FUN_01286abc();
    uVar5 = FUN_01230af8(*(undefined8 *)puVar4,*(undefined4 *)(param_2 + 0x80));
    *(undefined8 *)(param_2 + 0xb8) = uVar5;
    thunk_FUN_01286abc((undefined8 *)(param_2 + 0xb8),uVar5);
    *(int *)(param_2 + 0xb4) = iVar12;
    return;
  }
  lVar13 = *(long *)(param_2 + 0x98);
  if (lVar13 == 0) {
LAB_01ecc5d4:
    lVar8 = *(long *)(param_2 + 0x70);
    lVar13 = *(long *)PTR_DAT_027bbbb0;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar13 = *(long *)puVar4;
    }
    lVar11 = *(long *)(lVar13 + 0xb8);
    if (lVar8 == *(long *)(lVar11 + 0x38)) {
      lVar13 = *(long *)(param_2 + 0x88);
      if (lVar13 == 0) goto LAB_01ecc9f8;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecc9f4;
      uVar1 = *(undefined4 *)(lVar13 + 0x20);
      puVar14 = (undefined8 *)PTR_DAT_027b1a80;
LAB_01ecc748:
      uVar5 = FUN_01230af8(*puVar14,uVar1);
      puVar14 = (undefined8 *)(param_2 + 0xf0);
      *puVar14 = uVar5;
      thunk_FUN_01286abc(puVar14,uVar5);
      *(undefined8 *)(param_2 + 0xe8) = *puVar14;
      thunk_FUN_01286abc(plVar7);
      bVar10 = false;
    }
    else {
      lVar8 = *(long *)(param_2 + 0x70);
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar11 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      if (lVar8 == *(long *)(lVar11 + 0xc0)) {
        lVar13 = *(long *)(param_2 + 0x88);
        if (lVar13 == 0) goto LAB_01ecc9f8;
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecc9f4;
        uVar1 = *(undefined4 *)(lVar13 + 0x20);
        puVar14 = (undefined8 *)PTR_DAT_027b3650;
        goto LAB_01ecc748;
      }
      lVar13 = *(long *)(param_2 + 0x70);
      if (lVar13 != 0) {
        lVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        lVar11 = *(long *)(param_2 + 0x88);
        if (lVar11 == 0) {
LAB_01ecc9f8:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        if (*(int *)(lVar11 + 0x18) == 0) {
LAB_01ecc9f4:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        if (lVar8 == 0) goto LAB_01ecc9f8;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01ecc9f4;
        *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
        lVar13 = thunk_FUN_01f894b8(lVar13,lVar8,0);
        *plVar7 = lVar13;
        thunk_FUN_01286abc(plVar7,lVar13);
      }
      bVar10 = true;
    }
    *(undefined1 *)(param_2 + 0xc0) = 0;
    if (*(int *)(param_2 + 0x18) == 1) {
      uVar1 = *(undefined4 *)(param_2 + 0x7c);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01ec359c(uVar1,0);
      if ((uVar6 & 1) == 0) {
        if (bVar10) goto LAB_01ecc834;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x7c);
        plVar15 = *(long **)(param_2 + 0xe8);
        lVar13 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bbfd8);
        if (plVar15 != (long *)0x0) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_027b3f80)) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(plVar15);
          }
        }
        FUN_01fab77c(lVar13,0);
        FUN_01ed5868(lVar13,uVar1,plVar15);
        plVar15 = (long *)(param_2 + 0xf8);
        *plVar15 = lVar13;
LAB_01ecc828:
        thunk_FUN_01286abc(plVar15,lVar13);
      }
    }
  }
  else {
    if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecc9f4;
    if (*(int *)(lVar13 + 0x20) == 0) goto LAB_01ecc5d4;
    if (*(long *)(param_2 + 0x70) != 0) {
      uVar5 = thunk_FUN_01f8c99c(*(long *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x88),lVar13,0)
      ;
      *(undefined8 *)(param_2 + 0xe8) = uVar5;
      thunk_FUN_01286abc(plVar7,uVar5);
    }
    *(undefined1 *)(param_2 + 0xc0) = 1;
    if (*(int *)(param_2 + 0x18) == 1) {
LAB_01ecc834:
      if (((*(long *)(param_2 + 0x70) != 0) &&
          (uVar6 = OVRPlugin__set_tiledMultiResLevel(*(long *)(param_2 + 0x70),0),
          puVar4 = PTR_DAT_027b3650, (uVar6 & 1) == 0)) && (*(char *)(param_2 + 0xc0) == '\0')) {
        lVar8 = *plVar7;
        if (lVar8 == 0) {
          lVar13 = 0;
          *(undefined8 *)(param_2 + 0xf0) = 0;
        }
        else {
          uVar5 = *(undefined8 *)PTR_DAT_027b3650;
          lVar13 = thunk_FUN_0124baac(lVar8,uVar5);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar8,uVar5);
          }
          *(long *)(param_2 + 0xf0) = lVar13;
          uVar5 = *(undefined8 *)puVar4;
          lVar13 = thunk_FUN_0124baac(lVar8,uVar5);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar8,uVar5);
          }
        }
        plVar15 = (long *)(param_2 + 0xf0);
        goto LAB_01ecc828;
      }
    }
  }
  puVar4 = PTR_DAT_027bbfd0;
  if (*(int *)(param_2 + 0x24) == 3) {
    lVar13 = *plVar7;
    if (lVar13 == 0) {
      lVar8 = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      uVar5 = *(undefined8 *)PTR_DAT_027bbfd0;
      lVar8 = thunk_FUN_0124baac(lVar13,uVar5);
      if (lVar8 == 0) {
LAB_01ecca04:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar13,uVar5);
      }
      *(long *)(param_1 + 0x68) = lVar8;
      uVar5 = *(undefined8 *)puVar4;
      lVar8 = thunk_FUN_0124baac(lVar13,uVar5);
      if (lVar8 == 0) goto LAB_01ecca04;
    }
    thunk_FUN_01286abc(param_1 + 0x68,lVar8);
  }
  uVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
  *(undefined8 *)(param_2 + 0xa8) = uVar5;
  thunk_FUN_01286abc((undefined8 *)(param_2 + 0xa8),uVar5);
  return;
}


