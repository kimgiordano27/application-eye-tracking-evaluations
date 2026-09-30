/*
FUNCTION_NAME: FUN_053a0700
ENTRY_POINT: 053a0700
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


undefined8 FUN_053a0700(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 053a0700 to 054a0703 has its CatchHandler @ 053a0744 */
                    /* try { // try from 053a0704 to 054a0707 has its CatchHandler @ 053a073c */
                    /* try { // try from 053a0708 to 054a070b has its CatchHandler @ 053a0754 */
                    /* try { // try from 053a070c to 054a070f has its CatchHandler @ 053a072c */
                    /* try { // try from 053a0710 to 054a0713 has its CatchHandler @ 053a0728 */
                    /* try { // try from 053a0714 to 054a0717 has its CatchHandler @ 053a0724 */
                    /* try { // try from 053a0718 to 054a071b has its CatchHandler @ 053a0720 */
                    /* try { // try from 053a071c to 054a071f has its CatchHandler @ 053a0730 */
                    /* catch() { ... } // from try @ 053a0718 with catch @ 053a0720
                       try { // try from 053a0720 to 054a0773 has its CatchHandler @ 053a0520 */
  if ((DAT_066d0863 & 1) == 0) {
                    /* catch() { ... } // from try @ 053a0714 with catch @ 053a0724 */
                    /* catch() { ... } // from try @ 053a0710 with catch @ 053a0728 */
                    /* catch() { ... } // from try @ 053a070c with catch @ 053a072c */
    FUN_02b3c81c(
                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                );
                    /* catch() { ... } // from try @ 053a0624 with catch @ 053a0730
                       catch() { ... } // from try @ 053a071c with catch @ 053a0730 */
                    /* catch() { ... } // from try @ 053a06c4 with catch @ 053a0734 */
                    /* catch() { ... } // from try @ 053a06ac with catch @ 053a0738 */
    FUN_02b3c81c(UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo);
                    /* catch() { ... } // from try @ 053a0704 with catch @ 053a073c */
                    /* catch() { ... } // from try @ 053a0694 with catch @ 053a0740 */
                    /* catch() { ... } // from try @ 053a0700 with catch @ 053a0744 */
    FUN_02b3c81c(PTR_DAT_063224b8);
                    /* catch() { ... } // from try @ 053a064c with catch @ 053a0748 */
                    /* catch() { ... } // from try @ 053a06fc with catch @ 053a074c */
    DAT_066d0863 = 1;
  }
                    /* catch() { ... } // from try @ 053a0638 with catch @ 053a0750 */
                    /* catch() { ... } // from try @ 053a067c with catch @ 053a0754
                       catch() { ... } // from try @ 053a0708 with catch @ 053a0754 */
  if (*(int *)(param_1 + 0x54) == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)UnityEngine_InputForUI_KeyEvent_ButtonsState_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (lVar3 != 0) {
      uVar1 = FUN_05398c9c(lVar3,param_2);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar2 = FUN_053a5778(*(long *)(param_1 + 0x30),param_3);
        return uVar2;
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 053a05b0 with catch @ 053a0758
                       catch() { ... } // from try @ 053a06f8 with catch @ 053a0758 */
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
                    /* try { // try from 053a0774 to 054a0777 has its CatchHandler @ 053a077c */
      if (*(int *)(*(long *)
                    Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
                    /* catch() { ... } // from try @ 053a0774 with catch @ 053a077c */
      if (lVar3 != 0) {
                    /* try { // try from 053a0780 to 054a0787 has its CatchHandler @ 053a0790 */
                    /* try { // try from 053a0788 to 054a0793 has its CatchHandler @ 053a0520 */
        uVar1 = FUN_053983dc(lVar3,param_2);
        if ((uVar1 & 1) == 0) {
                    /* try { // try from 053a0808 to 054a0813 has its CatchHandler @ 053a0d4c */
          return 0;
        }
                    /* catch() { ... } // from try @ 053a0780 with catch @ 053a0790 */
                    /* try { // try from 053a0794 to 054a0807 has its CatchHandler @ 053a0794
                       catch() { ... } // from try @ 053a0794 with catch @ 053a0794
                       catch() { ... } // from try @ 053a0814 with catch @ 053a0794
                       catch() { ... } // from try @ 053a0adc with catch @ 053a0794
                       catch() { ... } // from try @ 053a0cc8 with catch @ 053a0794
                       catch() { ... } // from try @ 053a0d80 with catch @ 053a0794 */
        uVar2 = thunk_FUN_04c08854(param_3,*(undefined8 *)PTR_DAT_063224b8,0);
        return uVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 053a0814 to 054a08a7 has its CatchHandler @ 053a0794 */
  FUN_02b3cac4();
}


