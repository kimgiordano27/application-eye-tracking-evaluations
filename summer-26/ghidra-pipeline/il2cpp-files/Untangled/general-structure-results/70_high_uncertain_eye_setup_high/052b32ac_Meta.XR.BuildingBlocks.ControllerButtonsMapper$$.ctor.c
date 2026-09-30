/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$.ctor
ENTRY_POINT: 052b32ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052b3324) */

void Meta_XR_BuildingBlocks_ControllerButtonsMapper___ctor
               (float param_1,undefined1 param_2 [16],undefined8 param_3,ulong param_4)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar2 = SQRT((unaff_s8 * unaff_s8 + param_1 + unaff_s10 * unaff_s10) *
               (unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12));
  fVar6 = 0.0;
  if (DAT_013f6a8c <= fVar2) {
    param_4 = (ulong)(uint)(unaff_s8 * unaff_s13);
    fVar2 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / fVar2;
    param_3 = 0xbf800000;
    if (fVar2 < -1.0) {
      fVar2 = -1.0;
    }
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    dVar3 = acos((double)fVar2);
    fVar6 = (float)dVar3 * DAT_013f6f10;
  }
  uVar7 = (ulong)(uint)fVar6;
  if (*(float *)(unaff_x19 + 0x38) < fVar6) {
    lVar1 = FUN_066c67b0();
    if (lVar1 != 0) {
      uVar4 = FUN_066d320c(lVar1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        uVar8 = uVar7;
        uVar9 = param_3;
        uVar10 = param_4;
        uVar5 = FUN_066d320c(*(long *)(unaff_x19 + 0x28),0);
        FUN_066bfb3c(0);
        fVar2 = (float)NEON_fminnm(ABS((float)param_4 * (float)uVar10 +
                                       (float)param_3 * (float)uVar9 +
                                       (float)uVar4 * (float)uVar5 + (float)uVar7 * (float)uVar8),
                                   0x3f800000);
        if ((fVar2 <= DAT_013f6c48) && (fVar2 = acosf(fVar2), (fVar2 + fVar2) * DAT_013f6f10 != 0.0)
           ) {
          uVar5 = FUN_066bd84c(uVar4,uVar7,param_3,param_4,uVar5,uVar8,uVar9,uVar10,0);
          uVar8 = uVar7;
          uVar9 = param_3;
          uVar10 = param_4;
        }
        fVar2 = (float)FUN_066bda8c(uVar5,uVar8,uVar9,uVar10,0);
        uVar7 = (ulong)(uint)((float)uVar8 * DAT_013f6f10);
        FUN_066be0b4(fVar2 * DAT_013f6f10,uVar7,(float)uVar9 * DAT_013f6f10,0);
        lVar1 = FUN_066c67b0();
        if (lVar1 != 0) {
          FUN_066d4ab0(0,uVar7,0,lVar1,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  return;
}


