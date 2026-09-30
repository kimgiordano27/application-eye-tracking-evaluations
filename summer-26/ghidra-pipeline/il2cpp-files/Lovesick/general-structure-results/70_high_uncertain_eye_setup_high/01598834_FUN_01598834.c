/*
FUNCTION_NAME: FUN_01598834
ENTRY_POINT: 01598834
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01598834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                 undefined8 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_bc;
  double local_a8;
  
  if ((DAT_03777d39 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Dynamic_Utils_ContractUtils_RequiresArrayRange<__Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
    thunk_FUN_00d48444(Method_TuneTargetBasic_<Complete>b__23_0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
    thunk_FUN_00d48444(StringLiteral_5359);
    thunk_FUN_00d48444(StringLiteral_1652);
    thunk_FUN_00d48444(StringLiteral_13043);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlBaseConverter_StringToHexBinary__);
    thunk_FUN_00d48444(PTR_DAT_033ede68);
    thunk_FUN_00d48444(StringLiteral_2460);
    thunk_FUN_00d48444(UnityEngine_UIElements_TextElement_TypeInfo);
    DAT_03777d39 = 1;
  }
  lVar13 = FUN_0268a8a8(5,0);
  if (lVar13 != 0) {
    FUN_0268b75c(lVar13,*(undefined8 *)StringLiteral_13043,0);
    lVar14 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                       (lVar13,0);
    if (lVar14 != 0) {
      FUN_026a0040(lVar14,param_9,0,0);
      lVar14 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                         (lVar13,0);
      if (lVar14 != 0) {
        FUN_0269f750(param_1,param_2,param_3,lVar14,0);
        lVar14 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                           (lVar13,0);
        puVar8 = 
        Method_System_Dynamic_Utils_ContractUtils_RequiresArrayRange<__Il2CppFullySharedGenericType>__
        ;
        puVar7 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        if (lVar14 != 0) {
          FUN_0269f994(param_4,param_5,param_6,param_7,lVar14,0);
          FUN_010e58e8(lVar13,&local_a8,*(undefined8 *)puVar8);
          dVar6 = local_a8;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_0268c1d0(dVar6,0);
          uVar15 = FUN_0268b4e0(*(undefined8 *)(param_8 + 0xf8),0,0);
          if ((uVar15 & 1) != 0) {
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
            puVar11 = 
            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
            ;
            puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
            puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
            puVar8 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
            puVar7 = OVRPlugin_OVRP_1_79_0_TypeInfo;
            if (lVar14 == 0) goto LAB_01599140;
            FUN_02669c18(lVar14,0);
            *(long *)(param_8 + 0xf8) = lVar14;
            lVar14 = FUN_00da4fb8(*(undefined8 *)puVar11,200);
            lVar16 = FUN_00da4fb8(*(undefined8 *)puVar10,200);
            lVar17 = FUN_00da4fb8(*(undefined8 *)puVar7,200);
            lVar18 = FUN_00da4fb8(*(undefined8 *)puVar11,200);
            lVar19 = FUN_00da4fb8(*(undefined8 *)puVar8,200);
            lVar20 = FUN_00da4fb8(*(undefined8 *)puVar9,300);
            puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            dVar6 = DAT_028aa048;
            fVar5 = DAT_028aa040;
            local_bc = 0;
            iVar27 = 0;
            uVar23 = 0;
            uVar24 = 0;
            fVar33 = -0.5;
            do {
              bVar12 = (uVar24 & 1) == 0;
              iVar21 = 0;
              fVar34 = fVar33 + fVar5;
              do {
                if (bVar12) {
                  iVar26 = 0;
                  fVar29 = (float)iVar21 * fVar5 + -0.5;
                  do {
                    fVar31 = fVar34;
                    fVar32 = fVar29 + 0.0;
                    if (((iVar26 != 3) && (fVar32 = fVar29 + fVar5, iVar26 != 2)) &&
                       (fVar31 = fVar33, fVar32 = fVar29, iVar26 == 1)) {
                      fVar31 = fVar33 + 0.0;
                      fVar32 = fVar29 + fVar5;
                    }
                    if (lVar14 == 0) goto LAB_01599140;
                    uVar1 = iVar27 + iVar26;
                    if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_0159913c;
                    lVar25 = (long)(int)uVar1;
                    lVar22 = lVar14 + lVar25 * 0xc;
                    *(float *)(lVar22 + 0x20) = fVar31;
                    *(float *)(lVar22 + 0x24) = fVar32;
                    *(undefined4 *)(lVar22 + 0x28) = 0x3a83126f;
                    if (DAT_03774d77 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                        );
                      DAT_03774d77 = '\x01';
                    }
                    if (lVar16 == 0) goto LAB_01599140;
                    if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_0159913c;
                    *(undefined8 *)(lVar16 + lVar25 * 8 + 0x20) =
                         **(undefined8 **)
                           (*(long *)
                             Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                           + 0xb8);
                    dVar28 = modf(0.0,&local_a8);
                    fVar31 = 0.0;
                    if (dVar28 == 0.5) {
                      fVar31 = (float)local_a8;
                      if (((long)local_a8 & 1U) != 0) {
                        fVar31 = (float)local_a8 + 1.0;
                      }
                    }
                    dVar28 = modf(0.0,&local_a8);
                    fVar32 = 0.0;
                    if (dVar28 == 0.5) {
                      fVar32 = (float)local_a8;
                      if (((long)local_a8 & 1U) != 0) {
                        fVar32 = (float)local_a8 + 1.0;
                      }
                    }
                    dVar28 = modf(0.0,&local_a8);
                    if (dVar28 == 0.5) {
                      fVar30 = (float)local_a8;
                      if (((long)local_a8 & 1U) != 0) {
                        fVar30 = (float)local_a8 + 1.0;
                      }
                    }
                    else {
                      fVar30 = 0.0;
                    }
                    dVar28 = modf(dVar6,&local_a8);
                    if (dVar28 == 0.5) {
                      fVar4 = (float)local_a8;
                      if (((long)local_a8 & 1U) != 0) {
                        fVar4 = (float)local_a8 + 1.0;
                      }
                    }
                    else {
                      fVar4 = 255.0;
                    }
                    if (lVar17 == 0) goto LAB_01599140;
                    if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_0159913c;
                    *(uint *)(lVar17 + lVar25 * 4 + 0x20) =
                         (int)fVar31 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                         ((int)fVar30 & 0xffU) << 0x10 | (int)fVar4 << 0x18;
                    if (DAT_03775377 == '\0') {
                      thunk_FUN_00d48444(puVar7);
                      DAT_03775377 = '\x01';
                    }
                    if (lVar18 == 0) goto LAB_01599140;
                    if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_0159913c;
                    lVar22 = lVar18 + lVar25 * 0xc;
                    uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x50);
                    *(undefined8 *)(lVar22 + 0x20) =
                         *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x48);
                    *(undefined4 *)(lVar22 + 0x28) = uVar2;
                    if (DAT_03775438 == '\0') {
                      thunk_FUN_00d48444(puVar7);
                      DAT_03775438 = '\x01';
                    }
                    if (lVar19 == 0) goto LAB_01599140;
                    if (*(uint *)(lVar19 + 0x18) <= uVar1) goto LAB_0159913c;
                    iVar26 = iVar26 + 1;
                    lVar22 = lVar19 + lVar25 * 0x10;
                    uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x44);
                    *(undefined8 *)(lVar22 + 0x20) =
                         *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x3c);
                    *(undefined4 *)(lVar22 + 0x28) = uVar2;
                    *(undefined4 *)(lVar22 + 0x2c) = 0;
                  } while (iVar26 != 4);
                  if (lVar20 == 0) goto LAB_01599140;
                  uVar1 = *(uint *)(lVar20 + 0x18);
                  if (uVar1 <= uVar23) {
LAB_0159913c:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  uVar3 = local_bc << 2;
                  *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20) = uVar3;
                  if (uVar1 <= uVar23 + 1) goto LAB_0159913c;
                  *(uint *)(lVar20 + (long)(int)(uVar23 + 1) * 4 + 0x20) = uVar3 | 2;
                  if (uVar1 <= uVar23 + 2) goto LAB_0159913c;
                  *(uint *)(lVar20 + (long)(int)(uVar23 + 2) * 4 + 0x20) = uVar3 | 1;
                  if (uVar1 <= uVar23 + 3) goto LAB_0159913c;
                  *(uint *)(lVar20 + (long)(int)(uVar23 + 3) * 4 + 0x20) = uVar3;
                  if (uVar1 <= uVar23 + 4) goto LAB_0159913c;
                  *(uint *)(lVar20 + (long)(int)(uVar23 + 4) * 4 + 0x20) = uVar3 | 3;
                  if (uVar1 <= uVar23 + 5) goto LAB_0159913c;
                  *(uint *)(lVar20 + (long)(int)(uVar23 + 5) * 4 + 0x20) = uVar3 | 2;
                  uVar23 = uVar23 + 6;
                  iVar27 = iVar27 + 4;
                  local_bc = local_bc + 1;
                }
                iVar21 = iVar21 + 1;
                bVar12 = (bool)(bVar12 ^ 1);
              } while (iVar21 != 10);
              uVar24 = uVar24 + 1;
              fVar33 = fVar34;
            } while (uVar24 != 10);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266ed50(*(long *)(param_8 + 0xf8),0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0268b75c(*(long *)(param_8 + 0xf8),*(undefined8 *)StringLiteral_2460,0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266b9c4(*(long *)(param_8 + 0xf8),lVar14,0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266bbc8(*(long *)(param_8 + 0xf8),lVar16,0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266c1dc(*(long *)(param_8 + 0xf8),lVar17,0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266db2c(*(long *)(param_8 + 0xf8),lVar20,0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266ba70(*(long *)(param_8 + 0xf8),lVar18,0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266bb1c(*(long *)(param_8 + 0xf8),lVar19,0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266ee8c(*(long *)(param_8 + 0xf8),0);
            if (*(long *)(param_8 + 0xf8) == 0) goto LAB_01599140;
            FUN_0266ef88(*(long *)(param_8 + 0xf8),0);
          }
          FUN_010e58e8(lVar13,&local_a8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__
                      );
          puVar7 = Method_TuneTargetBasic_<Complete>b__23_0__;
          if (local_a8 != 0.0) {
            FUN_02677530(local_a8,*(undefined8 *)(param_8 + 0xf8),0);
            FUN_010e58e8(lVar13,&local_a8,*(undefined8 *)puVar7);
            if ((local_a8 != 0.0) &&
               (lVar13 = FUN_02668954(local_a8,0), puVar9 = StringLiteral_5359,
               puVar8 = StringLiteral_1652,
               puVar7 = Method_System_Xml_Schema_XmlBaseConverter_StringToHexBinary__, lVar13 != 0))
            {
              FUN_0267e49c(lVar13,*(undefined8 *)PTR_DAT_033ede68,
                           *(undefined8 *)UnityEngine_UIElements_TextElement_TypeInfo,0);
              FUN_0267f114(lVar13,*(undefined4 *)(param_8 + 0xa0),5,0);
              FUN_0267f114(lVar13,*(undefined4 *)(param_8 + 0xa4),1,0);
              FUN_0267f114(lVar13,*(undefined4 *)(param_8 + 0xa8),0,0);
              FUN_0267f114(lVar13,*(undefined4 *)(param_8 + 0xac),2,0);
              FUN_0267e350(lVar13,*(undefined8 *)puVar7,0);
              FUN_0267e30c(lVar13,*(undefined8 *)puVar9,0);
              FUN_0267e350(lVar13,*(undefined8 *)puVar8,0);
              FUN_0267e28c(lVar13,3000,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_01599140:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


