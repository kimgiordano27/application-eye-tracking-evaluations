/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 05d8c2dc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardModelAnimationStates(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x8d8) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1900);
    thunk_FUN_032e1da0(PTR_DAT_072b1840);
    thunk_FUN_032e1da0(PTR_DAT_072b1850);
    thunk_FUN_032e1da0(PTR_DAT_072b1908);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    *(undefined1 *)(unaff_x20 + 0x8d8) = 1;
  }
  puVar3 = PTR_DAT_072b1900;
  puVar2 = PTR_DAT_072b1850;
  puVar1 = PTR_DAT_072794f0;
  if (*(char *)(param_1 + 0x41) != '\0') {
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b1840);
    FUN_046ae03c(uVar5,param_1,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_05d89624(uVar5);
  }
  puVar2 = PTR_DAT_072b1908;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar6 = FUN_03afd618(*(undefined8 *)puVar2);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x18) != 0) {
      if ((int)*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      lVar7 = *(long *)puVar1;
      uVar5 = *(undefined8 *)(lVar6 + 0x20);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar7);
      }
      bVar4 = FUN_06becf70(uVar5,0);
      *(byte *)(param_1 + 0x58) = bVar4 & 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


