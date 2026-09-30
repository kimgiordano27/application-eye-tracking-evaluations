/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 031337f4
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


void OVRManager__add_HMDUnmounted(undefined1 param_1 [16],float param_2,float param_3)

{
  void *__dest;
  int iVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  undefined1 in_w8;
  float *pfVar5;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float unaff_s10;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  ulong uVar24;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
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
  
  *(undefined1 *)(unaff_x24 + 599) = in_w8;
  pfVar5 = *(float **)(*unaff_x26 + 0xb8);
  fStack000000000000001c = *pfVar5;
  fStack000000000000002c = pfVar5[1];
  fVar19 = pfVar5[2];
  fVar18 = *(float *)(unaff_x23 + 0x28);
  fVar23 = *(float *)(unaff_x23 + 0x2c);
  fVar21 = *(float *)(unaff_x23 + 0x30);
  lVar3 = FUN_0391c27c();
  if (lVar3 != 0) {
    fVar6 = (float)FUN_039291ac(lVar3,0);
    fVar16 = param_2;
    fVar9 = param_3;
    lVar3 = FUN_0391c27c();
    if (lVar3 != 0) {
      fVar21 = fVar21 - param_3;
      fVar23 = fVar23 - param_2;
      fVar18 = fVar18 - fVar6;
      fVar6 = (float)FUN_039291ac(lVar3,0);
      fStack00000000000000d8 = fVar18;
      fStack00000000000000dc = fVar23;
      fStack00000000000000e0 = fVar21;
      if (*(char *)(unaff_x27 + 0x25d) == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        *(undefined1 *)(unaff_x27 + 0x25d) = 1;
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar2 = fStack000000000000001c;
      fStack00000000000000ec = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar16 * fVar16);
      if (fStack00000000000000ec <= unaff_s10) {
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
        fStack00000000000000e4 = fVar6 / fStack00000000000000ec;
        fStack00000000000000e8 = fVar16 / fStack00000000000000ec;
        fStack00000000000000ec = fVar9 / fStack00000000000000ec;
      }
      fVar16 = fVar19 * fStack00000000000000ec +
               fVar2 * fStack00000000000000e4 + fStack000000000000002c * fStack00000000000000e8;
      if (DAT_03fed263 == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
        DAT_03fed263 = '\x01';
      }
      fVar9 = ABS(fVar16);
      uVar12 = 0;
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      fVar10 = **(float **)
                 (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8
                 ) * 8.0;
      fVar6 = fVar9 * DAT_00b55490;
      if (fVar9 * DAT_00b55490 <= fVar10) {
        fVar6 = fVar10;
      }
      uVar11 = (ulong)(uint)ABS(0.0 - fVar16);
      uVar14 = (ulong)in_stack_00000028;
      uVar24 = in_stack_00000020 >> 0x20;
      if (fVar6 <= ABS(0.0 - fVar16)) {
        uVar12 = (ulong)(uint)(fVar2 * fVar18);
        fVar18 = fVar19 * fVar21 + fVar2 * fVar18 + fStack000000000000002c * fVar23;
        uVar11 = (ulong)(uint)fVar18;
        in_stack_00000020 = in_stack_00000020 & 0xffffffff;
        if (0.0 < ((fStack000000000000000c * fVar19 +
                   fStack0000000000000008 * fVar2 + in_stack_00000000._4_4_ * fStack000000000000002c
                   ) - fVar18) / fVar16) {
          in_stack_00000020 = FUN_038f7ac0(&stack0x000000d8,0);
          uVar14 = uVar11;
          uVar24 = uVar12;
        }
      }
      else {
        in_stack_00000020 = in_stack_00000020 & 0xffffffff;
      }
      fVar18 = (float)uVar11;
      fVar19 = (float)uVar12;
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
        fVar21 = *(float *)(unaff_x23 + 0x28);
        fVar23 = *(float *)(unaff_x23 + 0x2c);
        fVar16 = *(float *)(unaff_x23 + 0x30);
        lVar4 = FUN_0391c27c();
        if ((lVar4 != 0) && (fVar9 = (float)FUN_039291ac(lVar4,0), lVar3 != 0)) {
          uVar11 = (ulong)(uint)(fVar16 - fVar19);
          uVar12 = (ulong)(uint)(fVar23 - fVar18);
          FUN_03928dd4(fVar21 - fVar9,uVar12,uVar11,lVar3,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
            uVar17 = *(undefined4 *)(unaff_x23 + 0x28);
            uVar20 = *(undefined4 *)(unaff_x23 + 0x2c);
            uVar22 = *(undefined4 *)(unaff_x23 + 0x30);
            lVar4 = FUN_0391c27c();
            if ((lVar4 != 0) && (uVar7 = FUN_03929130(lVar4,0), lVar3 != 0)) {
              thunk_FUN_0392a110(uVar17,uVar20,uVar22,uVar7,uVar12,uVar11,lVar3,0);
              if (*(long *)(unaff_x21 + 0x70) != 0) {
                uVar12 = uVar14;
                uVar11 = uVar24;
                uVar17 = FUN_038f13a0(in_stack_00000020,uVar14,uVar24,*(long *)(unaff_x21 + 0x70),0)
                ;
                fVar19 = (float)uVar11;
                *(undefined4 *)(unaff_x19 + 0x104) = uVar17;
                fVar18 = (float)uVar12;
                *(float *)(unaff_x19 + 0x108) = fVar18;
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
                          fVar16 = (float)FUN_03928d34(lVar4,0);
                          fVar21 = fVar19;
                          fVar23 = fVar18;
                          lVar4 = FUN_0391c27c();
                          if ((lVar4 != 0) && (fVar9 = (float)FUN_039291ac(lVar4,0), lVar3 != 0)) {
                            uVar11 = (ulong)(uint)(fVar19 - fVar21);
                            uVar12 = (ulong)(uint)(fVar18 - fVar23);
                            FUN_03928dd4(fVar16 - fVar9,uVar12,uVar11,lVar3,0);
                            if (*(long *)(unaff_x21 + 0x70) != 0) {
                              lVar3 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                              lVar4 = FUN_0391c27c();
                              if (lVar4 != 0) {
                                uVar7 = FUN_03928d34(lVar4,0);
                                uVar13 = uVar12;
                                uVar15 = uVar11;
                                lVar4 = FUN_0391c27c();
                                if ((lVar4 != 0) && (uVar8 = FUN_03929130(lVar4,0), lVar3 != 0)) {
                                  thunk_FUN_0392a110(uVar7,uVar12,uVar11,uVar8,uVar13,uVar15,lVar3,0
                                                    );
                                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                                    fVar18 = (float)FUN_038f13a0(in_stack_00000020,uVar14,uVar24,
                                                                 *(long *)(unaff_x21 + 0x70),0);
                                    *(float *)(unaff_x19 + 0x104) = fVar18;
                                    *(float *)(unaff_x19 + 0x108) = (float)uVar14;
                                    if (*unaff_x20 == '\0') {
                                      uVar7 = CONCAT44((float)uVar14 -
                                                       (float)((ulong)in_stack_00000010 >> 0x20),
                                                       fVar18 - (float)in_stack_00000010);
                                    }
                                    else {
                                      if (DAT_03fed2da == '\0') {
                                        thunk_FUN_01ad9084(
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                  );
                                        DAT_03fed2da = '\x01';
                                      }
                                      uVar7 = **(undefined8 **)
                                                (*(long *)
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                + 0xb8);
                                    }
                                    *(undefined8 *)(unaff_x25 + 8) = uVar7;
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
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


