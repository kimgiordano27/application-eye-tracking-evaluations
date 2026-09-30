/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedHandle$$TryGetMember
ENTRY_POINT: 076d108c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_InspectedHandle__TryGetMember
               (undefined1 param_1 [16],undefined8 param_2)

{
  long lVar1;
  long *unaff_x21;
  long *unaff_x24;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  
  fVar2 = (float)FUN_09517a40(param_2);
  fVar3 = (float)FUN_09517a40(uStack0000000000000028,0);
  thunk_FUN_094e65c8();
  fVar4 = (float)FUN_076c7c44();
  if (DAT_01c759c8 <=
      (fStack000000000000002c + -1.0) * (fStack000000000000002c + -1.0) +
      fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_076c7c44();
    thunk_FUN_094e65c8();
    FUN_094e3620();
  }
  lVar1 = (**(code **)(*unaff_x21 + 0x178))();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) {
    in_stack_00000010 = 0;
    FUN_06145494(*(undefined4 *)(*(long *)(lVar1 + 0x28) + 0x10),&stack0x00000010,
                 *(undefined8 *)PTR_DAT_09f2cd78);
    if ((0.0 < in_stack_00000010._4_4_) && ((in_stack_00000010 & 0xff) != 0)) {
      lVar1 = (**(code **)(*unaff_x21 + 0x178))();
      if (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 0x28);
        if (*(int *)(*(long *)PTR_DAT_09f2e380 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f2e380);
        }
        if (lVar1 != 0) {
          thunk_FUN_094e64b8(*(undefined4 *)(lVar1 + 0x10));
          FUN_076cf434();
          thunk_FUN_094e64b8(*(undefined4 *)(lVar1 + 0x20));
          FUN_094e3620();
          FUN_076cf434();
          FUN_076cf434();
          if (*(long *)(lVar1 + 0x30) != 0) {
            thunk_FUN_094e64b8(*(undefined4 *)(*(long *)(lVar1 + 0x30) + 0x18));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
  return;
}


