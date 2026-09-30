/*
FUNCTION_NAME: Unity.VisualScripting.ValueInput$$get_invalidConnectedPorts
ENTRY_POINT: 03a468d0
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


void Unity_VisualScripting_ValueInput__get_invalidConnectedPorts(void)

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
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x29;
  undefined1 in_stack_00000008;
  
  FUN_01d7d918();
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(StringLiteral_1555);
  FUN_01d7d918(StringLiteral_1556);
  FUN_01d7d918(StringLiteral_1367);
  *(undefined1 *)(unaff_x25 + 0x2e) = 1;
  puVar3 = StringLiteral_3533;
  puVar2 = StringLiteral_3532;
  puVar1 = StringLiteral_1165;
  in_stack_00000008 = 0;
  uVar9 = thunk_FUN_01de23e8(*unaff_x24,&stack0x00000008);
  uVar10 = thunk_FUN_01de27b8(*unaff_x19);
  FUN_02b90c90(uVar10,uVar9,*unaff_x20);
  **(undefined8 **)(*unaff_x27 + 0xb8) = uVar10;
  thunk_FUN_01e10808(*(undefined8 *)(*unaff_x27 + 0xb8),uVar10);
  uVar9 = thunk_FUN_01de23e8(*unaff_x24);
  uVar10 = thunk_FUN_01de27b8(*unaff_x23);
  FUN_02baf9fc(uVar10,uVar9,*unaff_x22);
  puVar11 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8);
  *puVar11 = uVar10;
  thunk_FUN_01e10808(puVar11,uVar10);
  lVar12 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04238500);
  FUN_02b235c4(lVar12,*unaff_x29);
  uVar9 = *(undefined8 *)StringLiteral_1172;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar9 = FUN_033a87c8(uVar9,0);
  lVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar13,*(undefined8 *)puVar3);
  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
  puVar4 = StringLiteral_4822;
  puVar8 = StringLiteral_3534;
  puVar6 = StringLiteral_1170;
  puVar5 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
  puVar3 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State;
  puVar1 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field;
  if (lVar13 != 0) {
    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)StringLiteral_3534);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar5,0);
    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
    uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
    puVar5 = PTR_DAT_042384f8;
    puVar1 = StringLiteral_1168;
    if (lVar12 != 0) {
      FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)PTR_DAT_042384f8);
      uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
      lVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar13,*(undefined8 *)StringLiteral_3533);
      uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
      puVar4 = StringLiteral_1556;
      puVar6 = StringLiteral_1555;
      puVar2 = StringLiteral_1367;
      if (lVar13 != 0) {
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        puVar4 = Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
        uVar10 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                              ,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        puVar2 = Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field;
        uVar10 = FUN_033a87c8(*(undefined8 *)
                               Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                              ,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        puVar7 = StringLiteral_4822;
        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
        FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
        uVar9 = FUN_033a87c8(*(undefined8 *)puVar1,0);
        lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                  (lVar13,*(undefined8 *)StringLiteral_3533);
        uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
        if (lVar13 != 0) {
          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
          FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
          uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
          lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                    (lVar13,*(undefined8 *)StringLiteral_3533);
          uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
          if (lVar13 != 0) {
            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
            puVar6 = StringLiteral_1556;
            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
            puVar1 = StringLiteral_1170;
            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
            FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
            uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
            lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                      (lVar13,*(undefined8 *)StringLiteral_3533);
            uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
            if (lVar13 != 0) {
              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
              uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
              uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
              uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
              FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
              uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
              lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                        (lVar13,*(undefined8 *)StringLiteral_3533);
              uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
              puVar1 = StringLiteral_1555;
              if (lVar13 != 0) {
                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
                uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                          (lVar13,*(undefined8 *)StringLiteral_3533);
                uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                puVar3 = StringLiteral_1166;
                if (lVar13 != 0) {
                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                  FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
                  uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                  lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                            (lVar13,*(undefined8 *)StringLiteral_3533);
                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                  puVar1 = StringLiteral_1168;
                  if (lVar13 != 0) {
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)
                                           Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                          ,0);
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    puVar4 = StringLiteral_1556;
                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    puVar6 = StringLiteral_1367;
                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    puVar3 = 
                    Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                    ;
                    uVar10 = FUN_033a87c8(*(undefined8 *)
                                           Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                          ,0);
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                    FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
                    uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                    lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                              (lVar13,*(undefined8 *)StringLiteral_3533);
                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                    if (lVar13 != 0) {
                      FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                      FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
                      uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                      lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                (lVar13,*(undefined8 *)StringLiteral_3533);
                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                      if (lVar13 != 0) {
                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                        FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
                        plVar14 = (long *)(*(long *)(*(long *)StringLiteral_1279 + 0xb8) + 0x10);
                        *plVar14 = lVar12;
                        thunk_FUN_01e10808(plVar14,lVar12);
                        lVar12 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04238500);
                        FUN_02b235c4(lVar12,*(undefined8 *)PTR_DAT_042384f0);
                        uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                        puVar3 = StringLiteral_3532;
                        lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                  (lVar13,*(undefined8 *)StringLiteral_3533);
                        puVar2 = StringLiteral_1165;
                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                        if (lVar13 != 0) {
                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                          if (lVar12 != 0) {
                            FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)puVar5);
                            uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                            lVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                            puVar5 = StringLiteral_3533;
                            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                      (lVar13,*(undefined8 *)StringLiteral_3533);
                            puVar2 = StringLiteral_1172;
                            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                            if (lVar13 != 0) {
                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                              puVar6 = StringLiteral_1166;
                              uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                              FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)PTR_DAT_042384f8);
                              uVar9 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                              lVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                        (lVar13,*(undefined8 *)puVar5);
                              uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                              if (lVar13 != 0) {
                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                puVar4 = StringLiteral_1555;
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)PTR_DAT_042384f8);
                                uVar9 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                lVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                          (lVar13,*(undefined8 *)puVar5);
                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                if (lVar13 != 0) {
                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                  FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)PTR_DAT_042384f8);
                                  puVar4 = 
                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                  ;
                                  uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                  ,0);
                                  lVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                            (lVar13,*(undefined8 *)puVar5);
                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                  if (lVar13 != 0) {
                                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                    puVar3 = StringLiteral_1555;
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                    puVar7 = StringLiteral_1556;
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                    FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                    FUN_02b23db4(lVar12,uVar9,lVar13,*(undefined8 *)PTR_DAT_042384f8
                                                );
                                    uVar9 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                    lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                                    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                              (lVar13,*(undefined8 *)puVar5);
                                    uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                    if (lVar13 != 0) {
                                      FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                      FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                      FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                      FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                      FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                      FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                      FUN_02b23db4(lVar12,uVar9,lVar13,
                                                   *(undefined8 *)PTR_DAT_042384f8);
                                      uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                                      lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532)
                                      ;
                                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                (lVar13,*(undefined8 *)puVar5);
                                      uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                      if (lVar13 != 0) {
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        puVar7 = StringLiteral_1556;
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        puVar2 = StringLiteral_1367;
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                        FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                        FUN_02b23db4(lVar12,uVar9,lVar13,
                                                     *(undefined8 *)PTR_DAT_042384f8);
                                        uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                        lVar13 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                     StringLiteral_3532);
                                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                  (lVar13,*(undefined8 *)puVar5);
                                        uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                                        if (lVar13 != 0) {
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0)
                                          ;
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0)
                                          ;
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                          FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                          FUN_02b23db4(lVar12,uVar9,lVar13,
                                                       *(undefined8 *)PTR_DAT_042384f8);
                                          uVar9 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                          lVar13 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                       StringLiteral_3532);
                                          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                    (lVar13,*(undefined8 *)puVar5);
                                          uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0)
                                          ;
                                          if (lVar13 != 0) {
                                            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,
                                                                  0);
                                            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                            uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                            FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                            FUN_02b23db4(lVar12,uVar9,lVar13,
                                                         *(undefined8 *)PTR_DAT_042384f8);
                                            uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                    
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                            puVar3 = StringLiteral_3532;
                                            lVar13 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                         StringLiteral_3532);
                                            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                      (lVar13,*(undefined8 *)puVar5);
                                            uVar10 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,
                                                                  0);
                                            puVar2 = StringLiteral_1367;
                                            if (lVar13 != 0) {
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1165,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1555,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              puVar1 = 
                                              Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                              ;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                          
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                  ,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              puVar4 = StringLiteral_1556;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1556,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              puVar6 = StringLiteral_1170;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1170,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1166,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              puVar2 = StringLiteral_4822;
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_4822,0);
                                              FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                              FUN_02b23db4(lVar12,uVar9,lVar13,
                                                           *(undefined8 *)PTR_DAT_042384f8);
                                              uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                        
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                              lVar13 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
                                              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                        (lVar13,*(undefined8 *)puVar5);
                                              uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                     StringLiteral_1172,0);
                                              if (lVar13 != 0) {
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1165,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                puVar5 = StringLiteral_1168;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1168,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1555,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                puVar7 = StringLiteral_1367;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1367,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1166,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                puVar3 = 
                                                Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                ;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                              
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                uVar10 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                                FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                FUN_02b23db4(lVar12,uVar9,lVar13,
                                                             *(undefined8 *)PTR_DAT_042384f8);
                                                uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                                lVar13 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                             StringLiteral_3532);
                                                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                          (lVar13,*(undefined8 *)StringLiteral_3533)
                                                ;
                                                uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                       StringLiteral_1172,0);
                                                if (lVar13 != 0) {
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1165,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1555,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                         StringLiteral_1166,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  uVar10 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                                  
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                                  FUN_02f17d24(lVar13,uVar10,*(undefined8 *)puVar8);
                                                  FUN_02b23db4(lVar12,uVar9,lVar13,
                                                               *(undefined8 *)PTR_DAT_042384f8);
                                                  plVar14 = (long *)(*(long *)(*(long *)
                                                  StringLiteral_1279 + 0xb8) + 0x18);
                                                  *plVar14 = lVar12;
                                                  thunk_FUN_01e10808(plVar14,lVar12);
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


