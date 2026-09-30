/*
FUNCTION_NAME: Unity.Entities.EntityComponentStore.PerChunkArray.StaticIdentifier$$.cctor
ENTRY_POINT: 030725c0
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


void Unity_Entities_EntityComponentStore_PerChunkArray_StaticIdentifier___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  int iVar7;
  long *plVar8;
  long *unaff_x21;
  long lVar9;
  long lVar10;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  uint uVar11;
  long unaff_x26;
  ulong unaff_x27;
  int unaff_w28;
  long unaff_x29;
  ulong unaff_d8;
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
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined4 uStack0000000000000108;
  ulong in_stack_00000118;
  
  while( true ) {
    lVar9 = *unaff_x21;
    uStack00000000000000f0 = 0;
    uStack00000000000000f8 = 0;
    uStack0000000000000108 = 0;
    uStack0000000000000100 = 0;
                    /* try { // try from 030725e8 to 031725eb has its CatchHandler @ 030726a0 */
    FUN_0366c030(unaff_d8,*(undefined4 *)(unaff_x19 + unaff_x29 * 4),0,0,&stack0x000000f0,0);
                    /* try { // try from 030725ec to 03172603 has its CatchHandler @ 030726a4 */
    if (lVar9 == 0) goto LAB_03072884;
    uStack00000000000000c4 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack00000000000000b8 = (undefined4)uStack00000000000000f8;
                    /* try { // try from 03072604 to 031726bb has its CatchHandler @ 03072584 */
    in_stack_000000b0 = uStack00000000000000f0;
    uStack00000000000000bc = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
    uStack00000000000000c0 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
    FUN_01b5f01c(lVar9,&stack0x000000b0,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
    if (*(uint *)(unaff_x24 + 3) <= unaff_x27) break;
    lVar9 = *unaff_x21;
    if (lVar9 == 0) goto LAB_03072884;
    if (0 < *(int *)(lVar9 + 0x18)) {
      FUN_03071cb4(lVar9,*(int *)(lVar9 + 0x18) + -1);
    }
    do {
      while( true ) {
        uVar5 = (ulong)*(uint *)(unaff_x24 + 3);
        lVar9 = unaff_x29 + -7;
        unaff_x29 = unaff_x29 + 1;
        unaff_x21 = unaff_x21 + 1;
        if ((int)*(uint *)(unaff_x24 + 3) <= lVar9) {
          do {
            while( true ) {
              puVar2 = Unity_Services_CloudSave_Internal_Http_JsonObject_var;
              puVar1 = PTR_DAT_03cc0698;
              in_stack_00000058 = in_stack_00000058 + 1;
              unaff_w25 = unaff_w25 + in_stack_00000020._4_4_;
              in_stack_00000068 = (ulong)(uint)((int)in_stack_00000068 + in_stack_00000050._4_4_);
              in_stack_00000060._4_4_ = in_stack_00000060._4_4_ + in_stack_00000020._4_4_;
              uVar5 = (ulong)(uint)((int)in_stack_00000118 + in_stack_00000020._4_4_);
              if ((long)(int)*(uint *)(in_stack_00000048 + 0x18) <= (long)in_stack_00000058) {
                if (unaff_x23 == (long *)0x0) goto LAB_03072884;
                if ((int)unaff_x23[3] < 1) {
                  return;
                }
                uVar11 = 0;
                goto LAB_03072738;
              }
              if (*(uint *)(in_stack_00000048 + 0x18) <= in_stack_00000058) goto LAB_03072880;
              unaff_d8 = (ulong)*(uint *)(in_stack_00000048 + in_stack_00000058 * 4 + 0x20);
              in_stack_00000118 = uVar5;
              if (unaff_w28 != 2) break;
              lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,in_stack_00000050._4_4_);
              if (lVar9 == 0) goto LAB_03072884;
              uVar11 = *(uint *)(lVar9 + 0x18);
              if (0 < (long)((ulong)uVar11 << 0x20)) {
                uVar5 = 0;
                lVar3 = in_stack_00000118 << 0x20;
                do {
                  if (unaff_x26 == 0) goto LAB_03072884;
                  if (((ulong)*(uint *)(unaff_x26 + 0x18) <= in_stack_00000118 + uVar5) ||
                     (uVar11 <= uVar5)) goto LAB_03072880;
                  lVar10 = lVar3 >> 0x1e;
                  lVar3 = lVar3 + 0x100000000;
                  *(undefined4 *)(lVar9 + 0x20 + uVar5 * 4) =
                       *(undefined4 *)(unaff_x26 + lVar10 + 0x20);
                  uVar5 = uVar5 + 1;
                } while ((long)(int)uVar11 != uVar5);
              }
              if ((in_stack_00000010 == 0) ||
                 (unaff_x19 = (**(code **)(in_stack_00000010 + 0x18))
                                        (*(undefined8 *)(in_stack_00000010 + 0x40),lVar9,unaff_x19,
                                         *(undefined8 *)(in_stack_00000010 + 0x28)),
                 unaff_x24 == (long *)0x0)) goto LAB_03072884;
              uVar11 = *(uint *)(unaff_x24 + 3);
              if (0 < (int)uVar11) {
                uVar6 = 0;
                do {
                  if (uVar11 <= uVar6) goto LAB_03072880;
                  plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
                  if (*plVar8 == 0) {
                    lVar9 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var);
                    Animancer_AnimancerState__OnSetIsPlaying
                              (lVar9,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
                    if ((lVar9 != 0) &&
                       (lVar3 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*unaff_x24 + 0x40)),
                       lVar3 == 0)) goto LAB_03072888;
                    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_03072880;
                    *plVar8 = lVar9;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar9);
                    uVar11 = *(uint *)(unaff_x24 + 3);
                  }
                  if (uVar11 <= uVar6) goto LAB_03072880;
                  if (unaff_x19 == 0) goto LAB_03072884;
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto LAB_03072880;
                  if (unaff_x26 == 0) goto LAB_03072884;
                  if ((*(uint *)(unaff_x26 + 0x18) <= in_stack_00000060._4_4_ + uVar6) ||
                     (*(uint *)(unaff_x26 + 0x18) <= unaff_w25 + uVar6)) goto LAB_03072880;
                  lVar9 = *plVar8;
                  uStack00000000000000f0 = 0;
                  uStack00000000000000f8 = 0;
                  uStack0000000000000108 = 0;
                  uStack0000000000000100 = 0;
                  FUN_0366c030(unaff_d8,*(undefined4 *)(unaff_x19 + (long)(int)uVar6 * 4 + 0x20),
                               *(undefined4 *)
                                (unaff_x26 + 0x20 + (long)(int)(in_stack_00000060._4_4_ + uVar6) * 4
                                ),*(undefined4 *)
                                   (unaff_x26 + 0x20 + (long)(int)(unaff_w25 + uVar6) * 4),
                               &stack0x000000f0,0);
                  if (lVar9 == 0) goto LAB_03072884;
                  uStack00000000000000e4 = *(undefined8 *)(unaff_x20 + 0x14);
                  uStack00000000000000d8 = (undefined4)uStack00000000000000f8;
                  in_stack_000000d0 = uStack00000000000000f0;
                  uStack00000000000000dc = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
                  uStack00000000000000e0 =
                       (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
                  FUN_01b5f01c(lVar9,&stack0x000000d0,
                               *(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
                  uVar11 = *(uint *)(unaff_x24 + 3);
                  uVar6 = uVar6 + 1;
                } while ((int)uVar6 < (int)uVar11);
              }
            }
            lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbf288,in_stack_00000050._4_4_);
            if (lVar9 == 0) goto LAB_03072884;
            uVar11 = *(uint *)(lVar9 + 0x18);
            if (0 < (long)((ulong)uVar11 << 0x20)) {
              uVar5 = 0;
              lVar3 = in_stack_00000068 << 0x20;
              do {
                if (unaff_x26 == 0) goto LAB_03072884;
                if (((ulong)*(uint *)(unaff_x26 + 0x18) <= in_stack_00000068 + uVar5) ||
                   (uVar11 <= uVar5)) goto LAB_03072880;
                lVar10 = lVar3 >> 0x1e;
                lVar3 = lVar3 + 0x100000000;
                *(undefined4 *)(lVar9 + 0x20 + uVar5 * 4) =
                     *(undefined4 *)(unaff_x26 + lVar10 + 0x20);
                uVar5 = uVar5 + 1;
              } while ((long)(int)uVar11 != uVar5);
            }
            if ((in_stack_00000010 == 0) ||
               (unaff_x19 = (**(code **)(in_stack_00000010 + 0x18))
                                      (*(undefined8 *)(in_stack_00000010 + 0x40),lVar9,unaff_x19,
                                       *(undefined8 *)(in_stack_00000010 + 0x28)),
               unaff_x24 == (long *)0x0)) goto LAB_03072884;
          } while ((int)unaff_x24[3] < 1);
          uVar5 = unaff_x24[3] & 0xffffffff;
          unaff_x29 = 8;
          unaff_x21 = in_stack_00000018;
        }
        unaff_x27 = unaff_x29 - 8;
        if (uVar5 <= unaff_x27) goto LAB_03072880;
        if (*unaff_x21 == 0) {
          lVar9 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_JsonToken_var);
          Animancer_AnimancerState__OnSetIsPlaying
                    (lVar9,*(undefined8 *)Newtonsoft_Json_JsonTextWriter_var);
          if ((lVar9 != 0) &&
             (lVar3 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
          goto LAB_03072888;
          if (*(uint *)(unaff_x24 + 3) <= unaff_x27) goto LAB_03072880;
          *unaff_x21 = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x21,lVar9);
        }
        if (unaff_w28 != 1) break;
        if (*(uint *)(unaff_x24 + 3) <= unaff_x27) goto LAB_03072880;
        if (unaff_x19 == 0) goto LAB_03072884;
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x27) goto LAB_03072880;
        lVar9 = *unaff_x21;
        uStack00000000000000f0 = 0;
        uStack00000000000000f8 = 0;
        uStack0000000000000108 = 0;
        uStack0000000000000100 = 0;
        FUN_0366c030(unaff_d8,*(undefined4 *)(unaff_x19 + unaff_x29 * 4),0,0x7f800000,
                     &stack0x000000f0,0);
        if (lVar9 == 0) goto LAB_03072884;
        uStack00000000000000a4 = *(undefined8 *)(unaff_x20 + 0x14);
        uStack0000000000000098 = (undefined4)uStack00000000000000f8;
        in_stack_00000090 = uStack00000000000000f0;
        uStack000000000000009c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
        uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
        FUN_01b5f01c(lVar9,&stack0x00000090,*(undefined8 *)Newtonsoft_Json_JsonTextReader_var);
      }
    } while (unaff_w28 != 0);
    if (*(uint *)(unaff_x24 + 3) <= unaff_x27) break;
    if (unaff_x19 == 0) goto LAB_03072884;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x27) break;
  }
LAB_03072880:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_03072738:
  lVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_0366cc40(lVar9,0);
  if ((lVar9 != 0) &&
     (lVar3 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0)) {
LAB_03072888:
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if (*(uint *)(unaff_x23 + 3) <= uVar11) goto LAB_03072880;
  lVar3 = (long)(int)uVar11;
  plVar8 = unaff_x23 + lVar3 + 4;
  *plVar8 = lVar9;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar9);
  if (unaff_x24 == (long *)0x0) {
LAB_03072884:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar11) goto LAB_03072880;
  iVar7 = 0;
  while( true ) {
    lVar9 = unaff_x24[lVar3 + 4];
    if (lVar9 == 0) goto LAB_03072884;
    if (*(int *)(lVar9 + 0x18) <= iVar7) break;
    if (*(uint *)(unaff_x23 + 3) <= uVar11) goto LAB_03072880;
    lVar10 = *plVar8;
    FUN_02215a88(lVar9,iVar7,&stack0x000000f0,*(undefined8 *)puVar2);
    if (lVar10 == 0) goto LAB_03072884;
    uStack0000000000000084 = *(undefined8 *)(unaff_x20 + 0x14);
    uStack0000000000000078 = (undefined4)uStack00000000000000f8;
    in_stack_00000070 = uStack00000000000000f0;
    uStack000000000000007c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
    uStack0000000000000080 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xc) >> 0x20);
    FUN_0366c440(lVar10,&stack0x00000070,0);
    iVar7 = iVar7 + 1;
    if (*(uint *)(unaff_x24 + 3) <= uVar11) goto LAB_03072880;
  }
  if ((*(uint *)(in_stack_00000040 + 0x18) <= uVar11) || (*(uint *)(unaff_x23 + 3) <= uVar11))
  goto LAB_03072880;
  if (in_stack_00000038 == 0) goto LAB_03072884;
  FUN_0365234c(in_stack_00000038,in_stack_00000028,in_stack_00000030,
               *(undefined8 *)(in_stack_00000040 + lVar3 * 8 + 0x20),*plVar8,0);
  uVar11 = uVar11 + 1;
  if ((int)unaff_x23[3] <= (int)uVar11) {
    return;
  }
  goto LAB_03072738;
}


