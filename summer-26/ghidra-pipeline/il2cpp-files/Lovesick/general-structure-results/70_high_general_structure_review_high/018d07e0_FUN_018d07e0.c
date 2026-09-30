/*
FUNCTION_NAME: FUN_018d07e0
ENTRY_POINT: 018d07e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
FUN_018d07e0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long local_68;
  undefined *puVar15;
  
  puVar15 = Method_Obi_ObiNativeList<Edge>_Dispose__;
  if ((DAT_03779a24 & 1) == 0) {
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<SystemVoipState>_get_Data__);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000093A_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_EventBase<FocusOutEvent>_TypeInfo);
    thunk_FUN_00d48444(Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_<ReadStateThresholds>b__21_2__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ValueTuple<object,_ValueTuple<Type,_int>>>_Dispose__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Edge>_Dispose__);
    thunk_FUN_00d48444(System_Xml_XmlCachedStream_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_Vector2Int>_get_Current__
                      );
    DAT_03779a24 = 1;
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
  if ((lVar8 == 0) || (FUN_017b46ec(lVar8,0), param_2 == (long *)0x0)) goto LAB_018d0c9c;
  iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar7 == 0xb) {
    return 0;
  }
  *(undefined8 *)(lVar8 + 0x10) = 0;
  FUN_01808c00(param_2,0);
  iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  puVar5 = Method_Oculus_Platform_Message<SystemVoipState>_get_Data__;
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<int,_Vector2Int>_get_Current__;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  puVar2 = System_Xml_XmlCachedStream_TypeInfo;
  puVar15 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000093A_PostfixBurstDelegate_var
  ;
  if (iVar7 == 4) {
    lVar19 = 0;
    plVar18 = (long *)0x0;
    do {
      plVar9 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (plVar9 == (long *)0x0) goto LAB_018d0c9c;
      uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      uVar11 = FUN_015fe560(uVar10,*(undefined8 *)puVar2,5,0);
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN_015fe560(uVar10,*(undefined8 *)puVar4,5,0);
        if ((uVar11 & 1) == 0) {
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar13 = FUN_01731954(0);
          uVar14 = thunk_FUN_00d48444(StringLiteral_2838);
          goto LAB_018d0d1c;
        }
        FUN_01808c00(param_2,0);
        iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        if (iVar7 != 2) {
          uVar10 = thunk_FUN_00d48444(StringLiteral_10525);
          goto LAB_018d0d34;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar18 = (long *)FUN_018b8dec(param_2,0);
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo +
                           300);
          if ((*(byte *)(*plVar18 + 300) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar18);
          }
        }
      }
      else {
        FUN_01808c00(param_2,0);
        lVar19 = *(long *)puVar5;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar19 = *(long *)puVar5;
        }
        if (**(long **)(lVar19 + 0xb8) == 0) goto LAB_018d0c9c;
        FUN_013c9004(**(long **)(lVar19 + 0xb8),param_3,&local_68,
                     *(undefined8 *)
                      Method_Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_<ReadStateThresholds>b__21_2__
                    );
        lVar19 = local_68;
        plVar9 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        if (plVar9 == (long *)0x0) goto LAB_018d0c9c;
        uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        *(undefined8 *)(lVar8 + 0x10) = uVar10;
        if (lVar19 == 0) goto LAB_018d0c9c;
        lVar20 = *(long *)(lVar8 + 0x18);
        uVar10 = *(undefined8 *)(lVar19 + 0x18);
        if (lVar20 == 0) {
          lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                       UnityEngine_UIElements_EventBase<FocusOutEvent>_TypeInfo);
          if (lVar20 == 0) goto LAB_018d0c9c;
          FUN_012d239c(lVar20,lVar8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<ValueTuple<object,_ValueTuple<Type,_int>>>_Dispose__
                       ,0);
          *(long *)(lVar8 + 0x18) = lVar20;
        }
        FUN_010ded18(uVar10,lVar20,&local_68,*(undefined8 *)puVar15);
        lVar19 = local_68;
        if (local_68 == 0) {
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar13 = FUN_01731954(0);
          FUN_00ac2be8(lVar8);
          uVar10 = *(undefined8 *)(lVar8 + 0x10);
          puVar15 = PTR_DAT_033ef490;
          goto FUN_018d0cdc;
        }
      }
      FUN_01808c00(param_2,0);
      iVar7 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      puVar6 = StringLiteral_3033;
    } while (iVar7 == 4);
    if (lVar19 == 0) goto LAB_018d0d6c;
    if (*(long *)(lVar19 + 0x20) == 0) {
LAB_018d0c9c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,
                                  *(undefined4 *)(*(long *)(lVar19 + 0x20) + 0x18));
    lVar20 = *(long *)(lVar19 + 0x20);
    if (lVar20 == 0) goto LAB_018d0c9c;
    if ((plVar18 != (long *)0x0) || (*(long *)(lVar20 + 0x18) == 0)) {
      if (plVar18 != (long *)0x0) {
        iVar7 = FUN_018a5254(plVar18,0);
        if (iVar7 != *(int *)(lVar20 + 0x18)) {
          thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
          FUN_00acb0a4();
          uVar13 = FUN_01731954(0);
          FUN_00ac2be8(lVar8);
          uVar10 = *(undefined8 *)(lVar8 + 0x10);
          puVar15 = Method_System_String_Equals__;
FUN_018d0cdc:
          uVar14 = thunk_FUN_00d48444(puVar15);
          goto LAB_018d0d1c;
        }
        iVar7 = FUN_018a5254(plVar18,0);
        if (0 < iVar7) {
          lVar8 = 4;
          do {
            lVar20 = FUN_0189d8e0(plVar18,lVar8 - 4U & 0xffffffff,0);
            lVar16 = *(long *)(lVar19 + 0x20);
            if (lVar16 == 0) goto LAB_018d0c9c;
            uVar17 = (uint)(lVar8 - 4U);
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_018d0ca0;
            plVar12 = *(long **)(lVar16 + lVar8 * 8);
            if (((plVar12 == (long *)0x0) ||
                (uVar10 = (**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260)),
                lVar20 == 0)) ||
               (lVar20 = FUN_018b8b80(lVar20,uVar10,param_5,0), plVar9 == (long *)0x0))
            goto LAB_018d0c9c;
            if ((lVar20 != 0) &&
               (lVar16 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar9 + 0x40)), lVar16 == 0))
            goto LAB_018d0d60;
            if (*(uint *)(plVar9 + 3) <= uVar17) goto LAB_018d0ca0;
            plVar9[lVar8] = lVar20;
            iVar7 = FUN_018a5254(plVar18,0);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 + -4 < iVar7);
        }
      }
      plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)puVar6,1);
      if (plVar18 != (long *)0x0) {
        if ((plVar9 != (long *)0x0) &&
           (lVar8 = thunk_FUN_00d6225c(plVar9,*(undefined8 *)(*plVar18 + 0x40)), lVar8 == 0)) {
LAB_018d0d60:
          uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar10,0);
        }
        if ((int)plVar18[3] == 0) {
LAB_018d0ca0:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar18[4] = (long)plVar9;
        if (*(long *)(lVar19 + 0x30) != 0) {
          uVar10 = FUN_018580a8(*(long *)(lVar19 + 0x30),plVar18,0);
          return uVar10;
        }
      }
      goto LAB_018d0c9c;
    }
                    /* try { // try from 018d0da4 to 019d0da7 has its CatchHandler @ 018d0db0 */
                    /* try { // try from 018d0da8 to 019d0db3 has its CatchHandler @ 018d0c34 */
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 018d0da4 with catch @ 018d0db0
                        */
    FUN_00acb0a4();
    uVar13 = FUN_01731954(0);
    uVar14 = thunk_FUN_00d48444(
                               Method_UnityEngine_TextCore_Text_SpriteAsset_<>c_<SortGlyphTable>b__37_0__
                               );
    puVar15 = Method_System_Collections_Generic_Dictionary_Enumerator<int,_Vector2Int>_get_Current__
    ;
  }
  else {
LAB_018d0d6c:
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    FUN_00acb0a4();
    uVar13 = FUN_01731954(0);
                    /* try { // try from 018d0d90 to 019d0d9f has its CatchHandler @ 018d0da0 */
    uVar14 = thunk_FUN_00d48444(
                               Field_<PrivateImplementationDetails>_92EBF6DABBB94810FE3649C533C50743CA0DDA7B28424BAC1CAEC12CEA1CB6A4
                               );
    puVar15 = System_Xml_XmlCachedStream_TypeInfo;
                    /* catch() { ... } // from try @ 018d0d0c with catch @ 018d0da0
                       catch() { ... } // from try @ 018d0d90 with catch @ 018d0da0 */
  }
  uVar10 = thunk_FUN_00d48444(puVar15);
LAB_018d0d1c:
  uVar10 = FUN_018651d4(uVar14,uVar13,uVar10,0);
LAB_018d0d34:
  uVar10 = FUN_01801b58(param_2,uVar10,0);
  uVar13 = thunk_FUN_00d48444(StringLiteral_3052);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar10,uVar13);
}


