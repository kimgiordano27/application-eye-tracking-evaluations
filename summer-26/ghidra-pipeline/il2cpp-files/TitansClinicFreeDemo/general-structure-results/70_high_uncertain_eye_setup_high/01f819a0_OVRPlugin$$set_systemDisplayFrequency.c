/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 01f819a0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_systemDisplayFrequency
               (long *param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,
               long param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar5;
  long lVar6;
  undefined *puVar4;
  
                    /* try { // try from 01f819b0 to 020819b3 has its CatchHandler @ 01f81a30 */
                    /* try { // try from 01f819b4 to 020819cb has its CatchHandler @ 01f81a34 */
                    /* try { // try from 01f819cc to 02081a4b has its CatchHandler @ 01f8195c */
  if ((DAT_0293de30 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    DAT_0293de30 = 1;
  }
  puVar4 = PTR_DAT_027b32e0;
  if (param_2 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
                    /* catch() { ... } // from try @ 01f81a4c with catch @ 01f81adc
                       catch() { ... } // from try @ 01f81acc with catch @ 01f81adc */
    uVar2 = thunk_FUN_0124bba8();
    puVar4 = PTR_DAT_027b5cd8;
                    /* try { // try from 01f81ae0 to 02081ae3 has its CatchHandler @ 01f81aec */
                    /* try { // try from 01f81ae4 to 02081aef has its CatchHandler @ 01f8195c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f81ae0 with catch @ 01f81aec
                        */
  }
  else {
    if (param_6 != 0) {
      uVar1 = *(uint *)(param_6 + 0x18);
      if (0 < (int)uVar1) {
        lVar5 = 0;
        do {
          if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01f81acc to 02081adb has its CatchHandler @ 01f81adc */
            FUN_01230ca8();
          }
          lVar6 = *(long *)(param_6 + 0x20 + lVar5 * 8);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          if (lVar6 == 0) goto LAB_01f81a84;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f819b0 with catch @ 01f81a30
                        */
          uVar1 = *(uint *)(param_6 + 0x18);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f819b4 with catch @ 01f81a34
                        */
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < (int)uVar1);
      }
                    /* try { // try from 01f81a4c to 02081a63 has its CatchHandler @ 01f81adc */
                    /* try { // try from 01f81a64 to 02081acb has its CatchHandler @ 01f8195c */
                    /* WARNING: Could not recover jumptable at 0x01f81a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x728))
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                 *(undefined8 *)(*param_1 + 0x730));
      return;
    }
LAB_01f81a84:
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar2 = thunk_FUN_0124bba8();
    puVar4 = PTR_DAT_027c12e8;
  }
  uVar3 = thunk_FUN_01279b34(puVar4);
  FUN_01e75914(uVar2,uVar3,0);
  uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1308);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar2,uVar3);
}


