/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_LoadRenderModel
ENTRY_POINT: 05d4d280
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_68_0__ovrp_LoadRenderModel(ulong param_1,uint param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  
                    /* try { // try from 05d4d288 to 05e4d28b has its CatchHandler @ 05d4d2ac */
  if ((param_1 & 1) == 0) {
                    /* try { // try from 05d4d28c to 05e4d2b3 has its CatchHandler @ 05d4cee4 */
    FUN_02fe925c(PTR_DAT_06f6d618);
    *(undefined1 *)(unaff_x21 + 0xb99) = 1;
  }
  puVar1 = PTR_DAT_06f6d618;
  lVar4 = *param_3;
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 05d4d288 with catch @ 05d4d2ac */
    if (*(uint *)(lVar4 + 0x18) <= param_2) {
LAB_05d4d364:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
                    /* try { // try from 05d4d2b4 to 05e4d2bb has its CatchHandler @ 05d4d2d0 */
    lVar4 = *(long *)(lVar4 + (long)(int)param_2 * 8 + 0x20);
                    /* try { // try from 05d4d2bc to 05e4d2c7 has its CatchHandler @ 05d4cee4 */
    if (lVar4 != 0) {
                    /* try { // try from 05d4d2c8 to 05e4d2cf has its CatchHandler @ 05d4d2d0 */
      uVar2 = FUN_069041ac(lVar4,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d4d2b4 with catch @ 05d4d2d0
                       catch(type#2 @ 00000000) { ... } // from try @ 05d4d2c8 with catch @ 05d4d2d0
                        */
      lVar4 = *(long *)puVar1;
                    /* try { // try from 05d4d2d4 to 05e4d3a3 has its CatchHandler @ 05d4d2d4
                       catch() { ... } // from try @ 05d4d2d4 with catch @ 05d4d2d4
                       catch() { ... } // from try @ 05d4d420 with catch @ 05d4d2d4
                       catch() { ... } // from try @ 05d4d45c with catch @ 05d4d2d4
                       catch() { ... } // from try @ 05d4d480 with catch @ 05d4d2d4
                       catch() { ... } // from try @ 05d4d4b4 with catch @ 05d4d2d4 */
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar4);
      }
      uVar3 = FUN_068f9b78(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        do {
          param_2 = param_2 - 1;
          if ((int)param_2 < 0) goto LAB_05d4d2fc;
          lVar4 = *param_3;
          if (lVar4 == 0) goto LAB_05d4d360;
          if (*(uint *)(lVar4 + 0x18) <= param_2) goto LAB_05d4d364;
          uVar5 = *(undefined8 *)(lVar4 + (ulong)param_2 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar3 = FUN_068f9b78(uVar5,uVar2,0);
        } while ((uVar3 & 1) == 0);
      }
      else {
LAB_05d4d2fc:
        param_2 = 0xffffffff;
      }
      return param_2;
    }
  }
LAB_05d4d360:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


