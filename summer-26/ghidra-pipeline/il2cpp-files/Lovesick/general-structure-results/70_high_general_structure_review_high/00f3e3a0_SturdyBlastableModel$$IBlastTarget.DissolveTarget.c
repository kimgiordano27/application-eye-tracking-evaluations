/*
FUNCTION_NAME: SturdyBlastableModel$$IBlastTarget.DissolveTarget
ENTRY_POINT: 00f3e3a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 SturdyBlastableModel__IBlastTarget_DissolveTarget(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  float *pfVar14;
  uint *puVar15;
  undefined4 *puVar16;
  long lVar17;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x1b8));
  thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
  thunk_FUN_00d48444(PTR_DAT_033f2f78);
  thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
  thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
  thunk_FUN_00d48444(
                    System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                    );
  thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                    );
  thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    );
  thunk_FUN_00d48444(Oculus_Platform_IVoipPCMSource_TypeInfo);
  thunk_FUN_00d48444(System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_232);
  *(undefined1 *)(unaff_x22 + 0x652) = 1;
  if (unaff_x20 == (long *)0x0) goto LAB_00f3ea10;
  uVar9 = thunk_FUN_00d93c64();
  puVar8 = StringLiteral_232;
  puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar2 = Method_System_Data_DataSet_ReadXmlDiffgram__;
  puVar6 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  puVar4 = System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo;
  puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if ((*(long *)(unaff_x21 + 0x10) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x60), lVar17 == 0)) goto LAB_00f3ea10;
  if (*(char *)(lVar17 + 0x48) == '\0') {
LAB_00f3e5a8:
    uVar10 = FUN_00f3de24(uVar9);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_00f3deac(uVar9);
      if ((uVar10 & 1) == 0) {
        uVar10 = FUN_00f3e140(uVar9);
        puVar2 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
        if ((uVar10 & 1) == 0) {
          uVar10 = FUN_00f3e26c(uVar9);
          puVar2 = Oculus_Platform_IVoipPCMSource_TypeInfo;
          if ((uVar10 & 1) == 0) {
            *unaff_x19 = 0;
            plVar12 = (long *)thunk_FUN_00d93c64();
            uVar9 = *(undefined8 *)puVar2;
            if (plVar12 == (long *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
            }
            uVar9 = FUN_015f5b28(uVar9,uVar18,0);
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar8);
            }
            uVar9 = FUN_00f29ae4(uVar9,0);
            return uVar9;
          }
          goto LAB_00f3e520;
        }
        uVar9 = thunk_FUN_00d93c64();
        uVar18 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar6);
        }
        uVar18 = FUN_01780344(uVar18,0);
        uVar10 = FUN_01789ac0(uVar9,uVar18,0);
        puVar3 = System_Runtime_InteropServices_InAttribute_TypeInfo;
        if ((uVar10 & 1) == 0) {
LAB_00f3e84c:
          uVar9 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01780344(uVar9,0);
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar7);
          }
          plVar12 = (long *)FUN_016fbc40();
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if ((lVar17 == 0) || (plVar12 == (long *)0x0)) {
LAB_00f3ea10:
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_033f2f78 + 0x40)) {
LAB_00f3ea1c:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar12);
          }
          puVar13 = (undefined8 *)thunk_FUN_00d624a0(plVar12);
          uVar9 = *puVar13;
        }
        else {
          if (*(long *)(*unaff_x20 + 0x40) !=
              *(long *)(*(long *)System_Runtime_InteropServices_InAttribute_TypeInfo + 0x40))
          goto LAB_00f3ea14;
          pfVar14 = (float *)thunk_FUN_00d624a0();
          if (*pfVar14 == -3.4028235e+38) goto LAB_00f3e84c;
          if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_00f3ea14;
          pfVar14 = (float *)thunk_FUN_00d624a0();
          if (*pfVar14 == 3.4028235e+38) goto LAB_00f3e84c;
          if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_00f3ea14;
          puVar15 = (uint *)thunk_FUN_00d624a0();
          uVar1 = *puVar15;
          if (DAT_03775724 == '\0') {
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                              );
            DAT_03775724 = '\x01';
          }
          puVar5 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if ((uVar1 & 0x7fffffff) == 0x7f800000) goto LAB_00f3e84c;
          if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_00f3ea14;
          puVar15 = (uint *)thunk_FUN_00d624a0();
          uVar1 = *puVar15;
          if (DAT_03774d75 == '\0') {
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                              );
            DAT_03774d75 = '\x01';
          }
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (0x7f800000 < (uVar1 & 0x7fffffff)) goto LAB_00f3e84c;
          if (*(int *)(*(long *)System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo + 0xe0) ==
              0) {
            thunk_FUN_00d32864();
          }
          if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_00f3ea14;
          puVar16 = (undefined4 *)thunk_FUN_00d624a0();
          auVar19 = Newtonsoft_Json_Converters_ExpandoObjectConverter__ReadObject(*puVar16,0);
          uVar9 = FUN_017d1fec(auVar19._0_8_,auVar19._8_8_,0);
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
          if (lVar17 == 0) goto LAB_00f3ea10;
        }
        FUN_00f2a450(uVar9,lVar17,0);
      }
      else {
        uVar9 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01780344(uVar9,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar7);
        }
        plVar12 = (long *)FUN_016fbc40();
        lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if ((lVar17 == 0) || (plVar12 == (long *)0x0)) goto LAB_00f3ea10;
        if (*(long *)(*plVar12 + 0x40) !=
            *(long *)(*(long *)OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo + 0x40))
        goto LAB_00f3ea1c;
        puVar13 = (undefined8 *)thunk_FUN_00d624a0(plVar12);
        FUN_00f2a4bc(lVar17,*puVar13,0);
      }
      *unaff_x19 = lVar17;
      goto LAB_00f3e8f4;
    }
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar17 == 0) goto LAB_00f3ea10;
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)StringLiteral_9958 + 0x40))
    goto LAB_00f3ea14;
    puVar11 = (undefined1 *)thunk_FUN_00d624a0();
    FUN_00f2a3e4(lVar17,*puVar11,0);
  }
  else {
    uVar18 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar18 = FUN_01780344(uVar18,0);
    uVar10 = FUN_01789ac0(uVar9,uVar18,0);
    if ((uVar10 & 1) == 0) {
      uVar18 = *(undefined8 *)
                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
      ;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar18 = FUN_01780344(uVar18,0);
      uVar10 = FUN_01789ac0(uVar9,uVar18,0);
      if ((uVar10 & 1) == 0) goto LAB_00f3e5a8;
    }
LAB_00f3e520:
    uVar9 = *(undefined8 *)puVar5;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar9,0);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar7);
    }
    unaff_x20 = (long *)FUN_016fbc40();
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar17 == 0) goto LAB_00f3ea10;
    if ((unaff_x20 != (long *)0x0) && (*unaff_x20 != *(long *)puVar3)) {
LAB_00f3ea14:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(unaff_x20);
    }
    FUN_00f2a528(lVar17,unaff_x20,0);
  }
  *unaff_x19 = lVar17;
LAB_00f3e8f4:
  lVar17 = *(long *)puVar8;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar8;
  }
  return *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8);
}


