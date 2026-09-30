/*
FUNCTION_NAME: FUN_00e95be4
ENTRY_POINT: 00e95be4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_00e95be4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_31__;
  puVar6 = Method_System_Data_ForeignKeyConstraint_Create__;
  puVar5 = Method_System_ValueTuple<Transform,_Camera>__ctor__;
  puVar4 = Method_Obi_ObiResourceHandle<EdgeCollider2D>_get_isValid__;
  puVar3 = Method_System_Collections_Generic_List<AstNode>__ctor__;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__;
  if ((DAT_03775027 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<AstNode>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_Create__);
    thunk_FUN_00d48444(Method_System_ValueTuple<Transform,_Camera>__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_31__);
    thunk_FUN_00d48444(Method_Obi_ObiResourceHandle<EdgeCollider2D>_get_isValid__);
    DAT_03775027 = 1;
  }
  *(undefined4 *)(param_1 + 0x90) = 2;
  *(undefined4 *)(param_1 + 0xa8) = 10;
  uVar1 = DAT_028aa318;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)puVar7;
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0xe8) = 0x4000000040000000;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xe0) = uVar8;
  thunk_FUN_00e77240(param_1,0);
  return;
}


