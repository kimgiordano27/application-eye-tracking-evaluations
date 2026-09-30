/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$UnRegisterAnchorUpdates
ENTRY_POINT: 014b0634
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__UnRegisterAnchorUpdates(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) != 0) {
    plVar2 = *(long **)(unaff_x20 + 0xe8);
    uVar6 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    if (plVar2 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      if ((lVar3 != 0) && (lVar3 = FUN_01fc6404(lVar3,0), lVar3 != 0)) {
        plVar2 = *(long **)(unaff_x20 + 0xe8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar3 = FUN_01fc6404(lVar3,0);
        lVar4 = FUN_00da4fb8(*(undefined8 *)
                              Method_Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>b__78_0__
                             ,1);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        *(undefined2 *)(lVar4 + 0x20) = 0x3f;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
                    /* try { // try from 014b06c4 to 015b06d3 has its CatchHandler @ 014b0bf8 */
        lVar3 = FUN_01602b0c(lVar3,lVar4,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 014b0864 to 015b0873 has its CatchHandler @ 014b0bec */
          FUN_00da5194();
        }
        if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar6 = FUN_01603ec8(*(long *)(lVar3 + 0x20),1,0);
      }
    }
    lVar3 = *(long *)(unaff_x19 + 10);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* try { // try from 014b06fc to 015b070b has its CatchHandler @ 014b0bf4 */
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0174f858(0);
    in_stack_00000008 = FUN_017511f4(uVar5,*(undefined8 *)(unaff_x20 + 0x170),0);
    if (*(int *)(*(long *)Newtonsoft_Json_Linq_JToken_TypeInfo + 0xe0) == 0) {
                    /* try { // try from 014b0730 to 015b073b has its CatchHandler @ 014b0bf0 */
      thunk_FUN_00d32864();
    }
                    /* try { // try from 014b073c to 015b075f has its CatchHandler @ 014b046c */
    FUN_017889b4(&stack0x00000008,0);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033f2f78);
                    /* try { // try from 014b0760 to 015b076f has its CatchHandler @ 014b0c1c */
    uVar6 = FUN_01600b5c(*(undefined8 *)Method_System_Linq_Enumerable_ToList<Glyph>__,uVar6,uVar5,0)
    ;
    puVar1 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(undefined8 *)(lVar3 + 0x18) = uVar6;
    uVar6 = *(undefined8 *)(unaff_x19 + 10);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_016f27fc(lVar3,uVar6,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_TransformFeatureStateCollection_TransformStateInfo>__ctor__
                 ,0);
    FUN_012345d4();
    plVar2 = *(long **)(unaff_x20 + 0xe8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
    }
    FUN_014aeee8();
  }
  *unaff_x19 = 0xfffffffe;
  *(undefined8 *)(unaff_x19 + 10) = 0;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016a2130(unaff_x19 + 2,0);
  return;
}


