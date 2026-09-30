/*
FUNCTION_NAME: OVRPlugin$$SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 0694076c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__SetSimultaneousHandsAndControllersEnabled
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined1 unaff_w24;
  
code_r0x0694076c:
  FUN_04cd1698(param_1,1,param_3);
  do {
    uVar2 = FUN_061c1964(&stack0x00000018,*unaff_x22);
    if ((uVar2 & 1) == 0) {
      FUN_061c1960(&stack0x00000018,*unaff_x21);
      OVRPlugin__get_eyeHeight();
      return;
    }
    param_1 = *unaff_x20;
    if (param_1 == 0) {
LAB_069407a4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 069407a4 to 06a40c0b has its CatchHandler @ 069407a4
                       catch() { ... } // from try @ 069407a4 with catch @ 069407a4
                       catch() { ... } // from try @ 06940d48 with catch @ 069407a4
                       catch() { ... } // from try @ 06941148 with catch @ 069407a4
                       catch() { ... } // from try @ 06941398 with catch @ 069407a4
                       catch() { ... } // from try @ 069413a0 with catch @ 069407a4
                       catch() { ... } // from try @ 06941468 with catch @ 069407a4
                       catch() { ... } // from try @ 069414a0 with catch @ 069407a4 */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *unaff_x23;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_069407a4;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(undefined1 *)(lVar3 + (int)uVar1 + 0x20) = unaff_w24;
  } while( true );
  param_3 = *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
  goto code_r0x0694076c;
}


