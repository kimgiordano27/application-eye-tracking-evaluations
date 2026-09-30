/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$MoveNext
ENTRY_POINT: 04ab75a8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


int Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__MoveNext
              (int *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  plVar1 = (long *)FUN_0341cd48(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x80));
  if (0 < *param_1) {
    if (plVar1 == (long *)0x0) {
LAB_04ab7694:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,*(undefined8 *)(param_1 + 2),param_2,*(undefined8 *)(*plVar1 + 0x1c0))
    ;
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 4) != 0) && (0 < *param_1 + -1)) {
      lVar3 = 4;
      do {
        lVar4 = *(long *)(param_1 + 4);
        if (lVar4 == 0) goto LAB_04ab7694;
        if ((ulong)*(uint *)(lVar4 + 0x18) <= lVar3 - 4U) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar2 = (**(code **)(*plVar1 + 0x1b8))
                          (plVar1,*(undefined8 *)(lVar4 + lVar3 * 8),param_2,
                           *(undefined8 *)(*plVar1 + 0x1c0));
        if ((uVar2 & 1) != 0) {
          return (int)lVar3 + -3;
        }
        lVar4 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar4 < *param_1 + -1);
    }
  }
  return -1;
}


