/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction$$.ctor
ENTRY_POINT: 05a9e144
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction___ctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int extraout_var;
  long *plVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  undefined4 uVar7;
  
  if ((unaff_x25 != unaff_x26) && (unaff_x26 != 0)) {
    if (*(long *)(unaff_x26 + 400) == 0) goto LAB_05a9e3bc;
    FUN_057083b8(*(long *)(unaff_x26 + 400),0);
  }
  *(undefined1 *)(unaff_x19 + 0x1c) = 0;
  if ((unaff_x23 != 0) && (FUN_056de9f0(), 0 < extraout_var)) {
    uVar2 = FUN_031ee1f8();
    goto LAB_05a9e310;
  }
  if (((unaff_x22 != 0) && (lVar4 = FUN_056def70(), lVar4 != 0)) &&
     (plVar5 = *(long **)(lVar4 + 0x78), plVar5 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__)) {
      if (plVar5[0x31] != 0) {
        uVar2 = FUN_04ad3a94(plVar5[0x31],
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__)
        ;
        goto LAB_05a9e310;
      }
      goto LAB_05a9e3bc;
    }
  }
  if (((unaff_x21 == 0) || (lVar4 = FUN_056def70(), lVar4 == 0)) ||
     (plVar5 = *(long **)(lVar4 + 0x78), plVar5 == (long *)0x0)) {
UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages___cctor:
    plVar5 = (long *)0x0;
    if (unaff_x20 == 0) goto LAB_05a9e2b4;
LAB_05a9e244:
    lVar4 = FUN_056def70();
    if ((lVar4 == 0) || (plVar6 = *(long **)(lVar4 + 0x78), plVar6 == (long *)0x0))
    goto LAB_05a9e2b4;
    bVar1 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar1) goto LAB_05a9e2b4;
    if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__) {
      plVar6 = (long *)0x0;
    }
    if (plVar5 == (long *)0x0) goto LAB_05a9e294;
LAB_05a9e2bc:
    if (plVar5[0x31] == 0) goto LAB_05a9e3bc;
    uVar2 = FUN_04ad3a94(plVar5[0x31],
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
  }
  else {
    bVar1 = *(byte *)(*(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__ +
                     0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1)
    goto UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages___cctor;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Security_Cryptography_DerSequenceReader_ReadBoolean__) {
      plVar5 = (long *)0x0;
    }
    if (unaff_x20 != 0) goto LAB_05a9e244;
LAB_05a9e2b4:
    plVar6 = (long *)0x0;
    if (plVar5 != (long *)0x0) goto LAB_05a9e2bc;
LAB_05a9e294:
    uVar2 = 0;
  }
  if (plVar5 != plVar6) {
    if (plVar6 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      if (plVar6[0x31] == 0) {
LAB_05a9e3bc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar3 = FUN_04ad3a94(plVar6[0x31],
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_KeyboardEventBase<KeyDownEvent>__ctor__);
      uVar3 = uVar3 & 2;
    }
    uVar2 = uVar3 | uVar2 & 1;
  }
LAB_05a9e310:
  *(uint *)(unaff_x19 + 0x18) = uVar2;
  if ((unaff_x21 != 0) && ((uVar2 & 1) != 0)) {
    uVar7 = FUN_031ee568();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x24) = param_2;
    *(undefined4 *)(unaff_x19 + 0x28) = param_3;
  }
  if ((unaff_x20 != 0) && ((*(byte *)(unaff_x19 + 0x18) >> 1 & 1) != 0)) {
    uVar7 = FUN_031ee2d4();
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x30) = param_2;
    *(undefined4 *)(unaff_x19 + 0x34) = param_3;
    *(undefined4 *)(unaff_x19 + 0x38) = param_4;
  }
  return;
}


