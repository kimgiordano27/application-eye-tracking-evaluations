/*
FUNCTION_NAME: FUN_01992cd4
ENTRY_POINT: 01992cd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01992cd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  
  puVar7 = StringLiteral_2655;
  puVar6 = 
  Method_System_Collections_Generic_List_Enumerator<TuneTargetSteppedGeometry_SteppedRendererSet>_get_Current__
  ;
  puVar5 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__;
  puVar4 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
  puVar3 = PTR_DAT_033f3fe8;
  if ((DAT_0377a45c & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                      );
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<TuneTargetSteppedGeometry_SteppedRendererSet>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3fe8);
    thunk_FUN_00d48444(StringLiteral_2655);
    DAT_0377a45c = 1;
  }
  uVar2 = _LAB_028aa0b8;
  uVar1 = _LAB_028aa0b0;
                    /* try { // try from 01992d6c to 01a93447 has its CatchHandler @ 01992d6c
                       catch() { ... } // from try @ 01992d6c with catch @ 01992d6c
                       catch() { ... } // from try @ 019934fc with catch @ 01992d6c
                       catch() { ... } // from try @ 019935fc with catch @ 01992d6c
                       catch() { ... } // from try @ 01993654 with catch @ 01992d6c
                       catch() { ... } // from try @ 0199369c with catch @ 01992d6c
                       catch() { ... } // from try @ 019936e4 with catch @ 01992d6c
                       catch() { ... } // from try @ 01993700 with catch @ 01992d6c
                       catch() { ... } // from try @ 01993740 with catch @ 01992d6c */
  *(undefined4 *)(param_1 + 0x58) = 0x3ba3d70a;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar8 = FUN_0267bd34(*(undefined8 *)puVar7,0);
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  uVar8 = FUN_0267bd34(*(undefined8 *)puVar6,0);
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  uVar8 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  uVar8 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  *(undefined4 *)(param_1 + 0x80) = uVar8;
  uVar8 = FUN_0267bd34(*(undefined8 *)puVar3,0);
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  thunk_FUN_0268a01c(param_1,0);
  return;
}


