/*
FUNCTION_NAME: OVRCameraRig$$get_rightEyeCamera
ENTRY_POINT: 03111780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void OVRCameraRig__get_rightEyeCamera(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long unaff_x19;
  float fVar10;
  float fVar11;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  char cStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000028 = param_2._8_8_;
  _cStack0000000000000020 = param_2._0_8_;
  uStack0000000000000038 = param_1._8_8_;
  uStack0000000000000030 = param_1._0_8_;
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) {
    cStack0000000000000020 = param_2[0];
    if (cStack0000000000000020 == '\0') {
      FUN_038fe3fc(lVar3,0,0);
      return;
    }
    uVar4 = FUN_038fe3c0(lVar3,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_031119f4;
      FUN_038fe3fc(*(long *)(unaff_x19 + 0x28),1,0);
    }
    puVar2 = StringLiteral_13930;
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 != 0) {
      uStack0000000000000028 = *(undefined8 *)(lVar3 + 0x1b4);
      _cStack0000000000000020 = *(undefined8 *)(lVar3 + 0x1ac);
      uStack0000000000000038 = *(undefined8 *)(lVar3 + 0x1c4);
      uStack0000000000000030 = *(undefined8 *)(lVar3 + 0x1bc);
      FUN_02d0a548(&stack0x00000020,*(undefined8 *)StringLiteral_13930);
      lVar3 = FUN_0391c27c();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((lVar5 != 0) && (lVar3 != 0)) {
        fVar10 = *(float *)(unaff_x19 + 0x60);
        fVar11 = fStack0000000000000010 * fVar10 +
                 (float)((ulong)*(undefined8 *)(lVar5 + 0x1a0) >> 0x20);
        FUN_03928dd4(CONCAT44(fVar11,in_stack_00000008._4_4_ * fVar10 +
                                     (float)*(undefined8 *)(lVar5 + 0x1a0)),fVar11,
                     fStack0000000000000014 * fVar10 + *(float *)(lVar5 + 0x1a8),lVar3,0);
        lVar3 = FUN_0391c27c();
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if (lVar5 != 0) {
          uStack0000000000000028 = *(undefined8 *)(lVar5 + 0x1b4);
          _cStack0000000000000020 = *(undefined8 *)(lVar5 + 0x1ac);
          uStack0000000000000038 = *(undefined8 *)(lVar5 + 0x1c4);
          uStack0000000000000030 = *(undefined8 *)(lVar5 + 0x1bc);
          FUN_02d0a548(&stack0x00000020,*(undefined8 *)puVar2);
          if (DAT_03fed25b == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed25b = '\x01';
          }
          lVar5 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_03914800(in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                       *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                       *(undefined4 *)(lVar5 + 0x20),0);
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
                        puVar6 = (undefined4 *)(unaff_x19 + 0x40);
                        puVar7 = (undefined4 *)(unaff_x19 + 0x44);
                        puVar8 = (undefined4 *)(unaff_x19 + 0x48);
                        puVar9 = (undefined4 *)(unaff_x19 + 0x4c);
                      }
                      else {
                        puVar6 = (undefined4 *)(unaff_x19 + 0x30);
                        puVar7 = (undefined4 *)(unaff_x19 + 0x34);
                        puVar8 = (undefined4 *)(unaff_x19 + 0x38);
                        puVar9 = (undefined4 *)(unaff_x19 + 0x3c);
                      }
                      if (lVar3 != 0) {
                        thunk_FUN_038fff54(*puVar6,*puVar7,*puVar8,*puVar9,lVar3,
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
  }
LAB_031119f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


