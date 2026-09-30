/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 04f5ffd4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetExternalCameraCount(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  float *unaff_x21;
  long unaff_x22;
  undefined8 uVar5;
  float fVar6;
  float unaff_s8;
  uint uStack000000000000000c;
  
  if ((*(byte *)(unaff_x22 + 0xada) & 1) == 0) {
    FUN_02b3c81c(Unity_Properties_ConversionRegistry_ConverterKey_var);
    FUN_02b3c81c(PTR_DAT_06312520);
    *(undefined1 *)(unaff_x22 + 0xada) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  uStack000000000000000c = 0;
  *unaff_x21 = 1.0;
  if ((iVar1 == 2) ||
     (uStack000000000000000c = FUN_04f5df80(param_1,param_2), uStack000000000000000c == 0)) {
    fVar6 = (float)FUN_04f5dbc4(param_1,param_2,&stack0x0000000c,0);
    *unaff_x21 = fVar6;
  }
  else {
    fVar6 = *unaff_x21;
  }
  puVar2 = PTR_DAT_06312520;
  if (unaff_s8 <= fVar6) {
    if (uStack000000000000000c == 0) {
      if (*(char *)(param_1 + 0x13c) == '\0') goto LAB_04f60058;
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uStack000000000000000c = *(uint *)(param_1 + 0x138) & *(uint *)(param_2 + 0xe4);
    }
    uVar4 = uStack000000000000000c;
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8c45c(uVar5,0,0);
    if ((((uVar3 & 1) != 0) && ((uVar4 >> 1 & 1) != 0)) &&
       (uVar3 = FUN_04f60228(uVar3,param_2,*(undefined8 *)(param_1 + 0x150)), (uVar3 & 1) == 0)) {
      uVar4 = uVar4 & 0xfffffffd;
      uStack000000000000000c = uVar4;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x160);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8c45c(uVar5,0,0);
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) &&
       (uVar3 = FUN_04f60228(uVar3,param_2,*(undefined8 *)(param_1 + 0x160)), (uVar3 & 1) == 0)) {
      uVar4 = uVar4 & 0xfffffffe;
    }
  }
  else {
LAB_04f60058:
    uVar4 = 0;
  }
  return uVar4;
}


