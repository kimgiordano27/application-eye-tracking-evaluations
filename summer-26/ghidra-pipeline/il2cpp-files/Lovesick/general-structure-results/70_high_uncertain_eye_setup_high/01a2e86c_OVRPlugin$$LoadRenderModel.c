/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 01a2e86c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LoadRenderModel(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined4 uVar29;
  ulong uVar30;
  undefined8 in_d3;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((DAT_0377ab50 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Add__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass8_0_<DOMinSize>b__0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<MemberInfo>__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_Extensions_Values<JToken,_JToken>__);
    thunk_FUN_00d48444(StringLiteral_6259);
    DAT_0377ab50 = 1;
  }
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_30 = 0;
  uStack_70 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar14 = FUN_01283334(*(long *)(param_1 + 0x40),
                          *(undefined8 *)
                           Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass8_0_<DOMinSize>b__0__
                         );
    lVar20 = *(long *)(param_1 + 0x68);
    uVar15 = FUN_01a2e660(param_1);
    if (((lVar20 == 0) || (*(undefined8 *)(lVar20 + 0x98) = uVar15, lVar14 == 0)) ||
       (lVar20 = *(long *)(param_1 + 0x68), lVar20 == 0)) goto LAB_01a2efa0;
    *(undefined1 *)(lVar20 + 0x10) = *(undefined1 *)(lVar14 + 0x10);
    cVar6 = *(char *)(lVar14 + 0x11);
    *(char *)(lVar20 + 0x11) = cVar6;
    if (cVar6 != '\0') {
      uVar16 = FUN_02689fe0(param_1,0);
      lVar20 = *(long *)(param_1 + 0x68);
      if ((uVar16 & 1) != 0) {
        if (lVar20 == 0) goto LAB_01a2efa0;
        uVar7 = *(undefined1 *)(lVar14 + 0x12);
        *(undefined1 *)(lVar20 + 0x50) = 1;
        *(undefined1 *)(lVar20 + 0x12) = uVar7;
        lVar17 = *(long *)(lVar20 + 0x60);
        *(undefined1 *)(lVar20 + 0x94) = *(undefined1 *)(lVar14 + 0x70);
        if (lVar17 == 0) goto LAB_01a2efa0;
        uVar21 = *(uint *)(lVar17 + 0x18);
        if (uVar21 != 0) {
          fVar28 = *(float *)(lVar14 + 0x18);
          uVar16 = (ulong)(uint)fVar28;
          fVar22 = *(float *)(lVar14 + 0x1c);
          uVar2 = *(uint *)(lVar14 + 0x14);
          *(undefined1 *)(lVar17 + 0x20) = 1;
          lVar18 = *(long *)(lVar20 + 0x58);
          if (lVar18 == 0) goto LAB_01a2efa0;
          uVar3 = *(uint *)(lVar18 + 0x18);
          if (uVar3 == 0) goto LAB_01a2ef9c;
          *(bool *)(lVar18 + 0x20) = (uVar2 & 0x30) != 0;
          lVar19 = *(long *)(lVar20 + 0x68);
          fVar8 = fVar28;
          if (fVar28 <= fVar22) {
            fVar8 = fVar22;
          }
          uVar30 = (ulong)(uint)fVar8;
          if (lVar19 == 0) goto LAB_01a2efa0;
          uVar4 = *(uint *)(lVar19 + 0x18);
          if ((((uVar4 == 0) || (*(float *)(lVar19 + 0x20) = fVar8, uVar21 < 2)) ||
              ((*(undefined1 *)(lVar17 + 0x21) = 1, uVar3 < 2 ||
               ((*(byte *)(lVar18 + 0x21) = (byte)(uVar2 >> 5) & 1, uVar4 < 2 ||
                (*(float *)(lVar19 + 0x24) = fVar28, uVar21 < 3)))))) ||
             ((*(undefined1 *)(lVar17 + 0x22) = 1, uVar3 < 3 ||
              (((((*(byte *)(lVar18 + 0x22) = (byte)(uVar2 >> 4) & 1, uVar4 < 3 ||
                  (*(float *)(lVar19 + 0x28) = fVar22, uVar21 < 4)) ||
                 (*(undefined1 *)(lVar17 + 0x23) = 1, uVar3 < 4)) ||
                ((*(undefined1 *)(lVar18 + 0x23) = 0, uVar4 < 4 ||
                 (*(undefined4 *)(lVar19 + 0x2c) = 0, uVar21 < 5)))) ||
               ((*(undefined1 *)(lVar17 + 0x24) = 1, uVar3 < 5 ||
                (*(undefined1 *)(lVar18 + 0x24) = 0, puVar12 = StringLiteral_6259,
                puVar11 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__,
                puVar10 = Method_Newtonsoft_Json_Linq_Extensions_Values<JToken,_JToken>__, uVar4 < 5
                )))))))) goto LAB_01a2ef9c;
          *(undefined4 *)(lVar19 + 0x30) = 0;
          *(undefined4 *)(lVar20 + 0x90) = 2;
          puVar9 = Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Add__;
          uVar15 = *(undefined8 *)(lVar14 + 0x60);
          uVar27 = *(undefined8 *)(lVar14 + 0x58);
          uVar26 = *(undefined8 *)(lVar14 + 0x50);
          lVar18 = 0;
          lVar17 = 4;
          *(undefined4 *)(lVar20 + 0x8c) = *(undefined4 *)(lVar14 + 0x68);
          *(undefined8 *)(lVar20 + 0x84) = uVar15;
          *(undefined8 *)(lVar20 + 0x7c) = uVar27;
          *(undefined8 *)(lVar20 + 0x74) = uVar26;
          do {
            lVar20 = *(long *)(param_1 + 0x58);
            if (lVar20 == 0) goto LAB_01a2efa0;
            uVar21 = (int)lVar17 - 4;
            if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_01a2ef9c;
            lVar20 = *(long *)(lVar20 + lVar17 * 8);
            if (lVar20 == 0) goto LAB_01a2efa0;
            lVar19 = *(long *)(param_1 + 0x70);
            uVar23 = FUN_0269f910(lVar20,0);
            if (lVar19 == 0) goto LAB_01a2efa0;
            if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01a2ef9c;
            lVar17 = lVar17 + 1;
            lVar19 = lVar19 + lVar18;
            lVar18 = lVar18 + 0x10;
            *(undefined4 *)(lVar19 + 0x20) = uVar23;
            *(int *)(lVar19 + 0x24) = (int)uVar16;
            *(int *)(lVar19 + 0x28) = (int)uVar30;
            *(int *)(lVar19 + 0x2c) = (int)in_d3;
          } while ((int)lVar17 != 0x1c);
          if (*(long *)(param_1 + 0x68) != 0) {
            lVar20 = *(long *)(*(long *)(param_1 + 0x68) + 0x38);
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02666fdc(&uStack_110,0);
            uStack_e8 = uStack_108;
            uStack_f0 = uStack_110;
            uStack_dc = uStack_fc;
            uStack_e4 = uStack_104;
            uStack_e0 = uStack_100;
            if (lVar20 != 0) {
              if (*(uint *)(lVar20 + 0x18) < 2) goto LAB_01a2ef9c;
              *(undefined8 *)(lVar20 + 0x50) = uStack_fc;
              *(ulong *)(lVar20 + 0x48) = CONCAT44(uStack_100,uStack_104);
              *(ulong *)(lVar20 + 0x44) = CONCAT44(uStack_104,uStack_108);
              *(undefined8 *)(lVar20 + 0x3c) = uStack_110;
              lVar20 = *(long *)(param_1 + 0x70);
              if (DAT_03774f00 == '\0') {
                thunk_FUN_00d48444(
                                  Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                  );
                DAT_03774f00 = '\x01';
              }
              if (lVar20 == 0) goto LAB_01a2efa0;
              if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01a2ef9c;
              uVar15 = **(undefined8 **)
                         (*(long *)
                           Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                         + 0xb8);
              *(undefined8 *)(lVar20 + 0x28) =
                   (*(undefined8 **)
                     (*(long *)
                       Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
                     0xb8))[1];
              *(undefined8 *)(lVar20 + 0x20) = uVar15;
              if ((*(long *)(param_1 + 0x60) != 0) &&
                 (lVar20 = *(long *)(param_1 + 0x68), lVar20 != 0)) {
                uVar15 = *(undefined8 *)(param_1 + 0x70);
                uVar23 = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x10);
                if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01952b68(uVar15,uVar23,lVar20 + 0x38,0);
                lVar20 = *(long *)(param_1 + 0x68);
                if (lVar20 != 0) {
                  uVar15 = *(undefined8 *)(lVar20 + 0x38);
                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01a2a778(uVar15,lVar20 + 0x48,0);
                  if (*(char *)(param_1 + 0x50) == '\0') {
                    lVar14 = *(long *)(param_1 + 0x68);
                    FUN_019aa6e4(&uStack_110,*(undefined8 *)(param_1 + 0x48),0,0);
                    uStack_f0 = uStack_110;
                    uStack_dc = uStack_fc;
                    if (lVar14 == 0) goto LAB_01a2efa0;
                    *(undefined8 *)(lVar14 + 0x28) = uStack_fc;
                    *(ulong *)(lVar14 + 0x20) = CONCAT44(uStack_100,uStack_104);
                    *(ulong *)(lVar14 + 0x1c) = CONCAT44(uStack_104,uStack_108);
                    *(undefined8 *)(lVar14 + 0x14) = uStack_110;
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_01a2efa0;
                    lVar14 = *(long *)(param_1 + 0x68);
                    uVar23 = FUN_026a125c(*(long *)(param_1 + 0x48),0);
                  }
                  else {
                    FUN_019aa6e4(&uStack_f0,*(undefined8 *)(param_1 + 0x48),1,0);
                    uStack_18 = uStack_e8;
                    uStack_20 = uStack_f0;
                    uStack_c = (undefined4)uStack_dc;
                    uStack_8 = (undefined4)((ulong)uStack_dc >> 0x20);
                    uStack_14 = uStack_e4;
                    uStack_10 = uStack_e0;
                    lVar20 = FUN_01a2e660(param_1);
                    if (lVar20 == 0) goto LAB_01a2efa0;
                    lVar17 = *(long *)puVar9;
                    iVar5 = *(int *)(lVar20 + 0x10);
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar17 = *(long *)puVar9;
                    }
                    uVar24 = uStack_8;
                    uVar25 = uStack_c;
                    uVar29 = uStack_10;
                    uVar23 = uStack_14;
                    puVar10 = Method_System_Linq_Enumerable_First<MemberInfo>__;
                    bVar13 = iVar5 != 0;
                    lVar20 = 0x138;
                    if (bVar13) {
                      lVar20 = 0x16c;
                    }
                    puVar1 = (undefined8 *)(*(long *)(lVar17 + 0xb8) + lVar20);
                    uStack_58 = puVar1[1];
                    uStack_60 = *puVar1;
                    uStack_48 = puVar1[3];
                    uStack_50 = puVar1[2];
                    uStack_38 = puVar1[5];
                    uStack_40 = puVar1[4];
                    uStack_30 = *(undefined4 *)(puVar1 + 6);
                    lVar20 = 0xd0;
                    if (bVar13) {
                      lVar20 = 0x104;
                    }
                    puVar1 = (undefined8 *)(*(long *)(lVar17 + 0xb8) + lVar20);
                    uStack_98 = puVar1[1];
                    uStack_a0 = *puVar1;
                    uStack_88 = puVar1[3];
                    uStack_90 = puVar1[2];
                    uStack_70 = *(undefined4 *)(puVar1 + 6);
                    uStack_78 = puVar1[5];
                    uStack_80 = puVar1[4];
                    if (DAT_03775377 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_03775377 = '\x01';
                    }
                    puVar11 = 
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                    lVar20 = *(long *)(*(long *)
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      + 0xb8);
                    uVar23 = FUN_02699088(uVar23,uVar29,uVar25,uVar24,*(undefined4 *)(lVar20 + 0x48)
                                          ,*(undefined4 *)(lVar20 + 0x4c),
                                          *(undefined4 *)(lVar20 + 0x50),0);
                    uStack_c8 = uVar25;
                    uStack_d0 = CONCAT44(uVar29,uVar23);
                    uVar23 = uStack_c8;
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar15 = FUN_01a2eff0(&uStack_d0,&uStack_60,&uStack_a0);
                    uVar24 = uStack_8;
                    uVar25 = uStack_c;
                    if (DAT_037750c4 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_037750c4 = '\x01';
                    }
                    lVar20 = *(long *)(*(long *)puVar11 + 0xb8);
                    uVar24 = FUN_02699088(uStack_14,uStack_10,uVar25,uVar24,
                                          *(undefined4 *)(lVar20 + 0x18),
                                          *(undefined4 *)(lVar20 + 0x1c),
                                          *(undefined4 *)(lVar20 + 0x20),0);
                    uStack_c8 = uVar25;
                    uStack_d0 = CONCAT44(uStack_10,uVar24);
                    uVar25 = FUN_01a2eff0(&uStack_d0,&uStack_60,&uStack_a0);
                    uStack_10 = uVar29;
                    uStack_14 = FUN_02698e08(uVar15,0);
                    uStack_c = uVar23;
                    uStack_8 = uVar25;
                    uStack_c0 = *(undefined8 *)(lVar14 + 0x30);
                    uStack_b8 = (undefined4)*(undefined8 *)(lVar14 + 0x38);
                    uStack_ac = (undefined4)*(undefined8 *)(lVar14 + 0x44);
                    uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x44) >> 0x20);
                    uStack_b4 = (undefined4)*(undefined8 *)(lVar14 + 0x3c);
                    uStack_b0 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x3c) >> 0x20);
                    if (*(long *)(param_1 + 0x68) == 0) goto LAB_01a2efa0;
                    FUN_019a7844(&uStack_c0,&uStack_20,*(long *)(param_1 + 0x68) + 0x14,0);
                    if (*(long *)(param_1 + 0x48) == 0) goto LAB_01a2efa0;
                    lVar14 = *(long *)(param_1 + 0x68);
                    uVar23 = FUN_0269fcf8(*(long *)(param_1 + 0x48),0);
                  }
                  if (lVar14 != 0) {
                    *(undefined4 *)(lVar14 + 0x70) = uVar23;
                    if (*(long *)(param_1 + 0x68) != 0) {
                      *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x30) = 2;
                      return;
                    }
                  }
                }
              }
            }
          }
          goto LAB_01a2efa0;
        }
        goto LAB_01a2ef9c;
      }
      if (lVar20 == 0) goto LAB_01a2efa0;
    }
    lVar14 = *(long *)(lVar20 + 0x58);
    *(undefined1 *)(lVar20 + 0x12) = 0;
    *(undefined4 *)(lVar20 + 0x30) = 0;
    *(undefined4 *)(lVar20 + 0x90) = 0;
    *(undefined1 *)(lVar20 + 0x50) = 0;
    if (lVar14 != 0) {
      uVar21 = *(uint *)(lVar14 + 0x18);
      uVar16 = 0;
      while (uVar16 < uVar21) {
        *(undefined1 *)(lVar14 + 0x20 + uVar16) = 0;
        lVar17 = *(long *)(lVar20 + 0x60);
        if (lVar17 == 0) goto LAB_01a2efa0;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) break;
        lVar17 = lVar17 + uVar16;
        uVar16 = uVar16 + 1;
        *(undefined1 *)(lVar17 + 0x20) = 0;
        if (uVar16 == 5) {
          return;
        }
      }
LAB_01a2ef9c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
  }
LAB_01a2efa0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


