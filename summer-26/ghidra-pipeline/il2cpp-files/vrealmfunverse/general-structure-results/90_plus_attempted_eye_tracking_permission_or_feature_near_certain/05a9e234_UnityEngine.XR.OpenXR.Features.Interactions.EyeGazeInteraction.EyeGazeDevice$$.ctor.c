/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$.ctor
ENTRY_POINT: 05a9e234
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice___ctor
               (long *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long in_x9;
  long in_x10;
  long in_x11;
  uint in_w12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar6;
  
  if (in_w12 < (uint)in_x11) {
    param_1 = (long *)0x0;
    if (unaff_x20 == 0) goto LAB_05a9e2b4;
LAB_05a9e244:
    lVar4 = FUN_056def70();
    if ((lVar4 == 0) || (plVar5 = *(long **)(lVar4 + 0x78), plVar5 == (long *)0x0))
    goto LAB_05a9e2b4;
    bVar1 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_05a9e2b4;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__) {
      plVar5 = (long *)0x0;
    }
    if (param_1 != (long *)0x0) goto LAB_05a9e2bc;
LAB_05a9e294:
    uVar2 = 0;
  }
  else {
    if (*(long *)(*(long *)(in_x10 + 200) + in_x11 * 8 + -8) != in_x9) {
      param_1 = (long *)0x0;
    }
    if (unaff_x20 != 0) goto LAB_05a9e244;
LAB_05a9e2b4:
    plVar5 = (long *)0x0;
    if (param_1 == (long *)0x0) goto LAB_05a9e294;
LAB_05a9e2bc:
    if (param_1[0x31] == 0) goto LAB_05a9e3bc;
    uVar2 = FUN_04ad3a94(param_1[0x31],
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
  }
  if (param_1 != plVar5) {
    if (plVar5 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      if (plVar5[0x31] == 0) {
LAB_05a9e3bc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar3 = FUN_04ad3a94(plVar5[0x31],
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
      uVar3 = uVar3 & 2;
    }
    uVar2 = uVar3 | uVar2 & 1;
  }
  *(uint *)(unaff_x19 + 0x18) = uVar2;
  if ((unaff_x21 != 0) && ((uVar2 & 1) != 0)) {
    uVar6 = FUN_031ee568();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar6;
    *(undefined4 *)(unaff_x19 + 0x24) = param_3;
    *(undefined4 *)(unaff_x19 + 0x28) = param_4;
  }
  if ((unaff_x20 != 0) && ((*(byte *)(unaff_x19 + 0x18) >> 1 & 1) != 0)) {
    uVar6 = FUN_031ee2d4();
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar6;
    *(undefined4 *)(unaff_x19 + 0x30) = param_3;
    *(undefined4 *)(unaff_x19 + 0x34) = param_4;
    *(undefined4 *)(unaff_x19 + 0x38) = param_5;
  }
  return;
}


