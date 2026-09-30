/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._SetOverlayNeighbor$$BeginInvoke
ENTRY_POINT: 02d9e29c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVROverlay__SetOverlayNeighbor__BeginInvoke(long param_1,void **param_2)

{
  undefined8 uVar1;
  byte bVar2;
  Predicate_1_t9EA144B8777F64A7CF296602D7446A0E00800207 *pPVar3;
  void *pvVar4;
  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *pGVar5;
  Il2CppObject *pIVar6;
  Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *pDVar7;
  List_1_tE96A44A704D2D0F763BBB5A6DA3B61D6F4322B3D *pLVar8;
  long unaff_x29;
  PassthroughMeshInstance_tC15BBC616D213426B55C4E59C74175581D2EFFDE *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  int iStack0000000000000034;
  undefined8 in_stack_00000080;
  byte bStack00000000000000df;
  
  Il2CppCodeGenWriteBarrier(param_2,*(void **)(param_1 + 0x80));
  in_stack_00000018[0xf] = *(undefined8 *)(in_stack_00000018[0x21] + 0xd8);
  in_stack_00000018[0xe] = in_stack_00000018[0x1e];
  NullCheck((void *)in_stack_00000018[0xe]);
  in_stack_00000018[0xd] = *(undefined8 *)(in_stack_00000018[0xe] + 0x10);
  NullCheck((void *)in_stack_00000018[0xf]);
  bVar2 = Dictionary_2_TryGetValue_m17A00D080FCA1E2D536918AF6B53F3F85A73801E
                    ((Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 *)
                     in_stack_00000018[0xf],
                     (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)in_stack_00000018[0xd],
                     in_stack_00000010,
                     *(MethodInfo **)
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__1__
                    );
  *(byte *)(unaff_x29 + -0xa9) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0xa9) & 1) == 0) {
    pLVar8 = *(List_1_tE96A44A704D2D0F763BBB5A6DA3B61D6F4322B3D **)(in_stack_00000018[0x21] + 0xe0);
    pIVar6 = (Il2CppObject *)in_stack_00000018[0x1e];
    pPVar3 = (Predicate_1_t9EA144B8777F64A7CF296602D7446A0E00800207 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__3__
                       );
    Predicate_1__ctor_mA7A5AC585F9FEC2A02FDB6AA440BBAC58BBEA595
              (pPVar3,pIVar6,
               *(long *)
                Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeParameterWidget>b__2_0__
               ,(MethodInfo *)0x0);
    NullCheck(pLVar8);
    iStack0000000000000034 =
         List_1_RemoveAll_m759B047226A4B41FF4E7C025D124FAA0D2BAE278
                   (pLVar8,pPVar3,
                    *(MethodInfo **)
                     Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__2__
                   );
    if (iStack0000000000000034 == 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_2__
                 ,0);
    }
  }
  else {
    memcpy(&stack0x000000e8,(void *)(unaff_x29 + -0x78),0x58);
    *in_stack_00000018 = in_stack_00000018[2];
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    bStack00000000000000df =
         OVR_OpenVR_IVROverlay__MoveGamepadFocusToNeighbor__Invoke(*in_stack_00000018,0);
    bStack00000000000000df = bStack00000000000000df & 1;
    if (bStack00000000000000df != 0) {
      memcpy(&stack0x00000080,(void *)(unaff_x29 + -0x78),0x58);
      uVar1 = in_stack_00000080;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
      bVar2 = OVRPlugin_DestroyInsightTriangleMesh_m47FE862A94B72A6A0123B456373C6E96F424CA5A
                        (uVar1,0);
      if ((bVar2 & 1) != 0) {
        pDVar7 = *(Dictionary_2_t227ED0E55120DCFEBEF612A08C2B742657B0F7E2 **)
                  (in_stack_00000018[0x21] + 0xd8);
        pvVar4 = (void *)in_stack_00000018[0x1e];
        NullCheck(pvVar4);
        pGVar5 = *(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F **)((long)pvVar4 + 0x10);
        NullCheck(pDVar7);
        Dictionary_2_Remove_m610665550A1C14B71031C93C0303AF829B354C94
                  (pDVar7,pGVar5,
                   *(MethodInfo **)
                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass9_0_<CreateTaaDebugMode>b__0__
                  );
        return;
      }
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Method_UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c_<CreateVolumeTable>b__3_11__
               ,0);
  }
  return;
}


