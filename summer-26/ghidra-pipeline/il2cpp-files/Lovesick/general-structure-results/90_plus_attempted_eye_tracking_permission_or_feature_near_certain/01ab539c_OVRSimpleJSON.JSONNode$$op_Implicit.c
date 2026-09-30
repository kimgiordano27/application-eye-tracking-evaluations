/*
FUNCTION_NAME: OVRSimpleJSON.JSONNode$$op_Implicit
ENTRY_POINT: 01ab539c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void OVRSimpleJSON_JSONNode__op_Implicit(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  int in_w8;
  long lVar9;
  long unaff_x19;
  float *pfVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float fVar16;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  if (ABS(unaff_s9 - unaff_s8) < DAT_028aa298) {
    return;
  }
  *(float *)(unaff_x19 + 0x2c) = unaff_s8;
  puVar4 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
  if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01ab56cc;
  fVar16 = 1.0;
  if (1 < *(int *)(*(long *)(unaff_x19 + 0x40) + 0x18)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01ab56cc;
    lVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),0,&stack0x00000010,*(undefined8 *)puVar4);
    fVar2 = fStack0000000000000018;
    fVar14 = fStack0000000000000014;
    fVar3 = fStack0000000000000010;
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x40),1,&stack0x00000010,*(undefined8 *)puVar4);
    fVar15 = unaff_s8;
    if (1.0 < unaff_s8) {
      fVar15 = fVar16;
    }
    if (unaff_s8 < 0.0) {
      fVar15 = 0.0;
    }
    if (lVar7 == 0) goto LAB_01ab56cc;
    fVar14 = fVar14 + (fStack0000000000000014 - fVar14) * fVar15;
    FUN_0269f750(CONCAT44(fVar14,fVar3 + (fStack0000000000000010 - fVar3) * fVar15),fVar14,
                 fVar2 + fVar15 * (fStack0000000000000018 - fVar2),lVar7,0);
  }
  if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01ab56cc;
  if (1 < *(int *)(*(long *)(unaff_x19 + 0x48) + 0x18)) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01ab56cc;
    lVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (*(long *)(unaff_x19 + 0x20),0);
    puVar5 = 
    Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
    ;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),0,&stack0x00000010,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
                );
    uVar6 = uStack000000000000001c;
    fVar2 = fStack0000000000000018;
    fVar14 = fStack0000000000000014;
    fVar3 = fStack0000000000000010;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01ab56cc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x48),1,&stack0x00000010,*(undefined8 *)puVar5);
    FUN_02698a98(fVar3,fVar14,fVar2,uVar6,fStack0000000000000010,fStack0000000000000014,
                 fStack0000000000000018,uStack000000000000001c,0);
    if (lVar7 == 0) goto LAB_01ab56cc;
    FUN_0269f994(lVar7,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x50);
  if (lVar7 != 0) {
    if (1 < *(int *)(lVar7 + 0x18)) {
      FUN_0132138c(lVar7,0,&stack0x00000010,*(undefined8 *)puVar4);
      fVar2 = fStack0000000000000018;
      fVar14 = fStack0000000000000014;
      fVar3 = fStack0000000000000010;
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01ab56cc;
      FUN_0132138c(*(long *)(unaff_x19 + 0x50),1,&stack0x00000010,*(undefined8 *)puVar4);
      fVar15 = unaff_s8;
      if (1.0 < unaff_s8) {
        fVar15 = fVar16;
      }
      if (unaff_s8 < 0.0) {
        fVar15 = 0.0;
      }
      fVar14 = fVar14 + (fStack0000000000000014 - fVar14) * fVar15;
      FUN_01ab51f4(CONCAT44(fVar14,fVar3 + (fStack0000000000000010 - fVar3) * fVar15),fVar14,
                   fVar2 + fVar15 * (fStack0000000000000018 - fVar2));
    }
    puVar4 = OVREyeGaze_TypeInfo;
    lVar7 = *(long *)(unaff_x19 + 0x38);
    if (lVar7 == 0) {
      return;
    }
    lVar8 = *(long *)(unaff_x19 + 0x58);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) < 1) {
        return;
      }
      lVar9 = *(long *)(lVar7 + 0x58);
      if (lVar9 != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x60);
        uVar13 = *(ulong *)(lVar9 + 0x18);
        uVar12 = (uint)uVar13;
        if (uVar1 == 0xffffffff) {
          if (0 < (int)uVar12) {
            fVar3 = unaff_s8;
            if (1.0 < unaff_s8) {
              fVar3 = fVar16;
            }
            uVar11 = 0;
            if (unaff_s8 < 0.0) {
              fVar3 = 0.0;
            }
            while (*(long *)(unaff_x19 + 0x58) != 0) {
              lVar7 = *(long *)(lVar7 + 0x58);
              FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar11 & 0xffffffff,&stack0x00000010,
                           *(undefined8 *)puVar4);
              fVar16 = fStack0000000000000010;
              if ((*(long *)(unaff_x19 + 0x58) == 0) ||
                 (FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar12 + (int)uVar11,&stack0x00000010,
                               *(undefined8 *)puVar4), lVar7 == 0)) break;
              if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01ab5704;
              *(float *)(lVar7 + uVar11 * 4 + 0x20) =
                   fVar16 + fVar3 * (fStack0000000000000010 - fVar16);
              if ((uVar13 & 0xffffffff) - 1 == uVar11) goto LAB_01ab56d0;
              lVar7 = *(long *)(unaff_x19 + 0x38);
              uVar11 = uVar11 + 1;
              if (lVar7 == 0) break;
            }
            goto LAB_01ab56cc;
          }
        }
        else {
          if (uVar12 <= uVar1) {
LAB_01ab5704:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          pfVar10 = (float *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
          fVar14 = *pfVar10;
          FUN_0132138c(lVar8,(long)(int)uVar1,&stack0x00000010,*(undefined8 *)OVREyeGaze_TypeInfo);
          fVar3 = fStack0000000000000010;
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_01ab56cc;
          FUN_0132138c(*(long *)(unaff_x19 + 0x58),*(int *)(unaff_x19 + 0x60) + uVar12,
                       &stack0x00000010,*(undefined8 *)puVar4);
          fVar2 = unaff_s8;
          if (1.0 < unaff_s8) {
            fVar2 = fVar16;
          }
          if (unaff_s8 < 0.0) {
            fVar2 = 0.0;
          }
          *pfVar10 = fVar14 + fVar3 + fVar2 * (fStack0000000000000010 - fVar3);
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


