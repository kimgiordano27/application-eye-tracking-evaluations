/*
FUNCTION_NAME: FUN_01eccf40
ENTRY_POINT: 01eccf40
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


void FUN_01eccf40(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0293d81b & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027bbbb0);
    thunk_FUN_01279b34(PTR_DAT_027bb770);
    thunk_FUN_01279b34(PTR_DAT_027b1ca8);
    thunk_FUN_01279b34(PTR_DAT_027bbbb8);
    thunk_FUN_01279b34(PTR_DAT_027bbc60);
    thunk_FUN_01279b34(PTR_DAT_027b3f80);
    thunk_FUN_01279b34(PTR_DAT_027bbfa0);
    DAT_0293d81b = 1;
  }
  if ((*(long *)(param_1 + 0x88) == 0) || (plVar6 = (long *)FUN_01eccae8(), plVar6 == (long *)0x0))
  goto LAB_01ecd678;
  plVar7 = plVar6;
  if (*plVar6 != *(long *)PTR_DAT_027bbc60) goto LAB_01ecd680;
  if ((int)plVar6[3] == 3) {
    if (0 < (int)plVar6[0x16]) {
      plVar7 = (long *)FUN_01ecce7c(plVar6,plVar6);
    }
    if (((char)plVar6[0x18] != '\0') && (0 < (int)plVar6[0x10])) {
      lVar10 = plVar6[0x17];
      if (lVar10 == 0) goto LAB_01ecd678;
      lVar12 = plVar6[0x15];
      uVar1 = *(uint *)(lVar10 + 0x18);
      lVar13 = 8;
      do {
        uVar15 = lVar13 - 8;
        if (uVar1 <= uVar15) goto LAB_01ecd674;
        lVar14 = plVar6[0x13];
        if (lVar14 == 0) goto LAB_01ecd678;
        if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_01ecd674;
        if (lVar12 == 0) goto LAB_01ecd678;
        if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_01ecd674;
        *(int *)(lVar12 + lVar13 * 4) =
             *(int *)(lVar14 + lVar13 * 4) + *(int *)(lVar10 + lVar13 * 4);
        lVar14 = lVar13 + -7;
        lVar13 = lVar13 + 1;
      } while (lVar14 < (int)plVar6[0x10]);
    }
  }
  else {
    lVar10 = plVar6[0x15];
    if ((char)plVar6[0x18] == '\0') {
      if (lVar10 == 0) goto LAB_01ecd678;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01ecd674;
      iVar11 = (int)plVar6[0x16];
    }
    else {
      lVar13 = plVar6[0x13];
      if (lVar13 == 0) goto LAB_01ecd678;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecd674;
      if (lVar10 == 0) goto LAB_01ecd678;
      if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01ecd674;
      iVar11 = *(int *)(lVar13 + 0x20) + (int)plVar6[0x16];
    }
    *(int *)(lVar10 + 0x20) = iVar11;
  }
  puVar4 = PTR_DAT_027bbbb0;
  if (param_2 == 0) goto LAB_01ecd678;
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 1:
    lVar10 = plVar6[0xe];
    lVar13 = *(long *)PTR_DAT_027bbbb0;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar13 = *(long *)puVar4;
    }
    lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
    if (lVar10 == lVar12) {
LAB_01ecd2e4:
      FUN_01ecd740(param_1,param_2,plVar6);
      plVar7 = (long *)plVar6[0x1e];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)plVar6[0x1d];
        if (plVar7 == (long *)0x0) {
LAB_01ecd678:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) {
LAB_01ecd680:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar7);
        }
        lVar10 = *(long *)(param_2 + 0x30);
        goto LAB_01ecd470;
      }
      lVar13 = plVar6[0x15];
      if (lVar13 == 0) goto LAB_01ecd678;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecd674;
      lVar10 = *(long *)(param_2 + 0x30);
LAB_01ecd310:
      uVar1 = *(uint *)(lVar13 + 0x20);
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0)) {
LAB_01ecd690:
        uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar8,0);
      }
      if (*(uint *)(plVar7 + 3) <= uVar1) {
LAB_01ecd674:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar7 = plVar7 + (long)(int)uVar1 + 4;
      *plVar7 = lVar10;
    }
    else {
      lVar10 = *(long *)(param_2 + 0x48);
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar13 = *(long *)puVar4;
        lVar12 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
      }
      if (lVar10 == lVar12) goto LAB_01ecd2e4;
      if ((char)plVar6[0xf] == '\0') {
        if (plVar6[0x1f] != 0) {
          lVar10 = plVar6[0x15];
          if (lVar10 == 0) goto LAB_01ecd678;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_01ecd674;
          FUN_01ecd780(plVar6[0x1f],*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(lVar10 + 0x20));
          goto LAB_01ecd654;
        }
        lVar10 = *(long *)(param_2 + 0x38);
        if (lVar10 == 0) {
          uVar8 = *(undefined8 *)(param_2 + 0x30);
          uVar2 = *(undefined4 *)((long)plVar6 + 0x7c);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
LAB_01ecd5a8:
          lVar10 = FUN_01ec47b4(uVar8,uVar2,0);
        }
      }
      else {
        if (*(long *)(param_2 + 0x40) == 0) {
          uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc010);
          uVar8 = FUN_01f942e0(uVar8,0);
          thunk_FUN_01279b34(PTR_DAT_027b5260);
          uVar9 = thunk_FUN_0124bba8();
          FUN_01eb38e0(uVar9,uVar8,0);
          uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc018);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar9,uVar8);
        }
        lVar10 = *(long *)(param_2 + 0x48);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
        }
        puVar5 = PTR_DAT_027bbbb8;
        if (lVar10 == lVar12) {
          FUN_01ecd740(param_1,param_2,plVar6);
          lVar10 = *(long *)(param_2 + 0x30);
        }
        else {
          local_34 = *(undefined4 *)(param_2 + 0x50);
          lVar10 = thunk_FUN_0124b7d8(*(undefined8 *)PTR_DAT_027bbbb8,&local_34);
          local_38 = 0;
          lVar13 = thunk_FUN_0124b7d8(*(undefined8 *)puVar5,&local_38);
          if (lVar10 == lVar13) {
            FUN_01ecb1d8(param_1,*(undefined8 *)(param_2 + 0x48));
            uVar8 = *(undefined8 *)(param_2 + 0x48);
            if (*(int *)(*(long *)PTR_DAT_027bb770 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            lVar10 = FUN_01eb6344(uVar8,0);
          }
          else {
            lVar10 = *(long *)(param_2 + 0x38);
            if (lVar10 == 0) {
              uVar8 = *(undefined8 *)(param_2 + 0x30);
              uVar2 = *(undefined4 *)(param_2 + 0x50);
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              goto LAB_01ecd5a8;
            }
          }
        }
      }
      plVar7 = (long *)plVar6[0x1e];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)plVar6[0x1d];
        if (plVar7 == (long *)0x0) goto LAB_01ecd678;
        bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) goto LAB_01ecd680;
        lVar13 = plVar6[0x15];
        break;
      }
      lVar13 = plVar6[0x15];
      if (lVar13 == 0) goto LAB_01ecd678;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecd674;
      uVar1 = *(uint *)(lVar13 + 0x20);
      if ((lVar10 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
      goto LAB_01ecd690;
      if (*(uint *)(plVar7 + 3) <= uVar1) goto LAB_01ecd674;
      plVar7 = plVar7 + (long)(int)uVar1 + 4;
      *plVar7 = lVar10;
    }
FUN_01ecd600:
    thunk_FUN_01286abc(plVar7,lVar10);
    goto LAB_01ecd654;
  case 2:
    if (*(long *)(param_2 + 0x48) == 0) {
      *(long *)(param_2 + 0x48) = plVar6[0xe];
      thunk_FUN_01286abc();
    }
    FUN_01ecb63c(param_1,param_2);
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_01ecd678;
    FUN_01ec8d38(*(long *)(param_1 + 0x88),param_2);
    if (plVar6[0xe] == 0) goto LAB_01ecd654;
    uVar15 = OVRPlugin__set_tiledMultiResLevel(plVar6[0xe],0);
    if (((uVar15 & 1) != 0) && (*(int *)(param_2 + 0x7c) == 0)) {
      *(undefined1 *)(param_2 + 0xe0) = 1;
      lVar10 = FUN_01eca5b8(param_1);
      plVar7 = (long *)plVar6[0x1d];
      lVar13 = plVar6[0x15];
      uVar8 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027bbfa0);
      if (plVar7 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar7);
        }
      }
      FUN_01ecd6f4(uVar8,plVar7,lVar13);
      if (lVar10 == 0) goto LAB_01ecd678;
      FUN_01ec8d38(lVar10,uVar8);
      goto LAB_01ecd654;
    }
    plVar7 = (long *)plVar6[0x1e];
    if (plVar7 != (long *)0x0) {
      lVar13 = plVar6[0x15];
      if (lVar13 == 0) goto LAB_01ecd678;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecd674;
      lVar10 = *(long *)(param_2 + 0xe8);
      goto LAB_01ecd310;
    }
    plVar7 = (long *)plVar6[0x1d];
    if (plVar7 == (long *)0x0) goto LAB_01ecd678;
    bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80))
    goto LAB_01ecd680;
    lVar10 = *(long *)(param_2 + 0xe8);
LAB_01ecd470:
    lVar13 = plVar6[0x15];
    break;
  case 3:
    plVar7 = *(long **)(param_1 + 0x30);
    if (plVar7 == (long *)0x0) goto LAB_01ecd678;
    lVar10 = (**(code **)(*plVar7 + 0x178))
                       (plVar7,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(*plVar7 + 0x180));
    if (lVar10 == 0) {
      uVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,(int)plVar6[0x10]);
      FUN_01f89ca0(plVar6[0x15],0,uVar8,0,(int)plVar6[0x10],0);
      plVar7 = *(long **)(param_1 + 0x30);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1b8))
                  (plVar7,plVar6[0xb],uVar8,*(undefined8 *)(param_2 + 0x60),
                   *(undefined8 *)(*plVar7 + 0x1c0));
        goto LAB_01ecd654;
      }
      goto LAB_01ecd678;
    }
    plVar7 = (long *)plVar6[0x1e];
    if (plVar7 != (long *)0x0) {
      lVar13 = plVar6[0x15];
      if (lVar13 == 0) goto LAB_01ecd678;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01ecd674;
      uVar1 = *(uint *)(lVar13 + 0x20);
      lVar13 = thunk_FUN_0124baac(lVar10,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar13 == 0) goto LAB_01ecd690;
      if (*(uint *)(plVar7 + 3) <= uVar1) goto LAB_01ecd674;
      plVar7 = plVar7 + (long)(int)uVar1 + 4;
      *plVar7 = lVar10;
      goto FUN_01ecd600;
    }
    plVar7 = (long *)plVar6[0x1d];
    if (plVar7 == (long *)0x0) goto LAB_01ecd678;
    bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80))
    goto LAB_01ecd680;
    lVar13 = plVar6[0x15];
    break;
  case 4:
    *(int *)(plVar6 + 0x16) = (int)plVar6[0x16] + *(int *)(param_2 + 0x118) + -1;
    goto LAB_01ecd654;
  default:
    FUN_01ecc13c(plVar7,param_2,plVar6);
    goto LAB_01ecd690;
  }
  thunk_FUN_0122b918(plVar7,lVar10,lVar13,0);
LAB_01ecd654:
  *(int *)(plVar6 + 0x16) = (int)plVar6[0x16] + 1;
  return;
}


