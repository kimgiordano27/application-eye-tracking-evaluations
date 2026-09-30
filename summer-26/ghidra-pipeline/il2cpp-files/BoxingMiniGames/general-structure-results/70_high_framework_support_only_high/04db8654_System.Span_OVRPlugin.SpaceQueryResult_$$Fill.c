/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$Fill
ENTRY_POINT: 04db8654
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Span<OVRPlugin_SpaceQueryResult>__Fill(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 0x20);
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
                    /* try { // try from 04db86f8 to 04eb86fb has its CatchHandler @ 04db8720 */
                    /* try { // try from 04db86fc to 04eb870f has its CatchHandler @ 04db872c */
      FUN_0367ca58(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
                    /* try { // try from 04db8710 to 04eb8743 has its CatchHandler @ 04db82e4 */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db86f8 with catch @ 04db8720
                        */
      thunk_FUN_036a1978();
    }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db860c with catch @ 04db8724
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db8680 with catch @ 04db8728
                        */
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04db86fc with catch @ 04db872c
                        */
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  else {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
                    /* try { // try from 04db8680 to 04eb86cb has its CatchHandler @ 04db8728 */
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = FUN_03642a4c(lVar2,iVar1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *(long *)(param_2 + 0x20);
    uVar4 = *param_1;
    iVar1 = *(int *)(param_1 + 1);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    FUN_03bf7620(lVar2 + 0x20,uVar4,(long)iVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
  }
                    /* try { // try from 04db8744 to 04eb875b has its CatchHandler @ 04db87ac */
  return lVar2;
}


