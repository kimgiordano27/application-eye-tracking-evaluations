/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 01a3ef7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin_EyeGazeState__get_IsValid(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar6;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_w19) {
LAB_01a3f04c:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar2 = *(long *)(param_1 + (long)(int)unaff_w19 * 8 + 0x20);
    if (lVar2 != 0) {
      uVar3 = FUN_0269fe30(lVar2,0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar2);
      }
      uVar4 = FUN_0268b4e0(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        lVar2 = (-(ulong)(unaff_w19 - 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(unaff_w19 - 1) << 3)
                + 0x20;
        do {
          unaff_w19 = unaff_w19 - 1;
          if ((int)unaff_w19 < 0) goto LAB_01a3f02c;
          lVar5 = *unaff_x20;
          if (lVar5 == 0) goto LAB_01a3f048;
          if (*(uint *)(lVar5 + 0x18) <= unaff_w19) goto LAB_01a3f04c;
          uVar6 = *(undefined8 *)(lVar5 + lVar2);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar4 = FUN_0268b4e0(uVar6,uVar3,0);
          lVar2 = lVar2 + -8;
        } while ((uVar4 & 1) == 0);
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


