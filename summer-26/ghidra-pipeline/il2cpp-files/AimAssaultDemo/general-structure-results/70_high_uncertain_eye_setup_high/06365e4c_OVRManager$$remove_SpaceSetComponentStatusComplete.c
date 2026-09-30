/*
FUNCTION_NAME: OVRManager$$remove_SpaceSetComponentStatusComplete
ENTRY_POINT: 06365e4c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceSetComponentStatusComplete(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long lVar13;
  long unaff_x24;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x28;
  long *plVar16;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar16 = *(long **)(unaff_x28 + 0xb18);
  uVar14 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
  lVar9 = *plVar16;
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06365ea0;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c(param_2,lVar9,0);
LAB_06365ea0:
  plVar7 = (long *)(*(code *)*puVar6)(param_2,uVar14,puVar6[1]);
  puVar2 = PTR_DAT_07db5570;
  if (plVar7 == (long *)0x0) goto LAB_06366490;
  lVar9 = plVar7[0xe];
  if (lVar9 == 0) {
    lVar9 = plVar7[0xf];
  }
  uVar15 = *unaff_x20;
  uVar14 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db53a0);
  FUN_0635f6bc();
  uVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_06366bb8(uVar8,uVar15,uVar14);
  uVar14 = FUN_06365650();
  if (unaff_x24 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = unaff_x24;
    uVar14 = thunk_FUN_037aeb94();
  }
  if ((unaff_x22 & 1) != 0) {
    lVar13 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar14 = FUN_04e590ec(&stack0x00000008,1,*(undefined8 *)PTR_DAT_07d88c90);
    if (lVar13 == 0) goto LAB_06366490;
    *(undefined2 *)(lVar13 + 0x20) = uStack0000000000000008;
  }
  lVar13 = *(long *)(unaff_x19 + 0x30);
  uVar14 = FUN_06366828(uVar14,*unaff_x20);
  if (lVar13 == 0) goto LAB_06366490;
  puVar6 = (undefined8 *)(lVar13 + 0x18);
  *puVar6 = uVar14;
  uVar14 = thunk_FUN_037aeb94(puVar6,uVar14);
  lVar13 = *(long *)(unaff_x19 + 0x30);
  uVar14 = FUN_063668d8(uVar14,*unaff_x20);
  if (lVar13 == 0) goto LAB_06366490;
  puVar6 = (undefined8 *)(lVar13 + 0x28);
  *puVar6 = uVar14;
  uVar14 = thunk_FUN_037aeb94(puVar6,uVar14);
  if (lVar9 == 0) {
    switch(*(undefined4 *)((long)plVar7 + 0x24)) {
    case 1:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar9 == 0) goto LAB_06366490;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar14 = FUN_063669d4();
      if (lVar9 == 0) goto LAB_06366490;
      puVar6 = (undefined8 *)(lVar9 + 0x10);
      *puVar6 = uVar14;
      thunk_FUN_037aeb94(puVar6,uVar14);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db4388 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4388))
      {
LAB_063667e8:
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar7);
      }
      FUN_06366c7c();
      break;
    case 2:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x20;
      if (unaff_w21 != 2) {
        uVar5 = 0x60;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar9 == 0) goto LAB_06366490;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar14 = FUN_063669d4();
      if (lVar9 == 0) goto LAB_06366490;
      puVar6 = (undefined8 *)(lVar9 + 0x10);
      *puVar6 = uVar14;
      thunk_FUN_037aeb94(puVar6,uVar14);
      uVar14 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d966a0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_04056a1c(uVar14,*(undefined8 *)PTR_DAT_07db5568);
      uVar14 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar14 = FUN_06331088(uVar14,0);
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
      }
      uVar10 = FUN_0625b9c4(uVar14,0,0);
      if ((uVar10 & 1) != 0) {
        lVar9 = *(long *)(unaff_x19 + 0x30);
        uVar14 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db52a0);
        FUN_049ce6c0(uVar14,*(undefined8 *)PTR_DAT_07db52a8);
        if (lVar9 == 0) goto LAB_06366490;
        puVar6 = (undefined8 *)(lVar9 + 0x98);
        *puVar6 = uVar14;
        thunk_FUN_037aeb94(puVar6,uVar14);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
        plVar16 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar14 = FUN_06365b68();
        if (plVar16 == (long *)0x0) goto LAB_06366490;
        lVar9 = *plVar16;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db52e0) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_06366754;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar16,*(long *)PTR_DAT_07db52e0,2);
LAB_06366754:
        (*(code *)*puVar6)(plVar16,uVar14,puVar6[1]);
      }
      break;
    case 3:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar5 = FUN_06367158(uVar14,*unaff_x20,unaff_w21);
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar9 == 0) goto LAB_06366490;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      uVar10 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      if (((uVar10 >> 0x20 == 4) && ((uVar10 & 0xff) != 0)) &&
         (uVar10 = FUN_06335a00(*unaff_x20,0), puVar2 = PTR_DAT_07d86548, (uVar10 & 1) != 0)) {
        plVar16 = (long *)*unaff_x20;
        uVar14 = *(undefined8 *)PTR_DAT_07d963e8;
        if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar14 = FUN_062519f8(uVar14,0);
        if (plVar16 == (long *)0x0) goto LAB_06366490;
        uVar10 = (**(code **)(*plVar16 + 0x1f8))(plVar16,uVar14,1,*(undefined8 *)(*plVar16 + 0x200))
        ;
        if ((uVar10 & 1) == 0) {
          lVar9 = *(long *)(unaff_x19 + 0x30);
          uVar14 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db34c8);
          FUN_049ce6c0(uVar14,*(undefined8 *)PTR_DAT_07db34c0);
          if (lVar9 != 0) {
            puVar6 = (undefined8 *)(lVar9 + 0xe0);
            *puVar6 = uVar14;
            thunk_FUN_037aeb94(puVar6,uVar14);
            uVar14 = *unaff_x20;
            if (*(int *)(*(long *)PTR_DAT_07d963d8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar9 = FUN_063275d4(uVar14,0);
            puVar4 = PTR_DAT_07db3528;
            puVar3 = PTR_DAT_07d96690;
            if ((lVar9 != 0) && (lVar13 = *(long *)(lVar9 + 0x20), lVar13 != 0)) {
              uVar10 = 0;
              while( true ) {
                if ((long)*(int *)(lVar13 + 0x18) <= (long)uVar10) goto LAB_06365fc4;
                lVar13 = *(long *)(lVar9 + 0x18);
                if (lVar13 == 0) break;
                if (*(uint *)(lVar13 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7bc();
                }
                uVar14 = *(undefined8 *)(lVar13 + uVar10 * 8 + 0x20);
                uVar8 = *unaff_x20;
                if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar14 = FUN_062772f0(uVar8,uVar14,0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*(long *)puVar3);
                }
                uVar14 = FUN_063853bc(uVar14,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar16 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar16 == (long *)0x0
                   )) break;
                lVar13 = *plVar16;
                uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                      puVar6 = (undefined8 *)(lVar13 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                      goto LAB_06366474;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar6 = (undefined8 *)FUN_0377596c(plVar16,*(long *)puVar4,2);
LAB_06366474:
                (*(code *)*puVar6)(plVar16,uVar14,puVar6[1]);
                lVar13 = *(long *)(lVar9 + 0x20);
                uVar10 = uVar10 + 1;
                if (lVar13 == 0) break;
              }
            }
          }
          goto LAB_06366490;
        }
      }
      break;
    case 4:
      lVar9 = plVar7[0xc];
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_0631f414(lVar9,0);
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x41;
      if (unaff_w21 == 2) {
        uVar5 = 1;
      }
      uVar14 = *(undefined8 *)PTR_DAT_07db3428;
      if ((uVar10 & 1) == 0) {
        uVar5 = 1;
      }
      goto LAB_06365fb4;
    case 5:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar9 == 0) goto LAB_06366490;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
      uVar14 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06331298(uVar14,&stack0x00000018,&stack0x00000010,0);
      uVar14 = in_stack_00000018;
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_0625b9c4(uVar14,0,0);
      if ((uVar10 & 1) != 0) {
        plVar7 = (long *)FUN_063655ac();
        uVar14 = in_stack_00000018;
        if (plVar7 == (long *)0x0) goto LAB_06366490;
        lVar13 = *plVar7;
        lVar9 = *plVar16;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_063666f4;
            }
            uVar10 = uVar10 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(plVar7,lVar9,0);
LAB_063666f4:
        lVar9 = (*(code *)*puVar6)(plVar7,uVar14,puVar6[1]);
        if (lVar9 == 0) goto LAB_06366490;
        if (*(int *)(lVar9 + 0x24) == 3) {
          lVar9 = *(long *)(unaff_x19 + 0x30);
          uVar14 = FUN_06365b68();
          if (lVar9 == 0) goto LAB_06366490;
          puVar6 = (undefined8 *)(lVar9 + 0xc0);
          *puVar6 = uVar14;
          thunk_FUN_037aeb94(puVar6,uVar14);
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_0636601c_caseD_6;
    case 7:
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar9 == 0) goto LAB_06366490;
      *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
      lVar9 = *(long *)(unaff_x19 + 0x30);
      uVar14 = FUN_063669d4();
      if (lVar9 == 0) goto LAB_06366490;
      puVar6 = (undefined8 *)(lVar9 + 0x10);
      *puVar6 = uVar14;
      thunk_FUN_037aeb94(puVar6,uVar14);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db46a0 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db46a0))
      goto LAB_063667e8;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar14 = FUN_061d52c8(0);
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db5590);
      uVar14 = FUN_063349e4(uVar8,uVar14,plVar7,0);
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar8 = thunk_FUN_037788cc();
      FUN_062d6d20(uVar8,uVar14,0);
      uVar14 = thunk_FUN_037a15ac(PTR_DAT_07db5588);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar8,uVar14);
    }
  }
  else {
switchD_0636601c_caseD_6:
    lVar9 = *(long *)(unaff_x19 + 0x30);
    uVar5 = 0x7f;
    uVar14 = *(undefined8 *)PTR_DAT_07db3428;
LAB_06365fb4:
    _uStack0000000000000008 = 0;
    FUN_04e5f37c(&stack0x00000008,uVar5,uVar14);
    if (lVar9 == 0) goto LAB_06366490;
    *(ulong *)(lVar9 + 0x30) = _uStack0000000000000008;
  }
LAB_06365fc4:
  lVar9 = FUN_0636579c();
  if (lVar9 != 0) {
    return *(undefined8 *)(lVar9 + 0x18);
  }
LAB_06366490:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


