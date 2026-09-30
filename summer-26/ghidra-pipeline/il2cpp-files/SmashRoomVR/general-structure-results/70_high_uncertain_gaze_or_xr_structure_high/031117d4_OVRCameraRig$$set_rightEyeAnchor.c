/*
FUNCTION_NAME: OVRCameraRig$$set_rightEyeAnchor
ENTRY_POINT: 031117d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void OVRCameraRig__set_rightEyeAnchor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  float fVar8;
  float fVar9;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = param_2._8_8_;
  uStack0000000000000030 = param_2._0_8_;
  uStack0000000000000028 = param_1._8_8_;
  uStack0000000000000020 = param_1._0_8_;
  FUN_02d0a548(param_3,*unaff_x21);
  lVar2 = FUN_0391c27c();
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((lVar3 != 0) && (lVar2 != 0)) {
    fVar8 = *(float *)(unaff_x19 + 0x60);
    fVar9 = fStack0000000000000010 * fVar8 + (float)((ulong)*(undefined8 *)(lVar3 + 0x1a0) >> 0x20);
    FUN_03928dd4(CONCAT44(fVar9,in_stack_00000008._4_4_ * fVar8 +
                                (float)*(undefined8 *)(lVar3 + 0x1a0)),fVar9,
                 fStack0000000000000014 * fVar8 + *(float *)(lVar3 + 0x1a8),lVar2,0);
    lVar2 = FUN_0391c27c();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if (lVar3 != 0) {
      uStack0000000000000028 = *(undefined8 *)(lVar3 + 0x1b4);
      uStack0000000000000020 = *(undefined8 *)(lVar3 + 0x1ac);
      uStack0000000000000038 = *(undefined8 *)(lVar3 + 0x1c4);
      uStack0000000000000030 = *(undefined8 *)(lVar3 + 0x1bc);
      FUN_02d0a548(&stack0x00000020,*unaff_x21);
      if (DAT_03fed25b == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed25b = '\x01';
      }
      lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_03914800(in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                   *(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                   *(undefined4 *)(lVar3 + 0x20),0);
      if (lVar2 != 0) {
        FUN_03928f54(lVar2,0);
        if ((*(long *)(unaff_x19 + 0x20) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
          iVar1 = *(int *)(*(long *)(unaff_x19 + 0x20) + 0x84);
          lVar2 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0);
          if (lVar2 != 0) {
            FUN_039006a4(*(undefined4 *)(&DAT_00b92098 + (ulong)(iVar1 == 2) * 4),lVar2,
                         *(undefined4 *)(unaff_x19 + 100),0);
            if ((*(long *)(unaff_x19 + 0x28) != 0) &&
               (lVar2 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
              FUN_039006a4(0x3f800000,lVar2,*(undefined4 *)(unaff_x19 + 0x68),0);
              if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                 (lVar2 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
                FUN_039006a4(0x3f800000,lVar2,*(undefined4 *)(unaff_x19 + 0x6c),0);
                if (*(long *)(unaff_x19 + 0x28) != 0) {
                  lVar2 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0);
                  if (iVar1 == 2) {
                    puVar4 = (undefined4 *)(unaff_x19 + 0x40);
                    puVar5 = (undefined4 *)(unaff_x19 + 0x44);
                    puVar6 = (undefined4 *)(unaff_x19 + 0x48);
                    puVar7 = (undefined4 *)(unaff_x19 + 0x4c);
                  }
                  else {
                    puVar4 = (undefined4 *)(unaff_x19 + 0x30);
                    puVar5 = (undefined4 *)(unaff_x19 + 0x34);
                    puVar6 = (undefined4 *)(unaff_x19 + 0x38);
                    puVar7 = (undefined4 *)(unaff_x19 + 0x3c);
                  }
                  if (lVar2 != 0) {
                    thunk_FUN_038fff54(*puVar4,*puVar5,*puVar6,*puVar7,lVar2,
                                       *(undefined4 *)(unaff_x19 + 0x70),0);
                    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
                       (lVar2 = FUN_038fe800(*(long *)(unaff_x19 + 0x28),0), lVar2 != 0)) {
                      thunk_FUN_038fff54(*(undefined4 *)(unaff_x19 + 0x50),
                                         *(undefined4 *)(unaff_x19 + 0x54),
                                         *(undefined4 *)(unaff_x19 + 0x58),
                                         *(undefined4 *)(unaff_x19 + 0x5c),lVar2,
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
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


