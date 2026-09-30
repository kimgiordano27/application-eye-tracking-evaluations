/*
FUNCTION_NAME: OVRPlugin$$get_powerSaving
ENTRY_POINT: 05d78d6c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_powerSaving(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_072b1490;
                    /* try { // try from 05d78d80 to 05e78d83 has its CatchHandler @ 05d78e98 */
  if ((DAT_076d87a3 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1490);
                    /* try { // try from 05d78da4 to 05e78dcb has its CatchHandler @ 05d78e9c */
    thunk_FUN_032e1da0(PTR_DAT_07279e28);
    DAT_076d87a3 = 1;
  }
  FUN_04ef0204(param_1,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_07279e28;
  puVar1 = PTR_DAT_07279568;
  lVar6 = *(long *)(param_1 + 0x88);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
                    /* try { // try from 05d78de8 to 05e78e0f has its CatchHandler @ 05d78e80 */
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar5) {
        return;
      }
      uVar3 = FUN_032d5d3c(*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0x80));
      if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_05d78eb8:
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined8 *)(lVar6 + uVar5 * 8 + 0x20) = uVar3;
      thunk_FUN_0333a630();
      if (0 < *(int *)(param_1 + 0x80)) {
        uVar7 = 0;
        do {
          lVar6 = *(long *)(param_1 + 0x88);
          if (lVar6 == 0) goto LAB_05d78e9c;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_05d78eb8;
          lVar6 = *(long *)(lVar6 + uVar5 * 8 + 0x20);
          if (DAT_076cd761 == '\0') {
            thunk_FUN_032e1da0(puVar1);
            DAT_076cd761 = '\x01';
          }
          if (lVar6 == 0) goto LAB_05d78e9c;
          if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_05d78eb8;
          puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          uVar3 = *puVar4;
          lVar6 = lVar6 + uVar7 * 0x10;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(lVar6 + 0x28) = puVar4[1];
          *(undefined8 *)(lVar6 + 0x20) = uVar3;
        } while ((long)uVar7 < (long)*(int *)(param_1 + 0x80));
      }
      lVar6 = *(long *)(param_1 + 0x88);
      uVar5 = uVar5 + 1;
    } while (lVar6 != 0);
  }
LAB_05d78e9c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


