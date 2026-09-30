/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$ToString
ENTRY_POINT: 07c9af64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_TextureRectMatrixf__ToString
               (undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_09f4e7b0;
  if ((DAT_0a526985 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4e7b0);
    DAT_0a526985 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_3) {
LAB_07c9b04c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)param_3 * 8 + 0x20);
    if (lVar2 != 0) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar4 = 0;
        uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        puVar5 = (undefined4 *)(param_4 + 0x2c);
        do {
          if (uVar3 <= uVar4) goto LAB_07c9b04c;
          if (param_4 == 0) goto LAB_07c9b050;
          if (*(uint *)(param_4 + 0x18) <= uVar4) goto LAB_07c9b04c;
          FUN_07c9b054(puVar5[-3],puVar5[-2],puVar5[-1],*puVar5,param_1,param_2,
                       *(undefined4 *)(lVar2 + 0x20 + uVar4 * 4));
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 4;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      return;
    }
  }
LAB_07c9b050:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


