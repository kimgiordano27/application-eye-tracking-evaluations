/*
FUNCTION_NAME: FUN_016c44d0
ENTRY_POINT: 016c44d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_016c44d0(long param_1,long *param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
                    /* try { // try from 016c4508 to 017c450f has its CatchHandler @ 016c462c */
  if ((DAT_037786d4 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetEdgeRingIterative>b__11_0__
                      );
    DAT_037786d4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03777b33 == '\0') {
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
                    /* try { // try from 016c4558 to 017c458f has its CatchHandler @ 016c4630 */
    DAT_03777b33 = '\x01';
  }
  puVar2 = 
  Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetEdgeRingIterative>b__11_0__;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30);
                    /* try { // try from 016c4590 to 017c460f has its CatchHandler @ 016c4488 */
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016cbc70(param_1,0);
  if ((param_3 != 0) && (param_2 != (long *)0x0)) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    if ((uVar4 & 1) == 0) {
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar6 = thunk_FUN_00d48444(
                                Method_Unity_XR_CoreUtils_TypeExtensions_GetInterfaceFieldsFromClasses__
                                );
                    /* try { // try from 016c4690 to 017c46b7 has its CatchHandler @ 016c46d8 */
      FUN_016f2f28(uVar5,uVar6,0);
    }
    else {
      if (0 < param_5) {
        FUN_016c4718(param_1,param_2,param_3,param_4 & 1,param_5,param_6 & 1);
        return;
      }
      thunk_FUN_00d48444(StringLiteral_8570);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar6 = thunk_FUN_00d48444(UnityEngine_Events_UnityAction<DialogueValue>_TypeInfo);
      uVar7 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
      FUN_016efd4c(uVar5,uVar6,uVar7,0);
    }
    uVar6 = thunk_FUN_00d48444(PTR_DAT_033f4740);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar6);
  }
  puVar1 = UnityEngine_Vector3Int_TypeInfo;
                    /* try { // try from 016c4610 to 017c4613 has its CatchHandler @ 016c4624 */
  if (param_2 == (long *)0x0) {
    puVar1 = Method_System_Linq_Expressions_BlockExpressionList_Insert__;
  }
                    /* try { // try from 016c4614 to 017c461b has its CatchHandler @ 016c4628 */
  uVar6 = thunk_FUN_00d48444(puVar1);
                    /* try { // try from 016c461c to 017c4647 has its CatchHandler @ 016c4488 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016c4610 with catch @ 016c4624
                        */
  thunk_FUN_00d48444(PTR_DAT_033f37c8);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016c4614 with catch @ 016c4628
                        */
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016ec5b8(uVar5,uVar6,0);
  uVar6 = thunk_FUN_00d48444(PTR_DAT_033f4740);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar6);
}


