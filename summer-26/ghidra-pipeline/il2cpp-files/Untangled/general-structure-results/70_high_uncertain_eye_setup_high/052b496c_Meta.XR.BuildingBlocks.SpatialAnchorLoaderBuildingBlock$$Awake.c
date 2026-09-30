/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLoaderBuildingBlock$$Awake
ENTRY_POINT: 052b496c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_SpatialAnchorLoaderBuildingBlock__Awake
               (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  float fVar4;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (unaff_x20 == 0) goto LAB_052b4aa8;
  FUN_06741f8c();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar2 = FUN_066c67b0(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0)) goto LAB_052b4aa8;
    fVar4 = (float)FUN_066d48c0(lVar2,0);
    param_2 = unaff_s12 + param_2;
    param_3 = unaff_s13 + param_3;
    FUN_066d4960(unaff_s11 + fVar4,param_2,param_3,lVar2,0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x90), lVar2 == 0)) goto LAB_052b4aa8;
    FUN_06741eec(lVar2,0);
    FUN_06741f8c(lVar2,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x50) != 0) &&
       (lVar2 = FUN_066c67b0(*(long *)(unaff_x19 + 0x50),0), lVar2 != 0)) {
      fVar4 = (float)FUN_066d48c0(lVar2,0);
      FUN_066d4960(unaff_s11 + fVar4,unaff_s12 + param_2,unaff_s13 + param_3,lVar2,0);
      if ((*(long *)(unaff_x19 + 0x50) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x90), lVar2 != 0)) {
        FUN_06741eec(lVar2,0);
        FUN_06741f8c(lVar2,0);
        goto LAB_052b4a84;
      }
    }
LAB_052b4aa8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
LAB_052b4a84:
  *(undefined4 *)(unaff_x19 + 0xb8) = unaff_s10;
  *(undefined4 *)(unaff_x19 + 0xbc) = unaff_s9;
  *(undefined4 *)(unaff_x19 + 0xc0) = unaff_s8;
  return;
}


