/*
FUNCTION_NAME: System.ByReference<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 041de98c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ByReference<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  uint uVar1;
  bool in_ZR;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x22;
  long lVar4;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  if ((!in_ZR) && (*(char *)(*(long *)(param_1 + 0xb8) + 0x11) != '\0')) {
    uStack0000000000000000 = 0;
    uStack0000000000000008 = 0;
    lVar4 = *(long *)(unaff_x22 + 0x18);
    FUN_0458f228();
    if (lVar4 != 0) {
      lVar2 = *(long *)(lVar4 + 0x10);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x128);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar2 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar2 + 0x20) = uStack0000000000000000;
          *(undefined8 *)(lVar2 + 0x28) = uStack0000000000000008;
          return;
        }
        FUN_039c5aa4(lVar4,uStack0000000000000000,uStack0000000000000008,
                     *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  return;
}


