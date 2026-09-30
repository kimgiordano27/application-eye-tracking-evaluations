/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$RefreshStyle
ENTRY_POINT: 04daacc4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__RefreshStyle(code *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  int iVar5;
  float fVar6;
  float in_s3;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  
  (*param_1)();
  if ((unaff_x19[2] != 0) && (lVar3 = *(long *)(unaff_x19[2] + 800), lVar3 != 0)) {
    FUN_0623c2d8(lVar3,0);
    fVar7 = 0.0;
    fVar6 = 0.0;
    if (0.0 <= unaff_s9 - in_s3) {
      fVar6 = unaff_s9 - in_s3;
    }
    if (unaff_x19[2] != 0) {
      FUN_06333f38(unaff_x19[2],0);
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      if (((unaff_x19[2] != 0) && (lVar3 = *(long *)(unaff_x19[2] + 0x330), lVar3 != 0)) &&
         (lVar3 = *(long *)(lVar3 + 0x2d0), lVar3 != 0)) {
        FUN_0423e228(fVar6,lVar3,*(undefined8 *)PTR_DAT_067ce1a0);
        if (((unaff_x19[2] != 0) && (lVar3 = *(long *)(unaff_x19[2] + 0x330), lVar3 != 0)) &&
           (plVar4 = *(long **)(lVar3 + 0x2d0), plVar4 != (long *)0x0)) {
          (**(code **)(*plVar4 + 0xad8))(fVar7,plVar4,*(undefined8 *)(*plVar4 + 0xae0));
          fVar6 = (float)FUN_04daa740();
          fVar6 = unaff_s8 / fVar6;
          iVar5 = -0x7ffffffe;
          if (fVar6 != INFINITY) {
            iVar5 = (int)fVar6 + 2;
          }
          if (fVar6 <= 0.0) {
            iVar5 = 0;
          }
          iVar1 = FUN_04655224();
          if (iVar1 <= iVar5) {
            iVar5 = iVar1;
          }
          iVar1 = (**(code **)(*unaff_x19 + 0x198))();
          if (iVar1 != iVar5) {
            iVar1 = (**(code **)(*unaff_x19 + 0x198))();
            iVar2 = (**(code **)(*unaff_x19 + 0x198))();
            if (iVar5 < iVar2) {
              iVar1 = iVar1 - iVar5;
              if (0 < iVar1) {
                do {
                  if (unaff_x19[5] == 0) goto LAB_04daaed4;
                  (**(code **)(*unaff_x19 + 0x2b8))();
                  iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
              }
            }
            else {
              iVar1 = (**(code **)(*unaff_x19 + 0x198))();
              iVar5 = iVar5 - iVar1;
              if (0 < iVar5) {
                do {
                  (**(code **)(*unaff_x19 + 0x178))();
                  (**(code **)(*unaff_x19 + 0x2a8))();
                  FUN_04656298();
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
            }
          }
                    /* WARNING: Could not recover jumptable at 0x04daaed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x2c8))();
          return;
        }
      }
    }
  }
LAB_04daaed4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


