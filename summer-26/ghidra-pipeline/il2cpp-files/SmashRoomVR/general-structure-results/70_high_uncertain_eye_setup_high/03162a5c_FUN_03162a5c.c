/*
FUNCTION_NAME: FUN_03162a5c
ENTRY_POINT: 03162a5c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_03162a5c(undefined8 param_1,long param_2,uint *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_03ff2054 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80688);
    DAT_03ff2054 = 1;
  }
  *param_3 = 0xffffffff;
  lVar3 = *(long *)(param_2 + 0x38);
  if (lVar3 == 0) {
OVRPlugin__GetLayerRecommendedResolution:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = (uint)*(undefined8 *)(lVar3 + 0x18);
  if ((int)uVar4 < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar5 = 0xffffffff;
    fVar8 = INFINITY;
    do {
      if (uVar4 <= uVar6) goto LAB_03162b60;
      if (*(long *)(lVar3 + (long)(int)uVar6 * 8 + 0x20) == 0)
      goto OVRPlugin__GetLayerRecommendedResolution;
      fVar7 = (float)FUN_03162b64(param_1);
      if (fVar7 < fVar8) {
        *param_3 = uVar6;
        uVar5 = uVar6;
        fVar8 = fVar7;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar4);
  }
  puVar1 = PTR_DAT_03d80688;
  if (uVar5 == 0xffffffff) {
                    /* try { // try from 03162b28 to 03262b5b has its CatchHandler @ 03162b84 */
    lVar3 = *(long *)PTR_DAT_03d80688;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = *(undefined8 **)(lVar3 + 0xb8);
  }
  else {
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 031628e4 with catch @ 03162b10
                        */
    if (uVar4 <= uVar5) {
LAB_03162b60:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
  }
  return *puVar2;
}


