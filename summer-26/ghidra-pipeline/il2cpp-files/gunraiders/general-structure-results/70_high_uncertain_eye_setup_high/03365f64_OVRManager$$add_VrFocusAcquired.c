/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 03365f64
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRManager__add_VrFocusAcquired(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x88);
    uVar4 = FUN_0335c8e8(param_1);
    uVar5 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_List_Enumerator<LensFlareCommonSRP_LensFlareCompInfo>_MoveNext__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar5);
  }
  if (param_3 == 0) {
LAB_0336600c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336600c to 0346602b has its CatchHandler @ 03366104 */
    FUN_01c5d4a4();
  }
  iVar8 = *(int *)(param_3 + 0x10);
  bVar9 = 0 < iVar8;
  if (0 < iVar8) {
    iVar7 = 0;
    do {
      lVar6 = *(long *)(param_1 + 0x80);
      if (lVar6 == 0) goto LAB_0336600c;
      uVar1 = iVar7 + *(int *)(param_1 + 0x8c);
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      sVar2 = *(short *)(lVar6 + (long)(int)uVar1 * 2 + 0x20);
      sVar3 = FUN_0314e438(param_3,iVar7,0);
      iVar8 = iVar7;
      if (sVar2 != sVar3) break;
      iVar8 = *(int *)(param_3 + 0x10);
      iVar7 = iVar7 + 1;
      bVar9 = iVar7 < iVar8;
    } while (iVar7 < iVar8);
  }
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + iVar8;
  return ~bVar9 & 1;
}


