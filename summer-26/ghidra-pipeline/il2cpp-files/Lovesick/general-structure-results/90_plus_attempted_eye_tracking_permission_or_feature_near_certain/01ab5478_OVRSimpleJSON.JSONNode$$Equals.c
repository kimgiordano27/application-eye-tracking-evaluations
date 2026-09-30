/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$Equals
ENTRY_POINT: 01ab5478
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void OVRSimpleJSON_JSONNode__Equals(long param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  float *pfVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *unaff_x21;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float unaff_s13;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (1 < *(int *)(param_1 + 0x18)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01ab56cc;
    lVar6 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(unaff_x19 + 0x20),0);
    puVar4 = 
    Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
    ;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x00000010,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                );
    uVar5 = uStack000000000000001c;
    fVar2 = fStack0000000000000018;
    fVar13 = fStack0000000000000014;
    fVar3 = fStack0000000000000010;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),1,&stack0x00000010,*(undefined8 *)puVar4);
    FUN_02698a98(fVar3,fVar13,fVar2,uVar5,fStack0000000000000010,fStack0000000000000014,
                 fStack0000000000000018,uStack000000000000001c,0);
    if (lVar6 == 0) goto LAB_01ab56cc;
    FUN_0269f994(lVar6,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x50);
  if (lVar6 != 0) {
    if (1 < *(int *)(lVar6 + 0x18)) {
      FUN_0132138c(lVar6,0,&stack0x00000010,*unaff_x21);
      fVar2 = fStack0000000000000018;
      fVar13 = fStack0000000000000014;
      fVar3 = fStack0000000000000010;
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01ab56cc;
      FUN_0132138c(*(long *)(unaff_x19 + 0x50),1,&stack0x00000010,*unaff_x21);
      fVar14 = unaff_s8;
      if (unaff_s13 < unaff_s8) {
        fVar14 = unaff_s13;
      }
      if (unaff_s8 < 0.0) {
        fVar14 = 0.0;
      }
      fVar13 = fVar13 + (fStack0000000000000014 - fVar13) * fVar14;
      FUN_01ab51f4(CONCAT44(fVar13,fVar3 + (fStack0000000000000010 - fVar3) * fVar14),fVar13,
                   fVar2 + fVar14 * (fStack0000000000000018 - fVar2));
    }
    puVar4 = OVREyeGaze_TypeInfo;
    lVar6 = *(long *)(unaff_x19 + 0x38);
    if (lVar6 == 0) {
      return;
    }
    lVar7 = *(long *)(unaff_x19 + 0x58);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < 1) {
        return;
      }
      lVar8 = *(long *)(lVar6 + 0x58);
      if (lVar8 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x60);
        uVar12 = *(ulong *)(lVar8 + 0x18);
        uVar11 = (uint)uVar12;
        if (uVar1 == 0xffffffff) {
          if (0 < (int)uVar11) {
            fVar3 = unaff_s8;
            if (unaff_s13 < unaff_s8) {
              fVar3 = unaff_s13;
            }
            uVar10 = 0;
            if (unaff_s8 < 0.0) {
              fVar3 = 0.0;
            }
            while (*(long *)(unaff_x19 + 0x58) != 0) {
              lVar6 = *(long *)(lVar6 + 0x58);
              FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar10 & 0xffffffff,&stack0x00000010,
                           *(undefined8 *)puVar4);
              fVar13 = fStack0000000000000010;
              if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                 (FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar11 + (int)uVar10,&stack0x00000010,
                               *(undefined8 *)puVar4), lVar6 == 0)) break;
              if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_01ab5704;
              *(float *)(lVar6 + uVar10 * 4 + 0x20) =
                   fVar13 + fVar3 * (fStack0000000000000010 - fVar13);
              if ((uVar12 & 0xffffffff) - 1 == uVar10) goto LAB_01ab56d0;
              lVar6 = *(long *)(unaff_x19 + 0x38);
              uVar10 = uVar10 + 1;
              if (lVar6 == 0) break;
            }
            goto LAB_01ab56cc;
          }
        }
        else {
          if (uVar11 <= uVar1) {
LAB_01ab5704:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          pfVar9 = (float *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
          fVar13 = *pfVar9;
          FUN_0132138c(lVar7,(long)(int)uVar1,&stack0x00000010,*(undefined8 *)OVREyeGaze_TypeInfo);
          fVar3 = fStack0000000000000010;
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_01ab56cc;
          FUN_0132138c(*(long *)(unaff_x19 + 0x58),*(int *)(unaff_x19 + 0x60) + uVar11,
                       &stack0x00000010,*(undefined8 *)puVar4);
          fVar2 = unaff_s8;
          if (unaff_s13 < unaff_s8) {
            fVar2 = unaff_s13;
          }
          if (unaff_s8 < 0.0) {
            fVar2 = 0.0;
          }
          *pfVar9 = fVar13 + fVar3 + fVar2 * (fStack0000000000000010 - fVar3);
        }
LAB_01ab56d0:
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_01aebcb0(*(long *)(unaff_x19 + 0x38),0);
          return;
        }
      }
    }
  }
LAB_01ab56cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


