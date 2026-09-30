/*
FUNCTION_NAME: Meta.WitAi.Attributes.WitConfigurationAssetRefreshAttribute$$.ctor
ENTRY_POINT: 013fadf4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_WitAi_Attributes_WitConfigurationAssetRefreshAttribute___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  int in_w9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  iVar3 = (**(code **)(param_1 + (long)(in_w9 + 0x2c) * 0x10 + 0x138))();
  if (iVar3 != 1) {
    unaff_x22 = unaff_x23;
  }
  FUN_015f5b28(*unaff_x24,*unaff_x22,0);
  FUN_0160c8e8();
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_List<string>>_get_Item__;
  puVar1 = Newtonsoft_Json_Linq_JToken_TypeInfo;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x90),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    in_stack_00000008._4_4_ = FUN_01788938(&stack0x00000018,0);
    uVar4 = FUN_0176eb1c((long)&stack0x00000008 + 4,0);
    FUN_015f5b28(*(undefined8 *)puVar2,uVar4,0);
    FUN_0160c8e8();
    puVar1 = 
    Method_System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_GetEnumerator__
    ;
    if (*(long *)(unaff_x19 + 0x98) != 0) {
      in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0x98),0);
      in_stack_00000008._4_4_ = FUN_01788938(&stack0x00000018,0);
      uVar4 = FUN_0176eb1c((long)&stack0x00000008 + 4,0);
      FUN_015f5b28(*(undefined8 *)puVar1,uVar4,0);
      FUN_0160c8e8();
      puVar1 = RhythmGameStarter_NoteRecorderTargetList_<>c__DisplayClass7_0_TypeInfo;
      if (*(long *)(unaff_x19 + 0xe0) != 0) {
        in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0xe0),0);
        in_stack_00000008._4_4_ = FUN_01788938(&stack0x00000018,0);
        uVar4 = FUN_0176eb1c((long)&stack0x00000008 + 4,0);
        FUN_015f5b28(*(undefined8 *)puVar1,uVar4,0);
        FUN_0160c8e8();
        puVar1 = StringLiteral_10089;
        if (*(long *)(unaff_x19 + 0xe8) != 0) {
          in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0xe8),0);
          in_stack_00000008._4_4_ = FUN_01788938(&stack0x00000018,0);
          uVar4 = FUN_0176eb1c((long)&stack0x00000008 + 4,0);
          FUN_015f5b28(*(undefined8 *)puVar1,uVar4,0);
          FUN_0160c8e8();
          puVar2 = StringLiteral_302;
          puVar1 = 
          Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_get_Current__;
          if (*(long *)(unaff_x19 + 0xf0) != 0) {
            in_stack_00000018 = FUN_02040648(*(long *)(unaff_x19 + 0xf0),0);
            in_stack_00000008._4_4_ = FUN_01788938(&stack0x00000018,0);
            uVar4 = FUN_0176eb1c((long)&stack0x00000008 + 4,0);
            FUN_015f5b28(*(undefined8 *)puVar1,uVar4,0);
            FUN_0160c8e8();
            uVar4 = (**(code **)(*unaff_x20 + 0x168))();
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar2);
            }
            FUN_02660dac(uVar4,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


