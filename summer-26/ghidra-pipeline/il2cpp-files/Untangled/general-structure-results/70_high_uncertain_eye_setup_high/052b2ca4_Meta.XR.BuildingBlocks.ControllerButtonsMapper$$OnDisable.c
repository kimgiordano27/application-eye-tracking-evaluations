/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnDisable
ENTRY_POINT: 052b2ca4
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


undefined8
Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnDisable(float param_1,float param_2,float param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  
  uVar4 = *(undefined8 *)(unaff_x19 + 0xe0);
  fVar9 = param_3;
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar4,0);
  if ((uVar1 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
       (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0xb8),0), lVar3 != 0)) {
      fVar5 = (float)FUN_066d48c0(lVar3,0);
      FUN_066d4960((unaff_s8 - param_1) + fVar5,param_2 + 0.0,(unaff_s9 - param_3) + fVar9,lVar3,0);
LAB_052b2e7c:
      *(undefined1 *)(unaff_x19 + 0x199) = 0;
      return 0;
    }
  }
  else if (*(long *)(unaff_x19 + 0xe0) != 0) {
    FUN_052b3520(0x3f800000,*(undefined4 *)(unaff_x19 + 0xf0),*(long *)(unaff_x19 + 0xe0),0);
    plVar2 = *(long **)(unaff_x19 + 0xe0);
    if (plVar2 != (long *)0x0) {
      fVar5 = (float)(**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
      if ((double)fVar5 < DAT_013f5298) {
        *(undefined8 *)(unaff_x20 + 0x18) = 0;
        thunk_FUN_02f411dc((undefined8 *)(unaff_x20 + 0x18),0);
        *(undefined4 *)(unaff_x20 + 0x10) = 1;
        return 1;
      }
      dVar10 = DAT_013f5298;
      lVar3 = FUN_066c67b0();
      fVar5 = SUB84(dVar10,0);
      if (lVar3 != 0) {
        fVar6 = (float)FUN_066d48c0(lVar3,0);
        if (*(long *)(unaff_x19 + 0x138) != 0) {
          fVar11 = fVar9;
          fVar7 = (float)FUN_066d48c0(*(long *)(unaff_x19 + 0x138),0);
          if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
             (fVar12 = fVar11, lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0xb8),0), lVar3 != 0)) {
            fVar8 = (float)FUN_066d48c0(lVar3,0);
            FUN_066d4960((fVar6 - fVar7) + fVar8,fVar5 + 0.0,(fVar9 - fVar11) + fVar12,lVar3,0);
            if (*(long *)(unaff_x19 + 0xe0) != 0) {
              FUN_052b3520(0,*(undefined4 *)(unaff_x19 + 0xf0),*(long *)(unaff_x19 + 0xe0),0);
              plVar2 = *(long **)(unaff_x19 + 0xe0);
              if (plVar2 != (long *)0x0) {
                fVar9 = (float)(**(code **)(*plVar2 + 0x178))
                                         (plVar2,*(undefined8 *)(*plVar2 + 0x180));
                if (DAT_013f6150 < (double)fVar9) {
                  *(undefined8 *)(unaff_x20 + 0x18) = 0;
                  thunk_FUN_02f411dc((undefined8 *)(unaff_x20 + 0x18),0);
                  *(undefined4 *)(unaff_x20 + 0x10) = 2;
                  return 1;
                }
                goto LAB_052b2e7c;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


