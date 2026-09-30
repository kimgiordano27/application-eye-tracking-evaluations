/*
FUNCTION_NAME: Meta.WitAi.Attributes.ObjectTypeAttribute$$VerifyType
ENTRY_POINT: 013fad00
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


void Meta_WitAi_Attributes_ObjectTypeAttribute__VerifyType(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  thunk_FUN_00d48444(StringLiteral_10089);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f0ac8);
  thunk_FUN_00d48444(
                    Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
                    );
  thunk_FUN_00d48444(RhythmGameStarter_NoteRecorderTargetList_<>c__DisplayClass7_0_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__);
  thunk_FUN_00d48444(
                    Method_Newtonsoft_Json_Linq_JsonLoadSettings_set_DuplicatePropertyNameHandling__
                    );
  *(undefined1 *)(unaff_x21 + 0x8e8) = 1;
  in_stack_00000018 = 0;
  uStack000000000000000c = 0;
  plVar5 = (long *)thunk_FUN_00d62348(*unaff_x20);
  if (plVar5 != (long *)0x0) {
    FUN_0160aa4c(plVar5,0);
    plVar6 = (long *)FUN_013eae18();
    puVar1 = (undefined8 *)StringLiteral_1333;
    puVar3 = Method_Newtonsoft_Json_Linq_JsonLoadSettings_set_DuplicatePropertyNameHandling__;
    puVar2 = PTR_DAT_033f0ac8;
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x2c) * 0x10 + 0x138);
            goto LAB_013fae00;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar6,*(long *)
                                    Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                            ,0x2c);
LAB_013fae00:
      iVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (iVar4 != 1) {
        puVar1 = (undefined8 *)puVar2;
      }
      uVar8 = FUN_015f5b28(*(undefined8 *)puVar3,*puVar1,0);
      FUN_0160c8e8(plVar5,uVar8,0);
      puVar3 = Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__;
      puVar2 = Newtonsoft_Json_Linq_JToken_TypeInfo;
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x90),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
        uVar8 = FUN_0176eb1c(&stack0x0000000c,0);
        uVar8 = FUN_015f5b28(*(undefined8 *)puVar3,uVar8,0);
        FUN_0160c8e8(plVar5,uVar8,0);
        puVar2 = 
        Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
        ;
        if (*(long *)(unaff_x19 + 0x98) != 0) {
          in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x98),0);
          uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
          uVar8 = FUN_0176eb1c(&stack0x0000000c,0);
          uVar8 = FUN_015f5b28(*(undefined8 *)puVar2,uVar8,0);
          FUN_0160c8e8(plVar5,uVar8,0);
          puVar2 = RhythmGameStarter_NoteRecorderTargetList_<>c__DisplayClass7_0_TypeInfo;
          if (*(long *)(unaff_x19 + 0xe0) != 0) {
            in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0xe0),0);
            uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
            uVar8 = FUN_0176eb1c(&stack0x0000000c,0);
            uVar8 = FUN_015f5b28(*(undefined8 *)puVar2,uVar8,0);
            FUN_0160c8e8(plVar5,uVar8,0);
            puVar2 = StringLiteral_10089;
            if (*(long *)(unaff_x19 + 0xe8) != 0) {
              in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0xe8),0);
              uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
              uVar8 = FUN_0176eb1c(&stack0x0000000c,0);
              uVar8 = FUN_015f5b28(*(undefined8 *)puVar2,uVar8,0);
              FUN_0160c8e8(plVar5,uVar8,0);
              puVar3 = StringLiteral_302;
              puVar2 = 
              Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__
              ;
              if (*(long *)(unaff_x19 + 0xf0) != 0) {
                in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0xf0),0);
                uStack000000000000000c = FUN_01788938(&stack0x00000018,0);
                uVar8 = FUN_0176eb1c(&stack0x0000000c,0);
                uVar8 = FUN_015f5b28(*(undefined8 *)puVar2,uVar8,0);
                FUN_0160c8e8(plVar5,uVar8,0);
                uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)puVar3);
                }
                FUN_02660dac(uVar8,0);
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


