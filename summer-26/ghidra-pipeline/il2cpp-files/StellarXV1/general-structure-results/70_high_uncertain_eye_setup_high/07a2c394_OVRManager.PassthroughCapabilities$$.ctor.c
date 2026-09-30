/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$.ctor
ENTRY_POINT: 07a2c394
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_PassthroughCapabilities___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  puVar3 = PTR_DAT_092f0170;
                    /* catch() { ... } // from try @ 07a2c388 with catch @ 07a2c394 */
  puVar2 = PTR_DAT_09285e40;
                    /* catch() { ... } // from try @ 07a2c1e4 with catch @ 07a2c398 */
                    /* catch() { ... } // from try @ 07a2c384 with catch @ 07a2c39c */
                    /* catch() { ... } // from try @ 07a2c35c with catch @ 07a2c3a0 */
                    /* catch() { ... } // from try @ 07a2c338 with catch @ 07a2c3a4 */
                    /* catch() { ... } // from try @ 07a2c380 with catch @ 07a2c3a8 */
                    /* catch() { ... } // from try @ 07a2c37c with catch @ 07a2c3ac */
                    /* catch() { ... } // from try @ 07a2c2fc with catch @ 07a2c3b0 */
  if ((DAT_098951f2 & 1) == 0) {
                    /* catch() { ... } // from try @ 07a2c378 with catch @ 07a2c3b4 */
                    /* catch() { ... } // from try @ 07a2c2c8 with catch @ 07a2c3b8 */
                    /* catch() { ... } // from try @ 07a2c2e4 with catch @ 07a2c3bc */
    FUN_04077588(PTR_DAT_09285e40);
    FUN_04077588(PTR_DAT_09289950);
    FUN_04077588(PTR_DAT_092f0170);
    FUN_04077588(PTR_DAT_09285bb0);
    DAT_098951f2 = 1;
  }
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_075d444c(uVar4,param_1,*(undefined8 *)puVar3,0);
  FUN_079799f4(param_1,param_1 + 0x110,uVar4,0);
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (lVar5 = FUN_04f38b94(*(long *)(param_1 + 0x128),*(undefined8 *)PTR_DAT_09289950), lVar5 != 0))
  {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
      do {
        if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        uVar6 = uVar6 - 1;
        uVar1 = uVar1 - 1;
      } while (uVar6 != 0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x168);
    if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_089ca704(uVar4,0,0);
    FUN_07979a98(param_1,param_1 + 0x110,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


