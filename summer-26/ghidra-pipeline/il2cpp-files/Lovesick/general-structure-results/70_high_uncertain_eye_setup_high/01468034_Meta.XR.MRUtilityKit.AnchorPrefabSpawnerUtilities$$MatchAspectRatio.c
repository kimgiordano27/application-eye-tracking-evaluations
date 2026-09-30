/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$MatchAspectRatio
ENTRY_POINT: 01468034
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__MatchAspectRatio
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

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
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  long unaff_x19;
  long unaff_x22;
  undefined8 unaff_x24;
  undefined4 uVar14;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_017b46ec(param_4,0);
  *(long *)(param_4 + 0x10) = unaff_x22;
  puVar2 = PTR_DAT_033f4f18;
  if (unaff_x22 != 0) {
    if (*(int *)(unaff_x22 + 0x18) == 0) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)puVar2,0);
      return;
    }
    if (unaff_x19 != 0) {
      if (*(long *)(unaff_x19 + 0x48) == 0) {
        lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Globalization_GregorianCalendar_ToFourDigitYear__)
        ;
        if (lVar9 == 0) goto LAB_0146839c;
        FUN_013f75bc(lVar9,0);
        *(long *)(unaff_x19 + 0x48) = lVar9;
      }
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_CopyTo__
                                );
      if (lVar9 != 0) {
        FUN_01320e50(lVar9,*(undefined8 *)UnityEngine_SceneManagement_Scene_var);
        lVar10 = *(long *)(param_4 + 0x10);
        *(undefined4 *)(param_4 + 0x18) = 0;
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
        if (lVar10 != 0) {
          iVar13 = 0;
          while (iVar13 < *(int *)(lVar10 + 0x18)) {
            FUN_0132138c(lVar10,iVar13,&stack0x00000010,*(undefined8 *)puVar7);
            plVar8 = in_stack_00000010;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_02681b9c(plVar8,0,0);
            if ((uVar11 & 1) != 0) {
              lVar10 = *(long *)(param_4 + 0x20);
              if (lVar10 == 0) {
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                if (lVar10 == 0) goto LAB_0146839c;
                FUN_0136b58c(lVar10,param_4,*(undefined8 *)puVar3,0);
                *(long *)(param_4 + 0x20) = lVar10;
              }
              FUN_01322b20(lVar9,lVar10,&stack0x00000010,*(undefined8 *)puVar5);
              if (in_stack_00000010 == (long *)0x0) {
                if ((*(long *)(param_4 + 0x10) == 0) ||
                   (FUN_0132138c(*(long *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x18),
                                 &stack0x00000010,*(undefined8 *)puVar7),
                   in_stack_00000010 == (long *)0x0)) goto LAB_0146839c;
                FUN_010e58e8(in_stack_00000010,&stack0x00000010,*(undefined8 *)puVar4);
                plVar8 = in_stack_00000010;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar11 = FUN_02681b9c(plVar8,0,0);
                if (((uVar11 & 1) != 0) && (plVar8 != (long *)0x0)) {
                  lVar10 = *plVar8;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
                  if ((*(byte *)(lVar10 + 300) < bVar1) ||
                     (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_033f17f8)) {
                    bVar1 = *(byte *)(*(long *)
                                       Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                                     + 300);
                    if ((*(byte *)(lVar10 + 300) < bVar1) ||
                       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)
                         Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__
                       )) goto LAB_014682dc;
                  }
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                               Method_Meta_WitAi_ThreadUtility_<>c__DisplayClass17_0_<Background>b__0__
                                             );
                  if (lVar10 == 0) goto LAB_0146839c;
                  FUN_013f742c(lVar10,0);
                  if (*(long *)(param_4 + 0x10) == 0) goto LAB_0146839c;
                  FUN_0132138c(*(long *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x18),
                               &stack0x00000010,*(undefined8 *)puVar7);
                  *(long **)(lVar10 + 0x10) = in_stack_00000010;
                  FUN_02667cd8(&stack0x00000010,plVar8,0);
                  in_stack_00000038 = in_stack_00000018;
                  in_stack_00000030 = in_stack_00000010;
                  in_stack_00000040 = in_stack_00000020;
                  uVar14 = FUN_02687a80(&stack0x00000030,0);
                  *(undefined4 *)(lVar10 + 0x18) = uVar14;
                  *(undefined4 *)(lVar10 + 0x1c) = param_2;
                  *(undefined4 *)(lVar10 + 0x20) = param_3;
                  FUN_00bbd178(lVar9,lVar10,
                               *(undefined8 *)
                                Method_System_Linq_Expressions_Expression_AddAssignChecked__);
                }
              }
            }
LAB_014682dc:
            lVar10 = *(long *)(param_4 + 0x10);
            iVar13 = *(int *)(param_4 + 0x18) + 1;
            *(int *)(param_4 + 0x18) = iVar13;
            if (lVar10 == 0) goto LAB_0146839c;
          }
          lVar10 = *(long *)(unaff_x19 + 0x48);
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x10) = lVar9;
            uVar12 = FUN_013f5b78(lVar10,unaff_x24,0);
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              if (*(char *)(*(long *)(unaff_x19 + 0x48) + 0x20) != '\0') {
                return;
              }
              FUN_014683a8(uVar12,unaff_x24,(long)&stack0x00000028 + 4,&stack0x00000028,unaff_x19);
              *(float *)(unaff_x19 + 0x50) =
                   fStack000000000000002c +
                   (fStack0000000000000028 - fStack000000000000002c) * DAT_028aa3e0;
              return;
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


