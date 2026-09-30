/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$LabelToPrefab
ENTRY_POINT: 01467c78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


long Meta_XR_MRUtilityKit_AnchorPrefabSpawner__LabelToPrefab(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar15;
  int iStack0000000000000004;
  long *in_stack_00000008;
  
  thunk_FUN_00d48444(StringLiteral_10463);
  thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<Vertex>_Dispose__);
  thunk_FUN_00d48444(System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo);
  thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                    );
  thunk_FUN_00d48444(PTR_DAT_033ef540);
  thunk_FUN_00d48444(StringLiteral_3757);
  thunk_FUN_00d48444(Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033f17f8);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<STMTextContainer>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xac2) = 1;
  iStack0000000000000004 = 0;
  lVar10 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar10 != 0) {
    FUN_01298da0(lVar10,*(undefined8 *)StringLiteral_10463);
    puVar8 = Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__;
    puVar7 = Method_UnityEngine_Events_UnityEvent<STMTextContainer>__ctor__;
    puVar6 = Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__;
    puVar5 = System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo;
    puVar4 = UnityEngine_Events_UnityAction<string,_string>_TypeInfo;
    puVar3 = PTR_DAT_033f17f8;
    iStack0000000000000004 = 0;
    if ((unaff_x19 != 0) && (lVar11 = *(long *)(unaff_x19 + 0x60), lVar11 != 0)) {
      while( true ) {
        if (*(int *)(lVar11 + 0x18) <= iStack0000000000000004) {
          return lVar10;
        }
        FUN_0132138c(lVar11,iStack0000000000000004,&stack0x00000008,
                     *(undefined8 *)StringLiteral_3757);
        plVar9 = in_stack_00000008;
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                     Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
        if (((lVar11 == 0) ||
            (FUN_01320e50(lVar11,*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                         ), plVar9 == (long *)0x0)) || (lVar13 = plVar9[8], lVar13 == 0)) break;
        uVar15 = 0;
        while ((int)uVar15 < (int)*(uint *)(lVar13 + 0x18)) {
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01467ee4;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) {
LAB_01467f0c:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar14 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x18);
          if (lVar14 == 0) goto LAB_01467ee4;
          uVar2 = *(uint *)(lVar13 + (long)(int)uVar15 * 4 + 0x20);
          if (*(uint *)(lVar14 + 0x18) <= uVar2) goto LAB_01467f0c;
          lVar13 = *(long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
          if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x10), lVar13 == 0)) ||
             (lVar13 = *(long *)(lVar13 + 0x10), lVar13 == 0)) goto LAB_01467ee4;
          FUN_010e58e8(lVar13,&stack0x00000008,*(undefined8 *)puVar5);
          if (in_stack_00000008 != (long *)0x0) {
            lVar13 = *in_stack_00000008;
            bVar1 = *(byte *)(*(long *)puVar3 + 300);
            if ((*(byte *)(lVar13 + 300) < bVar1) ||
               (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
              bVar1 = *(byte *)(*(long *)puVar6 + 300);
              if ((*(byte *)(lVar13 + 300) < bVar1) ||
                 (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
              goto LAB_01467e8c;
            }
            FUN_00ad61c4(lVar11,in_stack_00000008,*(undefined8 *)puVar8);
          }
LAB_01467e8c:
          lVar13 = plVar9[8];
          uVar15 = uVar15 + 1;
          if (lVar13 == 0) goto LAB_01467ee4;
        }
        uVar12 = FUN_0176eb1c(&stack0x00000004,0);
        uVar12 = FUN_015f5b28(*(undefined8 *)puVar7,uVar12,0);
        FUN_0129a054(lVar10,uVar12,lVar11,*(undefined8 *)puVar4);
        iStack0000000000000004 = iStack0000000000000004 + 1;
        lVar11 = *(long *)(unaff_x19 + 0x60);
        if (lVar11 == 0) break;
      }
    }
  }
LAB_01467ee4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


