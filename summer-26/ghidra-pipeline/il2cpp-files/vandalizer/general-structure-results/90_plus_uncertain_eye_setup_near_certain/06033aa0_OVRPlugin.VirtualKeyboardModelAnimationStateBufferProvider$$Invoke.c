/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$Invoke
ENTRY_POINT: 06033aa0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__Invoke
               (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
                    /* catch() { ... } // from try @ 06033a8c with catch @ 06033ab0 */
  if ((DAT_07a46c0e & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f2fc8);
    DAT_07a46c0e = 1;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_075f2fc8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
        goto OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8(plVar5,*(long *)PTR_DAT_075f2fc8,0x12);
OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke:
                    /* WARNING: Could not recover jumptable at 0x06033b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}


