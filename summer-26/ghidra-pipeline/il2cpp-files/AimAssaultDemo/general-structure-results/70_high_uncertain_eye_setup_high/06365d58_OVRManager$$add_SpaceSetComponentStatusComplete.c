/*
FUNCTION_NAME: OVRManager$$add_SpaceSetComponentStatusComplete
ENTRY_POINT: 06365d58
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


long OVRManager__add_SpaceSetComponentStatusComplete(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 uVar15;
  long unaff_x25;
  undefined8 uVar16;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar6 = FUN_063669d4();
  uVar7 = FUN_063349dc(param_1,0);
  if ((uVar7 & 1) == 0) {
    plVar8 = *(long **)(unaff_x19 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_06366490;
    lVar9 = (**(code **)(*plVar8 + 0x178))(plVar8,param_1,*(undefined8 *)(*plVar8 + 0x180));
    if (lVar9 != 0) {
      if ((unaff_w21 != 2) &&
         (uVar7 = FUN_06366ae0(*(undefined8 *)(lVar9 + 0x30),0x40), (uVar7 & 1) == 0)) {
        if ((*(ulong *)(lVar9 + 0x30) & 0xff) == 0) {
          uVar7 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          FUN_04e5f37c(&stack0x00000008,(uint)(*(ulong *)(lVar9 + 0x30) >> 0x20) | 0x40,
                       *(undefined8 *)PTR_DAT_07db3428);
          uVar7 = _uStack0000000000000008;
        }
        *(ulong *)(lVar9 + 0x30) = uVar7;
      }
      if ((unaff_x22 & 1) == 0) {
        return lVar9;
      }
      if ((0xff < *(ushort *)(lVar9 + 0x20)) && ((*(ushort *)(lVar9 + 0x20) & 0xff) != 0)) {
        return lVar9;
      }
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      FUN_04e590ec(&stack0x00000008,1,*(undefined8 *)PTR_DAT_07d88c90);
      *(undefined2 *)(lVar9 + 0x20) = uStack0000000000000008;
      return lVar9;
    }
  }
  puVar2 = PTR_DAT_07db5558;
  uVar15 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5560);
  FUN_044a3874();
  uVar7 = FUN_03f45cf0(uVar15,uVar10,*(undefined8 *)puVar2);
  if ((uVar7 & 1) != 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar15 = FUN_061d52c8(0);
    FUN_031a5e18();
    plVar8 = *(long **)(unaff_x25 + 0x10);
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db5580);
LAB_063667a4:
    uVar10 = FUN_063349e4(uVar10,uVar15,plVar8,0);
    thunk_FUN_037a15ac(PTR_DAT_07d967c8);
    uVar15 = thunk_FUN_037788cc();
    FUN_062d6d20(uVar15,uVar10,0);
    uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db5588);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar15,uVar10);
  }
  plVar8 = (long *)FUN_063655ac();
  puVar2 = PTR_DAT_07db4b18;
  if (plVar8 == (long *)0x0) goto LAB_06366490;
  lVar9 = *plVar8;
  uVar10 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db4b18) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06365ea0;
      }
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar7 != 0);
  }
  puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07db4b18,0);
LAB_06365ea0:
  plVar8 = (long *)(*(code *)*puVar11)(plVar8,uVar10,puVar11[1]);
  puVar3 = PTR_DAT_07db5570;
  if (plVar8 == (long *)0x0) goto LAB_06366490;
  lVar9 = plVar8[0xe];
  if (lVar9 == 0) {
    lVar9 = plVar8[0xf];
  }
  uVar16 = *unaff_x20;
  uVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db53a0);
  FUN_0635f6bc();
  uVar15 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
  FUN_06366bb8(uVar15,uVar16,uVar10);
  uVar10 = FUN_06365650();
  if (lVar6 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
    plVar12 = (long *)(*(long *)(unaff_x19 + 0x30) + 0x10);
    *plVar12 = lVar6;
    uVar10 = thunk_FUN_037aeb94(plVar12,lVar6);
  }
  if ((unaff_x22 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar10 = FUN_04e590ec(&stack0x00000008,1,*(undefined8 *)PTR_DAT_07d88c90);
    if (lVar6 == 0) goto LAB_06366490;
    *(undefined2 *)(lVar6 + 0x20) = uStack0000000000000008;
  }
  lVar6 = *(long *)(unaff_x19 + 0x30);
  uVar10 = FUN_06366828(uVar10,*unaff_x20);
  if (lVar6 == 0) goto LAB_06366490;
  puVar11 = (undefined8 *)(lVar6 + 0x18);
  *puVar11 = uVar10;
  uVar10 = thunk_FUN_037aeb94(puVar11,uVar10);
  lVar6 = *(long *)(unaff_x19 + 0x30);
  uVar10 = FUN_063668d8(uVar10,*unaff_x20);
  if (lVar6 == 0) goto LAB_06366490;
  puVar11 = (undefined8 *)(lVar6 + 0x28);
  *puVar11 = uVar10;
  uVar10 = thunk_FUN_037aeb94(puVar11,uVar10);
  if (lVar9 == 0) {
    switch(*(undefined4 *)((long)plVar8 + 0x24)) {
    case 1:
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar6 == 0) goto LAB_06366490;
      *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar10 = FUN_063669d4();
      if (lVar6 == 0) goto LAB_06366490;
      puVar11 = (undefined8 *)(lVar6 + 0x10);
      *puVar11 = uVar10;
      thunk_FUN_037aeb94(puVar11,uVar10);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db4388 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4388))
      {
LAB_063667e8:
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar8);
      }
      FUN_06366c7c();
      break;
    case 2:
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x20;
      if (unaff_w21 != 2) {
        uVar5 = 0x60;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar6 == 0) goto LAB_06366490;
      *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar10 = FUN_063669d4();
      if (lVar6 == 0) goto LAB_06366490;
      puVar11 = (undefined8 *)(lVar6 + 0x10);
      *puVar11 = uVar10;
      thunk_FUN_037aeb94(puVar11,uVar10);
      uVar10 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d966a0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_04056a1c(uVar10,*(undefined8 *)PTR_DAT_07db5568);
      uVar10 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar10 = FUN_06331088(uVar10,0);
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
      }
      uVar7 = FUN_0625b9c4(uVar10,0,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x30);
        uVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db52a0);
        FUN_049ce6c0(uVar10,*(undefined8 *)PTR_DAT_07db52a8);
        if (lVar6 == 0) goto LAB_06366490;
        puVar11 = (undefined8 *)(lVar6 + 0x98);
        *puVar11 = uVar10;
        thunk_FUN_037aeb94(puVar11,uVar10);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar10 = FUN_06365b68();
        if (plVar8 == (long *)0x0) goto LAB_06366490;
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07db52e0) {
              puVar11 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_06366754;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07db52e0,2);
LAB_06366754:
        (*(code *)*puVar11)(plVar8,uVar10,puVar11[1]);
      }
      break;
    case 3:
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = FUN_06367158(uVar10,*unaff_x20,unaff_w21);
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar6 == 0) goto LAB_06366490;
      *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      uVar7 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      if (((uVar7 >> 0x20 == 4) && ((uVar7 & 0xff) != 0)) &&
         (uVar7 = FUN_06335a00(*unaff_x20,0), puVar2 = PTR_DAT_07d86548, (uVar7 & 1) != 0)) {
        plVar8 = (long *)*unaff_x20;
        uVar10 = *(undefined8 *)PTR_DAT_07d963e8;
        if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar10 = FUN_062519f8(uVar10,0);
        if (plVar8 == (long *)0x0) goto LAB_06366490;
        uVar7 = (**(code **)(*plVar8 + 0x1f8))(plVar8,uVar10,1,*(undefined8 *)(*plVar8 + 0x200));
        if ((uVar7 & 1) == 0) {
          lVar6 = *(long *)(unaff_x19 + 0x30);
          uVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db34c8);
          FUN_049ce6c0(uVar10,*(undefined8 *)PTR_DAT_07db34c0);
          if (lVar6 != 0) {
            puVar11 = (undefined8 *)(lVar6 + 0xe0);
            *puVar11 = uVar10;
            thunk_FUN_037aeb94(puVar11,uVar10);
            uVar10 = *unaff_x20;
            if (*(int *)(*(long *)PTR_DAT_07d963d8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar6 = FUN_063275d4(uVar10,0);
            puVar4 = PTR_DAT_07db3528;
            puVar3 = PTR_DAT_07d96690;
            if ((lVar6 != 0) && (lVar9 = *(long *)(lVar6 + 0x20), lVar9 != 0)) {
              uVar7 = 0;
              while( true ) {
                if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar7) goto LAB_06365fc4;
                lVar9 = *(long *)(lVar6 + 0x18);
                if (lVar9 == 0) break;
                if (*(uint *)(lVar9 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7bc();
                }
                uVar10 = *(undefined8 *)(lVar9 + uVar7 * 8 + 0x20);
                uVar15 = *unaff_x20;
                if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar10 = FUN_062772f0(uVar15,uVar10,0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*(long *)puVar3);
                }
                uVar10 = FUN_063853bc(uVar10,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar8 == (long *)0x0))
                break;
                lVar9 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                      puVar11 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                      goto LAB_06366474;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,2);
LAB_06366474:
                (*(code *)*puVar11)(plVar8,uVar10,puVar11[1]);
                lVar9 = *(long *)(lVar6 + 0x20);
                uVar7 = uVar7 + 1;
                if (lVar9 == 0) break;
              }
            }
          }
          goto LAB_06366490;
        }
      }
      break;
    case 4:
      lVar6 = plVar8[0xc];
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = FUN_0631f414(lVar6,0);
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x41;
      if (unaff_w21 == 2) {
        uVar5 = 1;
      }
      uVar10 = *(undefined8 *)PTR_DAT_07db3428;
      if ((uVar7 & 1) == 0) {
        uVar5 = 1;
      }
      goto LAB_06365fb4;
    case 5:
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar6 == 0) goto LAB_06366490;
      *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
      uVar10 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06331298(uVar10,&stack0x00000018,&stack0x00000010,0);
      uVar10 = in_stack_00000018;
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = FUN_0625b9c4(uVar10,0,0);
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_063655ac();
        uVar10 = in_stack_00000018;
        if (plVar8 == (long *)0x0) goto LAB_06366490;
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_063666f4;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,0);
LAB_063666f4:
        lVar6 = (*(code *)*puVar11)(plVar8,uVar10,puVar11[1]);
        if (lVar6 == 0) goto LAB_06366490;
        if (*(int *)(lVar6 + 0x24) == 3) {
          lVar6 = *(long *)(unaff_x19 + 0x30);
          uVar10 = FUN_06365b68();
          if (lVar6 == 0) goto LAB_06366490;
          puVar11 = (undefined8 *)(lVar6 + 0xc0);
          *puVar11 = uVar10;
          thunk_FUN_037aeb94(puVar11,uVar10);
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_0636601c_caseD_6;
    case 7:
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar6 == 0) goto LAB_06366490;
      *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar10 = FUN_063669d4();
      if (lVar6 == 0) goto LAB_06366490;
      puVar11 = (undefined8 *)(lVar6 + 0x10);
      *puVar11 = uVar10;
      thunk_FUN_037aeb94(puVar11,uVar10);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db46a0 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db46a0))
      goto LAB_063667e8;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar15 = FUN_061d52c8(0);
      uVar10 = thunk_FUN_037a15ac(PTR_DAT_07db5590);
      goto LAB_063667a4;
    }
  }
  else {
switchD_0636601c_caseD_6:
    lVar6 = *(long *)(unaff_x19 + 0x30);
    uVar5 = 0x7f;
    uVar10 = *(undefined8 *)PTR_DAT_07db3428;
LAB_06365fb4:
    _uStack0000000000000008 = 0;
    FUN_04e5f37c(&stack0x00000008,uVar5,uVar10);
    if (lVar6 == 0) goto LAB_06366490;
    *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
  }
LAB_06365fc4:
  lVar6 = FUN_0636579c();
  if (lVar6 != 0) {
    return *(long *)(lVar6 + 0x18);
  }
LAB_06366490:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


