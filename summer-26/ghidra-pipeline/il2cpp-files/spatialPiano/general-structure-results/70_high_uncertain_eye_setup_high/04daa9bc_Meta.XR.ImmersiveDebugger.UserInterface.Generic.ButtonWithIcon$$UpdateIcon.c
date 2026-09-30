/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateIcon
ENTRY_POINT: 04daa9bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateIcon(void)

{
  int iVar1;
  int iVar2;
  long *unaff_x19;
  long lVar3;
  int unaff_w20;
  float fVar4;
  float fVar5;
  ulong uVar6;
  
  fVar4 = (float)FUN_04daa740();
  *(undefined1 *)(unaff_x19 + 0x12) = 1;
  if (unaff_w20 == -1) {
    fVar5 = (float)FUN_04655760();
    iVar1 = FUN_04655224();
    lVar3 = unaff_x19[2];
    if (fVar5 / fVar4 == INFINITY || (int)(fVar5 / fVar4) <= iVar1) {
      iVar1 = FUN_04655224();
      if (lVar3 == 0) goto LAB_04daabb8;
      fVar5 = fVar4 * (float)(iVar1 + 1);
    }
    else {
      if (lVar3 == 0) goto LAB_04daabb8;
      fVar5 = 0.0;
    }
    uVar6 = 0;
  }
  else {
    iVar1 = (**(code **)(*unaff_x19 + 0x178))();
    if (iVar1 < unaff_w20) {
      fVar5 = (float)FUN_04655760();
      iVar1 = -0x80000000;
      if (fVar5 / fVar4 != INFINITY) {
        iVar1 = (int)(fVar5 / fVar4);
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x178))();
      if (unaff_w20 < iVar2 + iVar1) {
        return;
      }
      fVar5 = (float)FUN_04655760();
      lVar3 = unaff_x19[2];
      if (lVar3 == 0) {
LAB_04daabb8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      fVar5 = fVar4 * (float)((unaff_w20 - iVar1) + 1) + (fVar4 - (fVar5 - fVar4 * (float)iVar1));
      uVar6 = FUN_06333f38(lVar3,0);
    }
    else {
      lVar3 = unaff_x19[2];
      if (DAT_06bb7da1 == '\0') {
        FUN_02f08768(PTR_DAT_067c9848);
        DAT_06bb7da1 = '\x01';
      }
      if (lVar3 == 0) goto LAB_04daabb8;
      fVar5 = fVar4 * (float)unaff_w20 *
              *(float *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0x14);
      uVar6 = (ulong)(uint)(fVar4 * (float)unaff_w20 *
                           *(float *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0x10));
    }
  }
  FUN_06333f44(uVar6,fVar5,lVar3,0);
  return;
}


