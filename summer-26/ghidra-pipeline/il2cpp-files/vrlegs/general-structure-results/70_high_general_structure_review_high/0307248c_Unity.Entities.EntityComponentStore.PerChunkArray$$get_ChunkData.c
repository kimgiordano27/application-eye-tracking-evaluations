/*
FUNCTION_NAME: Unity.Entities.EntityComponentStore.PerChunkArray$$get_ChunkData
ENTRY_POINT: 0307248c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Entities_EntityComponentStore_PerChunkArray__get_ChunkData(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  int iVar10;
  ulong unaff_x21;
  long *plVar11;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  uint uVar12;
  long unaff_x26;
  long unaff_x27;
  ulong uVar13;
  int unaff_w28;
  long lVar14;
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
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  ulong in_stack_00000118;
  
  while( true ) {
    uVar12 = *(uint *)(param_1 + 0x18);
    if (0 < (long)((ulong)uVar12 << 0x20)) {
      uVar8 = 0;
      lVar9 = in_stack_00000068 << 0x20;
      do {
        if (unaff_x26 == 0) goto LAB_03072884;
        if (((ulong)*(uint *)(unaff_x26 + 0x18) <= in_stack_00000068 + uVar8) || (uVar12 <= uVar8))
        goto LAB_03072880;
        lVar14 = lVar9 >> 0x1e;
        lVar9 = lVar9 + 0x100000000;
        *(undefined4 *)(param_1 + 0x20 + uVar8 * 4) = *(undefined4 *)(unaff_x26 + lVar14 + 0x20);
        uVar8 = uVar8 + 1;
      } while ((long)(int)uVar12 != uVar8);
    }
    if (unaff_x27 == 0) break;
    auVar15 = (**(code **)(unaff_x27 + 0x18))
                        (*(undefined8 *)(unaff_x27 + 0x40),param_1,unaff_x19,
                         *(undefined8 *)(unaff_x27 + 0x28));
    uVar8 = auVar15._8_8_;
    lVar9 = auVar15._0_8_;
    if (unaff_x24 == (long *)0x0) break;
    if (0 < (int)unaff_x24[3]) {
      uVar6 = unaff_x24[3] & 0xffffffff;
      lVar14 = 8;
      plVar11 = in_stack_00000018;
      do {
        uVar13 = lVar14 - 8;
        if (uVar6 <= uVar13) goto LAB_03072880;
        if (*plVar11 == 0) {
          lVar3 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var,uVar8);
          Animancer_AnimancerState__OnSetIsPlaying
                    (lVar3,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_01a89d6c(lVar3,*(undefined8 *)(*unaff_x24 + 0x40)), lVar4 == 0))
          goto LAB_03072888;
          if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
          *plVar11 = lVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar3);
          uVar8 = extraout_x1_00;
        }
        if (unaff_w28 == 1) {
          if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
          if (lVar9 == 0) goto LAB_03072884;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_03072880;
          lVar3 = *plVar11;
          in_stack_000000f0 = 0;
          in_stack_000000f8 = 0;
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          FUN_0366c030(unaff_d8,*(undefined4 *)(lVar9 + lVar14 * 4),0,0x7f800000,&stack0x000000f0,0)
          ;
          if (lVar3 == 0) goto LAB_03072884;
          uStack00000000000000a4 = *(undefined8 *)(unaff_x20 + 0x14);
          uStack0000000000000098 = (undefined4)in_stack_000000f8;
          in_stack_00000090 = in_stack_000000f0;
          uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
          uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
          FUN_01b5f01c(lVar3,&stack0x00000090,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
          uVar8 = extraout_x1_02;
        }
        else if (unaff_w28 == 0) {
          if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
          if (lVar9 == 0) goto LAB_03072884;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_03072880;
          lVar3 = *plVar11;
          in_stack_000000f0 = 0;
          in_stack_000000f8 = 0;
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          FUN_0366c030(unaff_d8,*(undefined4 *)(lVar9 + lVar14 * 4),0,0,&stack0x000000f0,0);
          if (lVar3 == 0) goto LAB_03072884;
          uStack00000000000000c4 = *(undefined8 *)(unaff_x20 + 0x14);
          uStack00000000000000b8 = (undefined4)in_stack_000000f8;
          in_stack_000000b0 = in_stack_000000f0;
          uStack00000000000000bc = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
          uStack00000000000000c0 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
          FUN_01b5f01c(lVar3,&stack0x000000b0,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
          if (*(uint *)(unaff_x24 + 3) <= uVar13) goto LAB_03072880;
          if (*plVar11 == 0) goto LAB_03072884;
          iVar10 = *(int *)(*plVar11 + 0x18);
          uVar8 = (ulong)(iVar10 - 1);
          if (0 < iVar10) {
            FUN_03071cb4();
            uVar8 = extraout_x1_01;
          }
        }
        auVar15._8_8_ = uVar8;
        auVar15._0_8_ = lVar9;
        uVar6 = (ulong)*(uint *)(unaff_x24 + 3);
        lVar3 = lVar14 + -7;
        lVar14 = lVar14 + 1;
        plVar11 = plVar11 + 1;
        unaff_x21 = in_stack_00000058;
        unaff_x27 = in_stack_00000010;
      } while (lVar3 < (int)*(uint *)(unaff_x24 + 3));
    }
    while( true ) {
      puVar2 = Unity_Services_CloudSave_Internal_Http_JsonObject_var;
      puVar1 = PTR_DAT_03cc0698;
      uVar5 = auVar15._8_8_;
      unaff_x19 = auVar15._0_8_;
      unaff_x21 = unaff_x21 + 1;
      unaff_w25 = unaff_w25 + in_stack_00000020._4_4_;
      in_stack_00000068 = (ulong)(uint)((int)in_stack_00000068 + in_stack_00000050._4_4_);
      in_stack_00000060._4_4_ = in_stack_00000060._4_4_ + in_stack_00000020._4_4_;
      uVar8 = (ulong)(uint)((int)in_stack_00000118 + in_stack_00000020._4_4_);
      if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)unaff_x21) {
        if (unaff_x23 == (long *)0x0) goto LAB_03072884;
        if ((int)unaff_x23[3] < 1) {
          return;
        }
        uVar12 = 0;
        goto LAB_03072738;
      }
      if (*(uint *)(in_stack_00000048 + 0x18) <= unaff_x21) goto LAB_03072880;
      unaff_d8 = (ulong)*(uint *)(in_stack_00000048 + unaff_x21 * 4 + 0x20);
      in_stack_00000118 = uVar8;
      if (unaff_w28 != 2) break;
      lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,in_stack_00000050._4_4_);
      if (lVar9 == 0) goto LAB_03072884;
      uVar12 = *(uint *)(lVar9 + 0x18);
      if (0 < (long)((ulong)uVar12 << 0x20)) {
        uVar8 = 0;
        lVar14 = in_stack_00000118 << 0x20;
        do {
          if (unaff_x26 == 0) goto LAB_03072884;
          if (((ulong)*(uint *)(unaff_x26 + 0x18) <= in_stack_00000118 + uVar8) || (uVar12 <= uVar8)
             ) goto LAB_03072880;
          lVar3 = lVar14 >> 0x1e;
          lVar14 = lVar14 + 0x100000000;
          *(undefined4 *)(lVar9 + 0x20 + uVar8 * 4) = *(undefined4 *)(unaff_x26 + lVar3 + 0x20);
          uVar8 = uVar8 + 1;
        } while ((long)(int)uVar12 != uVar8);
      }
      if (unaff_x27 == 0) goto LAB_03072884;
      auVar15 = (**(code **)(unaff_x27 + 0x18))
                          (*(undefined8 *)(unaff_x27 + 0x40),lVar9,unaff_x19,
                           *(undefined8 *)(unaff_x27 + 0x28));
      lVar9 = auVar15._0_8_;
      if (unaff_x24 == (long *)0x0) goto LAB_03072884;
      uVar12 = *(uint *)(unaff_x24 + 3);
      if (0 < (int)uVar12) {
        uVar7 = 0;
        do {
          if (uVar12 <= uVar7) goto LAB_03072880;
          plVar11 = unaff_x24 + (long)(int)uVar7 + 4;
          if (*plVar11 == 0) {
            lVar14 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var);
            Animancer_AnimancerState__OnSetIsPlaying
                      (lVar14,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
            if ((lVar14 != 0) &&
               (lVar3 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
            goto LAB_03072888;
            if (*(uint *)(unaff_x24 + 3) <= uVar7) goto LAB_03072880;
            *plVar11 = lVar14;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar14);
            uVar12 = *(uint *)(unaff_x24 + 3);
          }
          if (uVar12 <= uVar7) goto LAB_03072880;
          if (lVar9 == 0) goto LAB_03072884;
          if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_03072880;
          if (unaff_x26 == 0) goto LAB_03072884;
          if ((*(uint *)(unaff_x26 + 0x18) <= in_stack_00000060._4_4_ + uVar7) ||
             (*(uint *)(unaff_x26 + 0x18) <= unaff_w25 + uVar7)) goto LAB_03072880;
          lVar14 = *plVar11;
          in_stack_000000f0 = 0;
          in_stack_000000f8 = 0;
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          FUN_0366c030(unaff_d8,*(undefined4 *)(lVar9 + (long)(int)uVar7 * 4 + 0x20),
                       *(undefined4 *)
                        (unaff_x26 + 0x20 + (long)(int)(in_stack_00000060._4_4_ + uVar7) * 4),
                       *(undefined4 *)(unaff_x26 + 0x20 + (long)(int)(unaff_w25 + uVar7) * 4),
                       &stack0x000000f0,0);
          if (lVar14 == 0) goto LAB_03072884;
          uStack00000000000000e4 = *(undefined8 *)(unaff_x20 + 0x14);
          uStack00000000000000d8 = (undefined4)in_stack_000000f8;
          in_stack_000000d0 = in_stack_000000f0;
          uStack00000000000000dc = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
          uStack00000000000000e0 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
          FUN_01b5f01c(lVar14,&stack0x000000d0,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
          auVar15._8_8_ = extraout_x1;
          auVar15._0_8_ = lVar9;
          uVar12 = *(uint *)(unaff_x24 + 3);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar12);
      }
    }
    param_1 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,in_stack_00000050._4_4_);
    in_stack_00000058 = unaff_x21;
    if (param_1 == 0) break;
  }
LAB_03072884:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_03072738:
  lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar1,uVar5);
  FUN_0366cc40(lVar9,0);
  if ((lVar9 != 0) &&
     (lVar14 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*unaff_x23 + 0x40)), lVar14 == 0)) {
LAB_03072888:
    uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,0);
  }
  if (*(uint *)(unaff_x23 + 3) <= uVar12) {
LAB_03072880:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar14 = (long)(int)uVar12;
  plVar11 = unaff_x23 + lVar14 + 4;
  *plVar11 = lVar9;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar9);
  if (unaff_x24 == (long *)0x0) goto LAB_03072884;
  if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_03072880;
  iVar10 = 0;
  while( true ) {
    lVar9 = unaff_x24[lVar14 + 4];
    if (lVar9 == 0) goto LAB_03072884;
    if (*(int *)(lVar9 + 0x18) <= iVar10) break;
    if (*(uint *)(unaff_x23 + 3) <= uVar12) goto LAB_03072880;
    lVar3 = *plVar11;
    FUN_02215a88(lVar9,iVar10,&stack0x000000f0,*(undefined8 *)puVar2);
    if (lVar3 == 0) goto LAB_03072884;
    uStack0000000000000084 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack0000000000000078 = (undefined4)in_stack_000000f8;
    in_stack_00000070 = in_stack_000000f0;
    uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
    FUN_0366c440(lVar3,&stack0x00000070,0);
    iVar10 = iVar10 + 1;
    if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_03072880;
  }
  if ((*(uint *)(in_stack_00000040 + 0x18) <= uVar12) || (*(uint *)(unaff_x23 + 3) <= uVar12))
  goto LAB_03072880;
  if (in_stack_00000038 == 0) goto LAB_03072884;
  FUN_0365234c(in_stack_00000038,in_stack_00000028,in_stack_00000030,
               *(undefined8 *)(in_stack_00000040 + lVar14 * 8 + 0x20),*plVar11,0);
  uVar12 = uVar12 + 1;
  uVar5 = extraout_x1_03;
  if ((int)unaff_x23[3] <= (int)uVar12) {
    return;
  }
  goto LAB_03072738;
}


