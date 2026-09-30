/*
FUNCTION_NAME: FUN_036d5660
ENTRY_POINT: 036d5660
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x036d5804) */

void FUN_036d5660(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char local_24 [4];
  
                    /* try { // try from 036d5668 to 037d575f has its CatchHandler @ 036d5668
                       catch() { ... } // from try @ 036d5668 with catch @ 036d5668
                       catch() { ... } // from try @ 036d5800 with catch @ 036d5668
                       catch() { ... } // from try @ 036d58ec with catch @ 036d5668
                       catch() { ... } // from try @ 036d592c with catch @ 036d5668
                       catch() { ... } // from try @ 036d5974 with catch @ 036d5668
                       catch() { ... } // from try @ 036d59ac with catch @ 036d5668
                       catch() { ... } // from try @ 036d59c8 with catch @ 036d5668
                       catch() { ... } // from try @ 036d59f8 with catch @ 036d5668 */
  if ((DAT_04133acd & 1) == 0) {
    FUN_01ab69ac(
                Method_Crosstales_BWF_Manager_BaseManager<BadWordManager,_BadWordFilter>_onReplaceAllComplete__
                );
    FUN_01ab69ac(
                Method_Crosstales_BWF_Manager_BaseManager<BadWordManager,_BadWordFilter>_set_DisableOrdering__
                );
    FUN_01ab69ac(
                Method_Crosstales_BWF_Manager_BaseManager<CapitalizationManager,_CapitalizationFilter>__ctor__
                );
    FUN_01ab69ac(
                Method_Crosstales_BWF_Manager_BaseManager<CapitalizationManager,_CapitalizationFilter>_get_DisableOrdering__
                );
    FUN_01ab69ac(
                Method_Crosstales_BWF_Manager_BaseManager<CapitalizationManager,_CapitalizationFilter>_get_isReady__
                );
    DAT_04133acd = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_24[0] = '\0';
  FUN_027e0bd8(uVar6,local_24,0);
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02216540(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)
                Method_Crosstales_BWF_Manager_BaseManager<BadWordManager,_BadWordFilter>_onReplaceAllComplete__
              );
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar5 = *(long *)
           Method_Crosstales_BWF_Manager_BaseManager<BadWordManager,_BadWordFilter>_set_DisableOrdering__
  ;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  uVar4 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 036d5760 to 037d5767 has its CatchHandler @ 036d59ac */
    *(undefined4 *)(lVar7 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
    }
  }
                    /* try { // try from 036d5770 to 037d577b has its CatchHandler @ 036d594c */
  if (local_24[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  puVar3 = 
  Method_Crosstales_BWF_Manager_BaseManager<CapitalizationManager,_CapitalizationFilter>_get_isReady__
  ;
  puVar2 = 
  Method_Crosstales_BWF_Manager_BaseManager<CapitalizationManager,_CapitalizationFilter>__ctor__;
  lVar7 = *(long *)(param_1 + 0x20);
  while (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) < 1) {
      return;
    }
    FUN_02215a88(lVar7,0,&local_68,*(undefined8 *)puVar3);
    local_40 = local_58;
    uStack_48 = uStack_60;
    local_50 = local_68;
    if (*(long *)(param_1 + 0x20) == 0) break;
    FUN_022190f4(*(long *)(param_1 + 0x20),0,*(undefined8 *)puVar2);
    FUN_036d5874(&local_50);
    lVar7 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


