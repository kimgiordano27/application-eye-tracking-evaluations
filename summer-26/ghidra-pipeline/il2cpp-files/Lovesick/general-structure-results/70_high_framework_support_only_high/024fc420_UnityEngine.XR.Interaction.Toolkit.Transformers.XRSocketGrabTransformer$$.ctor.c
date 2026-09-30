/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer$$.ctor
ENTRY_POINT: 024fc420
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  while (in_stack_00000050 != 0) {
    _in_stack_00000050 = FUN_024fcd48(in_stack_00000050,in_stack_00000030,in_stack_00000038);
    while( true ) {
      in_stack_00000040 = in_stack_00000020;
      in_stack_00000048 = in_stack_00000028;
      FUN_01132ae0(&stack0x00000030,&stack0x00000050,0,&stack0x00000040,unaff_w25,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<StencilMaterial_MatEntry>_get_Count__);
      uVar4 = in_stack_00000028;
      lVar1 = in_stack_00000020;
      FUN_0132138c();
      if (in_stack_00000050 == 0) goto LAB_024fc6c0;
      FUN_024fa748();
      in_stack_00000050 = lVar1;
      in_stack_00000058 = uVar4;
      FUN_0113224c(&stack0x00000050,unaff_w25,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<GraphicsFormat,_Dictionary<FormatUsage,_bool>>__ctor__
                  );
      FUN_0132138c();
      if (in_stack_00000050 == 0) goto LAB_024fc6c0;
      if (*(char *)(in_stack_00000050 + 0xf8) != '\0') {
        FUN_0132138c();
        if (in_stack_00000050 == 0) goto LAB_024fc6c0;
        uVar4 = *(undefined8 *)(in_stack_00000050 + 0xf0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar3 = FUN_02681b9c(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          FUN_0132138c();
          if (in_stack_00000050 == 0) goto LAB_024fc6c0;
          uVar4 = *(undefined8 *)(in_stack_00000050 + 0xf0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          UnityEngine_UIElements_VisualElement__UnityEngine_UIElements_IResolvedStyle_get_visibility
                    (&stack0x00000020,unaff_w25,uVar4,0);
        }
      }
      unaff_w25 = unaff_w25 + 1;
      if (*(int *)(unaff_x22 + 0x18) <= unaff_w25) {
        uVar3 = FUN_024fd0cc();
        uVar4 = in_stack_00000028;
        lVar1 = in_stack_00000020;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_AddRange__
                            );
        }
        auVar5 = FUN_026565ec(lVar1,uVar4,0);
        uVar2 = in_stack_00000038;
        uVar4 = in_stack_00000030;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponent<TextMeshProUGUI>__ + 0xe0)
              == 0) {
            thunk_FUN_00d32864();
          }
          auVar6 = FUN_0265720c(uVar4,uVar2,0);
          _in_stack_00000010 = auVar6;
          _in_stack_00000050 = auVar5;
          _in_stack_00000040 = auVar6;
          FUN_01132ae0(&stack0x00000030,&stack0x00000050,0,&stack0x00000040,0,
                       *(undefined8 *)OVRPlugin_OVRP_1_9_0_TypeInfo);
          _in_stack_00000050 = auVar6;
          FUN_0113224c(0x3f800000,&stack0x00000050,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_HashSet<MaskableGraphic>__ctor__);
          if (*(int *)(*(long *)StringLiteral_4495 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02657630(&stack0x00000010,unaff_w24 != 2 && unaff_w24 != 4,0);
          auVar5 = FUN_02657514(in_stack_00000010,in_stack_00000018,0);
        }
        return auVar5;
      }
      if (unaff_w24 != 0) {
        FUN_0132138c();
        if (in_stack_00000050 == 0) goto LAB_024fc6c0;
        FUN_024fc9e0();
      }
      FUN_0132138c();
      if (in_stack_00000050 == 0) goto LAB_024fc6c0;
      uVar3 = FUN_024fa748();
      if ((uVar3 & 1) == 0) break;
      FUN_0132138c();
      _in_stack_00000050 = FUN_024fb420();
    }
    FUN_0132138c();
  }
LAB_024fc6c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


