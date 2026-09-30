/*
FUNCTION_NAME: Fusion.NetworkDictionary<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$SetVal
ENTRY_POINT: 021383f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021386f0) */

void Fusion_NetworkDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__SetVal
               (void)

{
  void *__src;
  int iVar1;
  uint uVar2;
  long unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  uint unaff_w22;
  size_t unaff_x23;
  long unaff_x24;
  long lVar3;
  long *unaff_x25;
  long *plVar4;
  long unaff_x26;
  long lVar5;
  long unaff_x29;
  
  thunk_FUN_01a4b338();
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02793ce8();
  lVar5 = *unaff_x25;
  thunk_FUN_01a4b338();
  lVar3 = *unaff_x25;
  thunk_FUN_01a4b338();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* try { // try from 02138434 to 0223845b has its CatchHandler @ 02138624 */
  FUN_02793ce8(lVar5,0);
  thunk_FUN_01a4b338();
  *unaff_x25 = unaff_x26;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  thunk_FUN_01a4b338();
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01a4b338();
                    /* try { // try from 02138584 to 0223858b has its CatchHandler @ 02138638 */
  iVar1 = *(int *)(unaff_x19 + 0x20);
  *(uint *)(unaff_x19 + 0x14) = unaff_w22;
  thunk_FUN_01a4b338();
  thunk_FUN_01a4b338();
  *(uint *)(unaff_x19 + 0x20) = iVar1 << 1 | 1;
  plVar4 = *(long **)(unaff_x19 + 0x18);
                    /* try { // try from 021385a8 to 022385bf has its CatchHandler @ 02138644 */
  thunk_FUN_01a4b338();
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  thunk_FUN_01a4b338();
                    /* try { // try from 021385cc to 022385d3 has its CatchHandler @ 02138634 */
  __src = *(void **)(unaff_x29 + -0x28);
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28)) {
    __src = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x21,__src,unaff_x23);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = uVar2 & unaff_w22;
  if (*(uint *)(plVar4 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  memcpy((void *)((long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar2 + 0x20),
         unaff_x21,unaff_x23);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  if (*(uint *)(plVar4 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  FUN_01ab6954(lVar3,(long)plVar4 + (ulong)*(uint *)(*plVar4 + 0x104) * (long)(int)uVar2 + 0x20);
  thunk_FUN_01a4b338();
  *(uint *)(unaff_x19 + 0x14) = unaff_w22 + 1;
  if (unaff_w22 == 0) {
    thunk_FUN_01aa5278(*(undefined8 *)(unaff_x29 + -0x30),0);
  }
  iVar1 = *(int *)(unaff_x19 + 0x24) - *(int *)(unaff_x19 + 0x28);
  *(int *)(unaff_x19 + 0x24) = iVar1;
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  if (iVar1 == 0x7fffffff) {
    FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14();
  }
  *(int *)(unaff_x19 + 0x24) = iVar1 + 1;
  thunk_FUN_01a4b338();
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


