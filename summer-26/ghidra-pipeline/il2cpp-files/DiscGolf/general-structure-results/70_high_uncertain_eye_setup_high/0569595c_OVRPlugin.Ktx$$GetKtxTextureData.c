/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 0569595c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureData(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint in_w9;
  undefined8 uVar2;
  
  if (0x1a < in_w9) {
    uVar2 = *(undefined8 *)(param_3 + 0x1f0);
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_3 + 0x1f8);
    *(undefined8 *)(param_1 + 0x1c0) = uVar2;
    lVar1 = *(long *)(param_2 + 0x60);
    if (lVar1 == 0) {
LAB_05695a38:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0x1b < *(uint *)(lVar1 + 0x18)) {
      uVar2 = *(undefined8 *)(param_3 + 0x200);
      *(undefined8 *)(lVar1 + 0x1d8) = *(undefined8 *)(param_3 + 0x208);
      *(undefined8 *)(lVar1 + 0x1d0) = uVar2;
      lVar1 = *(long *)(param_2 + 0x60);
      if (lVar1 == 0) goto LAB_05695a38;
      if (0x1c < *(uint *)(lVar1 + 0x18)) {
        uVar2 = *(undefined8 *)(param_3 + 0x210);
        *(undefined8 *)(lVar1 + 0x1e8) = *(undefined8 *)(param_3 + 0x218);
        *(undefined8 *)(lVar1 + 0x1e0) = uVar2;
        lVar1 = *(long *)(param_2 + 0x60);
        if (lVar1 == 0) goto LAB_05695a38;
        if (0x1d < *(uint *)(lVar1 + 0x18)) {
          uVar2 = *(undefined8 *)(param_3 + 0x220);
          *(undefined8 *)(lVar1 + 0x1f8) = *(undefined8 *)(param_3 + 0x228);
          *(undefined8 *)(lVar1 + 0x1f0) = uVar2;
          lVar1 = *(long *)(param_2 + 0x60);
          if (lVar1 == 0) goto LAB_05695a38;
          if (0x1e < *(uint *)(lVar1 + 0x18)) {
            uVar2 = *(undefined8 *)(param_3 + 0x230);
            *(undefined8 *)(lVar1 + 0x208) = *(undefined8 *)(param_3 + 0x238);
            *(undefined8 *)(lVar1 + 0x200) = uVar2;
            lVar1 = *(long *)(param_2 + 0x60);
            if (lVar1 == 0) goto LAB_05695a38;
            if ((*(uint *)(lVar1 + 0x18) & 0xffffffe0) != 0) {
              uVar2 = *(undefined8 *)(param_3 + 0x240);
              *(undefined8 *)(lVar1 + 0x218) = *(undefined8 *)(param_3 + 0x248);
              *(undefined8 *)(lVar1 + 0x210) = uVar2;
              lVar1 = *(long *)(param_2 + 0x60);
              if (lVar1 == 0) goto LAB_05695a38;
              if (0x20 < *(uint *)(lVar1 + 0x18)) {
                uVar2 = *(undefined8 *)(param_3 + 0x250);
                *(undefined8 *)(lVar1 + 0x228) = *(undefined8 *)(param_3 + 600);
                *(undefined8 *)(lVar1 + 0x220) = uVar2;
                lVar1 = *(long *)(param_2 + 0x60);
                if (lVar1 == 0) goto LAB_05695a38;
                if (0x21 < *(uint *)(lVar1 + 0x18)) {
                  uVar2 = *(undefined8 *)(param_3 + 0x260);
                  *(undefined8 *)(lVar1 + 0x238) = *(undefined8 *)(param_3 + 0x268);
                  *(undefined8 *)(lVar1 + 0x230) = uVar2;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


