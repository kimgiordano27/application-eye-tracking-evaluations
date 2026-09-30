/*
FUNCTION_NAME: OVRPlugin$$set_ipd
ENTRY_POINT: 05d7a218
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_ipd(undefined4 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_076d87ab & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072aefc0);
                    /* try { // try from 05d7a248 to 05e7a44f has its CatchHandler @ 05d7a248
                       catch() { ... } // from try @ 05d7a248 with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a474 with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a744 with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a794 with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a80c with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a86c with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a8b4 with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a8d0 with catch @ 05d7a248
                       catch() { ... } // from try @ 05d7a900 with catch @ 05d7a248 */
    DAT_076d87ab = 1;
  }
  puVar1 = PTR_DAT_072aefc0;
  uVar4 = 0;
  do {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_05d7a2f8:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if ((long)*(int *)(**(long **)(lVar2 + 0xb8) + 0x18) <= (long)uVar4) {
      return;
    }
    lVar2 = *param_3;
    if (lVar2 == 0) goto LAB_05d7a2f8;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_05d7a2fc:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar3 = *(long *)(param_2 + 0x140);
    if (lVar3 == 0) goto LAB_05d7a2f8;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_05d7a2fc;
    lVar2 = lVar2 + uVar4 * 0x10;
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    lVar3 = lVar3 + uVar4 * 0x10;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    lVar2 = *(long *)(param_2 + 0xd0);
    if (lVar2 == 0) goto LAB_05d7a2f8;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_05d7a2fc;
    lVar3 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(lVar2 + lVar3 + 0x20) = param_1;
  } while( true );
}


