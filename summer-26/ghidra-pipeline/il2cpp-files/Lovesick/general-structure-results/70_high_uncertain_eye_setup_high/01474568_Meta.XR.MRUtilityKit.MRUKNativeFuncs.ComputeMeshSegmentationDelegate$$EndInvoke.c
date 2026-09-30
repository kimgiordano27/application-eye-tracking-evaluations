/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$EndInvoke
ENTRY_POINT: 01474568
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__EndInvoke(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x26 + 0xe1c) = 1;
  }
                    /* try { // try from 01474584 to 0157458f has its CatchHandler @ 014749d8 */
  if (param_1 != 0) {
    lVar6 = *(long *)(*unaff_x25 + 0xb8);
    FUN_0269fd98(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                 *(undefined4 *)(lVar6 + 0x14),param_1,0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_010e5b20(*(long *)(unaff_x19 + 0x50),&stack0x00000008,*unaff_x24);
      lVar6 = in_stack_00000008;
      if ((in_stack_00000008 != 0) && (lVar2 = FUN_0268fd4c(in_stack_00000008,0), lVar2 != 0)) {
        FUN_0268b75c(lVar2,*(undefined8 *)Method_UnityEngine_UI_LayoutGroup_SetProperty<int>__,0);
        plVar3 = (long *)FUN_00da4fb8(*unaff_x23,1);
        lVar6 = FUN_0268fd4c(lVar6,0);
        if (plVar3 != (long *)0x0) {
          if ((lVar6 != 0) &&
             (lVar2 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar2 == 0)) {
            uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar5,0);
          }
          if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar3[4] = lVar6;
          plVar4 = *(long **)(unaff_x19 + 0x40);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x228))(plVar4,plVar3,0,1,*(undefined8 *)(*plVar4 + 0x230));
            puVar1 = Method_System_Array_Resize<Transform>__;
            plVar3 = *(long **)(unaff_x19 + 0x40);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x248))(plVar3,0,*(undefined8 *)(*plVar3 + 0x250));
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660dac(*(undefined8 *)puVar1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


