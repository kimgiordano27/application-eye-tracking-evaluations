/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$RegisterActionMapsWithRuntime
ENTRY_POINT: 036e7a64
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 91
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_18;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction__RegisterActionMapsWithRuntime
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar2 = 
  PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo_03ce7830;
  if ((DAT_03ef751d & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo_03ce7838
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo_03ce7840
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionMapConfig_TypeInfo_03ce7830
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo_03ce7848
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_Add___03ce7850
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_Add___03ce7858
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_Add___03ce7860
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>_Add___03cb5fa0);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>__ctor___03ce7868
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>__ctor___03ce7870
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>__ctor___03ce7878
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<string>__ctor___03cb5fb0);
    FUN_01c5c92c(
                PTR_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo_03ce7880
                );
    FUN_01c5c92c(
                PTR_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo_03ce7888
                );
    FUN_01c5c92c(
                PTR_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo_03ce7890
                );
    FUN_01c5c92c(PTR_System_Collections_Generic_List<string>_TypeInfo_03cb5fc8);
    FUN_01c5c92c(PTR_StringLiteral_8443_03ce7a28);
    FUN_01c5c92c(PTR_StringLiteral_4537_03ccfdb0);
    FUN_01c5c92c(PTR_StringLiteral_908_03ce7a30);
    FUN_01c5c92c(PTR_StringLiteral_8310_03ce7a38);
    FUN_01c5c92c(PTR_StringLiteral_828_03ce7a40);
    FUN_01c5c92c(PTR_StringLiteral_881_03ce7a48);
    FUN_01c5c92c(PTR_StringLiteral_2701_03ce7a18);
    FUN_01c5c92c(PTR_StringLiteral_1_03cb62a8);
    FUN_01c5c92c(PTR_StringLiteral_9412_03ce7a50);
    FUN_01c5c92c(PTR_StringLiteral_2400_03ce7a58);
    DAT_03ef751d = 1;
  }
  lVar8 = thunk_FUN_01c8fc48(*(undefined8 *)puVar2);
  System_Object___ctor(lVar8,0);
  puVar7 = PTR_StringLiteral_881_03ce7a48;
  puVar6 = PTR_StringLiteral_2701_03ce7a18;
  puVar5 = 
  PTR_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo_03ce7880;
  puVar4 = 
  PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>__ctor___03ce7870
  ;
  puVar3 = 
  PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_DeviceConfig_TypeInfo_03ce7848;
  puVar2 = PTR_StringLiteral_1_03cb62a8;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)PTR_StringLiteral_8310_03ce7a38;
    thunk_FUN_01cc8040();
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar6;
    thunk_FUN_01cc8040();
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar7;
    thunk_FUN_01cc8040();
    *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)puVar2;
    thunk_FUN_01cc8040();
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_01cc8040();
    lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)puVar5);
    System_Collections_Generic_List<object>___ctor(lVar9,*(undefined8 *)puVar4);
    lVar10 = thunk_FUN_01c8fc48(*(undefined8 *)puVar3);
    System_Object___ctor(lVar10,0);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)PTR_StringLiteral_908_03ce7a30;
      *(undefined4 *)(lVar10 + 0x10) = 0x31;
      thunk_FUN_01cc8040();
      if (lVar9 != 0) {
        lVar13 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)
                  PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_Add___03ce7850
        ;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar4 = 
        PTR_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo_03ce7888
        ;
        puVar3 = 
        PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>__ctor___03ce7868
        ;
        puVar2 = 
        PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionConfig_TypeInfo_03ce7840;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar10;
            thunk_FUN_01cc8040(plVar11,lVar10);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (lVar9,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar8 + 0x20) = lVar9;
          thunk_FUN_01cc8040((long *)(lVar8 + 0x20),lVar9);
          lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)puVar4);
          System_Collections_Generic_List<object>___ctor(lVar9,*(undefined8 *)puVar3);
          lVar10 = thunk_FUN_01c8fc48(*(undefined8 *)puVar2);
          System_Object___ctor(lVar10,0);
          puVar4 = PTR_StringLiteral_4537_03ccfdb0;
          puVar3 = PTR_System_Collections_Generic_List<string>_TypeInfo_03cb5fc8;
          puVar2 = PTR_Method_System_Collections_Generic_List<string>__ctor___03cb5fb0;
          if (lVar10 != 0) {
            *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_StringLiteral_9412_03ce7a50;
            thunk_FUN_01cc8040();
            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar4;
            thunk_FUN_01cc8040((undefined8 *)(lVar10 + 0x20));
            uVar12 = *(undefined8 *)puVar3;
            *(undefined4 *)(lVar10 + 0x18) = 3;
            lVar13 = thunk_FUN_01c8fc48(uVar12);
            System_Collections_Generic_List<object>___ctor(lVar13,*(undefined8 *)puVar2);
            puVar2 = PTR_Method_System_Collections_Generic_List<string>_Add___03cb5fa0;
            if (lVar13 != 0) {
              lVar14 = *(long *)(lVar13 + 0x10);
              uVar12 = *(undefined8 *)PTR_StringLiteral_2400_03ce7a58;
              lVar15 = *(long *)PTR_Method_System_Collections_Generic_List<string>_Add___03cb5fa0;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              puVar3 = PTR_StringLiteral_8443_03ce7a28;
              if (lVar14 != 0) {
                uVar1 = *(uint *)(lVar13 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                  thunk_FUN_01cc8040();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (lVar13,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                lVar14 = *(long *)(lVar13 + 0x10);
                uVar12 = *(undefined8 *)puVar3;
                lVar15 = *(long *)puVar2;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                puVar4 = 
                PTR_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_TypeInfo_03ce7890
                ;
                puVar3 = 
                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>__ctor___03ce7878
                ;
                puVar2 = 
                PTR_UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature_ActionBinding_TypeInfo_03ce7838
                ;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                    thunk_FUN_01cc8040();
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (lVar13,uVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar10 + 0x30) = lVar13;
                  thunk_FUN_01cc8040((long *)(lVar10 + 0x30),lVar13);
                  lVar13 = thunk_FUN_01c8fc48(*(undefined8 *)puVar4);
                  System_Collections_Generic_List<object>___ctor(lVar13,*(undefined8 *)puVar3);
                  lVar14 = thunk_FUN_01c8fc48(*(undefined8 *)puVar2);
                  System_Object___ctor(lVar14,0);
                  if (lVar14 != 0) {
                    *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)PTR_StringLiteral_828_03ce7a40;
                    thunk_FUN_01cc8040();
                    *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)puVar7;
                    thunk_FUN_01cc8040();
                    if (lVar13 != 0) {
                      lVar15 = *(long *)(lVar13 + 0x10);
                      lVar16 = *(long *)
                                PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionBinding>_Add___03ce7858
                      ;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar13 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                          plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar11 = lVar14;
                          thunk_FUN_01cc8040(plVar11,lVar14);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    (lVar13,lVar14,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar10 + 0x28) = lVar13;
                        thunk_FUN_01cc8040((long *)(lVar10 + 0x28),lVar13);
                        if (lVar9 != 0) {
                          lVar13 = *(long *)(lVar9 + 0x10);
                          lVar14 = *(long *)
                                    PTR_Method_System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_Add___03ce7860
                          ;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar11 = lVar10;
                              thunk_FUN_01cc8040(plVar11,lVar10);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        (lVar9,lVar10,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar8 + 0x28) = lVar9;
                            uVar12 = thunk_FUN_01cc8040((long *)(lVar8 + 0x28),lVar9);
                            UnityEngine_XR_OpenXR_Features_OpenXRInteractionFeature__AddActionMap
                                      (uVar12,lVar8);
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


