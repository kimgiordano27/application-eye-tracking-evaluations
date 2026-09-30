/*
FUNCTION_NAME: FUN_03a46770
ENTRY_POINT: 03a46770
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_03a46770(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  
  puVar8 = PTR_DAT_042384f0;
  puVar4 = PTR_DAT_042384e8;
  puVar7 = PTR_DAT_042384e0;
  puVar11 = PTR_DAT_042384d8;
  puVar2 = PTR_DAT_042384d0;
  puVar5 = PTR_DAT_042384c8;
  puVar3 = StringLiteral_1279;
  puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if ((DAT_044ab02e & 1) == 0) {
    FUN_01d7d918(StringLiteral_1165);
    FUN_01d7d918(StringLiteral_1166);
    FUN_01d7d918(PTR_DAT_042384c8);
    FUN_01d7d918(StringLiteral_1279);
    FUN_01d7d918(StringLiteral_4822);
    FUN_01d7d918(PTR_DAT_042384f8);
    FUN_01d7d918(PTR_DAT_042384f0);
    FUN_01d7d918(PTR_DAT_042384e8);
    FUN_01d7d918(PTR_DAT_042384d8);
    FUN_01d7d918(PTR_DAT_042384e0);
    FUN_01d7d918(PTR_DAT_042384d0);
    FUN_01d7d918(PTR_DAT_04238500);
    FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field);
    FUN_01d7d918(StringLiteral_3534);
    FUN_01d7d918(StringLiteral_3533);
    FUN_01d7d918(StringLiteral_3532);
    FUN_01d7d918(StringLiteral_1168);
    FUN_01d7d918(
                Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                );
    FUN_01d7d918(StringLiteral_1170);
    FUN_01d7d918(StringLiteral_1172);
    FUN_01d7d918(Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_1555);
    FUN_01d7d918(StringLiteral_1556);
    FUN_01d7d918(StringLiteral_1367);
    DAT_044ab02e = 1;
  }
  puVar10 = StringLiteral_3533;
  puVar9 = StringLiteral_3532;
  puVar6 = StringLiteral_1165;
  local_68[0] = 0;
  uVar12 = thunk_FUN_01de23e8(*(undefined8 *)puVar5,local_68);
  uVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  FUN_02b90c90(uVar13,uVar12,*(undefined8 *)puVar11);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar13;
  thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar13);
  local_70[0] = 0;
  uVar12 = thunk_FUN_01de23e8(*(undefined8 *)puVar5,local_70);
  uVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar7);
  FUN_02baf9fc(uVar13,uVar12,*(undefined8 *)puVar4);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar14 = uVar13;
  thunk_FUN_01e10808(puVar14,uVar13);
  lVar15 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04238500);
  FUN_02b235c4(lVar15,*(undefined8 *)puVar8);
  uVar12 = *(undefined8 *)StringLiteral_1172;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar12 = FUN_033a87c8(uVar12,0);
  lVar16 = thunk_FUN_01de27b8(*(undefined8 *)puVar9);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar16,*(undefined8 *)puVar10);
  uVar13 = FUN_033a87c8(*(undefined8 *)puVar6,0);
  puVar7 = StringLiteral_4822;
  puVar11 = StringLiteral_3534;
  puVar2 = StringLiteral_1170;
  puVar5 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
  puVar3 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State;
  puVar1 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field;
  if (lVar16 != 0) {
    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)StringLiteral_3534);
    uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
    uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
    uVar13 = FUN_033a87c8(*(undefined8 *)puVar5,0);
    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
    uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
    uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
    puVar5 = PTR_DAT_042384f8;
    puVar1 = StringLiteral_1168;
    if (lVar15 != 0) {
      FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)PTR_DAT_042384f8);
      uVar12 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
      lVar16 = thunk_FUN_01de27b8(*(undefined8 *)puVar9);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar16,*(undefined8 *)StringLiteral_3533);
      uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
      puVar4 = StringLiteral_1556;
      puVar7 = StringLiteral_1555;
      puVar2 = StringLiteral_1367;
      if (lVar16 != 0) {
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        puVar4 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
        uVar13 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                              ,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        puVar2 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field;
        uVar13 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                              ,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        puVar8 = StringLiteral_4822;
        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
        FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
        uVar12 = FUN_033a87c8(*(undefined8 *)puVar1,0);
        lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                  (lVar16,*(undefined8 *)StringLiteral_3533);
        uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        if (lVar16 != 0) {
          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
          uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
          uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
          uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
          FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
          uVar12 = FUN_033a87c8(*(undefined8 *)puVar7,0);
          lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                    (lVar16,*(undefined8 *)StringLiteral_3533);
          uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
          if (lVar16 != 0) {
            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
            puVar7 = StringLiteral_1556;
            uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
            puVar1 = StringLiteral_1170;
            uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
            uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
            uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
            uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
            uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
            FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
            uVar12 = FUN_033a87c8(*(undefined8 *)puVar3,0);
            lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                      (lVar16,*(undefined8 *)StringLiteral_3533);
            uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
            if (lVar16 != 0) {
              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
              uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
              uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
              uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
              FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
              uVar12 = FUN_033a87c8(*(undefined8 *)puVar7,0);
              lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                        (lVar16,*(undefined8 *)StringLiteral_3533);
              uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
              puVar1 = StringLiteral_1555;
              if (lVar16 != 0) {
                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
                uVar12 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                          (lVar16,*(undefined8 *)StringLiteral_3533);
                uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                puVar3 = StringLiteral_1166;
                if (lVar16 != 0) {
                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                  FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
                  uVar12 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                  lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                            (lVar16,*(undefined8 *)StringLiteral_3533);
                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                  puVar1 = StringLiteral_1168;
                  if (lVar16 != 0) {
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    uVar13 = FUN_033a87c8(*(undefined8 *)
                                           Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                          ,0);
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    puVar4 = StringLiteral_1556;
                    uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    puVar7 = StringLiteral_1367;
                    uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    puVar3 = 
                    Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                    ;
                    uVar13 = FUN_033a87c8(*(undefined8 *)
                                           Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                          ,0);
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                    FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
                    uVar12 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                    lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                              (lVar16,*(undefined8 *)StringLiteral_3533);
                    uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                    if (lVar16 != 0) {
                      FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                      FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
                      uVar12 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                      lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                (lVar16,*(undefined8 *)StringLiteral_3533);
                      uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                      if (lVar16 != 0) {
                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                        uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                        FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
                        plVar17 = (long *)(*(long *)(*(long *)StringLiteral_1279 + 0xb8) + 0x10);
                        *plVar17 = lVar15;
                        thunk_FUN_01e10808(plVar17,lVar15);
                        lVar15 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04238500);
                        FUN_02b235c4(lVar15,*(undefined8 *)PTR_DAT_042384f0);
                        uVar12 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                        puVar2 = StringLiteral_3532;
                        lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                  (lVar16,*(undefined8 *)StringLiteral_3533);
                        puVar3 = StringLiteral_1165;
                        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                        if (lVar16 != 0) {
                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                          uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                          if (lVar15 != 0) {
                            FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)puVar5);
                            uVar12 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                            lVar16 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
                            puVar5 = StringLiteral_3533;
                            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                      (lVar16,*(undefined8 *)StringLiteral_3533);
                            puVar3 = StringLiteral_1172;
                            uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                            if (lVar16 != 0) {
                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                              puVar7 = StringLiteral_1166;
                              uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                              FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)PTR_DAT_042384f8);
                              uVar12 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                              lVar16 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
                              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                        (lVar16,*(undefined8 *)puVar5);
                              uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                              if (lVar16 != 0) {
                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                puVar4 = StringLiteral_1555;
                                uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)PTR_DAT_042384f8);
                                uVar12 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                lVar16 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
                                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                          (lVar16,*(undefined8 *)puVar5);
                                uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                if (lVar16 != 0) {
                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                  uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                  FUN_02b23db4(lVar15,uVar12,lVar16,*(undefined8 *)PTR_DAT_042384f8)
                                  ;
                                  puVar4 = 
                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                  ;
                                  uVar12 = FUN_033a87c8(*(undefined8 *)
                                                                                                                  
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                  ,0);
                                  lVar16 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
                                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                            (lVar16,*(undefined8 *)puVar5);
                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                  if (lVar16 != 0) {
                                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                    uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                    uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                    puVar2 = StringLiteral_1555;
                                    uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                    puVar8 = StringLiteral_1556;
                                    uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                    uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                    uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                    FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                    FUN_02b23db4(lVar15,uVar12,lVar16,
                                                 *(undefined8 *)PTR_DAT_042384f8);
                                    uVar12 = FUN_033a87c8(*(undefined8 *)puVar8,0);
                                    lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                                    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                              (lVar16,*(undefined8 *)puVar5);
                                    uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                    if (lVar16 != 0) {
                                      FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                      uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                      FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                      uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                      FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                      uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                      FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                      uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                      FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                      uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                      FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                      FUN_02b23db4(lVar15,uVar12,lVar16,
                                                   *(undefined8 *)PTR_DAT_042384f8);
                                      uVar12 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                                      lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532)
                                      ;
                                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                (lVar16,*(undefined8 *)puVar5);
                                      uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                      if (lVar16 != 0) {
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        puVar8 = StringLiteral_1556;
                                        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        puVar3 = StringLiteral_1367;
                                        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                        FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                        FUN_02b23db4(lVar15,uVar12,lVar16,
                                                     *(undefined8 *)PTR_DAT_042384f8);
                                        uVar12 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                        lVar16 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                     StringLiteral_3532);
                                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                  (lVar16,*(undefined8 *)puVar5);
                                        uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                                        if (lVar16 != 0) {
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0)
                                          ;
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0)
                                          ;
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                          FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                          FUN_02b23db4(lVar15,uVar12,lVar16,
                                                       *(undefined8 *)PTR_DAT_042384f8);
                                          uVar12 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                          lVar16 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                       StringLiteral_3532);
                                          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                    (lVar16,*(undefined8 *)puVar5);
                                          uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0)
                                          ;
                                          if (lVar16 != 0) {
                                            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                            uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,
                                                                  0);
                                            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                            uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                            FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                            FUN_02b23db4(lVar15,uVar12,lVar16,
                                                         *(undefined8 *)PTR_DAT_042384f8);
                                            uVar12 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                      
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                            puVar2 = StringLiteral_3532;
                                            lVar16 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                         StringLiteral_3532);
                                            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                      (lVar16,*(undefined8 *)puVar5);
                                            uVar13 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,
                                                                  0);
                                            puVar3 = StringLiteral_1367;
                                            if (lVar16 != 0) {
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1165,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1555,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              puVar1 = 
                                              Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                              ;
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                          
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                  ,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              puVar4 = StringLiteral_1556;
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1556,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              puVar7 = StringLiteral_1170;
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1170,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1166,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              puVar3 = StringLiteral_4822;
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_4822,0);
                                              FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                              FUN_02b23db4(lVar15,uVar12,lVar16,
                                                           *(undefined8 *)PTR_DAT_042384f8);
                                              uVar12 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                          
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                              lVar16 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
                                              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                        (lVar16,*(undefined8 *)puVar5);
                                              uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1172,0);
                                              if (lVar16 != 0) {
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1165,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                puVar2 = StringLiteral_1168;
                                                uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1168,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1555,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                puVar8 = StringLiteral_1367;
                                                uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1367,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1166,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                puVar5 = 
                                                Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                ;
                                                uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                              
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                uVar13 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                                FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11);
                                                FUN_02b23db4(lVar15,uVar12,lVar16,
                                                             *(undefined8 *)PTR_DAT_042384f8);
                                                uVar12 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                                lVar16 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                             StringLiteral_3532);
                                                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                          (lVar16,*(undefined8 *)StringLiteral_3533)
                                                ;
                                                uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1172,0);
                                                if (lVar16 != 0) {
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1165,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1555,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar8,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1166,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  uVar13 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                                  
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                                  FUN_02f17d24(lVar16,uVar13,*(undefined8 *)puVar11)
                                                  ;
                                                  FUN_02b23db4(lVar15,uVar12,lVar16,
                                                               *(undefined8 *)PTR_DAT_042384f8);
                                                  plVar17 = (long *)(*(long *)(*(long *)
                                                  StringLiteral_1279 + 0xb8) + 0x18);
                                                  *plVar17 = lVar15;
                                                  thunk_FUN_01e10808(plVar17,lVar15);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


