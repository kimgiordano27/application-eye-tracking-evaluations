/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryResults
ENTRY_POINT: 06366034
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceQueryResults(void)

{
  undefined4 uVar1;
  byte bVar2;
  bool in_ZR;
  undefined8 uVar3;
  undefined4 in_w8;
  undefined8 *in_x9;
  long unaff_x19;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uStack0000000000000008;
  
                    /* try { // try from 06366034 to 06466067 has its CatchHandler @ 06365b84 */
  uVar1 = 0x10;
  if (!in_ZR) {
    uVar1 = in_w8;
  }
  uStack0000000000000008 = 0;
  FUN_04e5f37c(&stack0x00000008,uVar1,*in_x9);
  if (unaff_x22 != 0) {
    *(undefined8 *)(unaff_x22 + 0x30) = uStack0000000000000008;
    lVar4 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 06366068 to 06466077 has its CatchHandler @ 06366078 */
    uVar3 = FUN_063669d4();
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0x10);
      *puVar5 = uVar3;
                    /* catch() { ... } // from try @ 06365fdc with catch @ 06366078
                       catch() { ... } // from try @ 06366030 with catch @ 06366078
                       catch() { ... } // from try @ 06366068 with catch @ 06366078 */
                    /* try { // try from 0636607c to 0646607f has its CatchHandler @ 06366088 */
      thunk_FUN_037aeb94(puVar5,uVar3);
                    /* try { // try from 06366080 to 0646608b has its CatchHandler @ 06365b84 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06365fbc with catch @ 06366088
                       catch(type#2 @ 00000000) { ... } // from try @ 0636607c with catch @ 06366088
                        */
      bVar2 = *(byte *)(*(long *)PTR_DAT_07db4388 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)PTR_DAT_07db4388)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      FUN_06366c7c();
      lVar4 = FUN_0636579c();
      if (lVar4 != 0) {
        return *(undefined8 *)(lVar4 + 0x18);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


