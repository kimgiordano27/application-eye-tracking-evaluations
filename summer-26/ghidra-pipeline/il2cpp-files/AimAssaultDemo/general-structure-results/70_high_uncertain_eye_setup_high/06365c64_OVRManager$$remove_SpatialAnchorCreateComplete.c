/*
FUNCTION_NAME: OVRManager$$remove_SpatialAnchorCreateComplete
ENTRY_POINT: 06365c64
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


long OVRManager__remove_SpatialAnchorCreateComplete(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar16;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar17;
  long unaff_x24;
  undefined8 uVar18;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07db34c8);
  FUN_0373b518(PTR_DAT_07d89060);
  FUN_0373b518(PTR_DAT_07db3420);
  FUN_0373b518(PTR_DAT_07d88c90);
  FUN_0373b518(PTR_DAT_07db3428);
  FUN_0373b518(PTR_DAT_07db3430);
  FUN_0373b518(PTR_DAT_07d88f60);
  FUN_0373b518(PTR_DAT_07d96680);
  FUN_0373b518(PTR_DAT_07db5570);
  FUN_0373b518(PTR_DAT_07db5578);
  FUN_0373b518(PTR_DAT_07db5550);
                    /* try { // try from 06365cf4 to 06465cfb has its CatchHandler @ 06365fc4 */
  FUN_0373b518(PTR_DAT_07d88698);
                    /* try { // try from 06365cfc to 06465d2b has its CatchHandler @ 06365b84 */
  *(undefined1 *)(unaff_x24 + 0x42d) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  lVar6 = thunk_FUN_037788cc(*unaff_x20);
  FUN_062855bc(lVar6,0);
  puVar2 = PTR_DAT_07d88698;
  if (lVar6 == 0) goto LAB_06366490;
  puVar16 = (undefined8 *)(lVar6 + 0x10);
  *puVar16 = unaff_x23;
                    /* try { // try from 06365d2c to 06465d37 has its CatchHandler @ 06365f44 */
  thunk_FUN_037aeb94(puVar16);
                    /* try { // try from 06365d38 to 06465f5b has its CatchHandler @ 06365b84 */
  FUN_06334e90(*puVar16,*(undefined8 *)puVar2,0);
  uVar7 = FUN_063669d4();
  lVar8 = FUN_063669d4();
  uVar9 = FUN_063349dc(uVar7,0);
  if ((uVar9 & 1) == 0) {
    plVar10 = *(long **)(unaff_x19 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_06366490;
    lVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x180));
    if (lVar11 != 0) {
      if ((unaff_w21 != 2) &&
         (uVar9 = FUN_06366ae0(*(undefined8 *)(lVar11 + 0x30),0x40), (uVar9 & 1) == 0)) {
        if ((*(ulong *)(lVar11 + 0x30) & 0xff) == 0) {
          uVar9 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          FUN_04e5f37c(&stack0x00000008,(uint)(*(ulong *)(lVar11 + 0x30) >> 0x20) | 0x40,
                       *(undefined8 *)PTR_DAT_07db3428);
          uVar9 = _uStack0000000000000008;
        }
        *(ulong *)(lVar11 + 0x30) = uVar9;
      }
      if ((unaff_x22 & 1) == 0) {
        return lVar11;
      }
      if ((0xff < *(ushort *)(lVar11 + 0x20)) && ((*(ushort *)(lVar11 + 0x20) & 0xff) != 0)) {
        return lVar11;
      }
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      FUN_04e590ec(&stack0x00000008,1,*(undefined8 *)PTR_DAT_07d88c90);
      *(undefined2 *)(lVar11 + 0x20) = uStack0000000000000008;
      return lVar11;
    }
  }
  puVar3 = PTR_DAT_07db5578;
  puVar2 = PTR_DAT_07db5558;
  uVar17 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5560);
  FUN_044a3874(uVar7,lVar6,*(undefined8 *)puVar3,0);
  uVar9 = FUN_03f45cf0(uVar17,uVar7,*(undefined8 *)puVar2);
  if ((uVar9 & 1) != 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar17 = FUN_061d52c8(0);
    FUN_031a5e18(lVar6);
    plVar10 = *(long **)(lVar6 + 0x10);
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db5580);
LAB_063667a4:
    uVar7 = FUN_063349e4(uVar7,uVar17,plVar10,0);
    thunk_FUN_037a15ac(PTR_DAT_07d967c8);
    uVar17 = thunk_FUN_037788cc();
    FUN_062d6d20(uVar17,uVar7,0);
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db5588);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar17,uVar7);
  }
  plVar10 = (long *)FUN_063655ac();
  puVar2 = PTR_DAT_07db4b18;
  if (plVar10 == (long *)0x0) goto LAB_06366490;
  lVar6 = *plVar10;
  uVar7 = *puVar16;
  uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar9 != 0) {
    piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07db4b18) {
        puVar12 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_06365ea0;
      }
      uVar9 = uVar9 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar9 != 0);
  }
  puVar12 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db4b18,0);
LAB_06365ea0:
  plVar10 = (long *)(*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
  puVar3 = PTR_DAT_07db5570;
  if (plVar10 == (long *)0x0) goto LAB_06366490;
  lVar6 = plVar10[0xe];
  if (lVar6 == 0) {
    lVar6 = plVar10[0xf];
  }
  uVar18 = *puVar16;
  uVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db53a0);
  FUN_0635f6bc();
  uVar17 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
  FUN_06366bb8(uVar17,uVar18,uVar7);
  uVar7 = FUN_06365650();
  if (lVar8 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
    plVar13 = (long *)(*(long *)(unaff_x19 + 0x30) + 0x10);
    *plVar13 = lVar8;
    uVar7 = thunk_FUN_037aeb94(plVar13,lVar8);
  }
  if ((unaff_x22 & 1) != 0) {
    lVar8 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar7 = FUN_04e590ec(&stack0x00000008,1,*(undefined8 *)PTR_DAT_07d88c90);
    if (lVar8 == 0) goto LAB_06366490;
    *(undefined2 *)(lVar8 + 0x20) = uStack0000000000000008;
  }
  lVar8 = *(long *)(unaff_x19 + 0x30);
  uVar7 = FUN_06366828(uVar7,*puVar16);
  if (lVar8 == 0) goto LAB_06366490;
  puVar12 = (undefined8 *)(lVar8 + 0x18);
  *puVar12 = uVar7;
  uVar7 = thunk_FUN_037aeb94(puVar12,uVar7);
  lVar8 = *(long *)(unaff_x19 + 0x30);
  uVar7 = FUN_063668d8(uVar7,*puVar16);
  if (lVar8 == 0) goto LAB_06366490;
  puVar12 = (undefined8 *)(lVar8 + 0x28);
  *puVar12 = uVar7;
  uVar7 = thunk_FUN_037aeb94(puVar12,uVar7);
  if (lVar6 == 0) {
    switch(*(undefined4 *)((long)plVar10 + 0x24)) {
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
      uVar7 = FUN_063669d4();
      if (lVar6 == 0) goto LAB_06366490;
      puVar16 = (undefined8 *)(lVar6 + 0x10);
      *puVar16 = uVar7;
      thunk_FUN_037aeb94(puVar16,uVar7);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db4388 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db4388)
         ) {
LAB_063667e8:
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar10);
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
      uVar7 = FUN_063669d4();
      if (lVar6 == 0) goto LAB_06366490;
      puVar12 = (undefined8 *)(lVar6 + 0x10);
      *puVar12 = uVar7;
      thunk_FUN_037aeb94(puVar12,uVar7);
      uVar7 = *puVar16;
      if (*(int *)(*(long *)PTR_DAT_07d966a0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_04056a1c(uVar7,*(undefined8 *)PTR_DAT_07db5568);
      uVar7 = *puVar16;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = FUN_06331088(uVar7,0);
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
      }
      uVar9 = FUN_0625b9c4(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        lVar6 = *(long *)(unaff_x19 + 0x30);
        uVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db52a0);
        FUN_049ce6c0(uVar7,*(undefined8 *)PTR_DAT_07db52a8);
        if (lVar6 == 0) goto LAB_06366490;
        puVar16 = (undefined8 *)(lVar6 + 0x98);
        *puVar16 = uVar7;
        thunk_FUN_037aeb94(puVar16,uVar7);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
        plVar10 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar7 = FUN_06365b68();
        if (plVar10 == (long *)0x0) goto LAB_06366490;
        lVar6 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07db52e0) {
              puVar16 = (undefined8 *)(lVar6 + (long)(*piVar15 + 2) * 0x10 + 0x138);
              goto LAB_06366754;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar16 = (undefined8 *)FUN_0377596c(plVar10,*(long *)PTR_DAT_07db52e0,2);
LAB_06366754:
        (*(code *)*puVar16)(plVar10,uVar7,puVar16[1]);
      }
      break;
    case 3:
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = FUN_06367158(uVar7,*puVar16,unaff_w21);
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar6 == 0) goto LAB_06366490;
      *(ulong *)(lVar6 + 0x30) = _uStack0000000000000008;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      uVar9 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      if (((uVar9 >> 0x20 == 4) && ((uVar9 & 0xff) != 0)) &&
         (uVar9 = FUN_06335a00(*puVar16,0), puVar2 = PTR_DAT_07d86548, (uVar9 & 1) != 0)) {
        plVar10 = (long *)*puVar16;
        uVar7 = *(undefined8 *)PTR_DAT_07d963e8;
        if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar7 = FUN_062519f8(uVar7,0);
        if (plVar10 == (long *)0x0) goto LAB_06366490;
        uVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,uVar7,1,*(undefined8 *)(*plVar10 + 0x200));
        if ((uVar9 & 1) == 0) {
          lVar6 = *(long *)(unaff_x19 + 0x30);
          uVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db34c8);
          FUN_049ce6c0(uVar7,*(undefined8 *)PTR_DAT_07db34c0);
          if (lVar6 != 0) {
            puVar12 = (undefined8 *)(lVar6 + 0xe0);
            *puVar12 = uVar7;
            thunk_FUN_037aeb94(puVar12,uVar7);
            uVar7 = *puVar16;
            if (*(int *)(*(long *)PTR_DAT_07d963d8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar6 = FUN_063275d4(uVar7,0);
            puVar4 = PTR_DAT_07db3528;
            puVar3 = PTR_DAT_07d96690;
            if ((lVar6 != 0) && (lVar8 = *(long *)(lVar6 + 0x20), lVar8 != 0)) {
              uVar9 = 0;
              while( true ) {
                if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar9) goto LAB_06365fc4;
                lVar8 = *(long *)(lVar6 + 0x18);
                if (lVar8 == 0) break;
                if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7bc();
                }
                uVar7 = *(undefined8 *)(lVar8 + uVar9 * 8 + 0x20);
                uVar17 = *puVar16;
                if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar7 = FUN_062772f0(uVar17,uVar7,0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*(long *)puVar3);
                }
                uVar7 = FUN_063853bc(uVar7,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar10 == (long *)0x0
                   )) break;
                lVar8 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                      puVar12 = (undefined8 *)(lVar8 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                      goto LAB_06366474;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar12 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar4,2);
LAB_06366474:
                (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
                lVar8 = *(long *)(lVar6 + 0x20);
                uVar9 = uVar9 + 1;
                if (lVar8 == 0) break;
              }
            }
          }
          goto LAB_06366490;
        }
      }
      break;
    case 4:
      lVar6 = plVar10[0xc];
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_0631f414(lVar6,0);
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x41;
      if (unaff_w21 == 2) {
        uVar5 = 1;
      }
      uVar7 = *(undefined8 *)PTR_DAT_07db3428;
      if ((uVar9 & 1) == 0) {
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
      uVar7 = *puVar16;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06331298(uVar7,&stack0x00000018,&stack0x00000010,0);
      uVar7 = in_stack_00000018;
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar9 = FUN_0625b9c4(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)FUN_063655ac();
        uVar7 = in_stack_00000018;
        if (plVar10 == (long *)0x0) goto LAB_06366490;
        lVar6 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar16 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_063666f4;
            }
            uVar9 = uVar9 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar9 != 0);
        }
        puVar16 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar2,0);
LAB_063666f4:
        lVar6 = (*(code *)*puVar16)(plVar10,uVar7,puVar16[1]);
        if (lVar6 == 0) goto LAB_06366490;
        if (*(int *)(lVar6 + 0x24) == 3) {
          lVar6 = *(long *)(unaff_x19 + 0x30);
          uVar7 = FUN_06365b68();
          if (lVar6 == 0) goto LAB_06366490;
          puVar16 = (undefined8 *)(lVar6 + 0xc0);
          *puVar16 = uVar7;
          thunk_FUN_037aeb94(puVar16,uVar7);
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
      uVar7 = FUN_063669d4();
      if (lVar6 == 0) goto LAB_06366490;
      puVar16 = (undefined8 *)(lVar6 + 0x10);
      *puVar16 = uVar7;
      thunk_FUN_037aeb94(puVar16,uVar7);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db46a0 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db46a0)
         ) goto LAB_063667e8;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar17 = FUN_061d52c8(0);
      uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db5590);
      goto LAB_063667a4;
    }
  }
  else {
switchD_0636601c_caseD_6:
    lVar6 = *(long *)(unaff_x19 + 0x30);
    uVar5 = 0x7f;
    uVar7 = *(undefined8 *)PTR_DAT_07db3428;
LAB_06365fb4:
    _uStack0000000000000008 = 0;
    FUN_04e5f37c(&stack0x00000008,uVar5,uVar7);
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


