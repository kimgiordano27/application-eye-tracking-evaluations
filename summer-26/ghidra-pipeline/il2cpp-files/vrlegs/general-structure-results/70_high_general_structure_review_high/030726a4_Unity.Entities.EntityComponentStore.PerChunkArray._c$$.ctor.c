/*
FUNCTION_NAME: Unity.Entities.EntityComponentStore.PerChunkArray.<>c$$.ctor
ENTRY_POINT: 030726a4
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


void Unity_Entities_EntityComponentStore_PerChunkArray_<>c___ctor
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined8 param_4,undefined1 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  int iVar9;
  long *plVar10;
  long *unaff_x21;
  long unaff_x22;
  long lVar11;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  uint uVar12;
  long unaff_x26;
  ulong uVar13;
  int unaff_w28;
  long unaff_x29;
  undefined8 uVar14;
  ulong unaff_d8;
  undefined1 auVar15 [16];
  long in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 uStack0000000000000090;
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
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  ulong in_stack_00000118;
  
  uStack00000000000000a4 = param_3._8_8_;
  uVar14 = param_3._0_8_;
  uVar4 = param_2._8_8_;
  uStack0000000000000090 = param_2._0_8_;
  while( true ) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030725ec with catch @ 030726a4
                        */
    uStack0000000000000098 = (undefined4)uVar4;
    uStack000000000000009c = (undefined4)uVar14;
    uStack00000000000000a0 = (undefined4)((ulong)uVar14 >> 0x20);
    FUN_01b5f01c(unaff_x22,param_5,*param_1);
    uVar8 = extraout_x1_02;
    while( true ) {
      auVar15._8_8_ = uVar8;
      auVar15._0_8_ = unaff_x19;
      uVar5 = (ulong)*(uint *)(unaff_x24 + 3);
      lVar7 = unaff_x29 + -7;
      unaff_x29 = unaff_x29 + 1;
      unaff_x21 = unaff_x21 + 1;
      if ((int)*(uint *)(unaff_x24 + 3) <= lVar7) {
        do {
          while( true ) {
            puVar2 = Unity_Services_CloudSave_Internal_Http_JsonObject_var;
            puVar1 = PTR_DAT_03cc0698;
            uVar4 = auVar15._8_8_;
            in_stack_00000058 = in_stack_00000058 + 1;
            unaff_w25 = unaff_w25 + in_stack_00000020._4_4_;
            in_stack_00000068 = (ulong)(uint)((int)in_stack_00000068 + in_stack_00000050._4_4_);
            in_stack_00000060._4_4_ = in_stack_00000060._4_4_ + in_stack_00000020._4_4_;
            uVar8 = (ulong)(uint)((int)in_stack_00000118 + in_stack_00000020._4_4_);
            if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000058) {
              if (unaff_x23 == (long *)0x0) goto LAB_03072884;
              if ((int)unaff_x23[3] < 1) {
                return;
              }
              uVar12 = 0;
              goto LAB_03072738;
            }
            if (*(uint *)(in_stack_00000048 + 0x18) <= in_stack_00000058) goto LAB_03072880;
            unaff_d8 = (ulong)*(uint *)(in_stack_00000048 + in_stack_00000058 * 4 + 0x20);
            in_stack_00000118 = uVar8;
            if (unaff_w28 != 2) break;
            lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,in_stack_00000050._4_4_);
            if (lVar7 == 0) goto LAB_03072884;
            uVar12 = *(uint *)(lVar7 + 0x18);
            if (0 < (long)((ulong)uVar12 << 0x20)) {
              uVar8 = 0;
              lVar3 = in_stack_00000118 << 0x20;
              do {
                if (unaff_x26 == 0) goto LAB_03072884;
                if (((ulong)*(uint *)(unaff_x26 + 0x18) <= in_stack_00000118 + uVar8) ||
                   (uVar12 <= uVar8)) goto LAB_03072880;
                lVar11 = lVar3 >> 0x1e;
                lVar3 = lVar3 + 0x100000000;
                *(undefined4 *)(lVar7 + 0x20 + uVar8 * 4) =
                     *(undefined4 *)(unaff_x26 + lVar11 + 0x20);
                uVar8 = uVar8 + 1;
              } while ((long)(int)uVar12 != uVar8);
            }
            if (in_stack_00000010 == 0) goto LAB_03072884;
            auVar15 = (**(code **)(in_stack_00000010 + 0x18))
                                (*(undefined8 *)(in_stack_00000010 + 0x40),lVar7,auVar15._0_8_,
                                 *(undefined8 *)(in_stack_00000010 + 0x28));
            lVar7 = auVar15._0_8_;
            if (unaff_x24 == (long *)0x0) goto LAB_03072884;
            uVar12 = *(uint *)(unaff_x24 + 3);
            if (0 < (int)uVar12) {
              uVar6 = 0;
              do {
                if (uVar12 <= uVar6) goto LAB_03072880;
                plVar10 = unaff_x24 + (long)(int)uVar6 + 4;
                if (*plVar10 == 0) {
                  lVar3 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var);
                  Animancer_AnimancerState__OnSetIsPlaying
                            (lVar3,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
                  if ((lVar3 != 0) &&
                     (lVar11 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*unaff_x24 + 0x40)),
                     lVar11 == 0)) goto LAB_03072888;
                  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_03072880;
                  *plVar10 = lVar3;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar3);
                  uVar12 = *(uint *)(unaff_x24 + 3);
                }
                if (uVar12 <= uVar6) goto LAB_03072880;
                if (lVar7 == 0) goto LAB_03072884;
                if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_03072880;
                if (unaff_x26 == 0) goto LAB_03072884;
                if ((*(uint *)(unaff_x26 + 0x18) <= in_stack_00000060._4_4_ + uVar6) ||
                   (*(uint *)(unaff_x26 + 0x18) <= unaff_w25 + uVar6)) goto LAB_03072880;
                lVar3 = *plVar10;
                in_stack_000000f0 = 0;
                in_stack_000000f8 = 0;
                in_stack_00000108 = 0;
                in_stack_00000100 = 0;
                FUN_0366c030(unaff_d8,*(undefined4 *)(lVar7 + (long)(int)uVar6 * 4 + 0x20),
                             *(undefined4 *)
                              (unaff_x26 + 0x20 + (long)(int)(in_stack_00000060._4_4_ + uVar6) * 4),
                             *(undefined4 *)(unaff_x26 + 0x20 + (long)(int)(unaff_w25 + uVar6) * 4),
                             &stack0x000000f0,0);
                if (lVar3 == 0) goto LAB_03072884;
                uStack00000000000000e4 = *(undefined8 *)(unaff_x20 + 0x14);
                uStack00000000000000d8 = (undefined4)in_stack_000000f8;
                in_stack_000000d0 = in_stack_000000f0;
                uStack00000000000000dc = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
                uStack00000000000000e0 =
                     (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
                FUN_01b5f01c(lVar3,&stack0x000000d0,
                             *(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
                auVar15._8_8_ = extraout_x1;
                auVar15._0_8_ = lVar7;
                uVar12 = *(uint *)(unaff_x24 + 3);
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 < (int)uVar12);
            }
          }
          lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,in_stack_00000050._4_4_);
          if (lVar7 == 0) goto LAB_03072884;
          uVar12 = *(uint *)(lVar7 + 0x18);
          if (0 < (long)((ulong)uVar12 << 0x20)) {
            uVar8 = 0;
            lVar3 = in_stack_00000068 << 0x20;
            do {
              if (unaff_x26 == 0) goto LAB_03072884;
              if (((ulong)*(uint *)(unaff_x26 + 0x18) <= in_stack_00000068 + uVar8) ||
                 (uVar12 <= uVar8)) goto LAB_03072880;
              lVar11 = lVar3 >> 0x1e;
              lVar3 = lVar3 + 0x100000000;
              *(undefined4 *)(lVar7 + 0x20 + uVar8 * 4) = *(undefined4 *)(unaff_x26 + lVar11 + 0x20)
              ;
              uVar8 = uVar8 + 1;
            } while ((long)(int)uVar12 != uVar8);
          }
          if ((in_stack_00000010 == 0) ||
             (auVar15 = (**(code **)(in_stack_00000010 + 0x18))
                                  (*(undefined8 *)(in_stack_00000010 + 0x40),lVar7,auVar15._0_8_,
                                   *(undefined8 *)(in_stack_00000010 + 0x28)),
             unaff_x24 == (long *)0x0)) goto LAB_03072884;
        } while ((int)unaff_x24[3] < 1);
        uVar5 = unaff_x24[3] & 0xffffffff;
        unaff_x29 = 8;
        unaff_x21 = in_stack_00000018;
      }
      uVar8 = auVar15._8_8_;
      unaff_x19 = auVar15._0_8_;
      uVar13 = unaff_x29 - 8;
      if (uVar5 <= uVar13) goto LAB_03072880;
      if (*unaff_x21 == 0) {
        lVar7 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var,uVar8);
        Animancer_AnimancerState__OnSetIsPlaying
                  (lVar7,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
        if ((lVar7 != 0) &&
           (lVar3 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
        goto LAB_03072888;
        if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
        *unaff_x21 = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21,lVar7);
        uVar8 = extraout_x1_00;
      }
      if (unaff_w28 == 1) break;
      if (unaff_w28 == 0) {
        if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
        if (unaff_x19 == 0) goto LAB_03072884;
        if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_03072880;
        lVar7 = *unaff_x21;
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        FUN_0366c030(unaff_d8,*(undefined4 *)(unaff_x19 + unaff_x29 * 4),0,0,&stack0x000000f0,0);
        if (lVar7 == 0) goto LAB_03072884;
        uStack00000000000000c4 = *(undefined8 *)(unaff_x20 + 0x14);
        uStack00000000000000b8 = (undefined4)in_stack_000000f8;
        in_stack_000000b0 = in_stack_000000f0;
        uStack00000000000000bc = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
        uStack00000000000000c0 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
        FUN_01b5f01c(lVar7,&stack0x000000b0,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
        if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
        if (*unaff_x21 == 0) goto LAB_03072884;
        iVar9 = *(int *)(*unaff_x21 + 0x18);
        uVar8 = (ulong)(iVar9 - 1);
        if (0 < iVar9) {
          FUN_03071cb4();
          uVar8 = extraout_x1_01;
        }
      }
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_03072880;
    unaff_x22 = *unaff_x21;
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    FUN_0366c030(unaff_d8,*(undefined4 *)(unaff_x19 + unaff_x29 * 4),0,0x7f800000,&stack0x000000f0,0
                );
    if (unaff_x22 == 0) break;
    uStack00000000000000a4 = *(undefined8 *)(unaff_x20 + 0x14);
    uVar14 = *(undefined8 *)(unaff_x20 + 0xc);
    param_5 = (undefined1 *)&stack0x00000090;
    param_1 = (undefined8 *)Newtonsoft_Json_JsonTextReader_var;
    uStack0000000000000090 = in_stack_000000f0;
    uVar4 = in_stack_000000f8;
  }
LAB_03072884:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_03072738:
  lVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar1,uVar4);
  FUN_0366cc40(lVar7,0);
  if ((lVar7 != 0) &&
     (lVar3 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0)) {
LAB_03072888:
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if (*(uint *)(unaff_x23 + 3) <= uVar12) {
LAB_03072880:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar3 = (long)(int)uVar12;
  plVar10 = unaff_x23 + lVar3 + 4;
  *plVar10 = lVar7;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar7);
  if (unaff_x24 == (long *)0x0) goto LAB_03072884;
  if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_03072880;
  iVar9 = 0;
  while( true ) {
    lVar7 = unaff_x24[lVar3 + 4];
    if (lVar7 == 0) goto LAB_03072884;
    if (*(int *)(lVar7 + 0x18) <= iVar9) break;
    if (*(uint *)(unaff_x23 + 3) <= uVar12) goto LAB_03072880;
    lVar11 = *plVar10;
    FUN_02215a88(lVar7,iVar9,&stack0x000000f0,*(undefined8 *)puVar2);
    if (lVar11 == 0) goto LAB_03072884;
    uStack0000000000000084 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack0000000000000078 = (undefined4)in_stack_000000f8;
    in_stack_00000070 = in_stack_000000f0;
    uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
    FUN_0366c440(lVar11,&stack0x00000070,0);
    iVar9 = iVar9 + 1;
    if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_03072880;
  }
  if ((*(uint *)(in_stack_00000040 + 0x18) <= uVar12) || (*(uint *)(unaff_x23 + 3) <= uVar12))
  goto LAB_03072880;
  if (in_stack_00000038 == 0) goto LAB_03072884;
  FUN_0365234c(in_stack_00000038,in_stack_00000028,in_stack_00000030,
               *(undefined8 *)(in_stack_00000040 + lVar3 * 8 + 0x20),*plVar10,0);
  uVar12 = uVar12 + 1;
  uVar4 = extraout_x1_03;
  if ((int)unaff_x23[3] <= (int)uVar12) {
    return;
  }
  goto LAB_03072738;
}


