/*
FUNCTION_NAME: UnityEngine.UI.InputField$$CreateCursorVerts
ENTRY_POINT: 045bfce4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte UnityEngine_UI_InputField__CreateCursorVerts(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar4;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar5;
  long *in_x9;
  long unaff_x29;
  long *in_stack_00000010;
  long in_stack_00000040;
  void **in_stack_00000050;
  
  do {
    in_x9[0xc] = in_stack_00000040;
    pvVar3 = (void *)Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4
                               (unaff_x29 + -0x40,param_2);
    *in_stack_00000050 = pvVar3;
    Il2CppCodeGenWriteBarrier(in_stack_00000050,pvVar3);
    in_stack_00000010[2] = in_stack_00000010[0x11];
    in_stack_00000010[1] = *(long *)in_stack_00000010[2];
    lVar2 = IsInstClass((Il2CppObject *)in_stack_00000010[1],
                        *(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    in_stack_00000010[0xe] = lVar2;
    *in_stack_00000010 = in_stack_00000010[0xe];
    if (*in_stack_00000010 == 0) {
LAB_045bfc68:
      *(undefined4 *)(in_stack_00000010 + 0xb) = 0;
    }
    else {
      pvVar3 = (void *)in_stack_00000010[0xe];
      NullCheck(pvVar3);
      bVar1 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412
                        (pvVar3,0);
      if ((bVar1 & 1) != 0) {
        pFVar4 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)in_stack_00000010[0xe];
        NullCheck(pFVar4);
        bVar1 = Focusable_get_focusable_m15258DAA1E80EB42FBCF59298080030DA5360F6F_inline
                          (pFVar4,(MethodInfo *)0x0);
        if ((bVar1 & 1) != 0) goto LAB_045bfc68;
      }
      pVVar5 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)in_stack_00000010[0xe];
      NullCheck(pVVar5);
      lVar2 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                        (pVVar5,(MethodInfo *)0x0);
      in_stack_00000010[0xc] = lVar2;
      lVar2 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(unaff_x29 + -0x40,0);
      *(uint *)(in_stack_00000010 + 0xb) = (uint)(lVar2 != 0);
    }
    *(bool *)(unaff_x29 + -0x31) = (int)in_stack_00000010[0xb] != 0;
    if ((*(byte *)(unaff_x29 + -0x31) & 1) == 0) {
      bVar1 = FocusController_IsFocused_mC6FBCB39C59950009902CE0F85A97A96EC09DF53
                        (in_stack_00000010[0x13],*(undefined8 *)in_stack_00000010[0x11],0);
      *(bool *)(unaff_x29 + -0x22) = (bVar1 & 1) == 0;
      return *(byte *)(unaff_x29 + -0x22) & 1;
    }
    in_stack_00000050 = (void **)in_stack_00000010[0x11];
    pVVar5 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)in_stack_00000010[0xe];
    NullCheck(pVVar5);
    in_stack_00000040 =
         VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                   (pVVar5,(MethodInfo *)0x0);
    param_2 = 0;
    in_x9 = in_stack_00000010;
  } while( true );
}


