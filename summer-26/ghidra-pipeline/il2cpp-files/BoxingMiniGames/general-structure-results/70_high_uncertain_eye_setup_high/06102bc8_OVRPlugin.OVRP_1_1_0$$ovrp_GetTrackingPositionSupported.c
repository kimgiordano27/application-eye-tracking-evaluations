/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingPositionSupported
ENTRY_POINT: 06102bc8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported
               (undefined8 param_1,undefined1 param_2 [16])

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000048 = param_2._8_8_;
  uStack0000000000000040 = param_2._0_8_;
  puStack0000000000000010 = (undefined1 *)&stack0x00000030;
  uStack0000000000000008 = 0;
  uStack0000000000000030 = param_1;
  while( true ) {
    uVar4 = FUN_05959498(&stack0x00000030,*unaff_x26);
    uVar3 = uStack0000000000000048;
    uVar5 = uStack0000000000000040;
    if ((uVar4 & 1) == 0) {
      FUN_059595b8(&stack0x00000030,*unaff_x25);
      puVar2 = PTR_DAT_079f8730;
      FUN_05e7282c((long)unaff_w21,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978(*unaff_x24);
      }
      FUN_06102d8c();
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      free(unaff_x20);
      if (unaff_x19 != 0) {
        if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
          uVar4 = 0;
          uVar6 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            __ptr = *(void **)(unaff_x19 + 0x20 + uVar4 * 8);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            free(__ptr);
            uVar6 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_061019e8(uVar5);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x19 + (long)(int)(unaff_w27 - 1) * 8 + 0x20) = uVar5;
    uVar5 = FUN_061019e8(uVar3);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) break;
    lVar1 = (long)(int)unaff_w27;
    unaff_w27 = unaff_w27 + 2;
    *(undefined8 *)(unaff_x19 + lVar1 * 8 + 0x20) = uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


