/*
FUNCTION_NAME: FUN_01647f08
ENTRY_POINT: 01647f08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01647f08(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar9;
  
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar9 = Method_System_Nullable<float>_GetValueOrDefault__;
  if ((DAT_0377829c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<float>_GetValueOrDefault__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_DeepReflection_SlowGetMemberValue__);
    thunk_FUN_00d48444(StringLiteral_11770);
    thunk_FUN_00d48444(Method_System_IO_FileStream_FlushBuffer__);
    thunk_FUN_00d48444(PTR_DAT_033f23b0);
    thunk_FUN_00d48444(System_Linq_Expressions_GotoExpression_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InputArrayExtensions_IndexOfReference<InputActionState>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ed5e8);
    thunk_FUN_00d48444(double___var);
    DAT_0377829c = 1;
  }
  lVar10 = *(long *)(param_1 + 0x98);
  uVar11 = *(undefined8 *)puVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_01780344(uVar11,0);
  if ((lVar10 != 0) &&
     (plVar3 = (long *)FUN_01682720(lVar10,*(undefined8 *)PTR_DAT_033f23b0,uVar11,0),
     plVar3 != (long *)0x0)) {
    if (*(long *)(*plVar3 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__ +
                 0x40)) {
LAB_01648190:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar4 = (undefined8 *)thunk_FUN_00d624a0();
    *(undefined8 *)(param_1 + 0x78) = *puVar4;
    puVar9 = Method_System_IO_FileStream_FlushBuffer__;
    if (*(long *)(param_1 + 0x98) != 0) {
      lVar10 = FUN_01684938(*(long *)(param_1 + 0x98),
                            *(undefined8 *)System_Linq_Expressions_GotoExpression_TypeInfo,0);
      *(long *)(param_1 + 0x90) = lVar10;
      uVar11 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar5 = thunk_FUN_00d5a0a4(uVar11);
      if (lVar10 == 0) {
        *(long *)(param_1 + 0x90) = lVar5;
        if (lVar5 == 0) {
          thunk_FUN_00d48444(
                            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                            );
          uVar11 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar9 = PTR_DAT_033f1608;
          goto LAB_016481b4;
        }
      }
      else {
        uVar6 = FUN_015fe7e8(lVar5,*(undefined8 *)(param_1 + 0x90),0);
        if ((uVar6 & 1) != 0) {
          thunk_FUN_00d48444(
                            UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                            );
          uVar11 = thunk_FUN_00d62348();
          FUN_00ac2be8();
          puVar9 = PTR_DAT_033eedf0;
LAB_016481b4:
          uVar8 = thunk_FUN_00d48444(puVar9);
          FUN_01679968(uVar11,uVar8,0);
          uVar8 = thunk_FUN_00d48444(Oculus_Interaction_BestSelectInteractorGroup_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,uVar8);
        }
      }
      puVar9 = Method_Sirenix_Utilities_DeepReflection_SlowGetMemberValue__;
      if (*(long *)(param_1 + 0x98) != 0) {
        uVar11 = FUN_01684938(*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_033ed5e8,0);
        *(undefined8 *)(param_1 + 0x80) = uVar11;
        lVar10 = *(long *)(param_1 + 0x98);
        uVar11 = *(undefined8 *)puVar9;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_01780344(uVar11,0);
        if ((lVar10 != 0) &&
           (plVar3 = (long *)FUN_01682720(lVar10,*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_Utilities_InputArrayExtensions_IndexOfReference<InputActionState>__
                                          ,uVar11,0), plVar3 != (long *)0x0)) {
          if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)StringLiteral_11770 + 0x40))
          goto LAB_01648190;
          puVar7 = (undefined4 *)thunk_FUN_00d624a0();
          *(undefined4 *)(param_1 + 0x88) = *puVar7;
          if (*(long *)(param_1 + 0x98) != 0) {
            bVar2 = FUN_0168435c(*(long *)(param_1 + 0x98),*(undefined8 *)double___var,0);
            *(byte *)(param_1 + 0x8c) = bVar2 & 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


