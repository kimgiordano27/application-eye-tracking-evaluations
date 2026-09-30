/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 03169170
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16] OVRPlugin_UnityOpenXR__OnSessionStateChange(float param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  int unaff_w19;
  uint unaff_w20;
  ulong unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  undefined1 auVar6 [16];
  float unaff_s8;
  float fVar7;
  
  do {
    if (unaff_s8 < param_1) {
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar1 = unaff_x21 & 0xffffffff;
      uVar2 = unaff_x22 & 0xffffffff;
LAB_03169220:
      auVar6 = FUN_031692d0(uVar1,uVar2);
      return auVar6;
    }
    while( true ) {
      unaff_x21 = unaff_x22;
      if (*(int *)(param_2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        param_2 = *unaff_x23;
      }
      lVar3 = **(long **)(param_2 + 0xb8);
      if (lVar3 == 0) goto LAB_03169258;
      puVar4 = *(uint **)(lVar3 + 0x10);
      if (unaff_x21 == unaff_x24) {
        if ((*puVar4 == 0) || (puVar4[4] == 0)) goto LAB_03169254;
        fVar7 = *(float *)(lVar3 + 0x20);
        if (*(int *)(param_2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (fVar7 < unaff_s8) {
          uVar2 = 1;
          uVar1 = 0;
          goto LAB_03169220;
        }
        lVar3 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar3 == 0) goto LAB_03169258;
        if ((**(uint **)(lVar3 + 0x10) <= unaff_w20) ||
           (lVar5 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar5 == 0)) goto LAB_03169254;
        if (unaff_s8 <= *(float *)(lVar3 + lVar5 * (int)unaff_w20 * 4 + 0x20)) {
          return ZEXT416(0x3f000000);
        }
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar1 = (ulong)(unaff_w19 - 2);
        uVar2 = (ulong)unaff_w20;
        goto LAB_03169220;
      }
      if ((*puVar4 <= unaff_x21) || ((int)*(long *)(puVar4 + 4) == 0)) goto LAB_03169254;
      if (*(float *)(lVar3 + *(long *)(puVar4 + 4) * unaff_x21 * 4 + 0x20) <= unaff_s8) break;
      unaff_x22 = unaff_x21 + 1;
    }
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      param_2 = *unaff_x23;
    }
    lVar3 = **(long **)(param_2 + 0xb8);
    if (lVar3 == 0) {
LAB_03169258:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    unaff_x22 = unaff_x21 + 1;
    if ((**(uint **)(lVar3 + 0x10) <= unaff_x22) ||
       (lVar5 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar5 == 0)) {
LAB_03169254:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    param_1 = *(float *)(lVar3 + lVar5 * (int)unaff_x22 * 4 + 0x20);
  } while( true );
}


