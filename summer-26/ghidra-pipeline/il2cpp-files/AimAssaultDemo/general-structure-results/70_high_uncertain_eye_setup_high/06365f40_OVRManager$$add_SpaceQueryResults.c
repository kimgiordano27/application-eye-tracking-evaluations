/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryResults
ENTRY_POINT: 06365f40
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


undefined8
OVRManager__add_SpaceQueryResults(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long lVar13;
  undefined8 *puVar14;
  long *unaff_x23;
  long *unaff_x28;
  long unaff_x29;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06365d2c with catch @ 06365f44
                        */
  uVar6 = FUN_04e590ec(param_2,param_3,*param_1);
  if (unaff_x22 == 0) goto LAB_06366490;
  *(undefined2 *)(unaff_x22 + 0x20) = uStack0000000000000008;
  lVar13 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 06365f5c to 06465f8f has its CatchHandler @ 06365fb8 */
  uVar6 = FUN_06366828(uVar6,*unaff_x20);
  if (lVar13 == 0) goto LAB_06366490;
  puVar14 = (undefined8 *)(lVar13 + 0x18);
  *puVar14 = uVar6;
  uVar6 = thunk_FUN_037aeb94(puVar14,uVar6);
  lVar13 = *(long *)(unaff_x19 + 0x30);
  uVar6 = FUN_063668d8(uVar6,*unaff_x20);
  if (lVar13 == 0) goto LAB_06366490;
  puVar14 = (undefined8 *)(lVar13 + 0x28);
  *puVar14 = uVar6;
                    /* try { // try from 06365f90 to 06465fa3 has its CatchHandler @ 06365b84 */
  uVar6 = thunk_FUN_037aeb94(puVar14,uVar6);
  if (unaff_x29 == 0) {
    switch(*(undefined4 *)((long)unaff_x23 + 0x24)) {
    case 1:
      lVar13 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 06366030 to 06466033 has its CatchHandler @ 06366078 */
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar13 == 0) goto LAB_06366490;
      *(undefined8 *)(lVar13 + 0x30) = _uStack0000000000000008;
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar6 = FUN_063669d4();
      if (lVar13 == 0) goto LAB_06366490;
      puVar14 = (undefined8 *)(lVar13 + 0x10);
      *puVar14 = uVar6;
      thunk_FUN_037aeb94(puVar14,uVar6);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db4388 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_07db4388)) {
LAB_063667e8:
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      FUN_06366c7c();
      break;
    case 2:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x20;
      if (unaff_w21 != 2) {
        uVar5 = 0x60;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar13 == 0) goto LAB_06366490;
      *(undefined8 *)(lVar13 + 0x30) = _uStack0000000000000008;
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar6 = FUN_063669d4();
      if (lVar13 == 0) goto LAB_06366490;
      puVar14 = (undefined8 *)(lVar13 + 0x10);
      *puVar14 = uVar6;
      thunk_FUN_037aeb94(puVar14,uVar6);
      uVar6 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d966a0 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_04056a1c(uVar6,*(undefined8 *)PTR_DAT_07db5568);
      uVar6 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar6 = FUN_06331088(uVar6,0);
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
      }
      uVar7 = FUN_0625b9c4(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        lVar13 = *(long *)(unaff_x19 + 0x30);
        uVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db52a0);
        FUN_049ce6c0(uVar6,*(undefined8 *)PTR_DAT_07db52a8);
        if (lVar13 == 0) goto LAB_06366490;
        puVar14 = (undefined8 *)(lVar13 + 0x98);
        *puVar14 = uVar6;
        thunk_FUN_037aeb94(puVar14,uVar6);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar6 = FUN_06365b68();
        if (plVar8 == (long *)0x0) goto LAB_06366490;
        lVar13 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db52e0) {
              puVar14 = (undefined8 *)(lVar13 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_06366754;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar14 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07db52e0,2);
LAB_06366754:
        (*(code *)*puVar14)(plVar8,uVar6,puVar14[1]);
      }
      break;
    case 3:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar5 = FUN_06367158(uVar6,*unaff_x20,unaff_w21);
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar13 == 0) goto LAB_06366490;
      *(undefined8 *)(lVar13 + 0x30) = _uStack0000000000000008;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      uVar7 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      if (((uVar7 >> 0x20 == 4) && ((uVar7 & 0xff) != 0)) &&
         (uVar7 = FUN_06335a00(*unaff_x20,0), puVar2 = PTR_DAT_07d86548, (uVar7 & 1) != 0)) {
        plVar8 = (long *)*unaff_x20;
        uVar6 = *(undefined8 *)PTR_DAT_07d963e8;
        if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar6 = FUN_062519f8(uVar6,0);
        if (plVar8 == (long *)0x0) goto LAB_06366490;
        uVar7 = (**(code **)(*plVar8 + 0x1f8))(plVar8,uVar6,1,*(undefined8 *)(*plVar8 + 0x200));
        if ((uVar7 & 1) == 0) {
          lVar13 = *(long *)(unaff_x19 + 0x30);
          uVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db34c8);
          FUN_049ce6c0(uVar6,*(undefined8 *)PTR_DAT_07db34c0);
          if (lVar13 != 0) {
            puVar14 = (undefined8 *)(lVar13 + 0xe0);
            *puVar14 = uVar6;
            thunk_FUN_037aeb94(puVar14,uVar6);
            uVar6 = *unaff_x20;
            if (*(int *)(*(long *)PTR_DAT_07d963d8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            lVar13 = FUN_063275d4(uVar6,0);
            puVar4 = PTR_DAT_07db3528;
            puVar3 = PTR_DAT_07d96690;
            if ((lVar13 != 0) && (lVar10 = *(long *)(lVar13 + 0x20), lVar10 != 0)) {
              uVar7 = 0;
              while( true ) {
                if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar7) goto LAB_06365fc4;
                lVar10 = *(long *)(lVar13 + 0x18);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7bc();
                }
                uVar6 = *(undefined8 *)(lVar10 + uVar7 * 8 + 0x20);
                uVar9 = *unaff_x20;
                if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar6 = FUN_062772f0(uVar9,uVar6,0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70(*(long *)puVar3);
                }
                uVar6 = FUN_063853bc(uVar6,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar8 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar8 == (long *)0x0))
                break;
                lVar10 = *plVar8;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                      puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                      goto LAB_06366474;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar14 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar4,2);
LAB_06366474:
                (*(code *)*puVar14)(plVar8,uVar6,puVar14[1]);
                lVar10 = *(long *)(lVar13 + 0x20);
                uVar7 = uVar7 + 1;
                if (lVar10 == 0) break;
              }
            }
          }
          goto LAB_06366490;
        }
      }
      break;
    case 4:
      lVar13 = unaff_x23[0xc];
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = FUN_0631f414(lVar13,0);
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x41;
      if (unaff_w21 == 2) {
        uVar5 = 1;
      }
      uVar6 = *(undefined8 *)PTR_DAT_07db3428;
      if ((uVar7 & 1) == 0) {
        uVar5 = 1;
      }
      goto LAB_06365fb4;
    case 5:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar13 == 0) goto LAB_06366490;
      *(undefined8 *)(lVar13 + 0x30) = _uStack0000000000000008;
      uVar6 = *unaff_x20;
      if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_06331298(uVar6,&stack0x00000018,&stack0x00000010,0);
      uVar6 = in_stack_00000018;
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar7 = FUN_0625b9c4(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_063655ac();
        uVar6 = in_stack_00000018;
        if (plVar8 == (long *)0x0) goto LAB_06366490;
        lVar13 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x28) {
              puVar14 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_063666f4;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar14 = (undefined8 *)FUN_0377596c(plVar8,*unaff_x28,0);
LAB_063666f4:
        lVar13 = (*(code *)*puVar14)(plVar8,uVar6,puVar14[1]);
        if (lVar13 == 0) goto LAB_06366490;
        if (*(int *)(lVar13 + 0x24) == 3) {
          lVar13 = *(long *)(unaff_x19 + 0x30);
          uVar6 = FUN_06365b68();
          if (lVar13 == 0) goto LAB_06366490;
          puVar14 = (undefined8 *)(lVar13 + 0xc0);
          *puVar14 = uVar6;
          thunk_FUN_037aeb94(puVar14,uVar6);
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_0636601c_caseD_6;
    case 7:
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      FUN_04e5f37c(&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_07db3428);
      if (lVar13 == 0) goto LAB_06366490;
      *(undefined8 *)(lVar13 + 0x30) = _uStack0000000000000008;
      lVar13 = *(long *)(unaff_x19 + 0x30);
      uVar6 = FUN_063669d4();
      if (lVar13 == 0) goto LAB_06366490;
      puVar14 = (undefined8 *)(lVar13 + 0x10);
      *puVar14 = uVar6;
      thunk_FUN_037aeb94(puVar14,uVar6);
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db46a0 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_07db46a0)) goto LAB_063667e8;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
                    /* try { // try from 06366800 to 0646682f has its CatchHandler @ 06366970 */
      FUN_031ae340();
      uVar6 = FUN_061d52c8(0);
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db5590);
      uVar6 = FUN_063349e4(uVar9,uVar6);
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar9 = thunk_FUN_037788cc();
      FUN_062d6d20(uVar9,uVar6,0);
      uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db5588);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar9,uVar6);
    }
  }
  else {
switchD_0636601c_caseD_6:
    lVar13 = *(long *)(unaff_x19 + 0x30);
    uVar5 = 0x7f;
    uVar6 = *(undefined8 *)PTR_DAT_07db3428;
                    /* try { // try from 06365fa4 to 06465fb3 has its CatchHandler @ 06365fb8 */
LAB_06365fb4:
    _uStack0000000000000008 = 0;
    FUN_04e5f37c(&stack0x00000008,uVar5,uVar6);
                    /* catch() { ... } // from try @ 06365f5c with catch @ 06365fb8
                       catch() { ... } // from try @ 06365fa4 with catch @ 06365fb8 */
    if (lVar13 == 0) goto LAB_06366490;
                    /* try { // try from 06365fbc to 06465fbf has its CatchHandler @ 06366088 */
                    /* try { // try from 06365fc0 to 06465fdb has its CatchHandler @ 06365b84 */
    *(undefined8 *)(lVar13 + 0x30) = _uStack0000000000000008;
  }
LAB_06365fc4:
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 06365cf4 with catch @ 06365fc4
                        */
  lVar13 = FUN_0636579c();
  if (lVar13 != 0) {
                    /* try { // try from 06365fdc to 06465ff3 has its CatchHandler @ 06366078 */
                    /* try { // try from 06365ff4 to 0646602f has its CatchHandler @ 06365b84 */
    return *(undefined8 *)(lVar13 + 0x18);
  }
LAB_06366490:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


