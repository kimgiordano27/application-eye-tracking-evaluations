/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<UnsafeUtility.AlignOfHelper<OVRPlugin.SpaceQueryResult>>
ENTRY_POINT: 010f5c40
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<OVRPlugin_SpaceQueryResult>>
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
                    /* catch() { ... } // from try @ 010f5b58 with catch @ 010f5c44 */
  if (param_1 == 0) {
    FUN_0103c2a0(param_3);
    param_1 = *(long *)(param_3 + 0x38);
  }
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  uVar2 = thunk_FUN_010400dc();
  lVar4 = **(long **)(param_3 + 0x38);
  pcVar5 = *(code **)(*(long **)(param_3 + 0x38))[2];
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_0103ffe0(param_2,lVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(param_2,lVar4);
    }
  }
  (*pcVar5)(uVar2,lVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
  FUN_00e5e13c(param_2,*(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 200) + 0x80),uVar2)
  ;
  if (param_2 != 0) {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd0))
                      (param_2);
                    /* WARNING: Could not recover jumptable at 0x010f5d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0))
              (param_2,~uVar1 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


