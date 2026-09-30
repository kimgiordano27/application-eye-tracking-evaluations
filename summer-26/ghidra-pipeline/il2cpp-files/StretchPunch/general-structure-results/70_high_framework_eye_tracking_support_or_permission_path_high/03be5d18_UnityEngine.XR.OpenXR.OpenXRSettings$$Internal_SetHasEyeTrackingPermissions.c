/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 03be5d18
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions
               (long param_1,undefined1 param_2 [16],undefined4 param_3)

{
  bool in_CY;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  
  if ((in_CY) && (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1)) {
    lVar4 = unaff_x20[0x26];
    if (lVar4 == 0) goto LAB_03be5f8c;
    uVar6 = FUN_03cb073c(lVar4,0);
    bVar1 = FUN_03caff74(lVar4,0);
    bVar2 = FUN_03cb026c(lVar4,0);
    bVar3 = FUN_03cb04d4(lVar4,0);
    *(undefined4 *)(unaff_x21 + 0x3c) = uVar6;
    *(byte *)(unaff_x21 + 0x40) = bVar1 & 1;
    *(byte *)(unaff_x21 + 0x41) = bVar2 & 1;
    *(byte *)(unaff_x21 + 0x42) = bVar3 & 1;
    *(undefined1 *)(unaff_x21 + 0x43) = 0;
    lVar4 = unaff_x20[0x27];
    if (lVar4 == 0) goto LAB_03be5f8c;
    uVar6 = FUN_03cb073c(lVar4,0);
    bVar1 = FUN_03caff74(lVar4,0);
    bVar2 = FUN_03cb026c(lVar4,0);
    bVar3 = FUN_03cb04d4(lVar4,0);
    *(undefined4 *)(unaff_x21 + 0x44) = uVar6;
    *(byte *)(unaff_x21 + 0x48) = bVar1 & 1;
    *(byte *)(unaff_x21 + 0x49) = bVar2 & 1;
    *(byte *)(unaff_x21 + 0x4a) = bVar3 & 1;
    *(undefined1 *)(unaff_x21 + 0x4b) = 0;
  }
  else {
    *(undefined8 *)(unaff_x21 + 0x44) = 0;
    *(undefined8 *)(unaff_x21 + 0x3c) = 0;
  }
  bVar1 = *(byte *)(*(long *)StringLiteral_581 + 0x130);
  if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_581))
  {
    *(undefined8 *)(unaff_x21 + 0x4c) = 0;
    if (DAT_044a2dbd == '\0') {
      FUN_01d7d918(Field_PaintCore_CwHashedModel_instance);
      DAT_044a2dbd = '\x01';
    }
    *(undefined8 *)(unaff_x21 + 0x54) =
         **(undefined8 **)(*(long *)Field_PaintCore_CwHashedModel_instance + 0xb8);
  }
  else {
    lVar4 = unaff_x20[0x5f];
    if (lVar4 == 0) goto LAB_03be5f8c;
    uVar6 = FUN_03cb073c(lVar4,0);
    bVar1 = FUN_03caff74(lVar4,0);
    bVar2 = FUN_03cb026c(lVar4,0);
    bVar3 = FUN_03cb04d4(lVar4,0);
    *(undefined4 *)(unaff_x21 + 0x4c) = uVar6;
    *(byte *)(unaff_x21 + 0x50) = bVar1 & 1;
    *(byte *)(unaff_x21 + 0x51) = bVar2 & 1;
    *(byte *)(unaff_x21 + 0x52) = bVar3 & 1;
    *(undefined1 *)(unaff_x21 + 0x53) = 0;
    if (unaff_x20[0x60] == 0) goto LAB_03be5f8c;
    uVar6 = FUN_028d5614(unaff_x20[0x60],*(undefined8 *)PTR_DAT_04244ae0);
    *(undefined4 *)(unaff_x21 + 0x54) = uVar6;
    *(undefined4 *)(unaff_x21 + 0x58) = param_3;
  }
  if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_03be5f8c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_03be6060();
  if ((*(char *)(unaff_x19 + 0x58) != '\0') || (*(char *)(unaff_x19 + 0x59) != '\0')) {
    dVar7 = *(double *)(unaff_x19 + 0x40);
    fVar5 = (float)FUN_03d7bbf4(0);
    *(double *)(unaff_x19 + 0x40) = dVar7 + (double)fVar5;
    if (*(char *)(unaff_x19 + 0x59) != '\0') {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03be5f8c;
      dVar8 = *(double *)(unaff_x19 + 0x40);
      dVar7 = (double)FUN_03be58a0();
      if (dVar7 < dVar8) {
        if (*(char *)(unaff_x19 + 0x38) != '\0') {
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x20), lVar4 == 0)) goto LAB_03be5f8c;
          if (*(int *)(unaff_x19 + 0x68) < *(int *)(lVar4 + 0x18) + -1) {
            return;
          }
        }
        FUN_03be52ac();
      }
    }
  }
  return;
}


