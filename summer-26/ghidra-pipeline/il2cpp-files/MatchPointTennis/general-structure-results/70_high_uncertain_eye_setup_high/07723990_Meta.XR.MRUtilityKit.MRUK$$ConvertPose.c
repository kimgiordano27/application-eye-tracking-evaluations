/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$ConvertPose
ENTRY_POINT: 07723990
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__ConvertPose(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *puVar15;
  long *plVar16;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar17;
  float fVar18;
  float unaff_s8;
  float fVar19;
  float fVar20;
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  long in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  do {
    uVar7 = FUN_0952c404(param_1,param_2,param_3);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c6b48(*(undefined8 *)PTR_DAT_09f311c8,0);
    }
    unaff_x19 = unaff_x19 + 1;
    iVar4 = FUN_07310920(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31168);
    if ((long)iVar4 <= (long)unaff_x19) {
      do {
        if (in_stack_00000020 == (long *)0x0) goto LAB_07723cd8;
        if ((unaff_x22 != (long *)0x0) &&
           (lVar8 = thunk_FUN_04485110(unaff_x22,*(undefined8 *)(*in_stack_00000020 + 0x40)),
           lVar8 == 0)) {
LAB_07723cdc:
          uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
          FUN_04447d10(uVar9,0);
        }
        if (*(uint *)(in_stack_00000020 + 3) <= unaff_x27) goto LAB_07723cd4;
        in_stack_00000020[unaff_x27 + 4] = (long)unaff_x22;
        thunk_FUN_044bb4b4(in_stack_00000020 + unaff_x27 + 4,unaff_x22);
        if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
        if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
        FUN_094f3f5c(*in_stack_000000b0,in_stack_00000050,0);
        do {
          if (0 < in_stack_000000a8._4_4_) {
            if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
            if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
            FUN_094f6188(*in_stack_000000b0,unaff_x21,0);
            if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
            if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
            thunk_FUN_094f35f4(*in_stack_000000b0,unaff_x28,0);
            if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
            if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
            FUN_094f6234(*in_stack_000000b0,in_stack_000000a0,0);
            if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
            if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
            FUN_094f62e0(*in_stack_000000b0,in_stack_00000098,0);
          }
          puVar1 = PTR_DAT_09f1e5b8;
          if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
          if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
          uVar9 = thunk_FUN_0952ff6c(*in_stack_000000b0,0);
          in_stack_00000140 = CONCAT44(in_stack_00000140._4_4_,in_stack_000000a8._4_4_);
          uVar10 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x48),&stack0x00000140);
          uVar9 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f311c0,uVar9,uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar9,0);
          do {
            unaff_x27 = unaff_x27 + 1;
            if ((long)(int)*(uint *)(in_stack_00000030 + 0x18) <= (long)unaff_x27) {
              return;
            }
            if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
            in_stack_000000b0 = (long *)(in_stack_00000030 + unaff_x27 * 8 + 0x20);
            lVar8 = *in_stack_000000b0;
            if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
            }
            uVar7 = FUN_0952c404(lVar8,in_stack_00000028,0);
          } while ((uVar7 & 1) != 0);
          if (lVar8 == 0) goto LAB_07723cd8;
          unaff_x21 = FUN_094f613c(lVar8,0);
          unaff_x28 = thunk_FUN_094f3488(lVar8,0);
          in_stack_000000a0 = FUN_094f61e8(lVar8,0);
          in_stack_00000098 = FUN_094f6294(lVar8,0);
          if ((in_stack_00000088 == 0) ||
             (FUN_07310dec(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31140),
             in_stack_00000080 == 0)) goto LAB_07723cd8;
          uVar2 = *(uint *)(in_stack_00000080 + 0x18);
          if (0 < (long)((ulong)uVar2 << 0x20)) {
            uVar7 = 0;
            do {
              if (uVar2 <= uVar7) goto LAB_07723cd4;
              *(undefined4 *)(in_stack_00000018 + uVar7 * 4) = 0xffffffff;
              uVar7 = uVar7 + 1;
            } while ((long)(int)uVar2 != uVar7);
          }
          if (unaff_x29 == 0) goto LAB_07723cd8;
          if (*(uint *)(unaff_x29 + 0x18) <= unaff_x27) goto LAB_07723cd4;
          plVar11 = (long *)(unaff_x29 + unaff_x27 * 8 + 0x20);
          lVar8 = *plVar11;
          if (lVar8 == 0) goto LAB_07723cd8;
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar7 = 0;
            uVar12 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar7) goto LAB_07723cd4;
              if (in_stack_00000040 == 0) goto LAB_07723cd8;
              uVar9 = *(undefined8 *)(lVar8 + 0x20 + uVar7 * 8);
              uVar12 = FUN_07430eac(in_stack_00000040,uVar9,*(undefined8 *)PTR_DAT_09f31148);
              if ((uVar12 & 1) != 0) {
                uVar2 = FUN_07430c38(in_stack_00000040,uVar9,*(undefined8 *)PTR_DAT_09f31170);
                if (*(uint *)(in_stack_00000080 + 0x18) <= uVar2) goto LAB_07723cd4;
                *(int *)(in_stack_00000080 + (long)(int)uVar2 * 4 + 0x20) = (int)uVar7;
              }
              uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          uVar2 = 0;
          if (unaff_x21 == 0) goto LAB_07723cd8;
          if (*(int *)(unaff_x21 + 0x18) < 1) {
            in_stack_000000a8._4_4_ = 0;
          }
          else {
            in_stack_000000a8._4_4_ = 0;
            do {
              if (0 < *(int *)(in_stack_000000b8 + 0x18)) {
                iVar4 = 0;
                do {
                  uVar3 = FUN_05b0452c(in_stack_000000b8,iVar4,*(undefined8 *)PTR_DAT_09f1e990);
                  if ((*(uint *)(unaff_x21 + 0x18) <= uVar2) ||
                     (*(uint *)(unaff_x25 + 0x18) <= uVar3)) goto LAB_07723cd4;
                  lVar8 = unaff_x21 + (int)uVar2 * unaff_x26;
                  fVar19 = *(float *)(lVar8 + 0x20);
                  uVar9 = *(undefined8 *)(lVar8 + 0x24);
                  lVar8 = unaff_x25 + (int)uVar3 * unaff_x26;
                  fVar20 = *(float *)(lVar8 + 0x20);
                  uVar10 = *(undefined8 *)(lVar8 + 0x24);
                  if (DAT_0a51c00a == '\0') {
                    FUN_04447ba8(PTR_DAT_09f1e748);
                    DAT_0a51c00a = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
                    thunk_FUN_044a54b4();
                  }
                  fVar19 = fVar19 - fVar20;
                  fVar20 = (float)uVar9 - (float)uVar10;
                  fVar18 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
                  if (SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20) <= unaff_s8) {
                    if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
                    lVar8 = *in_stack_000000b0;
                    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                      thunk_FUN_044a54b4();
                    }
                    uVar7 = FUN_0952c404(in_stack_00000028,lVar8,0);
                    if (((uVar7 & 1) != 0) && (uVar2 != uVar3)) {
                      uVar9 = FUN_07a3b850(&stack0x000001fc,0);
                      uVar10 = FUN_07a3b850(&stack0x000001f8,0);
                      uVar9 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f311e0,uVar9,
                                           *(undefined8 *)PTR_DAT_09f30a08,uVar10,0);
                      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                      }
                      FUN_094c6b48(uVar9,0);
                    }
                    if (in_stack_00000078 == 0) goto LAB_07723cd8;
                    if (*(uint *)(in_stack_00000078 + 0x18) <= uVar3) goto LAB_07723cd4;
                    lVar8 = in_stack_00000078 + (long)(int)uVar3 * 0x20;
                    in_stack_000001d8 = *(undefined8 *)(lVar8 + 0x28);
                    in_stack_000001d0 = *(undefined8 *)(lVar8 + 0x20);
                    in_stack_000001e8 = *(undefined8 *)(lVar8 + 0x38);
                    in_stack_000001e0 = *(long *)(lVar8 + 0x30);
                    if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
                    if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
                    uVar9 = thunk_FUN_0952ff6c(*in_stack_000000b0,0);
                    if (*(uint *)(unaff_x29 + 0x18) <= unaff_x27) goto LAB_07723cd4;
                    FUN_07723d20(uVar9,&stack0x000001d0,in_stack_00000080,*plVar11,in_stack_00000088
                                );
                    in_stack_00000148 = in_stack_000001d8;
                    in_stack_00000140 = in_stack_000001d0;
                    in_stack_00000158 = in_stack_000001e8;
                    in_stack_00000150 = in_stack_000001e0;
                    if (unaff_x28 == 0) goto LAB_07723cd8;
                    in_stack_00000188 = in_stack_000001d8;
                    in_stack_00000180 = in_stack_000001d0;
                    in_stack_00000198 = in_stack_000001e8;
                    in_stack_00000190 = in_stack_000001e0;
                    if (*(uint *)(unaff_x28 + 0x18) <= uVar2) goto LAB_07723cd4;
                    lVar8 = unaff_x28 + (long)(int)uVar2 * 0x20;
                    *(undefined8 *)(lVar8 + 0x28) = in_stack_000001d8;
                    *(undefined8 *)(lVar8 + 0x20) = in_stack_000001d0;
                    *(undefined8 *)(lVar8 + 0x38) = in_stack_000001e8;
                    *(long *)(lVar8 + 0x30) = in_stack_000001e0;
                    if ((*(uint *)(unaff_x25 + 0x18) <= uVar3) ||
                       (*(uint *)(unaff_x21 + 0x18) <= uVar2)) goto LAB_07723cd4;
                    lVar13 = unaff_x25 + (int)uVar3 * unaff_x26;
                    uVar17 = *(undefined4 *)(lVar13 + 0x28);
                    lVar8 = unaff_x21 + (int)uVar2 * unaff_x26;
                    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
                    *(undefined4 *)(lVar8 + 0x28) = uVar17;
                    if (in_stack_000000a0 == 0) goto LAB_07723cd8;
                    if (*(uint *)(in_stack_000000a0 + 0x18) == *(uint *)(unaff_x21 + 0x18)) {
                      if (in_stack_00000070 == 0) goto LAB_07723cd8;
                      if ((*(uint *)(in_stack_00000070 + 0x18) <= uVar3) ||
                         (*(uint *)(in_stack_000000a0 + 0x18) <= uVar2)) goto LAB_07723cd4;
                      lVar8 = in_stack_00000070 + (int)uVar3 * unaff_x26;
                      uVar17 = *(undefined4 *)(lVar8 + 0x28);
                      lVar13 = in_stack_000000a0 + (int)uVar2 * unaff_x26;
                      *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
                      *(undefined4 *)(lVar13 + 0x28) = uVar17;
                    }
                    if (in_stack_00000098 == 0) goto LAB_07723cd8;
                    in_stack_000000a8._4_4_ = in_stack_000000a8._4_4_ + 1;
                    if (*(uint *)(in_stack_00000098 + 0x18) == *(uint *)(unaff_x21 + 0x18)) {
                      if (in_stack_00000068 == 0) goto LAB_07723cd8;
                      if (*(uint *)(in_stack_00000068 + 0x18) == *(uint *)(unaff_x25 + 0x18)) {
                        if ((*(uint *)(in_stack_00000068 + 0x18) <= uVar3) ||
                           (*(uint *)(in_stack_00000098 + 0x18) <= uVar2)) goto LAB_07723cd4;
                        lVar8 = in_stack_00000068 + (long)(int)uVar3 * 0x10;
                        uVar9 = *(undefined8 *)(lVar8 + 0x20);
                        lVar13 = in_stack_00000098 + (long)(int)uVar2 * 0x10;
                        *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
                        *(undefined8 *)(lVar13 + 0x20) = uVar9;
                      }
                    }
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(in_stack_000000b8 + 0x18));
              }
              uVar2 = uVar2 + 1;
            } while ((int)uVar2 < *(int *)(unaff_x21 + 0x18));
          }
          iVar4 = FUN_07310920(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31168);
        } while (iVar4 < 1);
        if (*(uint *)(unaff_x29 + 0x18) <= unaff_x27) goto LAB_07723cd4;
        lVar8 = *plVar11;
        if (lVar8 == 0) goto LAB_07723cd8;
        iVar4 = FUN_07310920(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31168);
        iVar4 = iVar4 + *(int *)(lVar8 + 0x18);
        unaff_x22 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f1eec8,iVar4);
        in_stack_00000050 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f2d008,iVar4);
        if (*(uint *)(in_stack_00000030 + 0x18) <= unaff_x27) goto LAB_07723cd4;
        if (*in_stack_000000b0 == 0) goto LAB_07723cd8;
        lVar8 = FUN_094f3df0(*in_stack_000000b0,0);
        if (*(uint *)(unaff_x29 + 0x18) <= unaff_x27) goto LAB_07723cd4;
        uVar7 = 0;
        puVar15 = (undefined8 *)(lVar8 + 0x20);
        puVar14 = (undefined8 *)(in_stack_00000050 + 0x20);
        in_stack_00000038 = unaff_x22 + 4;
        plVar16 = in_stack_00000038;
        while( true ) {
          if (*plVar11 == 0) goto LAB_07723cd8;
          if ((long)*(int *)(*plVar11 + 0x18) <= (long)uVar7) break;
          if (lVar8 == 0) goto LAB_07723cd8;
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_07723cd4;
          in_stack_00000168 = puVar15[5];
          in_stack_00000160 = puVar15[4];
          in_stack_00000178 = puVar15[7];
          in_stack_00000170 = puVar15[6];
          in_stack_00000148 = puVar15[1];
          in_stack_00000140 = *puVar15;
          in_stack_00000158 = puVar15[3];
          in_stack_00000150 = puVar15[2];
          if (in_stack_00000050 == 0) goto LAB_07723cd8;
          if (*(uint *)(in_stack_00000050 + 0x18) <= uVar7) goto LAB_07723cd4;
          puVar14[5] = in_stack_00000168;
          puVar14[4] = in_stack_00000160;
          puVar14[7] = in_stack_00000178;
          puVar14[6] = in_stack_00000170;
          puVar14[1] = in_stack_00000148;
          *puVar14 = in_stack_00000140;
          puVar14[3] = in_stack_00000158;
          puVar14[2] = in_stack_00000150;
          if (*(uint *)(unaff_x29 + 0x18) <= unaff_x27) goto LAB_07723cd4;
          lVar13 = *plVar11;
          if (lVar13 == 0) goto LAB_07723cd8;
          if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_07723cd4;
          if (unaff_x22 == (long *)0x0) goto LAB_07723cd8;
          lVar13 = *(long *)(lVar13 + uVar7 * 8 + 0x20);
          if ((lVar13 != 0) &&
             (lVar5 = thunk_FUN_04485110(lVar13,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
          goto LAB_07723cdc;
          if (*(uint *)(unaff_x22 + 3) <= uVar7) goto LAB_07723cd4;
          *plVar16 = lVar13;
          thunk_FUN_044bb4b4(plVar16,lVar13);
          uVar7 = uVar7 + 1;
          puVar15 = puVar15 + 8;
          puVar14 = puVar14 + 8;
          plVar16 = plVar16 + 1;
          unaff_x29 = in_stack_00000048;
          if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x27) goto LAB_07723cd4;
        }
        lVar8 = FUN_094f3df0(in_stack_00000028,0);
        FUN_07311044(&stack0x00000140,in_stack_00000088,*(undefined8 *)PTR_DAT_09f31150);
        in_stack_000001b8 = in_stack_00000148;
        in_stack_000001b0 = in_stack_00000140;
        in_stack_000001c8 = in_stack_00000158;
        in_stack_000001c0 = in_stack_00000150;
        while (uVar7 = FUN_0520c4c0(&stack0x000001b0,*(undefined8 *)PTR_DAT_09f31190),
              lVar13 = in_stack_000001c0, (uVar7 & 1) != 0) {
          uVar2 = (uint)in_stack_000001c0;
          if (*(uint *)(in_stack_00000010 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar5 = *(long *)(in_stack_00000010 + (long)(int)uVar2 * 8 + 0x20);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar6 == 0)) {
            uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar9,0);
          }
          uVar3 = (uint)((ulong)lVar13 >> 0x20);
          if (*(uint *)(unaff_x22 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar13 = lVar13 >> 0x20;
          unaff_x22[lVar13 + 4] = lVar5;
          thunk_FUN_044bb4b4(unaff_x22 + lVar13 + 4,lVar5);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar5 = lVar8 + (long)(int)uVar2 * 0x40;
          in_stack_00000168 = *(undefined8 *)(lVar5 + 0x48);
          in_stack_00000160 = *(undefined8 *)(lVar5 + 0x40);
          in_stack_00000178 = *(undefined8 *)(lVar5 + 0x58);
          in_stack_00000170 = *(undefined8 *)(lVar5 + 0x50);
          in_stack_00000148 = *(undefined8 *)(lVar5 + 0x28);
          in_stack_00000140 = *(undefined8 *)(lVar5 + 0x20);
          in_stack_00000158 = *(undefined8 *)(lVar5 + 0x38);
          in_stack_00000150 = *(long *)(lVar5 + 0x30);
          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(uint *)(in_stack_00000050 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar13 = in_stack_00000050 + lVar13 * 0x40;
          *(undefined8 *)(lVar13 + 0x48) = in_stack_00000168;
          *(undefined8 *)(lVar13 + 0x40) = in_stack_00000160;
          *(undefined8 *)(lVar13 + 0x58) = in_stack_00000178;
          *(undefined8 *)(lVar13 + 0x50) = in_stack_00000170;
          *(undefined8 *)(lVar13 + 0x28) = in_stack_00000148;
          *(undefined8 *)(lVar13 + 0x20) = in_stack_00000140;
          *(undefined8 *)(lVar13 + 0x38) = in_stack_00000158;
          *(long *)(lVar13 + 0x30) = in_stack_00000150;
          unaff_x29 = in_stack_00000048;
        }
        FUN_0520c5c0(&stack0x000001b0,*(undefined8 *)PTR_DAT_09f31188);
        iVar4 = FUN_07310920(in_stack_00000088,*(undefined8 *)PTR_DAT_09f31168);
      } while (iVar4 < 1);
      if (unaff_x22 == (long *)0x0) {
LAB_07723cd8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      unaff_x19 = 0;
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_x19) {
LAB_07723cd4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    param_1 = in_stack_00000038[unaff_x19];
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    param_2 = 0;
    param_3 = 0;
  } while( true );
}


