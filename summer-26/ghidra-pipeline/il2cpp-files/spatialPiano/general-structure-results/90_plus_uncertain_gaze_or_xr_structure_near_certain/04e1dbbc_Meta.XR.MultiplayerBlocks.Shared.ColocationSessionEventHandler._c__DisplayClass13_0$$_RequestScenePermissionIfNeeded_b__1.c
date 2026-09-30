/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$<RequestScenePermissionIfNeeded>b__1
ENTRY_POINT: 04e1dbbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0__<RequestScenePermissionIfNeeded>b__1
               (undefined8 param_1,undefined8 param_2,void *param_3,uint param_4,undefined8 param_5,
               long param_6)

{
  ulong uVar1;
  int in_w8;
  int in_w9;
  long unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)in_w8 - (long)(int)param_4;
  lVar2 = unaff_x22 + (long)(int)param_4 * (long)in_w9 + 0x20;
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    memcpy(&stack0x00000008,param_3,0x58);
    uVar1 = FUN_05a9b444(lVar2,&stack0x00000008,
                         *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
    if ((uVar1 & 1) != 0) break;
    lVar3 = lVar3 + -1;
    lVar2 = lVar2 + 0x58;
    param_4 = param_4 + 1;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  return param_4;
}


