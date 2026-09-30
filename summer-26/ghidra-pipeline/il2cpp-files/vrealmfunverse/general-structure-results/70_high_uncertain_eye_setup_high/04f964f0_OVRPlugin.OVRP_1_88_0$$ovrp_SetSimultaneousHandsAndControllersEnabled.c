/*
FUNCTION_NAME: OVRPlugin.OVRP_1_88_0$$ovrp_SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 04f964f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_88_0__ovrp_SetSimultaneousHandsAndControllersEnabled(long param_1)

{
  undefined *puVar1;
  bool in_ZR;
  bool in_CY;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_06312520;
  if (!in_CY || in_ZR) {
LAB_04f965b4:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  lVar2 = *(long *)(param_1 + (long)(int)unaff_w19 * 8 + 0x20);
  if (lVar2 == 0) {
LAB_04f965b0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = thunk_FUN_05c9c9cc(lVar2,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar2);
  }
  uVar4 = FUN_05c8e378(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = (ulong)unaff_w19;
    do {
      uVar4 = uVar4 - 1;
      unaff_w19 = unaff_w19 - 1;
      if ((int)unaff_w19 < 0) goto LAB_04f9653c;
      lVar2 = *unaff_x20;
                    /* try { // try from 04f96558 to 0509655f has its CatchHandler @ 04f96704 */
      if (lVar2 == 0) goto LAB_04f965b0;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) goto LAB_04f965b4;
      uVar6 = *(undefined8 *)(lVar2 + (uVar4 & 0xffffffff) * 8 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar5 = FUN_05c8e378(uVar6,uVar3,0);
    } while ((uVar5 & 1) == 0);
  }
  else {
LAB_04f9653c:
    unaff_w19 = 0xffffffff;
  }
  return unaff_w19;
}


