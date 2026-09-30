/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 05d7a308
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin__set_occlusionMesh(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_072aefc0;
  if ((DAT_076d87ac & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072aefc0);
    DAT_076d87ac = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_3) {
OVRPlugin__GetEyeFrustum:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)param_3 * 8 + 0x20);
    if (lVar2 != 0) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar4 = 0;
        uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        puVar5 = (undefined4 *)(param_4 + 0x2c);
        do {
          if (uVar3 <= uVar4) goto OVRPlugin__GetEyeFrustum;
          if (param_4 == 0) goto LAB_05d7a400;
          if (*(uint *)(param_4 + 0x18) <= uVar4) goto OVRPlugin__GetEyeFrustum;
          FUN_05d7a404(puVar5[-3],puVar5[-2],puVar5[-1],*puVar5,param_1,param_2,
                       *(undefined4 *)(lVar2 + 0x20 + uVar4 * 4));
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 4;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      return;
    }
  }
LAB_05d7a400:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


