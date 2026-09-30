/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_SetDeveloperAccessToken
ENTRY_POINT: 01945424
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Oculus_Platform_CAPI__ovr_SetDeveloperAccessToken(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  long lVar5;
  undefined1 in_w8;
  long unaff_x19;
  int iVar6;
  long unaff_x20;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float fVar9;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x20 + 0x183) = in_w8;
  puVar3 = OVREyeGaze_TypeInfo;
  fVar7 = 0.0;
  if (0.0 < unaff_s8) {
    if (unaff_s8 < *(float *)(unaff_x19 + 0x60)) {
      lVar5 = *(long *)(unaff_x19 + 0x58);
      if (lVar5 != 0) {
        iVar6 = 0;
        do {
          iVar1 = iVar6 + 1;
          if (*(int *)(lVar5 + 0x18) <= iVar1) {
LAB_019454a0:
            iVar2 = *(int *)(lVar5 + 0x18);
            FUN_0132138c(lVar5,iVar6,(long)&stack0x00000008 + 4,*(undefined8 *)puVar3);
            fVar7 = in_stack_00000008._4_4_;
            if (*(long *)(unaff_x19 + 0x58) != 0) {
              FUN_0132138c(*(long *)(unaff_x19 + 0x58),iVar1,(long)&stack0x00000008 + 4,
                           *(undefined8 *)puVar3);
              fVar4 = in_stack_00000008._4_4_;
              if (*(long *)(unaff_x19 + 0x58) != 0) {
                fVar8 = (float)(iVar2 + -1);
                fVar9 = (float)iVar6 / fVar8;
                FUN_0132138c(*(long *)(unaff_x19 + 0x58),iVar6,(long)&stack0x00000008 + 4,
                             *(undefined8 *)puVar3);
                return fVar9 + ((float)iVar1 / fVar8 - fVar9) *
                               ((unaff_s8 - fVar7) / (fVar4 - in_stack_00000008._4_4_));
              }
            }
            break;
          }
          FUN_0132138c(lVar5,iVar1,(long)&stack0x00000008 + 4,*(undefined8 *)puVar3);
          if (unaff_s8 < in_stack_00000008._4_4_) {
            lVar5 = *(long *)(unaff_x19 + 0x58);
            if (lVar5 != 0) goto LAB_019454a0;
            break;
          }
          lVar5 = *(long *)(unaff_x19 + 0x58);
          iVar6 = iVar6 + 1;
        } while (lVar5 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar7 = 1.0;
  }
  return fVar7;
}


