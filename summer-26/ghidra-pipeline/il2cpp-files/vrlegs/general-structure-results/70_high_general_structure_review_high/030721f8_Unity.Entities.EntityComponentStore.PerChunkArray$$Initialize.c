/*
FUNCTION_NAME: Unity.Entities.EntityComponentStore.PerChunkArray$$Initialize
ENTRY_POINT: 030721f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Unity_Entities_EntityComponentStore_PerChunkArray__Initialize(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint unaff_w20;
  long unaff_x21;
  ulong uVar16;
  long *plVar17;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int iVar18;
  long unaff_x26;
  long unaff_x27;
  ulong uVar19;
  int unaff_w28;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  uint uStack0000000000000054;
  int iStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined8 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined8 uStack00000000000000e4;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  ulong in_stack_00000118;
  
  plVar5 = (long *)FUN_01ab6a94(param_1);
  uStack0000000000000054 = unaff_w20;
  auVar21 = FUN_01ab6a94(*unaff_x22,unaff_w20);
  uVar9 = auVar21._8_8_;
  lVar8 = auVar21._0_8_;
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 4) {
      *(undefined4 *)(lVar8 + 0x2c) = 0x3f800000;
    }
    if (unaff_x21 != 0) {
      if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
        uVar10 = 0;
        uVar16 = 0;
        iVar18 = uStack0000000000000054 << 1;
        uVar13 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
        iVar2 = uStack0000000000000054 * 3;
        iStack0000000000000064 = 0;
        uVar14 = uStack0000000000000054;
        do {
          if (uVar13 <= uVar16) goto LAB_03072880;
          uVar20 = *(undefined4 *)(unaff_x21 + uVar16 * 4 + 0x20);
          in_stack_00000118 = (ulong)uVar14;
          if (unaff_w28 == 2) {
            lVar6 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,uStack0000000000000054);
            if (lVar6 == 0) goto LAB_03072884;
            uVar14 = *(uint *)(lVar6 + 0x18);
            if (0 < (long)((ulong)uVar14 << 0x20)) {
              uVar13 = 0;
              lVar15 = in_stack_00000118 << 0x20;
              do {
                if (unaff_x26 == 0) goto LAB_03072884;
                if (((ulong)*(uint *)(unaff_x26 + 0x18) <= in_stack_00000118 + uVar13) ||
                   (uVar14 <= uVar13)) goto LAB_03072880;
                lVar7 = lVar15 >> 0x1e;
                lVar15 = lVar15 + 0x100000000;
                *(undefined4 *)(lVar6 + 0x20 + uVar13 * 4) =
                     *(undefined4 *)(unaff_x26 + lVar7 + 0x20);
                uVar13 = uVar13 + 1;
              } while ((long)(int)uVar14 != uVar13);
            }
            if (unaff_x27 == 0) goto LAB_03072884;
            auVar21 = (**(code **)(unaff_x27 + 0x18))
                                (*(undefined8 *)(unaff_x27 + 0x40),lVar6,lVar8,
                                 *(undefined8 *)(unaff_x27 + 0x28));
            lVar8 = auVar21._0_8_;
            if (plVar5 == (long *)0x0) goto LAB_03072884;
            uVar14 = *(uint *)(plVar5 + 3);
            if (0 < (int)uVar14) {
              uVar12 = 0;
              do {
                if (uVar14 <= uVar12) goto LAB_03072880;
                plVar17 = plVar5 + (long)(int)uVar12 + 4;
                if (*plVar17 == 0) {
                  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var);
                  Animancer_AnimancerState__OnSetIsPlaying
                            (lVar6,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
                  if ((lVar6 != 0) &&
                     (lVar15 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                     lVar15 == 0)) goto LAB_03072888;
                  if (*(uint *)(plVar5 + 3) <= uVar12) goto LAB_03072880;
                  *plVar17 = lVar6;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar6);
                  uVar14 = *(uint *)(plVar5 + 3);
                }
                if (uVar14 <= uVar12) goto LAB_03072880;
                if (lVar8 == 0) goto LAB_03072884;
                if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_03072880;
                if (unaff_x26 == 0) goto LAB_03072884;
                if ((*(uint *)(unaff_x26 + 0x18) <= iStack0000000000000064 + uVar12) ||
                   (*(uint *)(unaff_x26 + 0x18) <= iVar18 + uVar12)) goto LAB_03072880;
                lVar6 = *plVar17;
                in_stack_000000f0 = 0;
                uStack00000000000000f8 = 0;
                uStack00000000000000fc = 0;
                in_stack_00000108 = 0;
                uStack0000000000000100 = 0;
                uStack0000000000000104 = 0;
                FUN_0366c030(uVar20,*(undefined4 *)(lVar8 + (long)(int)uVar12 * 4 + 0x20),
                             *(undefined4 *)
                              (unaff_x26 + 0x20 + (long)(int)(iStack0000000000000064 + uVar12) * 4),
                             *(undefined4 *)(unaff_x26 + 0x20 + (long)(int)(iVar18 + uVar12) * 4),
                             &stack0x000000f0,0);
                if (lVar6 == 0) goto LAB_03072884;
                uStack00000000000000e4 = CONCAT44(in_stack_00000108,uStack0000000000000104);
                uStack00000000000000d8 = uStack00000000000000f8;
                in_stack_000000d0 = in_stack_000000f0;
                uStack00000000000000dc = uStack00000000000000fc;
                uStack00000000000000e0 = uStack0000000000000100;
                FUN_01b5f01c(lVar6,&stack0x000000d0,
                             *(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
                auVar21._8_8_ = extraout_x1;
                auVar21._0_8_ = lVar8;
                uVar14 = *(uint *)(plVar5 + 3);
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (int)uVar14);
            }
          }
          else {
            lVar6 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,uStack0000000000000054);
            if (lVar6 == 0) goto LAB_03072884;
            uVar14 = *(uint *)(lVar6 + 0x18);
            if (0 < (long)((ulong)uVar14 << 0x20)) {
              uVar13 = 0;
              lVar15 = uVar10 << 0x20;
              do {
                if (unaff_x26 == 0) goto LAB_03072884;
                if (((ulong)*(uint *)(unaff_x26 + 0x18) <= uVar10 + uVar13) || (uVar14 <= uVar13))
                goto LAB_03072880;
                lVar7 = lVar15 >> 0x1e;
                lVar15 = lVar15 + 0x100000000;
                *(undefined4 *)(lVar6 + 0x20 + uVar13 * 4) =
                     *(undefined4 *)(unaff_x26 + lVar7 + 0x20);
                uVar13 = uVar13 + 1;
              } while ((long)(int)uVar14 != uVar13);
            }
            if (unaff_x27 == 0) goto LAB_03072884;
            auVar21 = (**(code **)(unaff_x27 + 0x18))
                                (*(undefined8 *)(unaff_x27 + 0x40),lVar6,lVar8,
                                 *(undefined8 *)(unaff_x27 + 0x28));
            uVar13 = auVar21._8_8_;
            lVar8 = auVar21._0_8_;
            if (plVar5 == (long *)0x0) goto LAB_03072884;
            if (0 < (int)plVar5[3]) {
              uVar11 = plVar5[3] & 0xffffffff;
              lVar6 = 8;
              plVar17 = plVar5 + 4;
              do {
                uVar19 = lVar6 - 8;
                if (uVar11 <= uVar19) goto LAB_03072880;
                if (*plVar17 == 0) {
                  lVar15 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var,uVar13);
                  Animancer_AnimancerState__OnSetIsPlaying
                            (lVar15,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
                  if ((lVar15 != 0) &&
                     (lVar7 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0
                     )) goto LAB_03072888;
                  if (*(uint *)(plVar5 + 3) <= uVar19) goto LAB_03072880;
                  *plVar17 = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar15);
                  uVar13 = extraout_x1_00;
                }
                if (unaff_w28 == 1) {
                  if (*(uint *)(plVar5 + 3) <= uVar19) goto LAB_03072880;
                  if (lVar8 == 0) goto LAB_03072884;
                  if (*(uint *)(lVar8 + 0x18) <= uVar19) goto LAB_03072880;
                  lVar15 = *plVar17;
                  in_stack_000000f0 = 0;
                  uStack00000000000000f8 = 0;
                  uStack00000000000000fc = 0;
                  in_stack_00000108 = 0;
                  uStack0000000000000100 = 0;
                  uStack0000000000000104 = 0;
                  FUN_0366c030(uVar20,*(undefined4 *)(lVar8 + lVar6 * 4),0,0x7f800000,
                               &stack0x000000f0,0);
                  if (lVar15 == 0) goto LAB_03072884;
                  uStack00000000000000a4 = CONCAT44(in_stack_00000108,uStack0000000000000104);
                  uStack0000000000000098 = uStack00000000000000f8;
                  in_stack_00000090 = in_stack_000000f0;
                  uStack000000000000009c = uStack00000000000000fc;
                  uStack00000000000000a0 = uStack0000000000000100;
                  FUN_01b5f01c(lVar15,&stack0x00000090,
                               *(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
                  uVar13 = extraout_x1_02;
                }
                else if (unaff_w28 == 0) {
                  if (*(uint *)(plVar5 + 3) <= uVar19) goto LAB_03072880;
                  if (lVar8 == 0) goto LAB_03072884;
                  if (*(uint *)(lVar8 + 0x18) <= uVar19) goto LAB_03072880;
                  lVar15 = *plVar17;
                  in_stack_000000f0 = 0;
                  uStack00000000000000f8 = 0;
                  uStack00000000000000fc = 0;
                  in_stack_00000108 = 0;
                  uStack0000000000000100 = 0;
                  uStack0000000000000104 = 0;
                  FUN_0366c030(uVar20,*(undefined4 *)(lVar8 + lVar6 * 4),0,0,&stack0x000000f0,0);
                  if (lVar15 == 0) goto LAB_03072884;
                  uStack00000000000000c4 = CONCAT44(in_stack_00000108,uStack0000000000000104);
                  uStack00000000000000b8 = uStack00000000000000f8;
                  in_stack_000000b0 = in_stack_000000f0;
                  uStack00000000000000bc = uStack00000000000000fc;
                  uStack00000000000000c0 = uStack0000000000000100;
                  FUN_01b5f01c(lVar15,&stack0x000000b0,
                               *(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
                  if (*(uint *)(plVar5 + 3) <= uVar19) goto LAB_03072880;
                  if (*plVar17 == 0) goto LAB_03072884;
                  iVar1 = *(int *)(*plVar17 + 0x18);
                  uVar13 = (ulong)(iVar1 - 1);
                  if (0 < iVar1) {
                    FUN_03071cb4();
                    uVar13 = extraout_x1_01;
                  }
                }
                auVar21._8_8_ = uVar13;
                auVar21._0_8_ = lVar8;
                uVar11 = (ulong)*(uint *)(plVar5 + 3);
                lVar15 = lVar6 + -7;
                lVar6 = lVar6 + 1;
                plVar17 = plVar17 + 1;
              } while (lVar15 < (int)*(uint *)(plVar5 + 3));
            }
          }
          uVar9 = auVar21._8_8_;
          lVar8 = auVar21._0_8_;
          uVar13 = (ulong)*(uint *)(unaff_x21 + 0x18);
          uVar16 = uVar16 + 1;
          iVar18 = iVar18 + iVar2;
          uVar10 = (ulong)((int)uVar10 + uStack0000000000000054);
          iStack0000000000000064 = iStack0000000000000064 + iVar2;
          uVar14 = (int)in_stack_00000118 + iVar2;
        } while ((long)uVar16 < (long)(int)*(uint *)(unaff_x21 + 0x18));
      }
      puVar4 = Unity_Services_CloudSave_Internal_Http_JsonObject_var;
      puVar3 = PTR_DAT_03cc0698;
      if (unaff_x23 != (long *)0x0) {
        if (0 < (int)unaff_x23[3]) {
          uVar14 = 0;
          do {
            lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar3,uVar9);
            FUN_0366cc40(lVar8,0);
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*unaff_x23 + 0x40)), lVar6 == 0)) {
LAB_03072888:
              uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar9,0);
            }
            if (*(uint *)(unaff_x23 + 3) <= uVar14) {
LAB_03072880:
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            lVar6 = (long)(int)uVar14;
            plVar17 = unaff_x23 + lVar6 + 4;
            *plVar17 = lVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar17,lVar8);
            if (plVar5 == (long *)0x0) goto LAB_03072884;
            if (*(uint *)(plVar5 + 3) <= uVar14) goto LAB_03072880;
            iVar18 = 0;
            while( true ) {
              lVar8 = plVar5[lVar6 + 4];
              if (lVar8 == 0) goto LAB_03072884;
              if (*(int *)(lVar8 + 0x18) <= iVar18) break;
              if (*(uint *)(unaff_x23 + 3) <= uVar14) goto LAB_03072880;
              lVar15 = *plVar17;
              FUN_02215a88(lVar8,iVar18,&stack0x000000f0,*(undefined8 *)puVar4);
              if (lVar15 == 0) goto LAB_03072884;
              uStack0000000000000084 = CONCAT44(in_stack_00000108,uStack0000000000000104);
              uStack0000000000000078 = uStack00000000000000f8;
              in_stack_00000070 = in_stack_000000f0;
              uStack000000000000007c = uStack00000000000000fc;
              uStack0000000000000080 = uStack0000000000000100;
              FUN_0366c440(lVar15,&stack0x00000070,0);
              iVar18 = iVar18 + 1;
              if (*(uint *)(plVar5 + 3) <= uVar14) goto LAB_03072880;
            }
            if ((*(uint *)(in_stack_00000040 + 0x18) <= uVar14) ||
               (*(uint *)(unaff_x23 + 3) <= uVar14)) goto LAB_03072880;
            if (in_stack_00000038 == 0) goto LAB_03072884;
            FUN_0365234c(in_stack_00000038,in_stack_00000028,in_stack_00000030,
                         *(undefined8 *)(in_stack_00000040 + lVar6 * 8 + 0x20),*plVar17,0);
            uVar14 = uVar14 + 1;
            uVar9 = extraout_x1_03;
          } while ((int)uVar14 < (int)unaff_x23[3]);
        }
        return;
      }
    }
  }
LAB_03072884:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


