/*
FUNCTION_NAME: Unity.VisualScripting.ValueInput$$get_validConnectedPorts
ENTRY_POINT: 03a467b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Unity_VisualScripting_ValueInput__get_validConnectedPorts(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar13;
  long unaff_x21;
  long *plVar14;
  long unaff_x22;
  undefined8 *puVar15;
  long unaff_x23;
  undefined8 *puVar16;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long *plVar17;
  long unaff_x29;
  undefined8 *puVar18;
  undefined1 in_stack_00000008;
  
  puVar13 = *(undefined8 **)(unaff_x20 + 0x4d8);
  plVar17 = *(long **)(unaff_x27 + 0x698);
  puVar16 = *(undefined8 **)(unaff_x23 + 0x4e0);
  puVar15 = *(undefined8 **)(unaff_x22 + 0x4e8);
  puVar18 = *(undefined8 **)(unaff_x29 + 0x4f0);
  plVar14 = *(long **)(unaff_x21 + 0x980);
  if ((*(byte *)(unaff_x25 + 0x2e) & 1) == 0) {
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
    *(undefined1 *)(unaff_x25 + 0x2e) = 1;
  }
  puVar3 = StringLiteral_3533;
  puVar2 = StringLiteral_3532;
  puVar1 = StringLiteral_1165;
  in_stack_00000008 = 0;
  uVar9 = thunk_FUN_01de23e8(*unaff_x24,&stack0x00000008);
  uVar10 = thunk_FUN_01de27b8(*unaff_x19);
  FUN_02b90c90(uVar10,uVar9,*puVar13);
  **(undefined8 **)(*plVar17 + 0xb8) = uVar10;
  thunk_FUN_01e10808(*(undefined8 *)(*plVar17 + 0xb8),uVar10);
  uVar9 = thunk_FUN_01de23e8(*unaff_x24);
  uVar10 = thunk_FUN_01de27b8(*puVar16);
  FUN_02baf9fc(uVar10,uVar9,*puVar15);
  puVar13 = (undefined8 *)(*(long *)(*plVar17 + 0xb8) + 8);
  *puVar13 = uVar10;
  thunk_FUN_01e10808(puVar13,uVar10);
  lVar11 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04238500);
  FUN_02b235c4(lVar11,*puVar18);
  uVar9 = *(undefined8 *)StringLiteral_1172;
  if (*(int *)(*plVar14 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar9 = FUN_033a87c8(uVar9,0);
  lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar12,*(undefined8 *)puVar3);
  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
  puVar4 = StringLiteral_4822;
  puVar8 = StringLiteral_3534;
  puVar6 = StringLiteral_1170;
  puVar5 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
  puVar3 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State;
  puVar1 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field;
  if (lVar12 != 0) {
    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)StringLiteral_3534);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar5,0);
    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
    puVar5 = PTR_DAT_042384f8;
    puVar1 = StringLiteral_1168;
    if (lVar11 != 0) {
      FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)PTR_DAT_042384f8);
      uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
      lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar12,*(undefined8 *)StringLiteral_3533);
      uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
      puVar4 = StringLiteral_1556;
      puVar6 = StringLiteral_1555;
      puVar2 = StringLiteral_1367;
      if (lVar12 != 0) {
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        puVar4 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
        uVar10 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                              ,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        puVar2 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field;
        uVar10 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                              ,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        puVar7 = StringLiteral_4822;
        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
        FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
        uVar9 = FUN_033a87c8(*(undefined8 *)puVar1,0);
        lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                  (lVar12,*(undefined8 *)StringLiteral_3533);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        if (lVar12 != 0) {
          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
          FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
          uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
          lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                    (lVar12,*(undefined8 *)StringLiteral_3533);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
          if (lVar12 != 0) {
            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
            puVar6 = StringLiteral_1556;
            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
            puVar1 = StringLiteral_1170;
            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
            FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
            uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
            lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                      (lVar12,*(undefined8 *)StringLiteral_3533);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
            if (lVar12 != 0) {
              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
              uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
              uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
              uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
              FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
              uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
              lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                        (lVar12,*(undefined8 *)StringLiteral_3533);
              uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
              puVar1 = StringLiteral_1555;
              if (lVar12 != 0) {
                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
                uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                          (lVar12,*(undefined8 *)StringLiteral_3533);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                puVar3 = StringLiteral_1166;
                if (lVar12 != 0) {
                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                  FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
                  uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                  lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                            (lVar12,*(undefined8 *)StringLiteral_3533);
                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                  puVar1 = StringLiteral_1168;
                  if (lVar12 != 0) {
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)
                                           Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                          ,0);
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    puVar4 = StringLiteral_1556;
                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    puVar6 = StringLiteral_1367;
                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    puVar3 = 
                    Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                    ;
                    uVar10 = FUN_033a87c8(*(undefined8 *)
                                           Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                          ,0);
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                    FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
                    uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                    lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                              (lVar12,*(undefined8 *)StringLiteral_3533);
                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                    if (lVar12 != 0) {
                      FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                      FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
                      uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                      lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                (lVar12,*(undefined8 *)StringLiteral_3533);
                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                      if (lVar12 != 0) {
                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                        FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
                        plVar14 = (long *)(*(long *)(*(long *)StringLiteral_1279 + 0xb8) + 0x10);
                        *plVar14 = lVar11;
                        thunk_FUN_01e10808(plVar14,lVar11);
                        lVar11 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04238500);
                        FUN_02b235c4(lVar11,*(undefined8 *)PTR_DAT_042384f0);
                        uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                        puVar3 = StringLiteral_3532;
                        lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                  (lVar12,*(undefined8 *)StringLiteral_3533);
                        puVar2 = StringLiteral_1165;
                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                        if (lVar12 != 0) {
                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                          if (lVar11 != 0) {
                            FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)puVar5);
                            uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                            lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                            puVar5 = StringLiteral_3533;
                            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                      (lVar12,*(undefined8 *)StringLiteral_3533);
                            puVar2 = StringLiteral_1172;
                            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                            if (lVar12 != 0) {
                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                              puVar6 = StringLiteral_1166;
                              uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                              FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)PTR_DAT_042384f8);
                              uVar9 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                              lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                        (lVar12,*(undefined8 *)puVar5);
                              uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                              if (lVar12 != 0) {
                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                puVar4 = StringLiteral_1555;
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)PTR_DAT_042384f8);
                                uVar9 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                          (lVar12,*(undefined8 *)puVar5);
                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                if (lVar12 != 0) {
                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                  FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)PTR_DAT_042384f8);
                                  puVar4 = 
                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                  ;
                                  uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                  ,0);
                                  lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                            (lVar12,*(undefined8 *)puVar5);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                  if (lVar12 != 0) {
                                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                    puVar3 = StringLiteral_1555;
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                    puVar7 = StringLiteral_1556;
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                    FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                    FUN_02b23db4(lVar11,uVar9,lVar12,*(undefined8 *)PTR_DAT_042384f8
                                                );
                                    uVar9 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                    lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                                    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                              (lVar12,*(undefined8 *)puVar5);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                    if (lVar12 != 0) {
                                      FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                      FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                      FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                      FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                      FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                      FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                      FUN_02b23db4(lVar11,uVar9,lVar12,
                                                   *(undefined8 *)PTR_DAT_042384f8);
                                      uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                                      lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532)
                                      ;
                                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                (lVar12,*(undefined8 *)puVar5);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                      if (lVar12 != 0) {
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        puVar7 = StringLiteral_1556;
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        puVar2 = StringLiteral_1367;
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                        FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                        FUN_02b23db4(lVar11,uVar9,lVar12,
                                                     *(undefined8 *)PTR_DAT_042384f8);
                                        uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                        lVar12 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                     StringLiteral_3532);
                                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                  (lVar12,*(undefined8 *)puVar5);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                                        if (lVar12 != 0) {
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0)
                                          ;
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0)
                                          ;
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                          FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                          FUN_02b23db4(lVar11,uVar9,lVar12,
                                                       *(undefined8 *)PTR_DAT_042384f8);
                                          uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                          lVar12 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                       StringLiteral_3532);
                                          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                    (lVar12,*(undefined8 *)puVar5);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0)
                                          ;
                                          if (lVar12 != 0) {
                                            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,
                                                                  0);
                                            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                            uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                            FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                            FUN_02b23db4(lVar11,uVar9,lVar12,
                                                         *(undefined8 *)PTR_DAT_042384f8);
                                            uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                    
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                            puVar3 = StringLiteral_3532;
                                            lVar12 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                         StringLiteral_3532);
                                            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                      (lVar12,*(undefined8 *)puVar5);
                                            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,
                                                                  0);
                                            puVar2 = StringLiteral_1367;
                                            if (lVar12 != 0) {
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1165,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1555,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              puVar1 = 
                                              Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                              ;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                          
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                  ,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              puVar4 = StringLiteral_1556;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1556,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              puVar6 = StringLiteral_1170;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1170,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1166,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              puVar2 = StringLiteral_4822;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_4822,0);
                                              FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                              FUN_02b23db4(lVar11,uVar9,lVar12,
                                                           *(undefined8 *)PTR_DAT_042384f8);
                                              uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                        
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                              lVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                                              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                        (lVar12,*(undefined8 *)puVar5);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1172,0);
                                              if (lVar12 != 0) {
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1165,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                puVar5 = StringLiteral_1168;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1168,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1555,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                puVar7 = StringLiteral_1367;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1367,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1166,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                puVar3 = 
                                                Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                ;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                              
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                                FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                FUN_02b23db4(lVar11,uVar9,lVar12,
                                                             *(undefined8 *)PTR_DAT_042384f8);
                                                uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                                lVar12 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                             StringLiteral_3532);
                                                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                          (lVar12,*(undefined8 *)StringLiteral_3533)
                                                ;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1172,0);
                                                if (lVar12 != 0) {
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1165,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1555,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1166,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                                  
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                                  FUN_02f17d24(lVar12,uVar10,*(undefined8 *)puVar8);
                                                  FUN_02b23db4(lVar11,uVar9,lVar12,
                                                               *(undefined8 *)PTR_DAT_042384f8);
                                                  plVar14 = (long *)(*(long *)(*(long *)
                                                  StringLiteral_1279 + 0xb8) + 0x18);
                                                  *plVar14 = lVar11;
                                                  thunk_FUN_01e10808(plVar14,lVar11);
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


