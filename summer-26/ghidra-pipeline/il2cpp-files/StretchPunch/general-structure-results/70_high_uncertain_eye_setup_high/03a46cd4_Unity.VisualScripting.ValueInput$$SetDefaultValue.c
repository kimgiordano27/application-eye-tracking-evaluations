/*
FUNCTION_NAME: Unity.VisualScripting.ValueInput$$SetDefaultValue
ENTRY_POINT: 03a46cd4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_19
*/


void Unity_VisualScripting_ValueInput__SetDefaultValue(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_033a87c8(*unaff_x27,0);
  if (unaff_x21 != 0) {
    FUN_02f17d24();
    FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
    FUN_02f17d24();
    FUN_033a87c8(*unaff_x28,0);
    FUN_02f17d24();
    FUN_033a87c8(*unaff_x29,0);
    FUN_02f17d24();
    FUN_033a87c8(*unaff_x23,0);
    FUN_02f17d24();
    FUN_02b23db4();
    FUN_033a87c8(*unaff_x26,0);
    lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar8,*(undefined8 *)StringLiteral_3533);
    uVar9 = FUN_033a87c8(*unaff_x27,0);
    if (lVar8 != 0) {
      FUN_02f17d24(lVar8,uVar9,*unaff_x24);
      puVar3 = StringLiteral_1556;
      uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
      FUN_02f17d24(lVar8,uVar9,*unaff_x24);
      puVar2 = StringLiteral_1170;
      uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
      FUN_02f17d24(lVar8,uVar9,*unaff_x24);
      uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
      FUN_02f17d24(lVar8,uVar9,*unaff_x24);
      uVar9 = FUN_033a87c8(*unaff_x28,0);
      FUN_02f17d24(lVar8,uVar9,*unaff_x24);
      uVar9 = FUN_033a87c8(*unaff_x29,0);
      FUN_02f17d24(lVar8,uVar9,*unaff_x24);
      uVar9 = FUN_033a87c8(*unaff_x23,0);
      FUN_02f17d24(lVar8,uVar9,*unaff_x24);
      FUN_02b23db4();
      FUN_033a87c8(*unaff_x27,0);
      lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar8,*(undefined8 *)StringLiteral_3533);
      uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
      if (lVar8 != 0) {
        FUN_02f17d24(lVar8,uVar9,*unaff_x24);
        uVar9 = FUN_033a87c8(*unaff_x28,0);
        FUN_02f17d24(lVar8,uVar9,*unaff_x24);
        uVar9 = FUN_033a87c8(*unaff_x29,0);
        FUN_02f17d24(lVar8,uVar9,*unaff_x24);
        uVar9 = FUN_033a87c8(*unaff_x23,0);
        FUN_02f17d24(lVar8,uVar9,*unaff_x24);
        FUN_02b23db4();
        FUN_033a87c8(*(undefined8 *)puVar3,0);
        lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                  (lVar8,*(undefined8 *)StringLiteral_3533);
        uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
        puVar2 = StringLiteral_1555;
        if (lVar8 != 0) {
          FUN_02f17d24(lVar8,uVar9,*unaff_x24);
          uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
          FUN_02f17d24(lVar8,uVar9,*unaff_x24);
          uVar9 = FUN_033a87c8(*unaff_x28,0);
          FUN_02f17d24(lVar8,uVar9,*unaff_x24);
          uVar9 = FUN_033a87c8(*unaff_x29,0);
          FUN_02f17d24(lVar8,uVar9,*unaff_x24);
          uVar9 = FUN_033a87c8(*unaff_x23,0);
          FUN_02f17d24(lVar8,uVar9,*unaff_x24);
          FUN_02b23db4();
          FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
          lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                    (lVar8,*(undefined8 *)StringLiteral_3533);
          uVar9 = FUN_033a87c8(*unaff_x28,0);
          puVar3 = StringLiteral_1166;
          if (lVar8 != 0) {
            FUN_02f17d24(lVar8,uVar9,*unaff_x24);
            uVar9 = FUN_033a87c8(*unaff_x29,0);
            FUN_02f17d24(lVar8,uVar9,*unaff_x24);
            uVar9 = FUN_033a87c8(*unaff_x23,0);
            FUN_02f17d24(lVar8,uVar9,*unaff_x24);
            FUN_02b23db4();
            FUN_033a87c8(*(undefined8 *)puVar3,0);
            lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                      (lVar8,*(undefined8 *)StringLiteral_3533);
            uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
            puVar2 = StringLiteral_1168;
            if (lVar8 != 0) {
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              uVar9 = FUN_033a87c8(*(undefined8 *)
                                    Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                   ,0);
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              puVar6 = StringLiteral_1556;
              uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              puVar4 = StringLiteral_1367;
              uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              puVar3 = 
              Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action;
              uVar9 = FUN_033a87c8(*(undefined8 *)
                                    Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                   ,0);
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              uVar9 = FUN_033a87c8(*unaff_x29,0);
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              uVar9 = FUN_033a87c8(*unaff_x23,0);
              FUN_02f17d24(lVar8,uVar9,*unaff_x24);
              FUN_02b23db4();
              FUN_033a87c8(*(undefined8 *)puVar3,0);
              lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                        (lVar8,*(undefined8 *)StringLiteral_3533);
              uVar9 = FUN_033a87c8(*unaff_x29,0);
              if (lVar8 != 0) {
                FUN_02f17d24(lVar8,uVar9,*unaff_x24);
                FUN_02b23db4();
                FUN_033a87c8(*(undefined8 *)puVar4,0);
                lVar8 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                          (lVar8,*(undefined8 *)StringLiteral_3533);
                uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                if (lVar8 != 0) {
                  FUN_02f17d24(lVar8,uVar9,*unaff_x24);
                  uVar9 = FUN_033a87c8(*unaff_x29,0);
                  FUN_02f17d24(lVar8,uVar9,*unaff_x24);
                  uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
                  FUN_02f17d24(lVar8,uVar9,*unaff_x24);
                  FUN_02b23db4();
                  *(undefined8 *)(*(long *)(*(long *)StringLiteral_1279 + 0xb8) + 0x10) = unaff_x19;
                  thunk_FUN_01e10808();
                  lVar8 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04238500);
                  FUN_02b235c4(lVar8,*(undefined8 *)PTR_DAT_042384f0);
                  uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                  puVar4 = StringLiteral_3532;
                  lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                            (lVar10,*(undefined8 *)StringLiteral_3533);
                  puVar3 = StringLiteral_1165;
                  uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                  if (lVar10 != 0) {
                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                    uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                    uVar11 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                    uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                    uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                    if (lVar8 != 0) {
                      FUN_02b23db4(lVar8,uVar9,lVar10,*unaff_x22);
                      uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                      lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
                      puVar6 = StringLiteral_3533;
                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                (lVar10,*(undefined8 *)StringLiteral_3533);
                      puVar3 = StringLiteral_1172;
                      uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                      if (lVar10 != 0) {
                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                        puVar5 = StringLiteral_1166;
                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                        FUN_02b23db4(lVar8,uVar9,lVar10,*(undefined8 *)PTR_DAT_042384f8);
                        uVar9 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                        lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                  (lVar10,*(undefined8 *)puVar6);
                        uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                        if (lVar10 != 0) {
                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                          puVar1 = StringLiteral_1555;
                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                          uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                          FUN_02b23db4(lVar8,uVar9,lVar10,*(undefined8 *)PTR_DAT_042384f8);
                          uVar9 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                          lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
                          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                    (lVar10,*(undefined8 *)puVar6);
                          uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                          if (lVar10 != 0) {
                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                            uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                            FUN_02b23db4(lVar8,uVar9,lVar10,*(undefined8 *)PTR_DAT_042384f8);
                            puVar1 = 
                            Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                            ;
                            uVar9 = FUN_033a87c8(*(undefined8 *)
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                 ,0);
                            lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
                            System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                      (lVar10,*(undefined8 *)puVar6);
                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                            if (lVar10 != 0) {
                              FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                              uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                              FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                              uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                              FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                              puVar4 = StringLiteral_1555;
                              uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                              FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                              puVar7 = StringLiteral_1556;
                              uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                              FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                              uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                              FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                              uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                              FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                              FUN_02b23db4(lVar8,uVar9,lVar10,*(undefined8 *)PTR_DAT_042384f8);
                              uVar9 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                              lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                              System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                        (lVar10,*(undefined8 *)puVar6);
                              uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                              if (lVar10 != 0) {
                                FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                uVar11 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                uVar11 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                FUN_02b23db4(lVar8,uVar9,lVar10,*(undefined8 *)PTR_DAT_042384f8);
                                uVar9 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                                lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                                System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                          (lVar10,*(undefined8 *)puVar6);
                                uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                if (lVar10 != 0) {
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  uVar11 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  uVar11 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  puVar7 = StringLiteral_1556;
                                  uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  puVar3 = StringLiteral_1367;
                                  uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0);
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                  FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                  FUN_02b23db4(lVar8,uVar9,lVar10,*(undefined8 *)PTR_DAT_042384f8);
                                  uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                  lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                                  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                            (lVar10,*(undefined8 *)puVar6);
                                  uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                                  if (lVar10 != 0) {
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                    FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                    FUN_02b23db4(lVar8,uVar9,lVar10,*(undefined8 *)PTR_DAT_042384f8)
                                    ;
                                    uVar9 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                    lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532);
                                    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                              (lVar10,*(undefined8 *)puVar6);
                                    uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                                    if (lVar10 != 0) {
                                      FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                      uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                      FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                      uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                      FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                      FUN_02b23db4(lVar8,uVar9,lVar10,
                                                   *(undefined8 *)PTR_DAT_042384f8);
                                      uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                        
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                      puVar4 = StringLiteral_3532;
                                      lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3532)
                                      ;
                                      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                (lVar10,*(undefined8 *)puVar6);
                                      uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                                      puVar3 = StringLiteral_1367;
                                      if (lVar10 != 0) {
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        puVar2 = 
                                        Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                        ;
                                        uVar11 = FUN_033a87c8(*(undefined8 *)
                                                                                                                              
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_ParameterEnumerator_m_State
                                                  ,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        puVar1 = StringLiteral_1556;
                                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1556,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        puVar5 = StringLiteral_1170;
                                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1170,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        puVar3 = StringLiteral_4822;
                                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_4822,0);
                                        FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                        FUN_02b23db4(lVar8,uVar9,lVar10,
                                                     *(undefined8 *)PTR_DAT_042384f8);
                                        uVar9 = FUN_033a87c8(*(undefined8 *)
                                                                                                                            
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                        lVar10 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
                                        System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                  (lVar10,*(undefined8 *)puVar6);
                                        uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0);
                                        if (lVar10 != 0) {
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,0)
                                          ;
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          puVar6 = StringLiteral_1168;
                                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1168,0)
                                          ;
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,0)
                                          ;
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          puVar7 = StringLiteral_1367;
                                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1367,0)
                                          ;
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,0)
                                          ;
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          puVar4 = 
                                          Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                          ;
                                          uVar11 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                  
                                                  Field_UnityEngine_InputSystem_InputActionSetupExtensions_CompositeSyntax_m_Action
                                                  ,0);
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                          FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                          FUN_02b23db4(lVar8,uVar9,lVar10,
                                                       *(undefined8 *)PTR_DAT_042384f8);
                                          uVar9 = FUN_033a87c8(*(undefined8 *)puVar3,0);
                                          lVar10 = thunk_FUN_01de27b8(*(undefined8 *)
                                                                       StringLiteral_3532);
                                          System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                                                    (lVar10,*(undefined8 *)StringLiteral_3533);
                                          uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1172,0)
                                          ;
                                          if (lVar10 != 0) {
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1165,
                                                                  0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar6,0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1555,
                                                                  0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar2,0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar1,0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar5,0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar7,0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)StringLiteral_1166,
                                                                  0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)puVar4,0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            uVar11 = FUN_033a87c8(*(undefined8 *)
                                                                                                                                      
                                                  Field_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter_field
                                                  ,0);
                                            FUN_02f17d24(lVar10,uVar11,*unaff_x24);
                                            FUN_02b23db4(lVar8,uVar9,lVar10,
                                                         *(undefined8 *)PTR_DAT_042384f8);
                                            plVar12 = (long *)(*(long *)(*(long *)StringLiteral_1279
                                                                        + 0xb8) + 0x18);
                                            *plVar12 = lVar8;
                                            thunk_FUN_01e10808(plVar12,lVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


