/*
FUNCTION_NAME: QFSW.QC.BasicCachedQcParser<__Il2CppFullySharedGenericType>$$Parse
ENTRY_POINT: 02064be0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02064d34) */

void QFSW_QC_BasicCachedQcParser<__Il2CppFullySharedGenericType>__Parse(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  uVar2 = FUN_020659cc();
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar1 = *(int *)(unaff_x19 + 0x38);
  if (iVar1 == *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18)) {
                    /* try { // try from 02064c14 to 02164c3b has its CatchHandler @ 02064c50 */
    FUN_01f25968(unaff_x19 + 0x30,iVar1 * 2 + 2,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60));
    FUN_01f25968();
    iVar1 = *(int *)(unaff_x19 + 0x38);
  }
                    /* try { // try from 02064c3c to 02164c47 has its CatchHandler @ 020649bc */
  uVar2 = uVar2 ^ (int)uVar2 >> 0x1f;
  if (iVar1 - uVar2 != 0 && (int)uVar2 <= iVar1) {
                    /* try { // try from 02064c48 to 02164c4f has its CatchHandler @ 02064c50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02064c14 with catch @ 02064c50
                       catch(type#2 @ 00000000) { ... } // from try @ 02064c48 with catch @ 02064c50
                        */
                    /* try { // try from 02064c54 to 02164db7 has its CatchHandler @ 02064c54
                       catch() { ... } // from try @ 02064c54 with catch @ 02064c54
                       catch() { ... } // from try @ 02064e68 with catch @ 02064c54
                       catch() { ... } // from try @ 02064eb4 with catch @ 02064c54
                       catch() { ... } // from try @ 02064f98 with catch @ 02064c54
                       catch() { ... } // from try @ 02065040 with catch @ 02064c54 */
    FUN_02793ce8(*unaff_x22,uVar2,*unaff_x22,uVar2 + 1,iVar1 - uVar2,0);
    FUN_02793ce8(*(undefined8 *)(unaff_x19 + 0x30),uVar2,*(undefined8 *)(unaff_x19 + 0x30),uVar2 + 1
                 ,*(int *)(unaff_x19 + 0x38) - uVar2,0);
  }
  lVar5 = *unaff_x22;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(int *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = (int)*(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x19 + 0x30);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = thunk_FUN_01a89d6c();
  if (lVar3 == 0) {
    uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar4,0);
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
  *(long *)(unaff_x19 + 0x40) = (long)*(int *)(unaff_x20 + 0x18) + *(long *)(unaff_x19 + 0x40);
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


