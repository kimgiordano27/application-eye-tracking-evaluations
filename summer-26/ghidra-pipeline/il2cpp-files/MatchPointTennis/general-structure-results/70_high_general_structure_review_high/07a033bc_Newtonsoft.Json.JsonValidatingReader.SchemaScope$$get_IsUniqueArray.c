/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 07a033bc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07a044d0) */

void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  int *unaff_x19;
  long unaff_x20;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  undefined1 auVar19 [16];
  unkbyte10 Var20;
  long lStack0000000000000000;
  long lStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long *in_stack_00000040;
  uint3 uStack0000000000000048;
  undefined5 uStack000000000000004b;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  
  FUN_04447ba8();
  FUN_04447ba8(PTR_DAT_09f3bf88);
  FUN_04447ba8(PTR_DAT_09f43c98);
  FUN_04447ba8(PTR_DAT_09f2aba0);
  *(undefined1 *)(unaff_x20 + 0xed0) = 1;
  puVar2 = PTR_DAT_09f20018;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = (long *)0x0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar17 = *unaff_x19;
  lVar13 = *(long *)(unaff_x19 + 10);
  if (iVar17 == 0) {
    _in_stack_00000030 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    iVar17 = -1;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    *unaff_x19 = -1;
LAB_07a0349c:
    FUN_0795b400(&stack0x00000030,0);
    auVar19 = _in_stack_00000030;
  }
  else {
    auVar19 = ZEXT816(0);
    if (3 < iVar17 - 1U) {
      if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      _in_stack_00000030 = FUN_07ab3be8(*(long *)(unaff_x19 + 8),0,0);
      uVar9 = FUN_0795b3e4(&stack0x00000030,0);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
        thunk_FUN_044bb4b4(unaff_x19 + 0x12,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_04b622fc(unaff_x19 + 2,&stack0x00000030);
        return;
      }
      goto LAB_07a0349c;
    }
  }
  switch(iVar17) {
  case 1:
    in_stack_00000028 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000020 = *(long **)(unaff_x19 + 0x16);
    iVar17 = -1;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
LAB_07a034e0:
    _in_stack_00000030 = auVar19;
    if (DAT_0a524975 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2aba0);
      DAT_0a524975 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (DAT_0a522da7 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2d7d0);
      FUN_04447ba8(PTR_DAT_09f1e590);
      DAT_0a522da7 = '\x01';
    }
    plVar16 = in_stack_00000020;
    if (in_stack_00000020 != (long *)0x0) {
      lVar18 = *in_stack_00000020;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
      if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1e590))
      {
        uVar15 = in_stack_00000028 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_07a039d4;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,2);
LAB_07a039d4:
        (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
      }
      else {
        FUN_0795adfc(in_stack_00000020,0);
      }
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    *(undefined4 *)(lVar13 + 0x44) = 0;
    auVar19 = FUN_065c2b44(unaff_x19 + 0xc,*(undefined8 *)PTR_DAT_09f434f8);
    FUN_07a00194(lVar13,auVar19._0_8_,auVar19._8_8_);
    goto LAB_07a03cdc;
  case 2:
    in_stack_00000028 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000020 = *(long **)(unaff_x19 + 0x16);
    iVar17 = -1;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
LAB_07a036f0:
    _in_stack_00000030 = auVar19;
    if (DAT_0a524975 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2aba0);
      DAT_0a524975 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (DAT_0a522da7 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2d7d0);
      FUN_04447ba8(PTR_DAT_09f1e590);
      DAT_0a522da7 = '\x01';
    }
    plVar16 = in_stack_00000020;
    if (in_stack_00000020 != (long *)0x0) {
      lVar18 = *in_stack_00000020;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
      if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1e590))
      {
        uVar15 = in_stack_00000028 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto FUN_07a03d08;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,2);
FUN_07a03d08:
        (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
      }
      else {
        FUN_0795adfc(in_stack_00000020,0);
      }
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    *(undefined4 *)(lVar13 + 0x44) = 0;
    break;
  case 3:
    in_stack_00000028 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000020 = *(long **)(unaff_x19 + 0x16);
    iVar17 = -1;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
LAB_07a035dc:
    _in_stack_00000030 = auVar19;
    if (DAT_0a524975 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2aba0);
      DAT_0a524975 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (DAT_0a522da7 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2d7d0);
      FUN_04447ba8(PTR_DAT_09f1e590);
      DAT_0a522da7 = '\x01';
    }
    plVar16 = in_stack_00000020;
    if (in_stack_00000020 != (long *)0x0) {
      lVar18 = *in_stack_00000020;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
      if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1e590))
      {
        uVar15 = in_stack_00000028 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_07a03a2c;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,2);
LAB_07a03a2c:
        (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
      }
      else {
        FUN_0795adfc(in_stack_00000020,0);
      }
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    *(undefined4 *)(lVar13 + 0x44) = 0;
LAB_07a03a44:
    plVar16 = *(long **)(lVar13 + 0x28);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    Var20 = (**(code **)(*plVar16 + 0x338))
                      (plVar16,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),
                       *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar16 + 0x340));
    puVar3 = PTR_DAT_09f2aba0;
    if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    _uStack0000000000000048 = 0;
    in_stack_00000040 = (long *)Var20;
    thunk_FUN_044bb4b4(&stack0x00000040,(long *)Var20);
    uStack0000000000000048 = (uint3)(ushort)((unkuint10)Var20 >> 0x40);
    in_stack_00000058 = _uStack0000000000000048;
    in_stack_00000050 = in_stack_00000040;
    thunk_FUN_044bb4b4(&stack0x00000050,0);
    thunk_FUN_044bb4b4(&stack0x00000050,0);
    in_stack_00000020 = in_stack_00000050;
    in_stack_00000028 = in_stack_00000058;
    if (DAT_0a524974 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2aba0);
      DAT_0a524974 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (DAT_0a522da5 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2d7d0);
      FUN_04447ba8(PTR_DAT_09f1e590);
      DAT_0a522da5 = '\x01';
    }
    plVar16 = in_stack_00000020;
    auVar19 = _in_stack_00000030;
    if (in_stack_00000020 != (long *)0x0) {
      lVar18 = *in_stack_00000020;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
      if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1e590))
      {
        uVar15 = in_stack_00000028 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07a03bbc;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,0);
LAB_07a03bbc:
        iVar8 = (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
        auVar19 = _in_stack_00000030;
        if (iVar8 == 0) goto LAB_07a03df4;
      }
      else {
        uVar9 = FUN_07ab38f4(in_stack_00000020,0);
        auVar19 = _in_stack_00000030;
        if ((uVar9 & 1) == 0) {
LAB_07a03df4:
          *unaff_x19 = 4;
          *(ulong *)(unaff_x19 + 0x18) = in_stack_00000028;
          *(long **)(unaff_x19 + 0x16) = in_stack_00000020;
          thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04b644e4(unaff_x19 + 2,&stack0x00000020);
          return;
        }
      }
    }
    goto LAB_07a03bd0;
  case 4:
    in_stack_00000028 = *(ulong *)(unaff_x19 + 0x18);
    in_stack_00000020 = *(long **)(unaff_x19 + 0x16);
    iVar17 = -1;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    *unaff_x19 = -1;
LAB_07a03bd0:
    _in_stack_00000030 = auVar19;
    if (DAT_0a524975 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2aba0);
      DAT_0a524975 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (DAT_0a522da7 == '\0') {
      FUN_04447ba8(PTR_DAT_09f2d7d0);
      FUN_04447ba8(PTR_DAT_09f1e590);
      DAT_0a522da7 = '\x01';
    }
    plVar16 = in_stack_00000020;
    if (in_stack_00000020 != (long *)0x0) {
      lVar18 = *in_stack_00000020;
      bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
      if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1e590))
      {
        uVar15 = in_stack_00000028 & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_07a03cc8;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,2);
LAB_07a03cc8:
        (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
      }
      else {
        FUN_0795adfc(in_stack_00000020,0);
      }
    }
LAB_07a03cdc:
    uVar6 = 0x1c;
    uVar14 = 0x1c;
    goto joined_r0x07a03d28;
  default:
    _in_stack_00000030 = auVar19;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar8 = *(int *)(lVar13 + 0x44);
    if (iVar8 == 0) {
      FUN_079fee34(lVar13);
      iVar8 = *(int *)(lVar13 + 0x44);
    }
    puVar3 = PTR_DAT_09f43c20;
    piVar12 = unaff_x19 + 0xc;
    iVar4 = FUN_065bd13c(piVar12,*(undefined8 *)PTR_DAT_09f43c20);
    if (SCARRY4(iVar8,iVar4)) {
      uVar11 = FUN_04447e54();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar11,*(undefined8 *)PTR_DAT_09f43c98);
    }
    iVar5 = FUN_065bd13c(piVar12,*(undefined8 *)puVar3);
    uVar14 = iVar4 + iVar8;
    if (SCARRY4(uVar14,iVar5)) {
      uVar11 = FUN_04447e54();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar11,*(undefined8 *)PTR_DAT_09f43c98);
    }
    iVar8 = *(int *)(lVar13 + 0x38);
    if (iVar8 + 0x40000000 < 0) {
      uVar11 = FUN_04447e54();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar11,*(undefined8 *)PTR_DAT_09f43c98);
    }
    if (iVar8 * 2 <= (int)(iVar5 + uVar14)) {
      uVar6 = *(uint *)(lVar13 + 0x44);
      if ((int)uVar6 < 1) goto LAB_07a03a44;
      if ((0x14000 < (int)uVar14) || (iVar8 * 2 < (int)uVar14)) {
        plVar16 = *(long **)(lVar13 + 0x28);
        lStack0000000000000000 = *(long *)(lVar13 + 0x30);
        if (lStack0000000000000000 == 0) {
          FUN_07a5ec1c(0);
          lStack0000000000000000 = 0;
          lStack0000000000000008 = 0;
        }
        else {
          if (*(uint *)(lStack0000000000000000 + 0x18) < uVar6) {
            FUN_07a5ec1c(0);
          }
          thunk_FUN_044bb4b4();
          lStack0000000000000008 = (ulong)uVar6 << 0x20;
        }
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        Var20 = (**(code **)(*plVar16 + 0x338))
                          (plVar16,lStack0000000000000000,lStack0000000000000008,
                           *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar16 + 0x340));
        puVar3 = PTR_DAT_09f2aba0;
        if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        _uStack0000000000000048 = 0;
        in_stack_00000040 = (long *)Var20;
        thunk_FUN_044bb4b4(&stack0x00000040,(long *)Var20);
        uStack0000000000000048 = (uint3)(ushort)((unkuint10)Var20 >> 0x40);
        in_stack_00000058 = _uStack0000000000000048;
        in_stack_00000050 = in_stack_00000040;
        thunk_FUN_044bb4b4(&stack0x00000050,0);
        thunk_FUN_044bb4b4(&stack0x00000050,0);
        in_stack_00000020 = in_stack_00000050;
        in_stack_00000028 = in_stack_00000058;
        if (DAT_0a524974 == '\0') {
          FUN_04447ba8(PTR_DAT_09f2aba0);
          DAT_0a524974 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if (DAT_0a522da5 == '\0') {
          FUN_04447ba8(PTR_DAT_09f2d7d0);
          FUN_04447ba8(PTR_DAT_09f1e590);
          DAT_0a522da5 = '\x01';
        }
        plVar16 = in_stack_00000020;
        auVar19 = _in_stack_00000030;
        if (in_stack_00000020 != (long *)0x0) {
          lVar18 = *in_stack_00000020;
          bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
          if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_09f1e590)) {
            uVar15 = in_stack_00000028 & 0xffff;
            uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar9 != 0) {
              piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_07a0420c;
                }
                uVar9 = uVar9 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,0);
LAB_07a0420c:
            iVar8 = (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
            auVar19 = _in_stack_00000030;
            if (iVar8 == 0) goto Newtonsoft_Json_JsonWriter__Peek;
          }
          else {
            uVar9 = FUN_07ab38f4(in_stack_00000020,0);
            auVar19 = _in_stack_00000030;
            if ((uVar9 & 1) == 0) {
Newtonsoft_Json_JsonWriter__Peek:
              *unaff_x19 = 3;
              *(ulong *)(unaff_x19 + 0x18) = in_stack_00000028;
              *(long **)(unaff_x19 + 0x16) = in_stack_00000020;
              thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              FUN_04b644e4(unaff_x19 + 2,&stack0x00000020);
              return;
            }
          }
        }
        goto LAB_07a035dc;
      }
      FUN_079fe5c0(lVar13);
      _in_stack_00000010 = FUN_065c2b44(piVar12,*(undefined8 *)PTR_DAT_09f434f8);
      lVar18 = *(long *)(lVar13 + 0x30);
      uVar6 = *(uint *)(lVar13 + 0x44);
      uVar7 = FUN_065bd13c(piVar12,*(undefined8 *)puVar3);
      if (lVar18 == 0) {
        if (uVar7 == 0 && uVar6 == 0) {
          lVar18 = 0;
          uVar7 = 0;
        }
        else {
          FUN_07a5ec1c(0);
          lVar18 = 0;
          uVar7 = 0;
        }
      }
      else {
        if ((*(uint *)(lVar18 + 0x18) < uVar6) || (*(uint *)(lVar18 + 0x18) - uVar6 < uVar7)) {
          FUN_07a5ec1c(0);
        }
        lVar18 = lVar18 + (int)uVar6 + 0x20;
      }
      FUN_065cc57c(&stack0x00000010,lVar18,uVar7,*(undefined8 *)PTR_DAT_09f434d8);
      plVar16 = *(long **)(lVar13 + 0x28);
      lStack0000000000000000 = *(long *)(lVar13 + 0x30);
      if (lStack0000000000000000 == 0) {
        if (uVar14 != 0) {
          FUN_07a5ec1c(0);
        }
        lStack0000000000000000 = 0;
        lStack0000000000000008 = 0;
      }
      else {
        if (*(uint *)(lStack0000000000000000 + 0x18) < uVar14) {
          FUN_07a5ec1c(0);
        }
        thunk_FUN_044bb4b4();
        lStack0000000000000008 = (ulong)uVar14 << 0x20;
      }
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      Var20 = (**(code **)(*plVar16 + 0x338))
                        (plVar16,lStack0000000000000000,lStack0000000000000008,
                         *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar16 + 0x340));
      puVar3 = PTR_DAT_09f2aba0;
      if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      _uStack0000000000000048 = 0;
      in_stack_00000040 = (long *)Var20;
      thunk_FUN_044bb4b4(&stack0x00000040,(long *)Var20);
      uStack0000000000000048 = (uint3)(ushort)((unkuint10)Var20 >> 0x40);
      in_stack_00000058 = _uStack0000000000000048;
      in_stack_00000050 = in_stack_00000040;
      thunk_FUN_044bb4b4(&stack0x00000050,0);
      thunk_FUN_044bb4b4(&stack0x00000050,0);
      in_stack_00000020 = in_stack_00000050;
      in_stack_00000028 = in_stack_00000058;
      if (DAT_0a524974 == '\0') {
        FUN_04447ba8(PTR_DAT_09f2aba0);
        DAT_0a524974 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (DAT_0a522da5 == '\0') {
        FUN_04447ba8(PTR_DAT_09f2d7d0);
        FUN_04447ba8(PTR_DAT_09f1e590);
        DAT_0a522da5 = '\x01';
      }
      plVar16 = in_stack_00000020;
      auVar19 = _in_stack_00000030;
      if (in_stack_00000020 != (long *)0x0) {
        lVar18 = *in_stack_00000020;
        bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
        if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1e590)
           ) {
          uVar15 = in_stack_00000028 & 0xffff;
          uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_07a04400;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,0);
LAB_07a04400:
          iVar8 = (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
          auVar19 = _in_stack_00000030;
          if (iVar8 == 0) goto LAB_07a04484;
        }
        else {
          uVar9 = FUN_07ab38f4(in_stack_00000020,0);
          auVar19 = _in_stack_00000030;
          if ((uVar9 & 1) == 0) {
LAB_07a04484:
            *unaff_x19 = 2;
            *(ulong *)(unaff_x19 + 0x18) = in_stack_00000028;
            *(long **)(unaff_x19 + 0x16) = in_stack_00000020;
            thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_04b644e4(unaff_x19 + 2,&stack0x00000020);
            return;
          }
        }
      }
      goto LAB_07a036f0;
    }
    auVar19 = FUN_065c2b44(piVar12,*(undefined8 *)PTR_DAT_09f434f8);
    uVar6 = FUN_07a00194(lVar13,auVar19._0_8_,auVar19._8_8_);
    uVar14 = unaff_x19[0xf];
    lVar18 = *(long *)PTR_DAT_09f43c90;
    if ((uVar14 & 0x7fffffff) < uVar6) {
      FUN_07a5ec94(0x18,0);
    }
    plVar16 = *(long **)(unaff_x19 + 0xc);
    iVar8 = unaff_x19[0xe];
    in_stack_00000050 = (long *)0x0;
    in_stack_00000058 = 0;
    if ((*(byte *)(*(long *)(lVar18 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    in_stack_00000050 = plVar16;
    thunk_FUN_044bb4b4(&stack0x00000050,plVar16);
    in_stack_00000058 = CONCAT44(uVar14 - uVar6,iVar8 + uVar6);
    *(long **)(unaff_x19 + 0xc) = in_stack_00000050;
    *(ulong *)(unaff_x19 + 0xe) = in_stack_00000058;
    thunk_FUN_044bb4b4(piVar12,0);
    uVar14 = *(uint *)(lVar13 + 0x44);
    if (*(int *)(lVar13 + 0x38) <= (int)uVar14) {
      plVar16 = *(long **)(lVar13 + 0x28);
      lStack0000000000000000 = *(long *)(lVar13 + 0x30);
      if (lStack0000000000000000 == 0) {
        if (uVar14 != 0) {
          FUN_07a5ec1c(0);
        }
        lStack0000000000000000 = 0;
        lStack0000000000000008 = 0;
      }
      else {
        if (*(uint *)(lStack0000000000000000 + 0x18) < uVar14) {
          FUN_07a5ec1c(0);
        }
        thunk_FUN_044bb4b4();
        lStack0000000000000008 = (ulong)uVar14 << 0x20;
      }
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      Var20 = (**(code **)(*plVar16 + 0x338))
                        (plVar16,lStack0000000000000000,lStack0000000000000008,
                         *(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(*plVar16 + 0x340));
      puVar3 = PTR_DAT_09f2aba0;
      if (*(int *)(*(long *)PTR_DAT_09f2aba0 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      _uStack0000000000000048 = 0;
      in_stack_00000040 = (long *)Var20;
      thunk_FUN_044bb4b4(&stack0x00000040,(long *)Var20);
      uStack0000000000000048 = (uint3)(ushort)((unkuint10)Var20 >> 0x40);
      in_stack_00000058 = _uStack0000000000000048;
      in_stack_00000050 = in_stack_00000040;
      thunk_FUN_044bb4b4(&stack0x00000050,0);
      thunk_FUN_044bb4b4(&stack0x00000050,0);
      in_stack_00000020 = in_stack_00000050;
      in_stack_00000028 = in_stack_00000058;
      if (DAT_0a524974 == '\0') {
        FUN_04447ba8(PTR_DAT_09f2aba0);
        DAT_0a524974 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if (DAT_0a522da5 == '\0') {
        FUN_04447ba8(PTR_DAT_09f2d7d0);
        FUN_04447ba8(PTR_DAT_09f1e590);
        DAT_0a522da5 = '\x01';
      }
      plVar16 = in_stack_00000020;
      auVar19 = _in_stack_00000030;
      if (in_stack_00000020 != (long *)0x0) {
        lVar18 = *in_stack_00000020;
        bVar1 = *(byte *)(*(long *)PTR_DAT_09f1e590 + 0x130);
        if ((*(byte *)(lVar18 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09f1e590)
           ) {
          uVar15 = in_stack_00000028 & 0xffff;
          uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f2d7d0) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_07a0418c;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_044822ac(in_stack_00000020,*(long *)PTR_DAT_09f2d7d0,0);
LAB_07a0418c:
          iVar8 = (*(code *)*puVar10)(plVar16,uVar15,puVar10[1]);
          auVar19 = _in_stack_00000030;
          if (iVar8 == 0) goto LAB_07a041b4;
        }
        else {
          uVar9 = FUN_07ab38f4(in_stack_00000020,0);
          auVar19 = _in_stack_00000030;
          if ((uVar9 & 1) == 0) {
LAB_07a041b4:
            *unaff_x19 = 1;
            *(ulong *)(unaff_x19 + 0x18) = in_stack_00000028;
            *(long **)(unaff_x19 + 0x16) = in_stack_00000020;
            thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            FUN_04b644e4(unaff_x19 + 2,&stack0x00000020);
            return;
          }
        }
      }
      goto LAB_07a034e0;
    }
  }
  uVar6 = 0x14;
  uVar14 = 0x14;
joined_r0x07a03d28:
  if (iVar17 < 0) {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar13 = FUN_079fe12c(lVar13);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07aa694c(lVar13,0);
    uVar14 = uVar6;
  }
  if ((uVar14 < 0x1d) && ((1 << (ulong)uVar14 & 0x10100001U) != 0)) {
    *unaff_x19 = -2;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_0795995c(unaff_x19 + 2,0);
  }
  return;
}


