/*
FUNCTION_NAME: System.Buffer$$Memmove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 059ec594
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Buffer__Memmove<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,long param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_04980b90();
  }
  if (param_2 == 0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac50);
    uVar4 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac14ca8);
    System_RuntimeType__get_Assembly(uVar4,uVar5,0);
  }
  else if ((int)(param_4 | param_3) < 0) {
    puVar1 = PTR_DAT_0ac23be0;
    if (-1 < (int)param_4) {
      puVar1 = PTR_DAT_0ac161d0;
    }
    uVar5 = thunk_FUN_049ae08c(puVar1);
    thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
    uVar4 = thunk_FUN_04983f60();
    uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac40090);
    FUN_08cc1128(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_4 <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
      if (param_4 < 2) {
        return;
      }
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_06d284ec(**(long **)(lVar2 + 0xb8),param_2,param_3,param_4);
      return;
    }
    thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
    uVar4 = thunk_FUN_04983f60();
    uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac40098);
    FUN_08cc420c(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar4);
}


