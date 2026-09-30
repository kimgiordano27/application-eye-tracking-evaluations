/*
FUNCTION_NAME: FUN_070c4a3c
ENTRY_POINT: 070c4a3c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_070c4a3c(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  if ((DAT_07a5a937 & 1) == 0) {
    FUN_031f20f4(OVRManager_<>c_TypeInfo);
    FUN_031f20f4(OVRManager_CompositionMethod_TypeInfo);
    FUN_031f20f4(OVRHandTest_<>c_TypeInfo);
    FUN_031f20f4(OVRHand_Hand_TypeInfo);
    FUN_031f20f4(
                System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
                );
    DAT_07a5a937 = 1;
  }
  local_28 = 0;
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)
                       System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
                     + 0x130);
    if (((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
         *(long *)
          System_Linq_Expressions_Interpreter_NullableMethodCallInstruction_GetValueOrDefault1_TypeInfo
        )) && (*(char *)(param_1 + 0x4d9) == '\0')) {
      if (*(long *)(param_1 + 0x4a8) != 0) {
        lVar4 = param_2[0xa1];
        FUN_06fcd4f8(*(long *)(param_1 + 0x4a8),lVar4,0);
        if (*(long *)(param_1 + 0x4c0) != 0) {
          FUN_047b08f0(*(long *)(param_1 + 0x4c0),lVar4,
                       *(undefined8 *)OVRManager_CompositionMethod_TypeInfo);
          if (*(long *)(param_1 + 0x4b8) != 0) {
            FUN_047b08f0(*(long *)(param_1 + 0x4b8),param_2,*(undefined8 *)OVRManager_<>c_TypeInfo);
            FUN_070c0ddc(param_2,0,0);
            local_28 = param_2[0x88];
            FUN_06fd123c(&local_28,0,lVar4,0);
            FUN_070c0ea8(param_2,0);
            lVar4 = *(long *)(param_1 + 0x4b8);
            if (*(long **)(param_1 + 0x4c8) == param_2) {
              if (lVar4 != 0) {
                iVar1 = *(int *)(lVar4 + 0x18);
                if (0 < iVar1) {
                  uVar3 = FUN_047af170(lVar4,0,*(undefined8 *)OVRHand_Hand_TypeInfo);
                  FUN_070c3c44(param_1,uVar3);
                  return;
                }
                goto LAB_070c4b84;
              }
            }
            else if (lVar4 != 0) {
              iVar1 = *(int *)(lVar4 + 0x18);
LAB_070c4b84:
              if (iVar1 != 0) {
                return;
              }
              *(undefined8 *)(param_1 + 0x4c8) = 0;
              thunk_FUN_0329bf60((undefined8 *)(param_1 + 0x4c8),0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
  }
  return;
}


