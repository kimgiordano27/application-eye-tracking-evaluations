/*
FUNCTION_NAME: OVRCameraRig$$get_leftEyeAnchor
ENTRY_POINT: 031117ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void OVRCameraRig__get_leftEyeAnchor(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_038fe3fc(param_1,param_2,0);
  puVar2 = StringLiteral_13930;
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if (lVar3 != 0) {
    in_stack_00000028 = *(undefined8 *)(lVar3 + 0x1b4);
    in_stack_00000020 = *(undefined8 *)(lVar3 + 0x1ac);
    in_stack_00000038 = *(undefined8 *)(lVar3 + 0x1c4);
    in_stack_00000030 = *(undefined8 *)(lVar3 + 0x1bc);
    FUN_02d0a548(&stack0x00000020,*(undefined8 *)StringLiteral_13930);
    lVar3 = FUN_0391c27c();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((lVar4 != 0) && (lVar3 != 0)) {
      fVar9 = *(float *)(unaff_x19 + 0x60);
      fVar10 = fStack0000000000000010 * fVar9 +
               (float)((ulong)*(undefined8 *)(lVar4 + 0x1a0) >> 0x20);
      FUN_03928dd4(CONCAT44(fVar10,in_stack_00000008._4_4_ * fVar9 +
                                   (float)*(undefined8 *)(lVar4 + 0x1a0)),fVar10,
                   fStack0000000000000014 * fVar9 + *(float *)(lVar4 + 0x1a8),lVar3,0);
      lVar3 = FUN_0391c27c();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if (lVar4 != 0) {
        in_stack_00000028 = *(undefined8 *)(lVar4 + 0x1b4);
        in_stack_00000020 = *(undefined8 *)(lVar4 + 0x1ac);
        in_stack_00000038 = *(undefined8 *)(lVar4 + 0x1c4);
        in_stack_00000030 = *(undefined8 *)(lVar4 + 0x1bc);
        FUN_02d0a548(&stack0x00000020,*(undefined8 *)puVar2);
        if (DAT_03fed25b == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed25b = '\x01';
        }
        lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_03914800(in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                     *(undefined4 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0x1c),
                     *(undefined4 *)(lVar4 + 0x20),0);
        if (lVar3 != 0) {
          FUN_03928f54(lVar3,0);
          if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
            iVar1 = *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84);
            lVar3 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0);
            if (lVar3 != 0) {
              FUN_039006a4(*(undefined4 *)(&DAT_00b92098 + (ulong)(iVar1 == 2) * 4),lVar3,
                           *(undefined4 *)(unaff_x19 + 100),0);
              if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                 (lVar3 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
                FUN_039006a4(0x3f800000,lVar3,*(undefined4 *)(unaff_x19 + 0x68),0);
                if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                   (lVar3 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
                  FUN_039006a4(0x3f800000,lVar3,*(undefined4 *)(unaff_x19 + 0x6c),0);
                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    lVar3 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0);
                    if (iVar1 == 2) {
                      puVar5 = (undefined4 *)(unaff_x19 + 0x40);
                      puVar6 = (undefined4 *)(unaff_x19 + 0x44);
                      puVar7 = (undefined4 *)(unaff_x19 + 0x48);
                      puVar8 = (undefined4 *)(unaff_x19 + 0x4c);
                    }
                    else {
                      puVar5 = (undefined4 *)(unaff_x19 + 0x30);
                      puVar6 = (undefined4 *)(unaff_x19 + 0x34);
                      puVar7 = (undefined4 *)(unaff_x19 + 0x38);
                      puVar8 = (undefined4 *)(unaff_x19 + 0x3c);
                    }
                    if (lVar3 != 0) {
                      thunk_FUN_038fff54(*puVar5,*puVar6,*puVar7,*puVar8,lVar3,
                                         *(undefined4 *)(unaff_x19 + 0x70),0);
                      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                         (lVar3 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0), lVar3 != 0)) {
                        thunk_FUN_038fff54(*(undefined4 *)(unaff_x19 + 0x50),
                                           *(undefined4 *)(unaff_x19 + 0x54),
                                           *(undefined4 *)(unaff_x19 + 0x58),
                                           *(undefined4 *)(unaff_x19 + 0x5c),lVar3,
                                           *(undefined4 *)(unaff_x19 + 0x74),0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


