/*
FUNCTION_NAME: FUN_037e27d4
ENTRY_POINT: 037e27d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3
*/


void FUN_037e27d4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_0483773f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<DrawingData_BuilderData_ResetAllBuffersToDelegate>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(StringLiteral_1397);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_1398);
    DAT_0483773f = 1;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (uVar4 = FUN_03aa6ab8(*(long *)(param_1 + 0x20),0),
     puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__,
     (uVar4 & 1) == 0)) {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x38);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (plVar8 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar8 + 0x1f8))
                      (plVar8,**(undefined8 **)(*(long *)puVar3 + 0xb8),
                       *(undefined8 *)(*plVar8 + 0x200));
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (plVar8 = (long *)FUN_03aa7478(*(long *)(param_1 + 0x20),0), plVar8 != (long *)0x0)) {
      uVar4 = (**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (0xffff < *(int *)(param_1 + 0x34)) {
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(*(undefined8 *)StringLiteral_1398,0);
        FUN_037e258c(param_1);
        return;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_035d1a84(*(long *)(param_1 + 0x38),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          iVar1 = *(int *)(param_1 + 0x34);
          plVar8 = (long *)FUN_03aa7478(*(long *)(param_1 + 0x20),0);
          lVar7 = *(long *)(param_1 + 0x28);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            uVar2 = *(undefined4 *)(param_1 + 0x34);
            uVar9 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<DrawingData_BuilderData_ResetAllBuffersToDelegate>__
                                      );
            FUN_034f833c(uVar5,param_1,*(undefined8 *)StringLiteral_1397,0);
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (uVar6 = FUN_03aa7478(*(long *)(param_1 + 0x20),0), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x037e2984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar8 + 0x288))
                        (plVar8,uVar9,uVar2,0x10000 - iVar1,uVar5,uVar6,
                         *(undefined8 *)(*plVar8 + 0x290));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


