/*
FUNCTION_NAME: OVRManager$$Awake
ENTRY_POINT: 04f486a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__Awake(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  float fVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x21;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
                    /* try { // try from 04f486a8 to 050486cf has its CatchHandler @ 04f488cc */
  if ((*(byte *)(unaff_x21 + 0x9dd) & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<string,_ConfigurationEntry>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x9dd) = 1;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  *param_2 = 0xffffffff;
  if (lVar5 == 0) {
LAB_04f48790:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if ((int)uVar1 < 1) {
    uVar6 = 0xffffffff;
  }
  else {
                    /* try { // try from 04f486e8 to 0504870b has its CatchHandler @ 04f488c0 */
    uVar7 = 0;
    fVar3 = INFINITY;
    uVar6 = 0xffffffff;
    do {
      if (uVar1 == uVar7) goto LAB_04f48794;
      if (*(long *)(lVar5 + (long)(int)uVar7 * 8 + 0x20) == 0) goto LAB_04f48790;
      fVar8 = (float)FUN_04f48798();
      if (fVar8 < fVar3) {
        *param_2 = uVar7;
        fVar3 = fVar8;
        uVar6 = uVar7;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar7);
  }
  puVar2 = System_Collections_Generic_Dictionary<string,_ConfigurationEntry>_TypeInfo;
  if (uVar6 == 0xffffffff) {
    lVar5 = *(long *)System_Collections_Generic_Dictionary<string,_ConfigurationEntry>_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar2;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0xb8);
  }
  else {
    if (uVar1 <= uVar6) {
LAB_04f48794:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
  }
  return *puVar4;
}


