/*
FUNCTION_NAME: FUN_015a050c
ENTRY_POINT: 015a050c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] FUN_015a050c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  float fVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  ulong local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  long local_2e0;
  undefined1 auStack_2d0 [152];
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  undefined8 local_220;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long local_1e0;
  undefined1 auStack_188 [32];
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  ulong local_144;
  undefined8 uStack_13c;
  float local_134;
  ulong uStack_130;
  float fStack_128;
  float local_124;
  float fStack_120;
  undefined8 uStack_11c;
  long local_110;
  undefined1 auStack_108 [24];
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  puVar4 = PTR_DAT_033ef600;
  if ((DAT_03777d67 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8053);
    thunk_FUN_00d48444(PTR_DAT_033f2080);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef600);
    thunk_FUN_00d48444(StringLiteral_4635);
    thunk_FUN_00d48444(PTR_DAT_033f0d80);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Queue_Enumerator<string>_MoveNext__);
    thunk_FUN_00d48444(StringLiteral_13670);
    thunk_FUN_00d48444(Newtonsoft_Json_Converters_XAttributeWrapper_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__);
    thunk_FUN_00d48444(StringLiteral_2682);
    thunk_FUN_00d48444(StringLiteral_8586);
    thunk_FUN_00d48444(
                      UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_<GetBaseLayouts>d__24_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_4573);
    thunk_FUN_00d48444(StringLiteral_3839);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Ray>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_CommandEventBase<ExecuteCommandEvent>_get_commandName__
                      );
    thunk_FUN_00d48444(Method_AudioClipAudioSource_<>c__DisplayClass48_0_<SetActiveClip>b__0__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Attribute>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_13518);
    thunk_FUN_00d48444(
                      UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_11835);
    thunk_FUN_00d48444(StringLiteral_4731);
    DAT_03777d67 = 1;
  }
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  memset(auStack_188,0,0x98);
  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  puVar5 = StringLiteral_4731;
  puVar4 = 
  Method_Sirenix_Utilities_DeepReflection_<>c__DisplayClass21_0_<CreateSlowDeepStaticValueGetterDelegate>b__0__
  ;
  if (lVar10 != 0) {
    FUN_01800d74(lVar10,0);
    FUN_0180ea74(lVar10,1,0);
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *(long *)puVar5;
    }
    *(undefined8 *)(lVar10 + 0xd8) = **(undefined8 **)(lVar11 + 0xb8);
    puVar5 = PTR_DAT_033f2080;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011007c4(param_1,lVar10,&local_220,*(undefined8 *)puVar5);
    uVar8 = local_220;
    puVar6 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
    puVar5 = 
    UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_<GetBaseLayouts>d__24_TypeInfo;
    puVar4 = UnityEngine_UIElements_UxmlEnumAttributeDescription<ListViewReorderMode>_TypeInfo;
    uVar3 = DAT_029412c8;
    lVar10 = CONCAT44(fStack_214,fStack_218);
    if (lVar10 != 0) {
      if (0 < *(int *)(lVar10 + 0x18)) {
        iVar14 = 0;
        do {
          FUN_0132138c(lVar10,iVar14,&local_220,
                       *(undefined8 *)Newtonsoft_Json_Converters_XAttributeWrapper_TypeInfo);
          lVar11 = local_1e0;
          uStack_d8 = CONCAT44(uStack_204,uStack_208);
          local_e0 = CONCAT44(fStack_20c,local_210);
          uStack_e8 = CONCAT44(fStack_214,fStack_218);
          uStack_c8 = uStack_1f8;
          local_d0 = uStack_200;
          local_f0 = local_220;
          uStack_b8 = uStack_1e8;
          local_c0 = local_1f0;
          if (local_1e0 == 0) goto LAB_015a0cc8;
          if (0 < *(int *)(local_1e0 + 0x18)) {
            iVar16 = 0;
            puVar15 = (undefined8 *)StringLiteral_2682;
            do {
              FUN_0132138c(lVar11,iVar16,&local_220,*puVar15);
              memcpy(auStack_188,&local_220,0x98);
              if ((int)uVar8 == 1) {
                fVar19 = local_168 / 100.0;
                local_158 = local_158 + 180.0;
                local_168 = fStack_164 / 100.0;
                fStack_164 = fStack_160 / 100.0;
                lVar12 = *(long *)(*(long *)
                                    Method_AudioClipAudioSource_<>c__DisplayClass48_0_<SetActiveClip>b__0__
                                  + 0x20);
                fStack_160 = fVar19;
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                pcVar13 = (char *)thunk_FUN_00d32ed4(&uStack_130,*(undefined8 *)(lVar12 + 0x80));
                puVar7 = StringLiteral_13518;
                if (*pcVar13 != '\0') {
                  FUN_01347408(&uStack_130,&local_220,*(undefined8 *)StringLiteral_13518);
                  fVar19 = local_220._4_4_;
                  FUN_01347408(&uStack_130,&local_220,*(undefined8 *)puVar7);
                  fVar20 = fStack_218;
                  FUN_01347408(&uStack_130,&local_220,*(undefined8 *)puVar7);
                  fVar22 = fStack_214 / -100.0;
                  FUN_01347408(&uStack_130,&local_220,*(undefined8 *)puVar7);
                  fVar21 = local_210;
                  FUN_01347408(&uStack_130,&local_220,*(undefined8 *)puVar7);
                  fVar9 = fStack_20c;
                  FUN_01347408(&uStack_130,&local_220,*(undefined8 *)puVar7);
                  local_224 = (float)local_220;
                  fStack_218 = 0.0;
                  fStack_214 = 0.0;
                  local_210 = 0.0;
                  fStack_20c = 0.0;
                  local_220 = 0;
                  uStack_208 = 0;
                  local_22c = fVar21 / 100.0;
                  local_228 = fVar9 / 100.0;
                  local_224 = local_224 / -100.0;
                  local_238 = fVar19 / 100.0;
                  local_234 = fVar20 / 100.0;
                  local_230 = fVar22;
                  FUN_01347274(&local_220,&local_238,*(undefined8 *)StringLiteral_3839);
                  uStack_11c = CONCAT44(uStack_208,fStack_20c);
                  fStack_120 = local_210;
                  fStack_128 = fStack_218;
                  local_124 = fStack_214;
                  uStack_130 = local_220;
                }
                lVar12 = *(long *)(*(long *)
                                    Method_System_Collections_Generic_List<Attribute>_get_Count__ +
                                  0x20);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                pcVar13 = (char *)thunk_FUN_00d32ed4(&local_144,*(undefined8 *)(lVar12 + 0x80));
                puVar7 = StringLiteral_11835;
                if (*pcVar13 != '\0') {
                  FUN_01347408(&local_144,&local_220,*(undefined8 *)StringLiteral_11835);
                  fVar20 = fStack_218;
                  FUN_01347408(&local_144,&local_220,*(undefined8 *)puVar7);
                  fVar21 = local_220._4_4_ / 100.0;
                  FUN_01347408(&local_144,&local_220,*(undefined8 *)puVar7);
                  fVar19 = (float)local_220;
                  FUN_01347408(&local_144,&local_220,*(undefined8 *)puVar7);
                  local_a4 = fStack_214;
                  local_220 = 0;
                  fStack_218 = 0.0;
                  fStack_214 = 0.0;
                  local_210 = 0.0;
                  local_a8 = fVar19 / -100.0;
                  local_a4 = local_a4 / 100.0;
                  local_b0 = fVar20 / -100.0;
                  local_ac = fVar21;
                  FUN_01347274(&local_220,&local_b0,
                               *(undefined8 *)Method_System_Collections_Generic_List<Ray>__ctor__);
                  uStack_13c = CONCAT44(fStack_214,fStack_218);
                  local_134 = local_210;
                  local_144 = local_220;
                }
                if (local_110 != 0) {
                  iVar17 = 0;
                  while (iVar17 < *(int *)(local_110 + 0x18)) {
                    FUN_0132138c(local_110,iVar17,&local_220,*(undefined8 *)puVar6);
                    if (local_110 == 0) goto LAB_015a0cc8;
                    local_220 = CONCAT44((float)(local_220 >> 0x20) / (float)((ulong)uVar3 >> 0x20),
                                         (float)local_220 / (float)uVar3);
                    FUN_0132149c(local_110,iVar17,&local_220,*(undefined8 *)puVar5);
                    iVar17 = iVar17 + 1;
                    if (local_110 == 0) goto LAB_015a0cc8;
                  }
                  FUN_01324d60(local_110,*(undefined8 *)StringLiteral_4635);
                }
                lVar12 = *(long *)(*(long *)
                                    Method_UnityEngine_UIElements_CommandEventBase<ExecuteCommandEvent>_get_commandName__
                                  + 0x20);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
                if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                  lVar12 = FUN_00d5941c();
                }
                pcVar13 = (char *)thunk_FUN_00d32ed4(auStack_108,*(undefined8 *)(lVar12 + 0x80));
                if (*pcVar13 != '\0') {
                  FUN_01347408(auStack_108,&local_220,*(undefined8 *)puVar4);
                  if (local_220 == 0) goto LAB_015a0cc8;
                  lVar12 = 0;
                  uVar18 = 0;
                  while (iVar17 = *(int *)(local_220 + 0x18),
                        FUN_01347408(auStack_108,&local_220,*(undefined8 *)puVar4),
                        (long)uVar18 < (long)iVar17) {
                    if (local_220 == 0) goto LAB_015a0cc8;
                    if (*(uint *)(local_220 + 0x18) <= uVar18) {
LAB_015a0ccc:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    lVar1 = local_220 + lVar12;
                    fVar19 = *(float *)(lVar1 + 0x20);
                    fVar20 = *(float *)(lVar1 + 0x24);
                    uVar2 = *(undefined4 *)(lVar1 + 0x28);
                    FUN_01347408(auStack_108,&local_220,*(undefined8 *)puVar4);
                    if (local_220 == 0) goto LAB_015a0cc8;
                    if (*(uint *)(local_220 + 0x18) <= uVar18) goto LAB_015a0ccc;
                    lVar1 = local_220 + lVar12;
                    *(float *)(lVar1 + 0x20) = -fVar20;
                    *(undefined4 *)(lVar1 + 0x24) = uVar2;
                    *(float *)(lVar1 + 0x28) = -fVar19;
                    uVar18 = uVar18 + 1;
                    lVar12 = lVar12 + 0xc;
                    FUN_01347408(auStack_108,&local_220,*(undefined8 *)puVar4);
                    if (local_220 == 0) goto LAB_015a0cc8;
                  }
                  FUN_010afef0(CONCAT44(fStack_214,fStack_218),*(undefined8 *)StringLiteral_8053);
                  puVar15 = (undefined8 *)StringLiteral_2682;
                }
              }
              memcpy(auStack_2d0,auStack_188,0x98);
              FUN_0132149c(lVar11,iVar16,auStack_2d0,*(undefined8 *)StringLiteral_4573);
              iVar16 = iVar16 + 1;
            } while (iVar16 < *(int *)(lVar11 + 0x18));
          }
          local_2e0 = lVar11;
          uStack_308 = uStack_d8;
          local_310 = local_e0;
          uStack_2f8 = uStack_c8;
          uStack_300 = local_d0;
          uStack_318 = uStack_e8;
          local_320 = local_f0;
          uStack_2e8 = uStack_b8;
          local_2f0 = local_c0;
          FUN_0132149c(lVar10,iVar14,&local_320,*(undefined8 *)StringLiteral_8586);
          iVar14 = iVar14 + 1;
        } while (iVar14 < *(int *)(lVar10 + 0x18));
      }
      auVar23._0_8_ = uVar8 & 0xffffffff00000000;
      auVar23._8_8_ = lVar10;
      return auVar23;
    }
  }
LAB_015a0cc8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


