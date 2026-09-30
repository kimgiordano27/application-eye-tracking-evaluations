/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$.ctor
ENTRY_POINT: 04daac48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon___ctor(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  int iVar8;
  float fVar9;
  float in_s3;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  undefined1 auVar11 [16];
  
  auVar11 = FUN_0625c4e0(0);
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067ca970) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x3f) * 0x10 + 0x138);
          goto LAB_04daacbc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(param_1,*(long *)PTR_DAT_067ca970,0x3f);
LAB_04daacbc:
    (*(code *)*puVar3)(param_1,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,puVar3[1]);
    if ((unaff_x19[2] != 0) && (lVar5 = *(long *)(unaff_x19[2] + 800), lVar5 != 0)) {
      FUN_0623c2d8(lVar5,0);
      fVar10 = 0.0;
      fVar9 = 0.0;
      if (0.0 <= unaff_s9 - in_s3) {
        fVar9 = unaff_s9 - in_s3;
      }
      if (unaff_x19[2] != 0) {
        FUN_06333f38(unaff_x19[2],0);
        if (fVar9 <= fVar10) {
          fVar10 = fVar9;
        }
        if (((unaff_x19[2] != 0) && (lVar5 = *(long *)(unaff_x19[2] + 0x330), lVar5 != 0)) &&
           (lVar5 = *(long *)(lVar5 + 0x2d0), lVar5 != 0)) {
          FUN_0423e228(fVar9,lVar5,*(undefined8 *)PTR_DAT_067ce1a0);
          if (((unaff_x19[2] != 0) && (lVar5 = *(long *)(unaff_x19[2] + 0x330), lVar5 != 0)) &&
             (plVar4 = *(long **)(lVar5 + 0x2d0), plVar4 != (long *)0x0)) {
            (**(code **)(*plVar4 + 0xad8))(fVar10,plVar4,*(undefined8 *)(*plVar4 + 0xae0));
            fVar9 = (float)FUN_04daa740();
            fVar9 = unaff_s8 / fVar9;
            iVar8 = -0x7ffffffe;
            if (fVar9 != INFINITY) {
              iVar8 = (int)fVar9 + 2;
            }
            if (fVar9 <= 0.0) {
              iVar8 = 0;
            }
            iVar1 = FUN_04655224();
            if (iVar1 <= iVar8) {
              iVar8 = iVar1;
            }
            iVar1 = (**(code **)(*unaff_x19 + 0x198))();
            if (iVar1 != iVar8) {
              iVar1 = (**(code **)(*unaff_x19 + 0x198))();
              iVar2 = (**(code **)(*unaff_x19 + 0x198))();
              if (iVar8 < iVar2) {
                iVar1 = iVar1 - iVar8;
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
                iVar8 = iVar8 - iVar1;
                if (0 < iVar8) {
                  do {
                    (**(code **)(*unaff_x19 + 0x178))();
                    (**(code **)(*unaff_x19 + 0x2a8))();
                    FUN_04656298();
                    iVar8 = iVar8 + -1;
                  } while (iVar8 != 0);
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
  }
LAB_04daaed4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


