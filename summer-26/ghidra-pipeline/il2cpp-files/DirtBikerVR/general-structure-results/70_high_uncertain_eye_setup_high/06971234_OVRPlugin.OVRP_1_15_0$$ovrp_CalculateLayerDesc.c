/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_CalculateLayerDesc
ENTRY_POINT: 06971234
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_CalculateLayerDesc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  
  if ((param_1 != 0) && (FUN_07c9c69c(param_1,0), unaff_x21 != 0)) {
                    /* try { // try from 06971248 to 06a7124b has its CatchHandler @ 06971268 */
                    /* try { // try from 0697124c to 06a7124f has its CatchHandler @ 06971264 */
                    /* try { // try from 06971250 to 06a7128b has its CatchHandler @ 06970d2c */
    FUN_07cace00();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06971230 with catch @ 06971260
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0697124c with catch @ 06971264
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06971248 with catch @ 06971268
                        */
    lVar3 = FUN_04561560();
    puVar2 = PTR_DAT_084b72c8;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06971208 with catch @ 0697126c
                        */
    if (lVar3 != 0) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 069711a4 with catch @ 06971270
                        */
                    /* try { // try from 0697128c to 06a7128f has its CatchHandler @ 06971324 */
      FUN_07cab4d8(0x43820000,0x41c80000,lVar3,0);
                    /* try { // try from 06971290 to 06a71327 has its CatchHandler @ 06970d2c */
      FUN_07cab034(0,0x3f800000,lVar3,0);
      FUN_07cab1c0(0,0x3f800000,lVar3,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      FUN_0679343c(lVar3,0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x40) = unaff_x20;
        thunk_FUN_03afed3c();
        if (lVar7 != 0) {
          lVar5 = *(long *)(lVar7 + 0x10);
          lVar6 = *(long *)PTR_DAT_084b72c0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar4 = lVar3;
              thunk_FUN_03afed3c(plVar4,lVar3);
              return;
            }
            FUN_04de85b0(lVar7,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


