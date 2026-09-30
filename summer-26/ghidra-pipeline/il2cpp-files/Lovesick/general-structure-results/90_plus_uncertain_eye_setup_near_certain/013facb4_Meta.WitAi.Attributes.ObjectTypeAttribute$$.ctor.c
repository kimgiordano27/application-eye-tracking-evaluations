/*
FUNCTION_NAME: Meta.WitAi.Attributes.ObjectTypeAttribute$$.ctor
ENTRY_POINT: 013facb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_WitAi_Attributes_ObjectTypeAttribute___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  puVar11 = *(undefined8 **)(unaff_x20 + 0xc0);
  if ((*(byte *)(unaff_x21 + 0x8e8) & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_Linq_JToken_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1333);
    thunk_FUN_00d48444(StringLiteral_10089);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0ac8);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
                      );
    thunk_FUN_00d48444(RhythmGameStarter_NoteRecorderTargetList_<>c__DisplayClass7_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Linq_JsonLoadSettings_set_DuplicatePropertyNameHandling__
                      );
    *(undefined1 *)(unaff_x21 + 0x8e8) = 1;
  }
  in_stack_00000018 = 0;
  uStack000000000000000c = 0;
  plVar4 = (long *)thunk_FUN_00d62348(*puVar11);
  if (plVar4 != (long *)0x0) {
    FUN_0160aa4c(plVar4,0);
    plVar5 = (long *)FUN_013eae18(param_1,0);
    puVar11 = (undefined8 *)StringLiteral_1333;
    puVar2 = Method_Newtonsoft_Json_Linq_JsonLoadSettings_set_DuplicatePropertyNameHandling__;
    puVar1 = PTR_DAT_033f0ac8;
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x2c) * 0x10 + 0x138);
            goto LAB_013fae00;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar5,*(long *)
                                    Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                            ,0x2c);
LAB_013fae00:
      iVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar3 != 1) {
        puVar11 = (undefined8 *)puVar1;
      }
      uVar7 = FUN_015f5b28(*(undefined8 *)puVar2,*puVar11,0);
      FUN_0160c8e8(plVar4,uVar7,0);
      puVar2 = Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__;
      puVar1 = Newtonsoft_Json_Linq_JToken_TypeInfo;
      if (*(long *)(param_1 + 0x90) != 0) {
        in_stack_00000018 = FUN_02040648(*(long *)(param_1 + 0x90),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
        uVar7 = FUN_0176eb1c(&stack0x0000000c,0);
        uVar7 = FUN_015f5b28(*(undefined8 *)puVar2,uVar7,0);
        FUN_0160c8e8(plVar4,uVar7,0);
        puVar1 = 
        Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
        ;
        if (*(long *)(param_1 + 0x98) != 0) {
          in_stack_00000018 = FUN_02040648(*(long *)(param_1 + 0x98),0);
          uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
          uVar7 = FUN_0176eb1c(&stack0x0000000c,0);
          uVar7 = FUN_015f5b28(*(undefined8 *)puVar1,uVar7,0);
          FUN_0160c8e8(plVar4,uVar7,0);
          puVar1 = RhythmGameStarter_NoteRecorderTargetList_<>c__DisplayClass7_0_TypeInfo;
          if (*(long *)(param_1 + 0xe0) != 0) {
            in_stack_00000018 = FUN_02040648(*(long *)(param_1 + 0xe0),0);
            uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
            uVar7 = FUN_0176eb1c(&stack0x0000000c,0);
            uVar7 = FUN_015f5b28(*(undefined8 *)puVar1,uVar7,0);
            FUN_0160c8e8(plVar4,uVar7,0);
            puVar1 = StringLiteral_10089;
            if (*(long *)(param_1 + 0xe8) != 0) {
              in_stack_00000018 = FUN_02040648(*(long *)(param_1 + 0xe8),0);
              uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
              uVar7 = FUN_0176eb1c(&stack0x0000000c,0);
              uVar7 = FUN_015f5b28(*(undefined8 *)puVar1,uVar7,0);
              FUN_0160c8e8(plVar4,uVar7,0);
              puVar2 = StringLiteral_302;
              puVar1 = 
              Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
              ;
              if (*(long *)(param_1 + 0xf0) != 0) {
                in_stack_00000018 = FUN_02040648(*(long *)(param_1 + 0xf0),0);
                uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
                uVar7 = FUN_0176eb1c(&stack0x0000000c,0);
                uVar7 = FUN_015f5b28(*(undefined8 *)puVar1,uVar7,0);
                FUN_0160c8e8(plVar4,uVar7,0);
                uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar2);
                }
                FUN_02660dac(uVar7,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


