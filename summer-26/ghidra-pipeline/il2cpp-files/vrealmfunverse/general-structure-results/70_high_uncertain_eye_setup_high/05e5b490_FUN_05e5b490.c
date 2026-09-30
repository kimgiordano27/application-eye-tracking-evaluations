/*
FUNCTION_NAME: FUN_05e5b490
ENTRY_POINT: 05e5b490
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e5b490(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  
  if ((DAT_066dc61a & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_128__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_143__);
    DAT_066dc61a = 1;
  }
  *(undefined1 *)(param_1 + 0x110) = 1;
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_05e5aa7c(param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28),
                 *(long *)(param_1 + 0x20) + 0xb0);
    *(undefined8 *)(param_1 + 0x118) = 0;
    thunk_FUN_02bb0e9c(param_1 + 0x118,0);
    *(undefined8 *)(param_1 + 0x120) = 0;
    thunk_FUN_02bb0e9c(param_1 + 0x120,0);
    puVar3 = PTR_DAT_06312d90;
    lVar4 = *(long *)(param_1 + 0x10);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
      FUN_05e5abbc(param_1,*(int *)(lVar4 + 0x10) + 1,*(int *)(*(long *)(lVar4 + 0x30) + 0x18) + -1)
      ;
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x118);
      thunk_FUN_02bb0e9c(param_1 + 0x138);
      *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x120);
      thunk_FUN_02bb0e9c(param_1 + 0x140);
      iVar1 = *(int *)(param_1 + 0x28);
      iVar2 = *(int *)(param_1 + 0x2c);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c45700(iVar1 == iVar2,0);
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_05c45700(*(int *)(*(long *)(param_1 + 0x60) + 0x18) == 0,0);
        FUN_05c45700(*(char *)(param_1 + 0x58) == '\0',0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


