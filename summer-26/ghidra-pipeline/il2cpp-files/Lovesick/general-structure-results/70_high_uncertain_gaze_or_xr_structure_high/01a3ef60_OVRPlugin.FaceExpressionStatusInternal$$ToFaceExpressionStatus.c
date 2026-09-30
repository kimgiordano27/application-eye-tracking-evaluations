/*
FUNCTION_NAME: OVRPlugin.FaceExpressionStatusInternal$$ToFaceExpressionStatus
ENTRY_POINT: 01a3ef60
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_possible_biometrics_hits_4
*/


uint OVRPlugin_FaceExpressionStatusInternal__ToFaceExpressionStatus(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xc2d) = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  lVar4 = *unaff_x20;
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_w19) {
LAB_01a3f04c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)unaff_w19 * 8 + 0x20);
    if (lVar4 != 0) {
      uVar2 = FUN_0269fe30(lVar4,0);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar4);
      }
      uVar3 = FUN_0268b4e0(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        lVar4 = (-(ulong)(unaff_w19 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(unaff_w19 - 1) << 3)
                + 0x20;
        do {
          unaff_w19 = unaff_w19 - 1;
          if ((int)unaff_w19 < 0) goto LAB_01a3f02c;
          lVar5 = *unaff_x20;
          if (lVar5 == 0) goto LAB_01a3f048;
          if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_01a3f04c;
          uVar6 = *(undefined8 *)(lVar5 + lVar4);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar3 = FUN_0268b4e0(uVar6,uVar2,0);
          lVar4 = lVar4 + -8;
        } while ((uVar3 & 1) == 0);
      }
      else {
LAB_01a3f02c:
        unaff_w19 = 0xffffffff;
      }
      return unaff_w19;
    }
  }
LAB_01a3f048:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


