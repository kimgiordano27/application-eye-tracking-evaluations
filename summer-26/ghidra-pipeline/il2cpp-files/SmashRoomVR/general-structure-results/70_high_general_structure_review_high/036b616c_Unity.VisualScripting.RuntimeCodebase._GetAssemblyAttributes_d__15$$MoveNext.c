/*
FUNCTION_NAME: Unity.VisualScripting.RuntimeCodebase.<GetAssemblyAttributes>d__15$$MoveNext
ENTRY_POINT: 036b616c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined4 Unity_VisualScripting_RuntimeCodebase_<GetAssemblyAttributes>d__15__MoveNext(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar21;
  uint unaff_w22;
  uint uVar22;
  long *plVar23;
  long *plVar24;
  long unaff_x24;
  long *plVar25;
  long unaff_x25;
  uint unaff_w26;
  ulong uVar26;
  long unaff_x27;
  long unaff_x28;
  uint *puVar27;
  long *unaff_x29;
  long lVar28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000170;
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
code_r0x036b616c:
  if (*(uint *)(unaff_x29 + 3) < 3) goto LAB_036b7478;
  unaff_x29[6] = unaff_x28;
  thunk_FUN_01b4f09c(unaff_x29 + 6,unaff_x28);
  lVar11 = FUN_039230bc();
  if ((lVar11 == 0) ||
     (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*unaff_x29 + 0x40)), lVar12 != 0)) {
    if (3 < *(uint *)(unaff_x29 + 3)) {
      unaff_x29[7] = lVar11;
      thunk_FUN_01b4f09c(unaff_x29 + 7,lVar11);
      puVar17 = (undefined8 *)PTR_DAT_03d9cb48;
      uVar9 = unaff_w26;
LAB_036b64f0:
      uVar13 = FUN_02ee71a8(*puVar17,unaff_x29,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f3474(uVar13);
      uVar22 = unaff_w22;
LAB_036b6534:
      if (*(char *)(unaff_x27 + 0x10) == '\x01') {
        if (*(long *)(unaff_x27 + 0x18) == 0) goto thunk_FUN_01b48178;
        iVar7 = FUN_036c1bb4(*(long *)(unaff_x27 + 0x18),0);
        if (*unaff_x21 == 0) goto thunk_FUN_01b48178;
        iVar8 = FUN_036c1bb4(*unaff_x21,0);
        if (iVar7 == iVar8) goto LAB_036b6570;
        plVar14 = *(long **)(unaff_x27 + 0x18);
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
          *unaff_x21 = 0;
        }
        else {
          lVar11 = *(long *)StringLiteral_444;
          bVar3 = *(byte *)(lVar11 + 0x130);
          if (*(byte *)(*plVar14 + 0x130) < bVar3) {
            plVar25 = (long *)0x0;
          }
          else {
            plVar25 = plVar14;
            if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar11) {
              plVar25 = (long *)0x0;
            }
          }
          *unaff_x21 = (long)plVar25;
          if (*(byte *)(*plVar14 + 0x130) < bVar3) {
            plVar14 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar11) {
            plVar14 = (long *)0x0;
          }
        }
        thunk_FUN_01b4f09c(unaff_x21,plVar14);
        bVar5 = true;
      }
      else {
LAB_036b6570:
        bVar5 = false;
      }
      if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
      goto thunk_FUN_01b48178;
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
      lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      plVar14 = (long *)(lVar11 + 0x30);
      *plVar14 = unaff_x27;
      *(undefined4 *)(lVar11 + 0x2c) = 0;
      thunk_FUN_01b4f09c(plVar14,unaff_x27);
      if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
      goto thunk_FUN_01b48178;
      uVar4 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_036b7478;
      lVar12 = lVar11 + (long)(int)uVar4 * 0x178;
      *(short *)(lVar12 + 0x20) = (short)uVar9;
      *(undefined1 *)(lVar12 + 0x5c) = uStack00000000000001ac;
      if (*(uint *)(unaff_x25 + 0x18) <= uVar22) goto LAB_036b7478;
      lVar11 = lVar11 + (long)(int)uVar4 * 0x178;
      *(undefined8 *)(lVar11 + 0x24) = *(undefined8 *)(unaff_x25 + unaff_x24 * 0xc + 0x24);
      *(long *)(lVar11 + 0x38) = *unaff_x21;
      thunk_FUN_01b4f09c();
      plVar14 = (long *)PTR_DAT_03d9c920;
      if (*(char *)(unaff_x27 + 0x10) == '\x02') {
        plVar25 = *(long **)(unaff_x27 + 0x18);
        if (plVar25 == (long *)0x0) goto thunk_FUN_01b48178;
        bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
        if ((*(byte *)(*plVar25 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_03d9cb28)) goto thunk_FUN_01b48178;
        lVar12 = plVar25[4];
        lVar11 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *plVar14;
        }
        uVar9 = FUN_036b0d60(lVar12,plVar25,*(long *)(lVar11 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar9;
        lVar11 = **(long **)(*plVar14 + 0xb8);
        if (lVar11 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_036b7478;
        lVar11 = lVar11 + (long)(int)uVar9 * 0x38;
        *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        *(undefined4 *)(lVar11 + 0x2c) = 1;
        uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
        *(undefined8 *)(lVar11 + 0x40) = plVar25;
        *(undefined4 *)(lVar11 + 0x58) = uVar10;
        thunk_FUN_01b4f09c((undefined8 *)(lVar11 + 0x40),plVar25);
        plVar14 = (long *)PTR_DAT_03d9c920;
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        uVar9 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_036b7478;
        *(undefined4 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x48) =
             *(undefined4 *)(unaff_x27 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
        unaff_x25 = in_stack_00000038;
        plVar25 = (long *)PTR_DAT_03d9c8a0;
      }
      else {
        if (bVar5) {
          if (*unaff_x21 == 0) goto thunk_FUN_01b48178;
          iVar7 = FUN_036c1bb4(*unaff_x21,0);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
          iVar8 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
          if (iVar7 != iVar8) {
            uVar21 = FUN_036fba20(0);
            if ((uVar21 & 1) == 0) {
              if (*unaff_x21 == 0) goto thunk_FUN_01b48178;
              uVar13 = *(undefined8 *)(*unaff_x21 + 0x20);
            }
            else {
              if (*unaff_x21 == 0) goto thunk_FUN_01b48178;
              uVar13 = *in_stack_00000028;
              uVar18 = *(undefined8 *)(*unaff_x21 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar13 = FUN_036f7d2c(uVar13,uVar18,0);
            }
            *in_stack_00000028 = uVar13;
            thunk_FUN_01b4f09c(in_stack_00000028);
            lVar11 = *plVar14;
            uVar13 = *in_stack_00000028;
            lVar12 = *unaff_x21;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *plVar14;
            }
            uVar10 = FUN_036b0b30(uVar13,lVar12,*(long *)(lVar11 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
            *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
            unaff_x25 = in_stack_00000038;
          }
        }
        if (*(long *)(unaff_x27 + 0x20) == 0) goto thunk_FUN_01b48178;
        iVar7 = FUN_0396b18c(*(long *)(unaff_x27 + 0x20),0);
        if (0 < iVar7) {
          if (*(long *)(unaff_x27 + 0x20) == 0) goto thunk_FUN_01b48178;
          lVar11 = *unaff_x21;
          uVar13 = *in_stack_00000028;
          uVar10 = FUN_0396b18c(*(long *)(unaff_x27 + 0x20),0);
          if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
          }
          uVar13 = FUN_036f77c8(lVar11,uVar13,uVar10,0);
          *in_stack_00000028 = uVar13;
          thunk_FUN_01b4f09c(in_stack_00000028,uVar13);
          lVar11 = *plVar14;
          uVar13 = *in_stack_00000028;
          lVar12 = *unaff_x21;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar11 = *plVar14;
          }
          uVar10 = FUN_036b0b30(uVar13,lVar12,*(long *)(lVar11 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
          bVar5 = true;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
          unaff_x25 = in_stack_00000038;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar21 = FUN_02fdb080(uVar9,0);
        plVar25 = (long *)PTR_DAT_03d9c8a0;
        if ((uVar9 != 0x200b) && ((uVar21 & 1) == 0)) {
          lVar11 = *plVar14;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar11);
            lVar11 = *plVar14;
          }
          lVar12 = **(long **)(lVar11 + 0xb8);
          if (lVar12 == 0) goto thunk_FUN_01b48178;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_036b7478;
          if (*(int *)(lVar12 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar11);
              lVar12 = **(long **)(*plVar14 + 0xb8);
              if (lVar12 == 0) goto thunk_FUN_01b48178;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
          }
          else {
            uVar18 = *in_stack_00000028;
            uVar13 = thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                       );
            FUN_038ff0a8(uVar13,uVar18,0);
            lVar11 = *plVar14;
            lVar12 = *unaff_x21;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *plVar14;
            }
            uVar9 = FUN_036b0b30(uVar13,lVar12,*(long *)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar9;
            lVar12 = **(long **)(*plVar14 + 0xb8);
            if (lVar12 == 0) goto thunk_FUN_01b48178;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_036b7478;
          lVar12 = lVar12 + (long)(int)uVar9 * 0x38;
          *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        }
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
             *in_stack_00000028;
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
        *(uint *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
        lVar11 = *plVar14;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *plVar14;
          uVar9 = *(uint *)(unaff_x19 + 0x120);
        }
        lVar12 = **(long **)(lVar11 + 0xb8);
        if (lVar12 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_036b7478;
        *(bool *)(lVar12 + (long)(int)uVar9 * 0x38 + 0x41) = bVar5;
        if (bVar5) {
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = **(long **)(*plVar14 + 0xb8);
            if (lVar12 == 0) goto thunk_FUN_01b48178;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_036b7478;
          puVar17 = (undefined8 *)(lVar12 + (long)(int)uVar9 * 0x38 + 0x48);
          *puVar17 = in_stack_00000018;
          thunk_FUN_01b4f09c(puVar17,in_stack_00000018);
          *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
          thunk_FUN_01b4f09c(unaff_x21);
          *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
          thunk_FUN_01b4f09c(in_stack_00000028,in_stack_00000018);
          *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
        }
        uVar9 = *(uint *)(unaff_x19 + 0x490);
      }
      do {
        *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
        do {
          uVar9 = *(uint *)(unaff_x25 + 0x18);
          unaff_w22 = uVar22 + 1;
          if ((int)uVar9 <= (int)unaff_w22) {
FUN_036b6c00:
            if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
              *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
              goto LAB_036b6c0c;
            }
            lVar11 = *unaff_x20;
            if (lVar11 == 0) goto thunk_FUN_01b48178;
            *(int *)(lVar11 + 0x1c) = in_stack_00000020._4_4_;
            lVar12 = *plVar14;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *plVar14;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            if (lVar12 == 0) goto thunk_FUN_01b48178;
            uVar9 = FUN_02554fc4(lVar12,*(undefined8 *)PTR_DAT_03d9b168);
            *(uint *)(lVar11 + 0x34) = uVar9;
            if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
            plVar23 = (long *)(*unaff_x20 + 0x60);
            lVar11 = *plVar23;
            if (lVar11 == 0) goto thunk_FUN_01b48178;
            uVar21 = (ulong)uVar9;
            if (*(int *)(lVar11 + 0x18) < (int)uVar9) {
              if (*(int *)(*plVar25 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f52de4(plVar23,uVar21,0,*(undefined8 *)PTR_DAT_03d9cb38);
            }
            if (*(long *)(unaff_x19 + 0x708) == 0) goto thunk_FUN_01b48178;
            plVar23 = (long *)(unaff_x19 + 0x708);
            if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
              uVar10 = FUN_039155e8(uVar9 + 1,0);
              if (*(int *)(*plVar25 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*plVar25);
              }
              FUN_01f52b30(plVar23,uVar10,*(undefined8 *)PTR_DAT_03d9cb40);
            }
            if (*(char *)(unaff_x19 + 0x321) != '\0') {
              if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
              plVar24 = (long *)(*unaff_x20 + 0x38);
              lVar11 = *plVar24;
              if (lVar11 == 0) goto thunk_FUN_01b48178;
              iVar7 = *(int *)(unaff_x19 + 0x490);
              if (0x100 < *(int *)(lVar11 + 0x18) - iVar7) {
                iVar8 = 0x100;
                if (0x100 < iVar7 + 1) {
                  iVar8 = iVar7 + 1;
                }
                if (*(int *)(*plVar25 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_01f52d44(plVar24,iVar8,1,*(undefined8 *)PTR_DAT_03d9cb30);
                plVar14 = (long *)PTR_DAT_03d9c920;
              }
            }
            if ((int)uVar9 < 1) goto LAB_036b73b0;
            lVar11 = 0;
            uVar26 = 0;
            lVar12 = 0x54;
            lVar28 = 0x20;
            goto LAB_036b6da0;
          }
          if (uVar9 <= unaff_w22) goto LAB_036b7478;
          puVar27 = (uint *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x20);
          if (*puVar27 == 0) goto FUN_036b6c00;
          if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
          plVar14 = (long *)(*unaff_x20 + 0x38);
          lVar11 = *plVar14;
          iVar7 = *(int *)(unaff_x19 + 0x490);
          if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar7)) {
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f52d44(plVar14,iVar7 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
            uVar9 = *(uint *)(unaff_x25 + 0x18);
          }
          if (uVar9 <= unaff_w22) goto LAB_036b7478;
          uVar9 = *puVar27;
          unaff_x24 = (long)(int)unaff_w22;
          if ((uVar9 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_036b5ed4:
            in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
            in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
            in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
            if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036b5fac;
            uVar22 = *(uint *)(unaff_x19 + 0x25c);
            if ((uVar22 >> 4 & 1) == 0) {
              if ((uVar22 >> 3 & 1) == 0) {
                if ((uVar22 >> 5 & 1) != 0) goto LAB_036b5f00;
              }
              else {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar21 = FUN_02fdd92c(uVar9,0);
                if ((uVar21 & 1) != 0) {
                  if (*(int *)(*(long *)
                                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar9 = FUN_02fdddc0(uVar9,0);
                  goto LAB_036b5fa8;
                }
              }
            }
            else {
LAB_036b5f00:
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar21 = FUN_02fdd9e8(uVar9,0);
              if ((uVar21 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar9 = FUN_02fddc48(uVar9,0);
LAB_036b5fa8:
                uVar9 = uVar9 & 0xffff;
              }
            }
LAB_036b5fac:
            unaff_x27 = FUN_036f260c();
            uVar22 = unaff_w22;
            if (unaff_x27 != 0) goto LAB_036b6534;
            iVar7 = FUN_036fb88c();
            if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
            if (iVar7 == 0) {
              unaff_w26 = 0x25a1;
            }
            else {
              unaff_w26 = FUN_036fb88c(0);
            }
            *puVar27 = unaff_w26;
            uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            unaff_x27 = FUN_036d1ff4(unaff_w26,uVar13,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
            if (unaff_x27 == 0) {
              lVar11 = FUN_036fba04();
              if (lVar11 != 0) {
                lVar11 = FUN_036fba04(0);
                if (lVar11 == 0) goto thunk_FUN_01b48178;
                if (0 < *(int *)(lVar11 + 0x18)) {
                  uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar13 = FUN_036fba04(0);
                  uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                  }
                  unaff_x27 = FUN_036d2514(unaff_w26,uVar18,uVar13,1,uVar10,uVar2,
                                           (long)&stack0x000001a8 + 4,0);
                  if (unaff_x27 != 0) goto LAB_036b605c;
                }
              }
              uVar13 = FUN_036fb8e4(0);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar21 = FUN_0391f968(uVar13,0,0);
              if ((uVar21 & 1) != 0) {
                uVar13 = FUN_036fb8e4(0);
                uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                }
                unaff_x27 = FUN_036d1ff4(unaff_w26,uVar13,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,
                                         0);
                if (unaff_x27 != 0) goto LAB_036b605c;
              }
              if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
              *puVar27 = 0x20;
              uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              unaff_w26 = 0x20;
              unaff_x27 = FUN_036d1ff4(0x20,uVar13,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
              if (unaff_x27 == 0) {
                if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                *puVar27 = 3;
                uVar13 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                unaff_w26 = 3;
                unaff_x27 = FUN_036d1ff4(3,uVar13,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
              }
            }
LAB_036b605c:
            uVar21 = FUN_036fb8c8(0);
            if ((uVar21 & 1) != 0) {
              unaff_x25 = in_stack_00000038;
              uVar9 = unaff_w26;
              if (unaff_x27 != 0) goto LAB_036b6534;
              goto thunk_FUN_01b48178;
            }
            unaff_x29 = (long *)FUN_01b47fd0(*(undefined8 *)
                                              Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                             ,4);
            if (0xffff < (int)uVar9) {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
              lVar11 = thunk_FUN_01afa70c(*(undefined8 *)
                                           Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                          ,&stack0x000000e0);
              if (unaff_x29 == (long *)0x0) goto thunk_FUN_01b48178;
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*unaff_x29 + 0x40)),
                 lVar12 == 0)) goto LAB_036b747c;
              if ((int)unaff_x29[3] == 0) goto LAB_036b7478;
              unaff_x29[4] = lVar11;
              thunk_FUN_01b4f09c(unaff_x29 + 4,lVar11);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
              lVar11 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*unaff_x29 + 0x40)),
                 lVar12 == 0)) goto LAB_036b747c;
              if (*(uint *)(unaff_x29 + 3) < 2) goto LAB_036b7478;
              unaff_x29[5] = lVar11;
              thunk_FUN_01b4f09c(unaff_x29 + 5,lVar11);
              if (unaff_x27 == 0) goto thunk_FUN_01b48178;
              in_stack_00000170 = *(undefined4 *)(unaff_x27 + 0x14);
              unaff_x28 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
              unaff_x25 = in_stack_00000038;
              if ((unaff_x28 == 0) ||
                 (lVar11 = thunk_FUN_01afa9e0(unaff_x28,*(undefined8 *)(*unaff_x29 + 0x40)),
                 lVar11 != 0)) goto code_r0x036b616c;
              goto LAB_036b747c;
            }
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
            lVar11 = thunk_FUN_01afa70c(*(undefined8 *)
                                         Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                        ,&stack0x000000e0);
            if (unaff_x29 == (long *)0x0) goto thunk_FUN_01b48178;
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*unaff_x29 + 0x40)), lVar12 == 0)
               ) goto LAB_036b747c;
            if ((int)unaff_x29[3] == 0) goto LAB_036b7478;
            unaff_x29[4] = lVar11;
            thunk_FUN_01b4f09c(unaff_x29 + 4,lVar11);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
            lVar11 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*unaff_x29 + 0x40)), lVar12 == 0)
               ) goto LAB_036b747c;
            if (*(uint *)(unaff_x29 + 3) < 2) goto LAB_036b7478;
            unaff_x29[5] = lVar11;
            thunk_FUN_01b4f09c(unaff_x29 + 5,lVar11);
            if (unaff_x27 == 0) goto thunk_FUN_01b48178;
            in_stack_00000170 = *(undefined4 *)(unaff_x27 + 0x14);
            lVar11 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*unaff_x29 + 0x40)), lVar12 == 0)
               ) goto LAB_036b747c;
            if (*(uint *)(unaff_x29 + 3) < 3) goto LAB_036b7478;
            unaff_x29[6] = lVar11;
            thunk_FUN_01b4f09c(unaff_x29 + 6,lVar11);
            lVar11 = FUN_039230bc();
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*unaff_x29 + 0x40)), lVar12 == 0)
               ) goto LAB_036b747c;
            if (*(uint *)(unaff_x29 + 3) < 4) goto LAB_036b7478;
            unaff_x29[7] = lVar11;
            thunk_FUN_01b4f09c(unaff_x29 + 7,lVar11);
            puVar17 = (undefined8 *)PTR_DAT_03d9cb50;
            unaff_x25 = in_stack_00000038;
            uVar9 = unaff_w26;
            goto LAB_036b64f0;
          }
          uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
          uVar21 = FUN_036e7318();
          uVar22 = uStack00000000000001a8;
          if ((uVar21 & 1) == 0) goto LAB_036b5ed4;
          if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
          iVar7 = *(int *)(unaff_x25 + unaff_x24 * 0xc + 0x24);
          if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0x26a) = 1;
          }
          puVar6 = PTR_DAT_03d9c920;
          plVar14 = (long *)PTR_DAT_03d9c920;
        } while (*(int *)(unaff_x19 + 0x644) != 1);
        lVar11 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *(long *)puVar6;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
        lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
        *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
        uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
        lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        *(short *)(lVar11 + 0x20) = (short)uVar2 + -0x2000;
        *(undefined4 *)(lVar11 + 0x48) = uVar2;
        *(long *)(lVar11 + 0x38) = *unaff_x21;
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
        *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
             *(undefined8 *)(unaff_x19 + 0x698);
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        uVar9 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar11 + 0x18) <= uVar9) break;
        *(undefined4 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x58) =
             *(undefined4 *)(unaff_x19 + 0x120);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar12 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar12 == 0))
        goto thunk_FUN_01b48178;
        uVar13 = FUN_02b59714(lVar12,*(undefined4 *)(unaff_x19 + 0x6a4),
                              *(undefined8 *)PTR_DAT_03d9c878);
        if (*(uint *)(lVar11 + 0x18) <= uVar9) break;
        *(undefined8 *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x30) = uVar13;
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        uVar9 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar11 + 0x18) <= uVar9) break;
        uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
        lVar12 = lVar11 + (long)(int)uVar9 * 0x178;
        *(int *)(lVar12 + 0x24) = iVar7;
        *(undefined4 *)(lVar12 + 0x2c) = uVar2;
        if (*(uint *)(in_stack_00000038 + 0x18) <= uVar22) break;
        *(int *)(lVar11 + (long)(int)uVar9 * 0x178 + 0x28) =
             (*(int *)(in_stack_00000038 + (long)(int)uVar22 * 0xc + 0x24) - iVar7) + 1;
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
        plVar14 = (long *)PTR_DAT_03d9c920;
        unaff_x25 = in_stack_00000038;
      } while( true );
    }
    goto LAB_036b7478;
  }
LAB_036b747c:
  uVar13 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar13,0);
LAB_036b6da0:
  do {
    if (uVar26 != 0) {
      lVar19 = *plVar23;
      if (lVar19 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
      uVar13 = *(undefined8 *)(lVar19 + uVar26 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = FUN_03922f24(uVar13,0,0);
      if ((uVar15 & 1) != 0) {
        lVar19 = *plVar14;
        plVar25 = (long *)*plVar23;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar19 = *plVar14;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar19 = lVar19 + lVar12;
        in_stack_00000160 = *(undefined8 *)(lVar19 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar19 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar19 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar19 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar19 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar19 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar19 + -0x34);
        lVar19 = FUN_03701aec();
        if (plVar25 == (long *)0x0) goto thunk_FUN_01b48178;
        if ((lVar19 != 0) &&
           (lVar16 = thunk_FUN_01afa9e0(lVar19,*(undefined8 *)(*plVar25 + 0x40)), lVar16 == 0))
        goto LAB_036b747c;
        if (*(uint *)(plVar25 + 3) <= uVar26) goto LAB_036b7478;
        plVar25[uVar26 + 4] = lVar19;
        thunk_FUN_01b4f09c((long)plVar25 + lVar28,lVar19);
        plVar14 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        puVar17 = (undefined8 *)(lVar19 + lVar11 + 0x30);
        *puVar17 = 0;
        thunk_FUN_01b4f09c(puVar17,0);
      }
      lVar19 = *plVar23;
      if (lVar19 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
      lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
      if (lVar19 == 0) goto thunk_FUN_01b48178;
      uVar13 = *(undefined8 *)(lVar19 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = FUN_03922f24(uVar13,0,0);
      if ((uVar15 & 1) == 0) {
        lVar19 = *plVar23;
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x38), lVar19 == 0))
        goto thunk_FUN_01b48178;
        iVar7 = FUN_03922ce0(lVar19,0);
        lVar19 = *plVar14;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar19);
          lVar19 = *plVar14;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar19 = *(long *)(lVar19 + lVar12 + -0x1c);
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        iVar8 = FUN_03922ce0(lVar19,0);
        if (iVar7 != iVar8) goto LAB_036b6f94;
      }
      else {
LAB_036b6f94:
        lVar19 = *plVar23;
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar16 = *plVar14;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar16 = *plVar14;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        thunk_FUN_03701608(lVar19,*(undefined8 *)(lVar16 + lVar12 + -0x1c),0);
        lVar19 = *plVar23;
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar16 = **(long **)(*plVar14 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)(lVar16 + lVar12 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar19 = *plVar23;
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar16 = **(long **)(*plVar14 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar19 + 0x28) = *(undefined8 *)(lVar16 + lVar12 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar19 = *plVar14;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar19 = *plVar14;
      }
      lVar16 = **(long **)(lVar19 + 0xb8);
      if (lVar16 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
      if (*(char *)(lVar16 + lVar12 + -0x13) != '\0') {
        lVar20 = *plVar23;
        if (lVar20 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar20 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar20 = *(long *)(lVar20 + uVar26 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar16 = **(long **)(*plVar14 + 0xb8);
          if (lVar16 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
        if (lVar20 == 0) goto thunk_FUN_01b48178;
        FUN_03701638(lVar20,*(undefined8 *)(lVar16 + lVar12 + -0x1c),0);
        lVar19 = *plVar23;
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar16 = **(long **)(*plVar14 + 0xb8);
        if (lVar16 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar19 + 0x48) = *(undefined8 *)(lVar16 + lVar12 + -0xc);
        thunk_FUN_01b4f09c();
      }
    }
    lVar19 = *plVar14;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar19 = *plVar14;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto thunk_FUN_01b48178;
    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
    lVar20 = *(long *)(lVar16 + lVar11 + 0x30);
    iVar7 = *(int *)(lVar19 + lVar12);
    if (lVar20 == 0) {
      if (uVar26 == 0) {
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar7 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_036b7478;
        memcpy((void *)(lVar16 + lVar11 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar16 + 0x20);
      }
      else {
        lVar19 = *plVar23;
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) goto LAB_036b7478;
        lVar19 = *(long *)(lVar19 + uVar26 * 8 + 0x20);
        if (lVar19 == 0) goto thunk_FUN_01b48178;
        uVar13 = FUN_03701980(lVar19,0);
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_036f884c(&stack0x000000e0,uVar13,iVar7 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
        __dest = (void *)(lVar16 + lVar11 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar8 = *(int *)(lVar20 + 0x18);
      if (iVar8 < iVar7 * 4) {
LAB_036b7200:
        if (iVar7 < 0x401) {
          iVar7 = FUN_039155e8(iVar7 + 1,0);
        }
        else {
          iVar7 = iVar7 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar16 + lVar11 + 0x20,iVar7,0);
      }
      else if ((0 < iVar7) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar1 = iVar8;
        }
        if (0x100 < (iVar1 >> 2) - iVar7) goto LAB_036b7200;
      }
    }
    plVar14 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0))
    goto thunk_FUN_01b48178;
    lVar16 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar16 = *plVar14;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto thunk_FUN_01b48178;
    if ((*(uint *)(lVar16 + 0x18) <= uVar26) || (*(uint *)(lVar19 + 0x18) <= uVar26))
    goto LAB_036b7478;
    *(undefined8 *)(lVar19 + lVar11 + 0x68) = *(undefined8 *)(lVar16 + lVar12 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar26 = uVar26 + 1;
    lVar11 = lVar11 + 0x50;
    lVar12 = lVar12 + 0x38;
    lVar28 = lVar28 + 8;
  } while (uVar9 != uVar26);
LAB_036b73b0:
  puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
  lVar11 = *plVar23;
  if (lVar11 != 0) {
    lVar12 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3) + 0x20;
    lVar28 = (long)(int)uVar9 * 0x50 + 0x20;
    do {
      uVar9 = (uint)uVar21;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar9) {
LAB_036b6c0c:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar9) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar13 = *(undefined8 *)(lVar11 + lVar12);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar21 = FUN_0391f968(uVar13,0,0);
      if ((uVar21 & 1) == 0) goto LAB_036b6c0c;
      if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x60), lVar11 == 0)) break;
      uVar22 = *(uint *)(lVar11 + 0x18);
      if ((int)uVar9 < (int)uVar22) {
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          uVar22 = *(uint *)(lVar11 + 0x18);
        }
        if (uVar22 <= uVar9) goto LAB_036b7478;
        FUN_036fa5b4(lVar11 + lVar28,0,1,0);
      }
      lVar11 = *plVar23;
      uVar21 = (ulong)(uVar9 + 1);
      lVar28 = lVar28 + 0x50;
      lVar12 = lVar12 + 8;
    } while (lVar11 != 0);
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


