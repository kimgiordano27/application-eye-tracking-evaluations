/*
FUNCTION_NAME: Fusion.JsonUtilityExtensions.TypeResolverDelegate$$BeginInvoke
ENTRY_POINT: 0358b580
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void Fusion_JsonUtilityExtensions_TypeResolverDelegate__BeginInvoke(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x25;
  long *unaff_x26;
  long in_stack_00000438;
  
  (**(code **)(param_1 + 0x1a8))();
  if ((*(long *)(unaff_x19 + 0x1d0) == 0) ||
     (lVar1 = FUN_0354c7fc(*(long *)(unaff_x19 + 0x1d0),0), lVar1 == 0)) {
    lVar1 = **(long **)(*(long *)(PTR_DAT_070c1958 + 0x90) + 0xb8);
  }
  lVar2 = *unaff_x26;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x26;
  }
  *(long *)(*(long *)(lVar2 + 0xb8) + 0x10) = lVar1;
  uVar3 = 0;
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    uVar3 = FUN_035b840c(*(long *)(unaff_x19 + 0x50),0);
    if ((uVar3 & 1) == 0) {
LAB_0358b3e8:
      uVar3 = FUN_0358a674();
    }
    else {
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0358b42c;
      if (*(char *)(*(long *)(unaff_x19 + 0x50) + 0xd0) == '\0') goto LAB_0358b3e8;
      memcpy(&stack0x00000018,unaff_x20,0xf8);
      FUN_035869d0();
      uVar3 = FUN_069d9070();
    }
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      uVar3 = *(ulong *)(*(long *)(unaff_x19 + 0x80) + 0x10);
      if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
        return;
      }
      goto Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke;
    }
  }
LAB_0358b42c:
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000438) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
Fusion_JsonUtilityExtensions_TypeSerializerDelegate__Invoke:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


