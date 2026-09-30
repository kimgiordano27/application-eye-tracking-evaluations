/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$Escape
ENTRY_POINT: 01ab5558
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_17;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void OVRSimpleJSON_JSONNode__Escape(undefined1 param_1 [16])

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  float *pfVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  undefined8 unaff_d9;
  float unaff_s10;
  float unaff_s13;
  float in_stack_00000010;
  float in_stack_00000018;
  
  fVar11 = unaff_s8;
  if (unaff_s13 < unaff_s8) {
    fVar11 = unaff_s13;
  }
  if (unaff_s8 < 0.0) {
    fVar11 = 0.0;
  }
  fVar12 = (float)((ulong)unaff_d9 >> 0x20);
  FUN_01ab51f4((float)unaff_d9 + (param_1._0_4_ - (float)unaff_d9) * fVar11,
               fVar12 + (param_1._4_4_ - fVar12) * fVar11,
               unaff_s10 + fVar11 * (in_stack_00000018 - unaff_s10));
  puVar2 = OVREyeGaze_TypeInfo;
  lVar4 = *(long *)(unaff_x19 + 0x38);
  if (lVar4 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x19 + 0x58);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x58);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x60);
      uVar9 = *(ulong *)(lVar5 + 0x18);
      uVar8 = (uint)uVar9;
      if (uVar1 == 0xffffffff) {
        if (0 < (int)uVar8) {
          fVar11 = unaff_s8;
          if (unaff_s13 < unaff_s8) {
            fVar11 = unaff_s13;
          }
          uVar7 = 0;
          if (unaff_s8 < 0.0) {
            fVar11 = 0.0;
          }
          while (*(long *)(unaff_x19 + 0x58) != 0) {
            lVar4 = *(long *)(lVar4 + 0x58);
            FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar7 & 0xffffffff,&stack0x00000010,
                         *(undefined8 *)puVar2);
            fVar12 = in_stack_00000010;
            if ((*(long *)(unaff_x19 + 0x58) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar8 + (int)uVar7,&stack0x00000010,
                             *(undefined8 *)puVar2), lVar4 == 0)) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_01ab5704;
            *(float *)(lVar4 + uVar7 * 4 + 0x20) = fVar12 + fVar11 * (in_stack_00000010 - fVar12);
            if ((uVar9 & 0xffffffff) - 1 == uVar7) goto LAB_01ab56d0;
            lVar4 = *(long *)(unaff_x19 + 0x38);
            uVar7 = uVar7 + 1;
            if (lVar4 == 0) break;
          }
          goto LAB_01ab56cc;
        }
      }
      else {
        if (uVar8 <= uVar1) {
LAB_01ab5704:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        pfVar6 = (float *)(lVar5 + (long)(int)uVar1 * 4 + 0x20);
        fVar12 = *pfVar6;
        FUN_0132138c(lVar3,(long)(int)uVar1,&stack0x00000010,*(undefined8 *)OVREyeGaze_TypeInfo);
        fVar11 = in_stack_00000010;
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_01ab56cc;
        FUN_0132138c(*(long *)(unaff_x19 + 0x58),*(int *)(unaff_x19 + 0x60) + uVar8,&stack0x00000010
                     ,*(undefined8 *)puVar2);
        fVar10 = unaff_s8;
        if (unaff_s13 < unaff_s8) {
          fVar10 = unaff_s13;
        }
        if (unaff_s8 < 0.0) {
          fVar10 = 0.0;
        }
        *pfVar6 = fVar12 + fVar11 + fVar10 * (in_stack_00000010 - fVar11);
      }
LAB_01ab56d0:
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_01aebcb0(*(long *)(unaff_x19 + 0x38),0);
        return;
      }
    }
  }
LAB_01ab56cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


