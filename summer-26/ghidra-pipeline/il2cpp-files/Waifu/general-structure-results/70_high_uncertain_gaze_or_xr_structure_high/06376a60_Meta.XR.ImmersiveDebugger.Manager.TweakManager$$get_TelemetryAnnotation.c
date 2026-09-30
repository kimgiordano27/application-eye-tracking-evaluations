/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 06376a60
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06376a54 with catch @ 06376a60
                        */
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06376a44 with catch @ 06376a64
                        */
  lVar5 = *(long *)(unaff_x20 + 0x28);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06376a08 with catch @ 06376a68
                        */
  if (lVar5 != 0) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06376a24 with catch @ 06376a6c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 063769c8 with catch @ 06376a70
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06376a50 with catch @ 06376a74
                        */
    lVar6 = *(long *)(lVar5 + 0x10);
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 063769e8 with catch @ 06376a78
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 063769cc with catch @ 06376a7c
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 063769ac with catch @ 06376a80
                        */
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar2 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 06376a90 to 06476a93 has its CatchHandler @ 06376ab8 */
                    /* try { // try from 06376a94 to 06476abf has its CatchHandler @ 063768a4 */
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
        FUN_04ab0e54();
        return;
      }
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      *puVar7 = unaff_x19;
      if (DAT_08908cd0 == 0) {
        return;
      }
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


