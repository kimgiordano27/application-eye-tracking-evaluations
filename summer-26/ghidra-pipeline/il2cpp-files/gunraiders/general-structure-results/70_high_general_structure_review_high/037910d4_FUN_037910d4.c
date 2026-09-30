/*
FUNCTION_NAME: FUN_037910d4
ENTRY_POINT: 037910d4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;telemetry_or_network_hits_3
*/


void FUN_037910d4(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [120];
  
  if ((DAT_04538e43 & 1) == 0) {
    FUN_01c5d288(Method_System_Net_HttpWebRequest_GetObjectData__);
    DAT_04538e43 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x150);
  if (lVar4 == 0) {
                    /* try { // try from 03791164 to 038911cb has its CatchHandler @ 03791440 */
    lVar4 = FUN_01c5d2fc(*(undefined8 *)Method_System_Net_HttpWebRequest_GetObjectData__,2);
LAB_0379117c:
    *(long *)(param_1 + 0x150) = lVar4;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x158) + 1;
    if (iVar1 == *(int *)(lVar4 + 0x18)) {
      lVar4 = FUN_01c5d2fc(*(undefined8 *)Method_System_Net_HttpWebRequest_GetObjectData__,iVar1 * 2
                          );
                    /* try { // try from 03791138 to 0389113f has its CatchHandler @ 037911f4 */
      lVar3 = *(long *)(param_1 + 0x150);
      if (lVar3 == 0) goto LAB_037911f4;
                    /* try { // try from 0379114c to 03891153 has its CatchHandler @ 037911f8 */
      FUN_032f42b0(lVar3,0,lVar4,0,*(undefined4 *)(lVar3 + 0x18),0);
      goto LAB_0379117c;
    }
  }
  uVar2 = *(int *)(param_1 + 0x158) + 1;
  *(uint *)(param_1 + 0x158) = uVar2;
  memcpy(auStack_a8,(void *)(param_1 + 0x28),0x78);
  if (lVar4 != 0) {
    memcpy(auStack_120,auStack_a8,0x78);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    /* try { // try from 037911d4 to 038911db has its CatchHandler @ 03791208 */
      memcpy((void *)(lVar4 + (long)(int)uVar2 * 0x78 + 0x20),auStack_120,0x78);
                    /* try { // try from 037911e0 to 038911e3 has its CatchHandler @ 037911fc */
                    /* try { // try from 037911e8 to 038911eb has its CatchHandler @ 037911f0 */
                    /* try { // try from 037911ec to 0389121b has its CatchHandler @ 03790dc0 */
                    /* catch() { ... } // from try @ 037911e8 with catch @ 037911f0 */
      FUN_038537b8((void *)(param_1 + 0x28),0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0379114c with catch @ 037911f8 */
    FUN_01c5d4ac();
  }
LAB_037911f4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03791138 with catch @ 037911f4 */
  FUN_01c5d4a4();
}


