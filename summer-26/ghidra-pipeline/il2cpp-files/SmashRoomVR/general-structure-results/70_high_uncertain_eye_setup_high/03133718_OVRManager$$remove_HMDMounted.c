/*
FUNCTION_NAME: OVRManager$$remove_HMDMounted
ENTRY_POINT: 03133718
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDMounted(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  void *__dest;
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  undefined4 uVar25;
  undefined8 unaff_d9;
  uint unaff_s11;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  ulong uVar30;
  float fStack000000000000001c;
  ulong in_stack_00000020;
  uint in_stack_00000028;
  float fStack000000000000002c;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  
  if (param_4 != 0) {
    fVar6 = (float)FUN_039291ac(param_4,0);
    fVar10 = param_2;
    fVar23 = param_3;
    lVar3 = FUN_0391c27c();
    if (lVar3 != 0) {
      fVar7 = (float)FUN_03928d34(lVar3,0);
      fVar21 = fVar23;
      if (DAT_03fed25d == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25d = '\x01';
      }
      puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar15 = DAT_00b55370;
      fVar14 = param_3 * param_3;
      fVar8 = SQRT(fVar14 + fVar6 * fVar6 + param_2 * param_2);
      if (fVar8 <= DAT_00b55370) {
        if (*(char *)(unaff_x24 + 599) == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          *(undefined1 *)(unaff_x24 + 599) = 1;
        }
        pfVar5 = *(float **)(*unaff_x26 + 0xb8);
        fStack000000000000001c = *pfVar5;
        fStack000000000000002c = pfVar5[1];
        fVar8 = pfVar5[2];
      }
      else {
        fVar21 = -param_2;
        fStack000000000000001c = -fVar6 / fVar8;
        fVar14 = fVar21 / fVar8;
        fVar8 = -param_3 / fVar8;
        fStack000000000000002c = fVar14;
      }
      fVar6 = *(float *)(unaff_x23 + 0x28);
      fVar29 = *(float *)(unaff_x23 + 0x2c);
      fVar27 = *(float *)(unaff_x23 + 0x30);
      lVar3 = FUN_0391c27c();
      if (lVar3 != 0) {
        fVar9 = (float)FUN_039291ac(lVar3,0);
        fVar16 = fVar14;
        fVar22 = fVar21;
        lVar3 = FUN_0391c27c();
        if (lVar3 != 0) {
          fVar27 = fVar27 - fVar21;
          fVar29 = fVar29 - fVar14;
          fVar6 = fVar6 - fVar9;
          fVar21 = (float)FUN_039291ac(lVar3,0);
          fStack00000000000000d8 = fVar6;
          fStack00000000000000dc = fVar29;
          fStack00000000000000e0 = fVar27;
          if (DAT_03fed25d == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25d = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fStack00000000000000ec = SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar16 * fVar16);
          if (fStack00000000000000ec <= fVar15) {
            if (*(char *)(unaff_x24 + 599) == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              *(undefined1 *)(unaff_x24 + 599) = 1;
            }
            pfVar5 = *(float **)(*unaff_x26 + 0xb8);
            fStack00000000000000e4 = *pfVar5;
            fStack00000000000000e8 = pfVar5[1];
            fStack00000000000000ec = pfVar5[2];
          }
          else {
            fStack00000000000000e4 = fVar21 / fStack00000000000000ec;
            fStack00000000000000e8 = fVar16 / fStack00000000000000ec;
            fStack00000000000000ec = fVar22 / fStack00000000000000ec;
          }
          fVar21 = fVar8 * fStack00000000000000ec +
                   fStack000000000000001c * fStack00000000000000e4 +
                   fStack000000000000002c * fStack00000000000000e8;
          if (DAT_03fed263 == '\0') {
            thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
            DAT_03fed263 = '\x01';
          }
          fVar15 = ABS(fVar21);
          uVar18 = 0;
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          fVar16 = **(float **)
                     (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ +
                     0xb8) * 8.0;
          fVar14 = fVar15 * DAT_00b55490;
          if (fVar15 * DAT_00b55490 <= fVar16) {
            fVar14 = fVar16;
          }
          uVar17 = (ulong)(uint)ABS(0.0 - fVar21);
          uVar20 = (ulong)in_stack_00000028;
          uVar30 = in_stack_00000020 >> 0x20;
          if (fVar14 <= ABS(0.0 - fVar21)) {
            uVar18 = (ulong)(uint)(fStack000000000000001c * fVar6);
            fVar6 = fVar8 * fVar27 +
                    fStack000000000000001c * fVar6 + fStack000000000000002c * fVar29;
            uVar17 = (ulong)(uint)fVar6;
            uVar11 = (ulong)unaff_s11;
            if (0.0 < ((fVar23 * fVar8 +
                       fVar7 * fStack000000000000001c + fVar10 * fStack000000000000002c) - fVar6) /
                      fVar21) {
              uVar11 = FUN_038f7ac0(&stack0x000000d8,0);
              uVar20 = uVar17;
              uVar30 = uVar18;
            }
          }
          else {
            uVar11 = (ulong)unaff_s11;
          }
          fVar10 = (float)uVar17;
          fVar23 = (float)uVar18;
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
            fVar6 = *(float *)(unaff_x23 + 0x28);
            fVar21 = *(float *)(unaff_x23 + 0x2c);
            fVar7 = *(float *)(unaff_x23 + 0x30);
            lVar4 = FUN_0391c27c();
            if ((lVar4 != 0) && (fVar15 = (float)FUN_039291ac(lVar4,0), lVar3 != 0)) {
              uVar17 = (ulong)(uint)(fVar7 - fVar23);
              uVar18 = (ulong)(uint)(fVar21 - fVar10);
              FUN_03928dd4(fVar6 - fVar15,uVar18,uVar17,lVar3,0);
              if (*(long *)(unaff_x21 + 0x70) != 0) {
                lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                uVar25 = *(undefined4 *)(unaff_x23 + 0x28);
                uVar26 = *(undefined4 *)(unaff_x23 + 0x2c);
                uVar28 = *(undefined4 *)(unaff_x23 + 0x30);
                lVar4 = FUN_0391c27c();
                if ((lVar4 != 0) && (uVar12 = FUN_03929130(lVar4,0), lVar3 != 0)) {
                  thunk_FUN_0392a110(uVar25,uVar26,uVar28,uVar12,uVar18,uVar17,lVar3,0);
                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                    uVar18 = uVar20;
                    uVar17 = uVar30;
                    uVar25 = FUN_038f13a0(uVar11,uVar20,uVar30,*(long *)(unaff_x21 + 0x70),0);
                    fVar23 = (float)uVar17;
                    *(undefined4 *)(unaff_x19 + 0x104) = uVar25;
                    fVar10 = (float)uVar18;
                    *(float *)(unaff_x19 + 0x108) = fVar10;
                    if (*(long *)(unaff_x21 + 0x38) != 0) {
                      FUN_03b278e4();
                      FUN_03133434(&stack0x00000080,*(undefined8 *)(unaff_x21 + 0x80));
                      lVar3 = *(long *)(unaff_x23 + 0x10);
                      memcpy(&stack0x00000030,&stack0x00000080,0x50);
                      if (lVar3 != 0) {
                        __dest = (void *)(lVar3 + 0x50);
                        memcpy(__dest,&stack0x00000030,0x50);
                        thunk_FUN_01b4f09c(__dest,0);
                        lVar3 = *(long *)(unaff_x21 + 0x80);
                        if (lVar3 != 0) {
                          iVar1 = *(int *)(lVar3 + 0x18);
                          *(undefined4 *)(lVar3 + 0x18) = 0;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (0 < iVar1) {
                            FUN_03062488(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
                          }
                          if (*(long *)(unaff_x21 + 0x70) != 0) {
                            lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                            lVar4 = FUN_0391c27c();
                            if (lVar4 != 0) {
                              fVar7 = (float)FUN_03928d34(lVar4,0);
                              fVar6 = fVar23;
                              fVar21 = fVar10;
                              lVar4 = FUN_0391c27c();
                              if ((lVar4 != 0) &&
                                 (fVar15 = (float)FUN_039291ac(lVar4,0), lVar3 != 0)) {
                                uVar17 = (ulong)(uint)(fVar23 - fVar6);
                                uVar18 = (ulong)(uint)(fVar10 - fVar21);
                                FUN_03928dd4(fVar7 - fVar15,uVar18,uVar17,lVar3,0);
                                if (*(long *)(unaff_x21 + 0x70) != 0) {
                                  lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                                  lVar4 = FUN_0391c27c();
                                  if (lVar4 != 0) {
                                    uVar12 = FUN_03928d34(lVar4,0);
                                    uVar19 = uVar18;
                                    uVar24 = uVar17;
                                    lVar4 = FUN_0391c27c();
                                    if ((lVar4 != 0) && (uVar13 = FUN_03929130(lVar4,0), lVar3 != 0)
                                       ) {
                                      thunk_FUN_0392a110(uVar12,uVar18,uVar17,uVar13,uVar19,uVar24,
                                                         lVar3,0);
                                      if (*(long *)(unaff_x21 + 0x70) != 0) {
                                        fVar10 = (float)FUN_038f13a0(uVar11,uVar20,uVar30,
                                                                     *(long *)(unaff_x21 + 0x70),0);
                                        *(float *)(unaff_x19 + 0x104) = fVar10;
                                        *(float *)(unaff_x19 + 0x108) = (float)uVar20;
                                        if (*unaff_x20 == '\0') {
                                          uVar12 = CONCAT44((float)uVar20 -
                                                            (float)((ulong)unaff_d9 >> 0x20),
                                                            fVar10 - (float)unaff_d9);
                                        }
                                        else {
                                          if (DAT_03fed2da == '\0') {
                                            thunk_FUN_01ad9084(
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                  );
                                            DAT_03fed2da = '\x01';
                                          }
                                          uVar12 = **(undefined8 **)
                                                     (*(long *)
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                  + 0xb8);
                                        }
                                        *(undefined8 *)(unaff_x25 + 8) = uVar12;
                                        *(undefined4 *)(unaff_x19 + 0x148) = 0;
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


