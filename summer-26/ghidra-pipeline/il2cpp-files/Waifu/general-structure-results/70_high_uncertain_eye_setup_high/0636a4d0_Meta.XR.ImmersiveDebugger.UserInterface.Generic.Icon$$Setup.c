/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Icon$$Setup
ENTRY_POINT: 0636a4d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Icon__Setup(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long unaff_x22;
  long lVar4;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  
  puVar2 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + (param_1 >> 0x20) * 0xc);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  lVar4 = *(long *)(unaff_x19 + 0xd0);
  if (lVar4 != 0) {
    lVar1 = FUN_042a5368(lVar4,1,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)(unaff_x26 + 0x130) + 0x20) + 0xc0)
                                  + 0x48));
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x10) + (lVar1 >> 0x20) * 0xc);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
                    /* try { // try from 0636a524 to 0646a52f has its CatchHandler @ 0636a6d8 */
    lVar4 = *(long *)(unaff_x19 + 0xd8);
    if (lVar4 != 0) {
      lVar1 = FUN_042a5368(lVar4,1,*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(unaff_x26 + 0x130) + 0x20) + 0xc0
                                              ) + 0x48));
      puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x10) + (lVar1 >> 0x20) * 0xc);
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      if (*(long *)(unaff_x19 + 0xe8) != 0) {
        puVar3 = *(undefined4 **)(DAT_083d4540 + 0xb8);
        FUN_042a80d8(*puVar3,puVar3[1],puVar3[2],puVar3[3],*(long *)(unaff_x19 + 0xe8),
                     *(undefined8 *)(unaff_x23 + 0x1e8));
        if (*(long *)(unaff_x19 + 0xf0) != 0) {
          puVar3 = *(undefined4 **)(DAT_083d4540 + 0xb8);
          FUN_042a80d8(*puVar3,puVar3[1],puVar3[2],puVar3[3],*(long *)(unaff_x19 + 0xf0),
                       *(undefined8 *)(unaff_x23 + 0x1e8));
          lVar4 = *(long *)(unaff_x19 + 0x98);
          if (lVar4 != 0) {
            lVar1 = FUN_0429e128(lVar4,1,*(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(unaff_x25 + 0xfd8) + 0x20)
                                                    + 0xc0) + 0x48));
            *(undefined4 *)(*(long *)(lVar4 + 0x10) + (lVar1 >> 0x20) * 4) = 0xffffffff;
            lVar4 = *(long *)(unaff_x19 + 0xa0);
            if (lVar4 != 0) {
              lVar1 = FUN_0429e128(lVar4,1,*(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)(unaff_x25 + 0xfd8) + 0x20
                                                                ) + 0xc0) + 0x48));
              *(undefined4 *)(*(long *)(lVar4 + 0x10) + (lVar1 >> 0x20) * 4) = 0xffffffff;
              if ((unaff_w24 >> 4 & 1) != 0) {
                *(int *)(unaff_x19 + 0xfc) = *(int *)(unaff_x19 + 0xfc) + 1;
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


