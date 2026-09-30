/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer$$UpdateTargetWithScale
ENTRY_POINT: 06a05fa0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer__UpdateTargetWithScale
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long unaff_x21;
  int unaff_w22;
  int unaff_w24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  float fVar2;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char in_stack_00000140;
  
  do {
    FUN_041e29a8(param_1,unaff_w22,param_3);
    if (unaff_x21 == 0) {
LAB_06a06190:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_06bc3b14();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w24 == unaff_w22) {
      memcpy(&stack0x00000140,(void *)(unaff_x20 + 0x124),0x44);
      if (in_stack_00000140 != '\0') {
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
                    + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        memcpy(&stack0x00000140,(void *)(unaff_x20 + 0x124),0x44);
        FUN_04649644(&stack0x00000080,&stack0x00000140,
                     *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000d8 = in_stack_00000098;
        in_stack_000000d0 = in_stack_00000090;
        in_stack_000000e8 = in_stack_000000a8;
        in_stack_000000e0 = in_stack_000000a0;
        in_stack_000000f8 = in_stack_000000b8;
        in_stack_000000f0 = in_stack_000000b0;
        if (unaff_x21 == 0) goto LAB_06a06190;
        FUN_06bc56f4();
      }
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06a06208();
      memcpy(&stack0x00000140,(void *)(unaff_x20 + 0xe0),0x44);
      if (in_stack_00000140 != '\0') {
        lVar1 = *(long *)(unaff_x19 + 0x20);
        memcpy(&stack0x00000140,(void *)(unaff_x20 + 0xe0),0x44);
        FUN_04649644(&stack0x00000080,&stack0x00000140,
                     *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
        in_stack_000000c8 = in_stack_00000088;
        in_stack_000000c0 = in_stack_00000080;
        in_stack_000000d8 = in_stack_00000098;
        in_stack_000000d0 = in_stack_00000090;
        in_stack_000000e8 = in_stack_000000a8;
        in_stack_000000e0 = in_stack_000000a0;
        in_stack_000000f8 = in_stack_000000b8;
        in_stack_000000f0 = in_stack_000000b0;
        if (lVar1 == 0) goto LAB_06a06190;
        FUN_06baf92c(lVar1);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06a06190;
        FUN_06baf87c(&stack0x00000080,*(long *)(unaff_x19 + 0x20),0);
        in_stack_00000108 = in_stack_00000088;
        in_stack_00000100 = in_stack_00000080;
        in_stack_00000118 = in_stack_00000098;
        in_stack_00000110 = in_stack_00000090;
        in_stack_00000128 = in_stack_000000a8;
        in_stack_00000120 = in_stack_000000a0;
        in_stack_00000138 = in_stack_000000b8;
        in_stack_00000130 = in_stack_000000b0;
        fVar2 = (float)FUN_06bdab18(&stack0x00000100,5,0);
        lVar1 = *(long *)(unaff_x19 + 0x20);
        if (lVar1 == 0) goto LAB_06a06190;
        fVar2 = atanf(1.0 / fVar2);
        FUN_06baeb08(fVar2 * DAT_013a054c,lVar1,0);
      }
      return;
    }
    if (*(long *)(unaff_x20 + 0x170) == 0) goto LAB_06a06190;
    FUN_0418d880(*(long *)(unaff_x20 + 0x170),unaff_w22,*unaff_x25);
    param_1 = *(long *)(unaff_x20 + 0x168);
    if (param_1 == 0) goto LAB_06a06190;
    param_3 = *unaff_x26;
  } while( true );
}


