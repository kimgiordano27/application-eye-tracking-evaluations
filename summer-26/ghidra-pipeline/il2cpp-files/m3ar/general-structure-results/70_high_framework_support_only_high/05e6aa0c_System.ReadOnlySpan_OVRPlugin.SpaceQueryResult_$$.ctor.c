/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05e6aa0c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceQueryResult>___ctor(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
code_r0x05e6aa0c:
  do {
    puVar1 = (undefined8 *)FUN_0406ae20(param_1,param_2,0);
    param_1 = unaff_x25;
    while( true ) {
      in_stack_00000008._4_4_ = (*(code *)*puVar1)(param_1,unaff_w24,puVar1[1]);
      lVar2 = thunk_FUN_0406db0c(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                                 (long)&stack0x00000008 + 4);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_0406ddbc(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar4,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar3 = (long)(int)unaff_w19;
      unaff_w24 = unaff_w24 + 1;
      unaff_w19 = unaff_w19 + 1;
      unaff_x22[lVar3 + 4] = lVar2;
      if (unaff_w24 == unaff_w23) {
        return;
      }
      param_1 = *(long **)(unaff_x21 + 0x10);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      param_2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
        param_2 = FUN_0406aaec(param_2);
      }
      lVar2 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      unaff_x25 = param_1;
      if (uVar5 == 0) break;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      while (*(long *)(piVar6 + -2) != param_2) {
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
        if (uVar5 == 0) goto code_r0x05e6aa0c;
      }
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
    }
  } while( true );
}


