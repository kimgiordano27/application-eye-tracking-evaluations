/*
FUNCTION_NAME: Fusion.NetworkDictionary<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$SetNxt
ENTRY_POINT: 021385f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021386f0) */

void Fusion_NetworkDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__SetNxt
               (void)

{
  int iVar1;
  long lVar2;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  int unaff_w22;
  size_t unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w28;
  long unaff_x29;
  
  if (in_w8 <= (uint)unaff_x24) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  memcpy((void *)((long)unaff_x25 + (ulong)*(uint *)(*unaff_x25 + 0x104) * unaff_x24 + 0x20),
         unaff_x21,unaff_x23);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01a46ff8();
  }
  if (*(uint *)(unaff_x25 + 3) <= (uint)unaff_x24) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  FUN_01ab6954(lVar2,(long)unaff_x25 + (ulong)*(uint *)(*unaff_x25 + 0x104) * unaff_x24 + 0x20);
  thunk_FUN_01a4b338();
  *(int *)(unaff_x19 + 0x14) = unaff_w28 + 1;
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


