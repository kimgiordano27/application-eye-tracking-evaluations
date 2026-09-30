/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SimplexDistribution$$Distribute
ENTRY_POINT: 014ab554
PROGRAM: Lovesick-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_file_logging_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


long Meta_XR_MRUtilityKit_SceneDecorator_SimplexDistribution__Distribute(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar13;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_00d48444(Method_System_Xml_XmlTextReaderImpl_ReadContentAsBase64__);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteRawValueAsync>d__121>__
                    );
  thunk_FUN_00d48444(UnityEngine_UIElements_EasingFunction_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_12548);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vertex>__ctor__);
  thunk_FUN_00d48444(System_Xml_XmlDownloadManager_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xd0b) = 1;
  puVar2 = StringLiteral_12196;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000020 = 0;
  if (unaff_x21 == (long *)0x0) goto LAB_014ab9d0;
  uVar8 = (**(code **)(*unaff_x21 + 0x1e8))();
  lVar12 = *(long *)puVar1;
  uVar13 = *(undefined8 *)puVar2;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar12);
  }
  puVar2 = StringLiteral_4330;
  uVar13 = FUN_01780344(uVar13,0);
  uVar9 = FUN_01789ac0(uVar8,uVar13,0);
  plVar10 = (long *)UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo;
  if ((uVar9 & 1) == 0) {
LAB_014ab65c:
    puVar3 = StringLiteral_3312;
    uVar8 = (**(code **)(*unaff_x21 + 0x1e8))();
    lVar12 = *(long *)puVar1;
    uVar13 = *(undefined8 *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar12);
    }
    uVar13 = FUN_01780344(uVar13,0);
    uVar9 = FUN_01789ac0(uVar8,uVar13,0);
    plVar10 = (long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteRawValueAsync>d__121>__
    ;
    if ((uVar9 & 1) != 0) {
      if (*(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteRawValueAsync>d__121>__
          == 0) goto LAB_014ab9d0;
      lVar12 = *(long *)(unaff_x19 + 0x10);
      uVar8 = FUN_01604018(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteRawValueAsync>d__121>__
                           ,0);
      if (lVar12 == 0) goto LAB_014ab9d0;
      uVar9 = FUN_0129aa60(lVar12,uVar8,*(undefined8 *)puVar2);
      if ((uVar9 & 1) != 0) goto LAB_014ab6e4;
    }
    plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                        );
    puVar3 = StringLiteral_12548;
    puVar2 = Method_System_Xml_XmlTextReaderImpl_ReadContentAsBase64__;
    puVar1 = System_Xml_XmlDownloadManager_TypeInfo;
    if (plVar10 != (long *)0x0) {
      FUN_0160aa4c(plVar10,0);
      FUN_0160c8e8(plVar10,*(undefined8 *)puVar3,0);
      uVar8 = (**(code **)(*unaff_x21 + 0x1e8))();
      uVar8 = FUN_015f6780(*(undefined8 *)puVar2,uVar8,0);
      FUN_0160c8e8(plVar10,uVar8,0);
      uVar8 = (**(code **)(*unaff_x21 + 0x1d8))();
      uVar8 = FUN_015f5b28(*(undefined8 *)puVar1,uVar8,0);
      FUN_0160c8e8(plVar10,uVar8,0);
      puVar1 = Method_System_Linq_Expressions_Interpreter_AddOvfInstruction_AddOvfUInt32_Run__;
      if ((*(long *)(unaff_x19 + 0x10) != 0) &&
         (lVar12 = FUN_012998a8(*(long *)(unaff_x19 + 0x10),
                                *(undefined8 *)
                                 Method_System_Linq_Expressions_Interpreter_AddOvfInstruction_AddOvfUInt32_Run__
                               ),
         puVar3 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__,
         puVar2 = UnityEngine_UIElements_EasingFunction_TypeInfo, lVar12 != 0)) {
        in_stack_00000018._4_4_ = FUN_01311ac4(lVar12,*(undefined8 *)System_Xml_XmlNameEx_TypeInfo);
        uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3,(long)&stack0x00000018 + 4);
        uVar8 = FUN_015f6780(*(undefined8 *)puVar2,uVar8,0);
        FUN_0160c8e8(plVar10,uVar8,0);
        if ((*(long *)(unaff_x19 + 0x10) != 0) &&
           (lVar12 = FUN_012998a8(*(long *)(unaff_x19 + 0x10),*(undefined8 *)puVar1),
           puVar7 = StringLiteral_13166, puVar6 = StringLiteral_6631, puVar5 = StringLiteral_720,
           puVar4 = Method_System_Xml_Schema_XmlBaseConverter_Int32ToSByte__,
           puVar3 = Method_System_Collections_Generic_List<Vertex>__ctor__,
           puVar2 = PTR_DAT_033f5f30, puVar1 = PTR_DAT_033ec588, lVar12 != 0)) {
          FUN_01311764();
          in_stack_00000028 = in_stack_00000008;
          in_stack_00000020 = in_stack_00000000;
          in_stack_00000030 = in_stack_00000010;
          do {
            uVar9 = FUN_012c2b80(&stack0x00000020,*(undefined8 *)puVar7);
            if ((uVar9 & 1) == 0) {
              FUN_012c2b7c(&stack0x00000020,*(undefined8 *)puVar1);
              uVar8 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
              if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)puVar5);
              }
              FUN_014dee34(uVar8,0,0);
              return 0;
            }
            uVar8 = FUN_00bc357c(&stack0x00000020,*(undefined8 *)puVar4);
            if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01299bc0(*(long *)(unaff_x19 + 0x10),uVar8);
            if (in_stack_00000000 == 0) {
              uVar13 = *(undefined8 *)puVar3;
            }
            else {
              if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01299bc0(*(long *)(unaff_x19 + 0x10),uVar8);
              if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              plVar11 = (long *)thunk_FUN_00d93c64(in_stack_00000000,0);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              uVar13 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            }
            uVar8 = FUN_0160073c(*(undefined8 *)puVar6,uVar8,*(undefined8 *)puVar2,uVar13,0);
            FUN_0160c8e8(plVar10,uVar8,0);
          } while( true );
        }
      }
    }
  }
  else {
    if (*(long *)UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo == 0) goto LAB_014ab9d0;
    lVar12 = *(long *)(unaff_x19 + 0x10);
    uVar8 = FUN_01604018(*(long *)UnityEngine_Rendering_AtlasAllocatorDynamic_TypeInfo,0);
    if (lVar12 == 0) goto LAB_014ab9d0;
    uVar9 = FUN_0129aa60(lVar12,uVar8,*(undefined8 *)puVar2);
    if ((uVar9 & 1) == 0) goto LAB_014ab65c;
LAB_014ab6e4:
    if (*plVar10 != 0) {
      lVar12 = *(long *)(unaff_x19 + 0x10);
      uVar8 = FUN_01604018(*plVar10,0);
      if (lVar12 != 0) {
        FUN_01299bc0(lVar12,uVar8);
        return in_stack_00000000;
      }
    }
  }
LAB_014ab9d0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


