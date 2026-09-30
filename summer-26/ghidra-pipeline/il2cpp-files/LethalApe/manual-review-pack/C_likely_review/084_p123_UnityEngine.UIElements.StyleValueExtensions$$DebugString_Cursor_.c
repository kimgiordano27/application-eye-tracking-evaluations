/*
FUNCTION_NAME: UnityEngine.UIElements.StyleValueExtensions$$DebugString<Cursor>
ENTRY_POINT: 00aea4cc
PROGRAM: LethalApe-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_UIElements_StyleValueExtensions__DebugString<Cursor>(void)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *unaff_x19;
  long unaff_x22;
  long lVar18;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  float fVar19;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined4 uStack0000000000000034;
  undefined8 uStack0000000000000038;
  long lStack0000000000000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  long in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 uStack00000000000001b8;
  undefined4 uStack00000000000001bc;
  long in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  long in_stack_00000218;
  
LAB_00aea4d4:
                    /* try { // try from 00aea4d4 to 00bea58b has its CatchHandler @ 00aea4d4
                       catch() { ... } // from try @ 00aea4d4 with catch @ 00aea4d4
                       catch() { ... } // from try @ 00aea594 with catch @ 00aea4d4 */
  lVar12 = *(long *)(in_stack_00000218 + 0x30);
  if (lVar12 == 0) goto LAB_00aeb77c;
  if ((long)unaff_x24 < (long)*(int *)(lVar12 + 0x18)) {
    lStack0000000000000048 = FUN_010ee2fc(lVar12,unaff_x24 & 0xffffffff,*unaff_x26);
    if (*(long *)(in_stack_00000218 + 0x38) == 0) goto LAB_00aeb77c;
    uStack0000000000000038 =
         FUN_010ee2fc(*(long *)(in_stack_00000218 + 0x38),unaff_x24 & 0xffffffff,*unaff_x26);
    if (*(long *)(in_stack_00000218 + 0x40) == 0) goto LAB_00aeb77c;
    uVar13 = FUN_010ee2fc(*(long *)(in_stack_00000218 + 0x40),unaff_x24 & 0xffffffff,*unaff_x26);
    if (*(long *)(in_stack_00000218 + 0x48) == 0) goto LAB_00aeb77c;
    uStack0000000000000034 =
         FUN_010d2cc0(*(long *)(in_stack_00000218 + 0x48),unaff_x24 & 0xffffffff,
                      *(undefined8 *)PTR_DAT_02bd9288);
  }
  else {
    uStack0000000000000034 = 0;
    uVar13 = 0;
    uStack0000000000000038 = 0;
    lStack0000000000000048 = 0;
  }
  if (*(int *)(unaff_x23 + 0x18) < 1) {
    iVar7 = -1;
LAB_00aea704:
    lVar12 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02c10840);
    if (lVar12 == 0) goto LAB_00aeb77c;
    FUN_01edf978(lVar12,0);
  }
  else {
    iVar9 = 0;
    iVar7 = -1;
    do {
                    /* try { // try from 00aea58c to 00bea593 has its CatchHandler @ 00aea5b8 */
                    /* try { // try from 00aea594 to 00bea5cb has its CatchHandler @ 00aea4d4 */
      lVar12 = FUN_010ee2fc();
      if (lVar12 == 0) goto LAB_00aeb77c;
      uVar14 = FUN_01edf948(lVar12,0);
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 00aea58c with catch @ 00aea5b8 */
        thunk_FUN_009ddef4(*unaff_x19);
      }
      uVar15 = FUN_01ed7068(uVar14,unaff_x25,0);
      if ((uVar15 & 1) != 0) {
        lVar12 = FUN_010ee2fc();
        if (lVar12 == 0) goto LAB_00aeb77c;
        uVar14 = FUN_01edf968(lVar12,0);
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_009ddef4(*unaff_x19);
        }
        uVar15 = FUN_01ed7068(uVar14,unaff_x27,0);
        puVar3 = PTR_DAT_02bc0120;
        if ((uVar15 & 1) != 0) {
          lVar12 = *in_stack_00000058;
          if (lVar12 == 0) goto LAB_00aeb77c;
          if (*(uint *)(lVar12 + 0x18) <= unaff_x24) goto LAB_00aeb7a4;
          *(int *)(lVar12 + unaff_x24 * 4 + 0x20) = iVar9;
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
          }
          uVar15 = FUN_01ee8fb4(lStack0000000000000048,0,0);
          if ((uVar15 & 1) == 0) goto LAB_00aeac68;
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar8 <= iVar9) goto LAB_00aeab78;
          FUN_0121aee4(&stack0x00000080);
          lVar12 = _uStack0000000000000080;
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
          }
          uVar15 = FUN_01ed7068(lVar12,0,0);
          if ((uVar15 & 1) != 0) goto LAB_00aeab74;
          goto LAB_00aeac68;
        }
      }
      if (iVar7 < 0) {
        lVar12 = FUN_010ee2fc();
        if (lVar12 == 0) goto LAB_00aeb77c;
        uVar14 = FUN_01edf948(lVar12,0);
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_009ddef4(*unaff_x19);
        }
                    /* try { // try from 00aea65c to 00bea70b has its CatchHandler @ 00aea65c
                       catch() { ... } // from try @ 00aea65c with catch @ 00aea65c
                       catch() { ... } // from try @ 00aea718 with catch @ 00aea65c */
        uVar15 = FUN_01ed7068(uVar14,0,0);
        if ((uVar15 & 1) != 0) {
          lVar12 = FUN_010ee2fc();
          if (lVar12 == 0) goto LAB_00aeb77c;
          uVar14 = FUN_01edf968(lVar12,0);
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_009ddef4(*unaff_x19);
          }
          uVar15 = FUN_01ed7068(uVar14,0,0);
          if ((uVar15 & 1) != 0) {
            lVar12 = *in_stack_00000058;
            if (lVar12 == 0) goto LAB_00aeb77c;
            if (*(uint *)(lVar12 + 0x18) <= unaff_x24) goto LAB_00aeb7a4;
            *(int *)(lVar12 + unaff_x24 * 4 + 0x20) = iVar9;
            iVar7 = iVar9;
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(unaff_x23 + 0x18));
    if (iVar7 < 0) goto LAB_00aea704;
    lVar12 = FUN_010ee2fc();
  }
  if (lVar12 == 0) goto LAB_00aeb77c;
  FUN_01edf950(lVar12,unaff_x25,0);
  if (*(long *)(in_stack_00000218 + 0x20) == 0) goto LAB_00aeb77c;
  if ((long)unaff_x24 < (long)*(int *)(*(long *)(in_stack_00000218 + 0x20) + 0x18)) {
    FUN_01edf970(lVar12,unaff_x27,0);
  }
  puVar3 = PTR_DAT_02bc0120;
  if (*(long *)(in_stack_00000218 + 0x28) == 0) goto LAB_00aeb77c;
  if ((long)unaff_x24 < (long)*(int *)(*(long *)(in_stack_00000218 + 0x28) + 0x18)) {
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
    }
    uVar15 = FUN_01ee8fb4(in_stack_00000050,0,0);
    if ((uVar15 & 1) == 0) goto LAB_00aea7a0;
LAB_00aea7d8:
    FUN_01edf960(lVar12,in_stack_00000050,0);
  }
  else {
LAB_00aea7a0:
    lVar16 = *unaff_x28;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar16 = *unaff_x28;
    }
    if (*(int *)(*(long *)(lVar16 + 0xb8) + 0x10) == 1) {
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      in_stack_00000050 = *(undefined8 *)(in_stack_00000218 + 0xc0);
      goto LAB_00aea7d8;
    }
  }
  if (iVar7 < 0) {
    lVar16 = *(long *)(unaff_x23 + 0x10);
    lVar18 = *(long *)PTR_DAT_02bcd2d0;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_00aeb77c;
    uVar8 = *(uint *)(unaff_x23 + 0x18);
    if (uVar8 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar8 + 1;
      plVar17 = (long *)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
      *plVar17 = lVar12;
      thunk_FUN_00a502ec(plVar17,lVar12);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    lVar12 = *in_stack_00000058;
    if (lVar12 == 0) goto LAB_00aeb77c;
    if (*(uint *)(lVar12 + 0x18) <= unaff_x24) goto LAB_00aeb7a4;
    *(int *)(lVar12 + unaff_x24 * 4 + 0x20) = *(int *)(unaff_x23 + 0x18) + -1;
  }
  else {
    FUN_010ee350();
  }
  if (*(long *)(in_stack_00000218 + 0x30) == 0) goto LAB_00aeb77c;
  if ((long)*(int *)(*(long *)(in_stack_00000218 + 0x30) + 0x18) <= (long)unaff_x24)
  goto LAB_00aeac68;
  *in_stack_00000028 = 0;
  in_stack_00000028[1] = 0;
  in_stack_00000028[2] = 0;
  in_stack_000001a0 = lStack0000000000000048;
  thunk_FUN_00a502ec(&stack0x000001a0);
  in_stack_000001a8 = uStack0000000000000038;
  thunk_FUN_00a502ec(in_stack_00000028);
  in_stack_000001b0 = uVar13;
  thunk_FUN_00a502ec(in_stack_00000020);
  uStack00000000000001b8 = uStack0000000000000034;
  uVar8 = *(uint *)(unaff_x22 + 0x18);
  if (iVar7 < 0) {
    iVar7 = *(int *)(unaff_x23 + 0x18);
    while ((int)uVar8 < iVar7 + -1) {
      lVar12 = *(long *)(unaff_x22 + 0x10);
      lVar16 = *(long *)puVar3;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_00aeb77c;
      if (uVar8 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        lVar12 = lVar12 + (long)(int)uVar8 * 0x20;
        *(undefined8 *)(lVar12 + 0x28) = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        thunk_FUN_00a502ec(lVar12 + 0x20,0);
      }
      else {
        in_stack_00000088 = 0;
        _uStack0000000000000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))();
      }
      iVar7 = *(int *)(unaff_x23 + 0x18);
      uVar8 = *(uint *)(unaff_x22 + 0x18);
    }
    lVar16 = *(long *)puVar3;
    lVar12 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_00aeb77c;
    if (uVar8 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
      lVar12 = lVar12 + (long)(int)uVar8 * 0x20;
      *(undefined8 *)(lVar12 + 0x28) = in_stack_000001a8;
      *(long *)(lVar12 + 0x20) = in_stack_000001a0;
      *(ulong *)(lVar12 + 0x38) = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
      *(undefined8 *)(lVar12 + 0x30) = in_stack_000001b0;
      thunk_FUN_00a502ec(lVar12 + 0x20,0);
    }
    else {
      in_stack_00000088 = in_stack_000001a8;
      _uStack0000000000000080 = in_stack_000001a0;
      in_stack_00000090 = in_stack_000001b0;
      in_stack_00000098 = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))();
    }
  }
  else {
    while ((int)uVar8 < iVar7 + 1) {
      lVar12 = *(long *)(unaff_x22 + 0x10);
      lVar16 = *(long *)puVar3;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_00aeb77c;
      if (uVar8 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        lVar12 = lVar12 + (long)(int)uVar8 * 0x20;
        *(undefined8 *)(lVar12 + 0x28) = 0;
        *(undefined8 *)(lVar12 + 0x20) = 0;
        *(undefined8 *)(lVar12 + 0x38) = 0;
        *(undefined8 *)(lVar12 + 0x30) = 0;
        thunk_FUN_00a502ec(lVar12 + 0x20,0);
      }
      else {
        in_stack_00000088 = 0;
        _uStack0000000000000080 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))();
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
    }
    in_stack_00000098 = CONCAT44(uStack00000000000001bc,uStack00000000000001b8);
    in_stack_00000088 = in_stack_000001a8;
    _uStack0000000000000080 = in_stack_000001a0;
    in_stack_00000090 = in_stack_000001b0;
    System_Collections_ObjectModel_ReadOnlyCollection<NativeArray<ushort>>__System_Collections_ICollection_CopyTo
              ();
  }
LAB_00aeac68:
  unaff_x26 = (undefined8 *)PTR_DAT_02be2a00;
  lVar12 = *(long *)(in_stack_00000218 + 0x18);
  unaff_x24 = unaff_x24 + 1;
  if (lVar12 == 0) goto LAB_00aeb77c;
  if ((long)unaff_x24 < (long)*(int *)(lVar12 + 0x18)) {
    unaff_x25 = FUN_010ee2fc(lVar12,unaff_x24 & 0xffffffff,*(undefined8 *)PTR_DAT_02be2a00);
    lVar12 = *(long *)(in_stack_00000218 + 0x20);
    if (lVar12 == 0) goto LAB_00aeb77c;
    if ((long)unaff_x24 < (long)*(int *)(lVar12 + 0x18)) {
      unaff_x27 = FUN_010ee2fc(lVar12,unaff_x24 & 0xffffffff,*unaff_x26);
    }
    else {
      unaff_x27 = 0;
    }
    lVar12 = *(long *)(in_stack_00000218 + 0x28);
    if (lVar12 == 0) goto LAB_00aeb77c;
    if ((long)unaff_x24 < (long)*(int *)(lVar12 + 0x18)) {
      in_stack_00000050 = FUN_010ee2fc(lVar12,unaff_x24 & 0xffffffff,*unaff_x26);
    }
    else {
      in_stack_00000050 = 0;
    }
    goto LAB_00aea4d4;
  }
  uVar13 = FUN_010f01d4();
  FUN_01eda834(uVar13,0);
  lVar12 = *unaff_x28;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_009ddef4();
    lVar12 = *unaff_x28;
  }
  *(long *)(*(long *)(lVar12 + 0xb8) + 8) = unaff_x22;
  thunk_FUN_00a502ec();
  iVar7 = FUN_01ed9bd4(0);
  if (iVar7 == 0) {
    FUN_01ed9e5c(&stack0x00000080,0);
    memcpy(&stack0x00000130,&stack0x00000080,0x6c);
    fVar2 = _DAT_020e7e68;
    iVar7 = 0;
    do {
      iVar9 = 0;
      do {
        fVar19 = (float)FUN_01f16350(&stack0x00000130,iVar7,iVar9,0);
        if ((1000.0 < ABS(fVar19)) || (ABS(fVar19) < fVar2)) goto LAB_00aead58;
        fVar19 = (float)FUN_01f16350(&stack0x00000130,iVar7,iVar9,0);
        if (fVar19 != 0.0) goto LAB_00aead60;
        iVar9 = iVar9 + 1;
      } while (iVar9 != 9);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 3);
LAB_00aead58:
    FUN_01ee3580(0);
  }
LAB_00aead60:
  puVar5 = PTR_DAT_02c06f70;
  puVar3 = PTR_DAT_02bcfa40;
  lVar12 = *(long *)(in_stack_00000218 + 0x50);
  if (lVar12 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar12 + 0x18) <= iVar7) {
        if ((in_stack_00000018 & 0x100000000) == 0) goto LAB_00aeb1cc;
        lVar12 = *(long *)(in_stack_00000218 + 0x70);
        if (lVar12 != 0) {
          iVar7 = 0;
          goto LAB_00aeb154;
        }
        break;
      }
      plVar17 = (long *)FUN_010ee2fc(lVar12,iVar7,*(undefined8 *)puVar3);
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_009ddef4(*unaff_x19);
      }
      uVar15 = FUN_01ed7068(plVar17,0,0);
      if ((uVar15 & 1) == 0) {
        if (*(long *)(in_stack_00000218 + 0x58) == 0) break;
        uVar8 = FUN_010d2cc0(*(long *)(in_stack_00000218 + 0x58),iVar7,
                             *(undefined8 *)PTR_DAT_02bd9288);
        lVar12 = *(long *)(in_stack_00000218 + 0x68);
        if (lVar12 == 0) break;
        if (iVar7 < *(int *)(lVar12 + 0x18)) {
          uVar13 = FUN_010ee2fc(lVar12,iVar7,*(undefined8 *)PTR_DAT_02bc7c38);
        }
        else {
          uVar13 = 0;
        }
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
        }
        uVar15 = FUN_01ee8fb4(uVar13,0,0);
        if ((uVar15 & 1) == 0) {
          uVar10 = uVar8;
          if (-1 < (int)uVar8) {
            lVar12 = *in_stack_00000058;
            if (lVar12 == 0) break;
            if ((int)uVar8 < (int)*(uint *)(lVar12 + 0x18)) {
              if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_00aeb7a4;
              uVar10 = *(uint *)(lVar12 + (long)(int)uVar8 * 4 + 0x20);
            }
          }
          if (plVar17 == (long *)0x0) break;
          FUN_01ece614(plVar17,uVar10,0);
          uVar15 = FUN_01ece500(plVar17,0);
          if ((uVar15 & 1) == 0) {
            uVar13 = 0x3f800000;
            if (-1 < (int)uVar8) {
              if (*(long *)(in_stack_00000218 + 0x60) == 0) break;
              uVar13 = FUN_0114babc(*(long *)(in_stack_00000218 + 0x60),iVar7,
                                    *(undefined8 *)PTR_DAT_02be45c8);
            }
            thunk_FUN_01ecddc4(uVar13,plVar17,0);
          }
          iVar9 = FUN_01ece5d4(plVar17,0);
          if (-1 < iVar9) {
            lVar12 = *unaff_x28;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
              lVar12 = *unaff_x28;
            }
            lVar16 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            if (lVar16 == 0) break;
            if ((int)uVar10 < *(int *)(lVar16 + 0x18)) {
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_009ddef4();
                lVar16 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
                if (lVar16 == 0) break;
              }
              FUN_0121aee4(&stack0x00000080,lVar16,uVar10,*(undefined8 *)PTR_DAT_02bd9698);
              uVar6 = in_stack_00000098;
              uVar14 = in_stack_00000090;
              uVar13 = in_stack_00000088;
              lVar12 = _uStack0000000000000080;
              if (*(int *)(*unaff_x19 + 0xe0) == 0) {
                thunk_FUN_009ddef4();
              }
              uVar15 = FUN_01ee8fb4(lVar12,0,0);
              if ((uVar15 & 1) != 0) {
                lVar16 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02be8370);
                if (lVar16 == 0) break;
                FUN_01edadd0(lVar16,0);
                FUN_01edb44c(lVar16,*(undefined8 *)PTR_DAT_02bebea0,lVar12,0);
                FUN_01edb44c(lVar16,*(undefined8 *)PTR_DAT_02bc4060,uVar13,0);
                FUN_01edb44c(lVar16,*(undefined8 *)PTR_DAT_02c11698,uVar14,0);
                FUN_01edb14c((float)(int)uVar6,lVar16,*(undefined8 *)PTR_DAT_02bf6f48,0);
                FUN_01ece114(plVar17,lVar16,0);
              }
            }
          }
        }
        else {
          if (plVar17 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_02bbfc90 + 300);
            if (*(byte *)(*plVar17 + 300) < bVar1) {
              plVar17 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                     *(long *)PTR_DAT_02bbfc90) {
              plVar17 = (long *)0x0;
            }
          }
          if (*(int *)(*unaff_x19 + 0xe0) == 0) {
            thunk_FUN_009ddef4();
          }
          uVar15 = FUN_01ed7068(plVar17,0,0);
          if ((uVar15 & 1) == 0) {
            if (plVar17 == (long *)0x0) break;
            FUN_01ecf0d0(plVar17,uVar13,0);
            FUN_01ece614(plVar17,0xffff,0);
            lVar12 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02be8370);
            if (lVar12 == 0) break;
            FUN_01edadd0(lVar12,0);
            FUN_01edb14c(0x3f800000,lVar12,*(undefined8 *)PTR_DAT_02bf6f48,0);
            FUN_01ece114(plVar17,lVar12,0);
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_02c01348 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
            }
            FUN_01ecac1c(*(undefined8 *)PTR_DAT_02bcb3d0,0);
          }
        }
      }
      iVar7 = iVar7 + 1;
      lVar12 = *(long *)(in_stack_00000218 + 0x50);
    } while (lVar12 != 0);
  }
  goto LAB_00aeb77c;
LAB_00aeab74:
  uVar8 = *(uint *)(unaff_x22 + 0x18);
LAB_00aeab78:
  if ((int)uVar8 <= iVar9) {
    lVar12 = *(long *)(unaff_x22 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_00aeb77c;
    if (uVar8 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
      lVar12 = lVar12 + (long)(int)uVar8 * 0x20;
      *(undefined8 *)(lVar12 + 0x28) = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      *(undefined8 *)(lVar12 + 0x38) = 0;
      *(undefined8 *)(lVar12 + 0x30) = 0;
      thunk_FUN_00a502ec(lVar12 + 0x20,0);
    }
    else {
      in_stack_00000088 = 0;
      _uStack0000000000000080 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    goto LAB_00aeab74;
  }
  *in_stack_00000010 = 0;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  in_stack_000001c0 = lStack0000000000000048;
  thunk_FUN_00a502ec(&stack0x000001c0);
  in_stack_000001c8 = uStack0000000000000038;
  thunk_FUN_00a502ec(in_stack_00000010);
  in_stack_000001d0 = uVar13;
  thunk_FUN_00a502ec(in_stack_00000008);
  uStack00000000000001d8 = uStack0000000000000034;
  in_stack_00000098 = CONCAT44(uStack00000000000001dc,uStack0000000000000034);
  in_stack_00000088 = in_stack_000001c8;
  _uStack0000000000000080 = in_stack_000001c0;
  in_stack_00000090 = in_stack_000001d0;
  System_Collections_ObjectModel_ReadOnlyCollection<NativeArray<ushort>>__System_Collections_ICollection_CopyTo
            ();
  goto LAB_00aeac68;
  while( true ) {
    lVar12 = *(long *)(in_stack_00000218 + 0x70);
    iVar7 = iVar7 + 1;
    if (lVar12 == 0) break;
LAB_00aeb154:
    if (*(int *)(lVar12 + 0x18) <= iVar7) goto LAB_00aeb1cc;
    lVar12 = FUN_010ee2fc(lVar12,iVar7,*(undefined8 *)puVar3);
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_009ddef4(*unaff_x19);
    }
    uVar15 = FUN_01ed7068(lVar12,0,0);
    if ((uVar15 & 1) == 0) {
      if (lVar12 == 0) break;
      uVar15 = FUN_01ece500(lVar12,0);
      if ((uVar15 & 1) == 0) {
        FUN_01ece614(lVar12,0xfffe,0);
      }
    }
  }
  goto LAB_00aeb77c;
LAB_00aeb1cc:
  lVar12 = *(long *)(in_stack_00000218 + 0x88);
  if (lVar12 != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(lVar12 + 0x18) <= iVar7) {
        lVar12 = *(long *)(in_stack_00000218 + 0x78);
        if (lVar12 != 0) {
          iVar7 = 0;
          goto LAB_00aeb46c;
        }
        break;
      }
      lVar12 = FUN_010ee2fc(lVar12,iVar7,*(undefined8 *)PTR_DAT_02bdfa88);
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_009ddef4(*unaff_x19);
      }
      uVar15 = FUN_01ed7068(lVar12,0,0);
      if ((uVar15 & 1) == 0) {
        if (*(long *)(in_stack_00000218 + 0x90) == 0) break;
        uVar10 = FUN_010d2cc0(*(long *)(in_stack_00000218 + 0x90),iVar7,
                              *(undefined8 *)PTR_DAT_02bd9288);
        uVar8 = uVar10;
        if (-1 < (int)uVar10) {
          lVar16 = *in_stack_00000058;
          if (lVar16 == 0) break;
          if ((int)uVar10 < (int)*(uint *)(lVar16 + 0x18)) {
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_00aeb7a4;
            uVar8 = *(uint *)(lVar16 + (long)(int)uVar10 * 4 + 0x20);
          }
        }
        if (lVar12 == 0) break;
        FUN_01f46a78(lVar12,uVar8,0);
        uVar13 = 0x3f800000;
        if (-1 < (int)uVar10) {
          if (*(long *)(in_stack_00000218 + 0x98) == 0) break;
          uVar13 = FUN_0114babc(*(long *)(in_stack_00000218 + 0x98),iVar7,
                                *(undefined8 *)PTR_DAT_02be45c8);
        }
        FUN_01f46abc(uVar13,lVar12,0);
        iVar9 = FUN_01f46a3c(lVar12,0);
        if (-1 < iVar9) {
          iVar9 = FUN_01f46a3c(lVar12,0);
          lVar16 = *unaff_x28;
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_009ddef4(lVar16);
            lVar16 = *unaff_x28;
          }
          lVar18 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
          if (lVar18 == 0) break;
          if (iVar9 < *(int *)(lVar18 + 0x18)) {
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_009ddef4(lVar16);
              lVar18 = *(long *)(*(long *)(*unaff_x28 + 0xb8) + 8);
              uVar11 = FUN_01f46a3c(lVar12,0);
              if (lVar18 == 0) break;
            }
            else {
              uVar11 = FUN_01f46a3c(lVar12,0);
            }
            FUN_0121aee4(&stack0x00000080,lVar18,uVar11,*(undefined8 *)PTR_DAT_02bd9698);
            uVar6 = in_stack_00000098;
            uVar14 = in_stack_00000090;
            uVar13 = in_stack_00000088;
            lVar16 = _uStack0000000000000080;
            if (*(int *)(*unaff_x19 + 0xe0) == 0) {
              thunk_FUN_009ddef4();
            }
            uVar15 = FUN_01ee8fb4(lVar16,0,0);
            if ((uVar15 & 1) != 0) {
              lVar18 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02be8370);
              if (lVar18 == 0) break;
              FUN_01edadd0(lVar18,0);
              FUN_01edb44c(lVar18,*(undefined8 *)PTR_DAT_02bebea0,lVar16,0);
              FUN_01edb44c(lVar18,*(undefined8 *)PTR_DAT_02bc4060,uVar13,0);
              FUN_01edb44c(lVar18,*(undefined8 *)PTR_DAT_02c11698,uVar14,0);
              FUN_01edb14c((float)(int)uVar6,lVar18,*(undefined8 *)PTR_DAT_02bf6f48,0);
              FUN_01f46c38(lVar12,lVar18,0);
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
      lVar12 = *(long *)(in_stack_00000218 + 0x88);
    } while (lVar12 != 0);
  }
  goto LAB_00aeb77c;
  while( true ) {
    uVar13 = FUN_010ee2fc(lVar12,iVar7,*(undefined8 *)PTR_DAT_02bcb138);
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_009ddef4(*unaff_x19);
    }
    uVar15 = FUN_01ed7068(uVar13,0,0);
    if ((uVar15 & 1) == 0) {
      if (*(long *)(in_stack_00000218 + 0x80) == 0) break;
      uVar8 = FUN_010d2cc0(*(long *)(in_stack_00000218 + 0x80),iVar7,*(undefined8 *)PTR_DAT_02bd9288
                          );
      in_stack_00000118 = 0;
      uVar11 = 1;
      in_stack_00000128 = 1;
      if ((int)uVar8 < 0) {
        in_stack_00000120 = 2;
      }
      else {
        if ((int)uVar8 < 0x65) {
          uVar11 = 2;
        }
        else {
          uVar8 = 0xffffffff;
        }
        in_stack_00000120 = CONCAT44(uVar11,1);
        in_stack_00000118 = (ulong)uVar8 << 0x20;
        if ((*(long *)(in_stack_00000218 + 0x78) == 0) ||
           (lVar12 = FUN_010ee2fc(*(long *)(in_stack_00000218 + 0x78),iVar7,
                                  *(undefined8 *)PTR_DAT_02bcb138), lVar12 == 0)) break;
        FUN_01ecdbd4(&stack0x00000080,lVar12,0);
        in_stack_00000118 = CONCAT44(in_stack_00000118._4_4_,uStack0000000000000080);
      }
      if (*(long *)(in_stack_00000218 + 0x78) == 0) break;
      lVar12 = FUN_010ee2fc(*(long *)(in_stack_00000218 + 0x78),iVar7,
                            *(undefined8 *)PTR_DAT_02bcb138);
      in_stack_00000088 = in_stack_00000120;
      _uStack0000000000000080 = in_stack_00000118;
      in_stack_00000090 = CONCAT44(in_stack_00000090._4_4_,in_stack_00000128);
      if (lVar12 == 0) break;
      in_stack_00000068 = in_stack_00000120;
      in_stack_00000060 = in_stack_00000118;
      in_stack_00000070 = in_stack_00000128;
      FUN_01ecdc80(lVar12,&stack0x00000060,0);
    }
    lVar12 = *(long *)(in_stack_00000218 + 0x78);
    iVar7 = iVar7 + 1;
    if (lVar12 == 0) break;
LAB_00aeb46c:
    if (*(int *)(lVar12 + 0x18) <= iVar7) {
      lVar12 = *unaff_x28;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar12 = *unaff_x28;
      }
      puVar4 = PTR_DAT_02bd9288;
      puVar3 = PTR_DAT_02bd06f8;
      if (**(long **)(lVar12 + 0xb8) == 0) {
        lVar12 = thunk_FUN_00a05c70(*(undefined8 *)PTR_DAT_02bcde00);
        if (lVar12 == 0) break;
        FUN_010d2750(lVar12,*(undefined8 *)PTR_DAT_02bc37f0);
        lVar16 = *unaff_x28;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_009ddef4();
          lVar16 = *unaff_x28;
        }
        **(long **)(lVar16 + 0xb8) = lVar12;
        thunk_FUN_00a502ec(*(undefined8 *)(*unaff_x28 + 0xb8),lVar12);
      }
      lVar12 = *in_stack_00000058;
      if (lVar12 != 0) {
        uVar15 = 0;
        goto LAB_00aeb624;
      }
      break;
    }
  }
  goto LAB_00aeb77c;
  while( true ) {
    lVar12 = *unaff_x28;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_009ddef4();
      lVar12 = *unaff_x28;
    }
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (lVar12 == 0) break;
    iVar9 = FUN_010d2cc0(lVar12,iVar7,*(undefined8 *)puVar4);
    FUN_010d2d14(lVar12,iVar7,iVar9 + 1,*(undefined8 *)puVar3);
    uVar15 = uVar15 + 1;
    lVar12 = *in_stack_00000058;
    if (lVar12 == 0) break;
LAB_00aeb624:
    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar15) {
      return;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar15) {
LAB_00aeb7a4:
                    /* WARNING: Subroutine does not return */
      FUN_00a190f8();
    }
    iVar7 = *(int *)(lVar12 + uVar15 * 4 + 0x20);
    while( true ) {
      lVar12 = *unaff_x28;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_009ddef4(lVar12);
        lVar12 = *unaff_x28;
      }
      lVar16 = **(long **)(lVar12 + 0xb8);
      if (lVar16 == 0) goto LAB_00aeb77c;
      iVar9 = *(int *)(lVar16 + 0x18);
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_009ddef4(lVar12);
        lVar16 = **(long **)(*unaff_x28 + 0xb8);
        if (lVar16 == 0) goto LAB_00aeb77c;
      }
      if (iVar7 < iVar9) break;
      lVar12 = *(long *)(lVar16 + 0x10);
      lVar18 = *(long *)puVar5;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_00aeb77c;
      uVar8 = *(uint *)(lVar16 + 0x18);
      if (uVar8 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar16 + 0x18) = uVar8 + 1;
        *(undefined4 *)(lVar12 + (long)(int)uVar8 * 4 + 0x20) = 0;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x58) + 8))(lVar16,0);
      }
    }
    iVar9 = FUN_010d2cc0(lVar16,iVar7,*(undefined8 *)puVar4);
    if (iVar9 < 0) {
      lVar12 = *unaff_x28;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
        lVar12 = *unaff_x28;
      }
      if (**(long **)(lVar12 + 0xb8) == 0) break;
      FUN_010d2d14(**(long **)(lVar12 + 0xb8),iVar7,0,*(undefined8 *)puVar3);
    }
  }
LAB_00aeb77c:
                    /* WARNING: Subroutine does not return */
  FUN_00a190f0();
}


