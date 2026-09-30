/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$RotateVolumeBounds
ENTRY_POINT: 01467f18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__RotateVolumeBounds
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,long param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined4 uVar15;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  puVar2 = Method_Sirenix_Serialization_SerializationPolicies_<>c_<get_Strict>b__10_0__;
  if ((DAT_03776ac3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_AddAssignChecked__);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                      );
    thunk_FUN_00d48444(UnityEngine_SceneManagement_Scene_var);
    thunk_FUN_00d48444(StringLiteral_4842);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_CopyTo__
                      );
    thunk_FUN_00d48444(Method_System_Globalization_GregorianCalendar_ToFourDigitYear__);
    thunk_FUN_00d48444(PTR_DAT_033f17f8);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSet__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                      );
    thunk_FUN_00d48444(System_Net_WebException_TypeInfo);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_SerializationPolicies_<>c_<get_Strict>b__10_0__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f4f18);
    thunk_FUN_00d48444(Method_Meta_WitAi_ThreadUtility_<>c__DisplayClass17_0_<Background>b__0__);
    DAT_03776ac3 = 1;
  }
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  _fStack0000000000000028 = 0;
  in_stack_00000030 = (long *)0x0;
  lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar9 != 0) {
    FUN_017b46ec(lVar9,0);
    *(long *)(lVar9 + 0x10) = param_5;
    puVar2 = PTR_DAT_033f4f18;
    if (param_5 != 0) {
      if (*(int *)(param_5 + 0x18) == 0) {
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02661754(*(undefined8 *)puVar2,0);
        return;
      }
      if (param_7 != 0) {
        if (*(long *)(param_7 + 0x48) == 0) {
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Globalization_GregorianCalendar_ToFourDigitYear__
                                     );
          if (lVar10 == 0) goto LAB_0146839c;
          FUN_013f75bc(lVar10,0);
          *(long *)(param_7 + 0x48) = lVar10;
        }
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                     Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_CopyTo__
                                   );
        if (lVar10 != 0) {
          FUN_01320e50(lVar10,*(undefined8 *)UnityEngine_SceneManagement_Scene_var);
          lVar11 = *(long *)(lVar9 + 0x10);
          *(undefined4 *)(lVar9 + 0x18) = 0;
          puVar7 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__;
          puVar6 = 
          Method_Oculus_Interaction_PointerInteractor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_InteractableSet__
          ;
          puVar5 = 
          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__7>__
          ;
          puVar4 = System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo;
          puVar3 = System_Net_WebException_TypeInfo;
          puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          if (lVar11 != 0) {
            iVar14 = 0;
            while (iVar14 < *(int *)(lVar11 + 0x18)) {
              FUN_0132138c(lVar11,iVar14,&stack0x00000010,*(undefined8 *)puVar7);
              plVar8 = in_stack_00000010;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar12 = FUN_02681b9c(plVar8,0,0);
              if ((uVar12 & 1) != 0) {
                lVar11 = *(long *)(lVar9 + 0x20);
                if (lVar11 == 0) {
                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                  if (lVar11 == 0) goto LAB_0146839c;
                  FUN_0136b58c(lVar11,lVar9,*(undefined8 *)puVar3,0);
                  *(long *)(lVar9 + 0x20) = lVar11;
                }
                FUN_01322b20(lVar10,lVar11,&stack0x00000010,*(undefined8 *)puVar5);
                if (in_stack_00000010 == (long *)0x0) {
                  if ((*(long *)(lVar9 + 0x10) == 0) ||
                     (FUN_0132138c(*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x18),
                                   &stack0x00000010,*(undefined8 *)puVar7),
                     in_stack_00000010 == (long *)0x0)) goto LAB_0146839c;
                  FUN_010e58e8(in_stack_00000010,&stack0x00000010,*(undefined8 *)puVar4);
                  plVar8 = in_stack_00000010;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar12 = FUN_02681b9c(plVar8,0,0);
                  if (((uVar12 & 1) != 0) && (plVar8 != (long *)0x0)) {
                    lVar11 = *plVar8;
                    bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
                    if ((*(byte *)(lVar11 + 300) < bVar1) ||
                       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_033f17f8)) {
                      bVar1 = *(byte *)(*(long *)
                                         Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                                       + 300);
                      if ((*(byte *)(lVar11 + 300) < bVar1) ||
                         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                         )) goto LAB_014682dc;
                    }
                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_Meta_WitAi_ThreadUtility_<>c__DisplayClass17_0_<Background>b__0__
                                               );
                    if (lVar11 == 0) goto LAB_0146839c;
                    FUN_013f742c(lVar11,0);
                    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_0146839c;
                    FUN_0132138c(*(long *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x18),
                                 &stack0x00000010,*(undefined8 *)puVar7);
                    *(long **)(lVar11 + 0x10) = in_stack_00000010;
                    FUN_02667cd8(&stack0x00000010,plVar8,0);
                    in_stack_00000038 = in_stack_00000018;
                    in_stack_00000030 = in_stack_00000010;
                    in_stack_00000040 = in_stack_00000020;
                    uVar15 = FUN_02687a80(&stack0x00000030,0);
                    *(undefined4 *)(lVar11 + 0x18) = uVar15;
                    *(undefined4 *)(lVar11 + 0x1c) = param_2;
                    *(undefined4 *)(lVar11 + 0x20) = param_3;
                    FUN_00bbd178(lVar10,lVar11,
                                 *(undefined8 *)
                                  Method_System_Linq_Expressions_Expression_AddAssignChecked__);
                  }
                }
              }
LAB_014682dc:
              lVar11 = *(long *)(lVar9 + 0x10);
              iVar14 = *(int *)(lVar9 + 0x18) + 1;
              *(int *)(lVar9 + 0x18) = iVar14;
              if (lVar11 == 0) goto LAB_0146839c;
            }
            lVar9 = *(long *)(param_7 + 0x48);
            if (lVar9 != 0) {
              *(long *)(lVar9 + 0x10) = lVar10;
              uVar13 = FUN_013f5b78(lVar9,param_6,0);
              if (*(long *)(param_7 + 0x48) != 0) {
                if (*(char *)(*(long *)(param_7 + 0x48) + 0x20) != '\0') {
                  return;
                }
                FUN_014683a8(uVar13,param_6,(long)&stack0x00000028 + 4,&stack0x00000028,param_7);
                *(float *)(param_7 + 0x50) =
                     fStack000000000000002c +
                     (fStack0000000000000028 - fStack000000000000002c) * DAT_028aa3e0;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0146839c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


