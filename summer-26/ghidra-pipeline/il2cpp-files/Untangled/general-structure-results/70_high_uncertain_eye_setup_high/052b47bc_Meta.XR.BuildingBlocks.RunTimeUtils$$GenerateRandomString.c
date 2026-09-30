/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RunTimeUtils$$GenerateRandomString
ENTRY_POINT: 052b47bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RunTimeUtils__GenerateRandomString
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x22;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float fVar8;
  float fVar9;
  
  FUN_02f07e70();
  *(undefined1 *)(unaff_x20 + 3) = 1;
  *(float *)(unaff_x19 + 0xac) = unaff_s10;
  *(float *)(unaff_x19 + 0xb0) = unaff_s9;
  *(float *)(unaff_x19 + 0xb4) = unaff_s8;
  fVar7 = *(float *)(unaff_x19 + 0xb8);
  fVar8 = *(float *)(unaff_x19 + 0xbc);
  fVar9 = *(float *)(unaff_x19 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar7 = unaff_s10 - fVar7;
  fVar8 = unaff_s9 - fVar8;
  fVar9 = unaff_s8 - fVar9;
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x90) == 0) goto LAB_052b4aa8;
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x90) + 0xa8);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar4,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x90) == 0) ||
         (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0x90),0), lVar3 == 0)) goto LAB_052b4aa8;
      fVar6 = (float)FUN_066d48c0(lVar3,0);
      param_2 = fVar8 + param_2;
      param_3 = fVar9 + param_3;
      FUN_066d4960(fVar7 + fVar6,param_2,param_3,lVar3,0);
      lVar3 = *(long *)(unaff_x19 + 0x90);
      if (lVar3 == 0) goto LAB_052b4aa8;
      lVar5 = *(long *)(lVar3 + 0xa8);
      lVar3 = FUN_066c67b0(lVar3,0);
      if ((lVar3 == 0) || (FUN_066d48c0(lVar3,0), lVar5 == 0)) goto LAB_052b4aa8;
      FUN_06741f8c(lVar5,0);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x98);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_052b4aa8;
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x98) + 0xa8);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x98);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_066c971c(uVar1,uVar4,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x98) == 0) ||
           (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0x98),0), lVar3 == 0)) goto LAB_052b4aa8;
        fVar6 = (float)FUN_066d48c0(lVar3,0);
        param_2 = fVar8 + param_2;
        param_3 = fVar9 + param_3;
        FUN_066d4960(fVar7 + fVar6,param_2,param_3,lVar3,0);
        lVar3 = *(long *)(unaff_x19 + 0x98);
        if (lVar3 == 0) goto LAB_052b4aa8;
        lVar5 = *(long *)(lVar3 + 0xa8);
        lVar3 = FUN_066c67b0(lVar3,0);
        if ((lVar3 == 0) || (FUN_066d48c0(lVar3,0), lVar5 == 0)) goto LAB_052b4aa8;
        FUN_06741f8c(lVar5,0);
      }
    }
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0x40),0), lVar3 == 0)) goto LAB_052b4aa8;
    fVar6 = (float)FUN_066d48c0(lVar3,0);
    param_2 = fVar8 + param_2;
    param_3 = fVar9 + param_3;
    FUN_066d4960(fVar7 + fVar6,param_2,param_3,lVar3,0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x90), lVar3 == 0)) goto LAB_052b4aa8;
    FUN_06741eec(lVar3,0);
    FUN_06741f8c(lVar3,0);
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x50) != 0) &&
       (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0x50),0), lVar3 != 0)) {
      fVar6 = (float)FUN_066d48c0(lVar3,0);
      FUN_066d4960(fVar7 + fVar6,fVar8 + param_2,fVar9 + param_3,lVar3,0);
      if ((*(long *)(unaff_x19 + 0x50) != 0) &&
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x90), lVar3 != 0)) {
        FUN_06741eec(lVar3,0);
        FUN_06741f8c(lVar3,0);
        goto LAB_052b4a84;
      }
    }
LAB_052b4aa8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
LAB_052b4a84:
  *(float *)(unaff_x19 + 0xb8) = unaff_s10;
  *(float *)(unaff_x19 + 0xbc) = unaff_s9;
  *(float *)(unaff_x19 + 0xc0) = unaff_s8;
  return;
}


