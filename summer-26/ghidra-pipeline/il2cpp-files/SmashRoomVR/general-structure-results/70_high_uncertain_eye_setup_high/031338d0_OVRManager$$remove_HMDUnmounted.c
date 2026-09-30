/*
FUNCTION_NAME: OVRManager$$remove_HMDUnmounted
ENTRY_POINT: 031338d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_HMDUnmounted(float param_1,float param_2,float param_3)

{
  void *__dest;
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  float fVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float unaff_s9;
  float fVar17;
  float unaff_s11;
  undefined4 uVar18;
  float unaff_s12;
  undefined4 uVar19;
  float unaff_s13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  uint in_stack_00000020;
  undefined8 in_stack_00000028;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  
  fVar14 = unaff_s11 * param_2 +
           in_stack_00000018._4_4_ * param_3 + in_stack_00000028._4_4_ * param_1;
  fStack00000000000000e4 = param_3;
  fStack00000000000000e8 = param_1;
  fStack00000000000000ec = param_2;
  if (DAT_03fed263 == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__);
    DAT_03fed263 = '\x01';
  }
  fVar8 = ABS(fVar14);
  uVar11 = 0;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = **(float **)
            (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_6__ + 0xb8) *
          8.0;
  fVar15 = fVar8 * DAT_00b55490;
  if (fVar8 * DAT_00b55490 <= fVar9) {
    fVar15 = fVar9;
  }
  uVar10 = (ulong)(uint)ABS(0.0 - fVar14);
  if (fVar15 <= ABS(0.0 - fVar14)) {
    uVar11 = (ulong)(uint)(in_stack_00000018._4_4_ * unaff_s9);
    fVar8 = unaff_s11 * unaff_s12 +
            in_stack_00000018._4_4_ * unaff_s9 + in_stack_00000028._4_4_ * unaff_s13;
    uVar10 = (ulong)(uint)fVar8;
    uVar5 = (ulong)in_stack_00000020;
    if (0.0 < ((fStack000000000000000c * unaff_s11 +
               fStack0000000000000008 * in_stack_00000018._4_4_ +
               in_stack_00000000._4_4_ * in_stack_00000028._4_4_) - fVar8) / fVar14) {
      uVar5 = FUN_038f7ac0(&stack0x000000d8,0);
      unaff_d14 = uVar10;
      unaff_d15 = uVar11;
    }
  }
  else {
    uVar5 = (ulong)in_stack_00000020;
  }
  fVar14 = (float)uVar10;
  fVar8 = (float)uVar11;
  if (*(long *)(unaff_x21 + 0x70) != 0) {
    lVar2 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
    fVar15 = *(float *)(unaff_x23 + 0x28);
    fVar9 = *(float *)(unaff_x23 + 0x2c);
    fVar17 = *(float *)(unaff_x23 + 0x30);
    lVar3 = FUN_0391c27c();
    if ((lVar3 != 0) && (fVar4 = (float)FUN_039291ac(lVar3,0), lVar2 != 0)) {
      uVar10 = (ulong)(uint)(fVar17 - fVar8);
      uVar11 = (ulong)(uint)(fVar9 - fVar14);
      FUN_03928dd4(fVar15 - fVar4,uVar11,uVar10,lVar2,0);
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar2 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
        uVar16 = *(undefined4 *)(unaff_x23 + 0x28);
        uVar18 = *(undefined4 *)(unaff_x23 + 0x2c);
        uVar19 = *(undefined4 *)(unaff_x23 + 0x30);
        lVar3 = FUN_0391c27c();
        if ((lVar3 != 0) && (uVar6 = FUN_03929130(lVar3,0), lVar2 != 0)) {
          thunk_FUN_0392a110(uVar16,uVar18,uVar19,uVar6,uVar11,uVar10,lVar2,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            uVar11 = unaff_d14;
            uVar10 = unaff_d15;
            uVar16 = FUN_038f13a0(uVar5,unaff_d14,unaff_d15,*(long *)(unaff_x21 + 0x70),0);
            fVar8 = (float)uVar10;
            *(undefined4 *)(unaff_x19 + 0x104) = uVar16;
            fVar14 = (float)uVar11;
            *(float *)(unaff_x19 + 0x108) = fVar14;
            if (*(long *)(unaff_x21 + 0x38) != 0) {
              FUN_03b278e4();
              FUN_03133434(&stack0x00000080,*(undefined8 *)(unaff_x21 + 0x80));
              lVar2 = *(long *)(unaff_x23 + 0x10);
              memcpy(&stack0x00000030,&stack0x00000080,0x50);
              if (lVar2 != 0) {
                __dest = (void *)(lVar2 + 0x50);
                memcpy(__dest,&stack0x00000030,0x50);
                thunk_FUN_01b4f09c(__dest,0);
                lVar2 = *(long *)(unaff_x21 + 0x80);
                if (lVar2 != 0) {
                  iVar1 = *(int *)(lVar2 + 0x18);
                  *(undefined4 *)(lVar2 + 0x18) = 0;
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  if (0 < iVar1) {
                    FUN_03062488(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
                  }
                  if (*(long *)(unaff_x21 + 0x70) != 0) {
                    lVar2 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                    lVar3 = FUN_0391c27c();
                    if (lVar3 != 0) {
                      fVar17 = (float)FUN_03928d34(lVar3,0);
                      fVar15 = fVar8;
                      fVar9 = fVar14;
                      lVar3 = FUN_0391c27c();
                      if ((lVar3 != 0) && (fVar4 = (float)FUN_039291ac(lVar3,0), lVar2 != 0)) {
                        uVar10 = (ulong)(uint)(fVar8 - fVar15);
                        uVar11 = (ulong)(uint)(fVar14 - fVar9);
                        FUN_03928dd4(fVar17 - fVar4,uVar11,uVar10,lVar2,0);
                        if (*(long *)(unaff_x21 + 0x70) != 0) {
                          lVar2 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                          lVar3 = FUN_0391c27c();
                          if (lVar3 != 0) {
                            uVar6 = FUN_03928d34(lVar3,0);
                            uVar12 = uVar11;
                            uVar13 = uVar10;
                            lVar3 = FUN_0391c27c();
                            if ((lVar3 != 0) && (uVar7 = FUN_03929130(lVar3,0), lVar2 != 0)) {
                              thunk_FUN_0392a110(uVar6,uVar11,uVar10,uVar7,uVar12,uVar13,lVar2,0);
                              if (*(long *)(unaff_x21 + 0x70) != 0) {
                                fVar14 = (float)FUN_038f13a0(uVar5,unaff_d14,unaff_d15,
                                                             *(long *)(unaff_x21 + 0x70),0);
                                *(float *)(unaff_x19 + 0x104) = fVar14;
                                *(float *)(unaff_x19 + 0x108) = (float)unaff_d14;
                                if (*unaff_x20 == '\0') {
                                  uVar6 = CONCAT44((float)unaff_d14 -
                                                   (float)((ulong)in_stack_00000010 >> 0x20),
                                                   fVar14 - (float)in_stack_00000010);
                                }
                                else {
                                  if (DAT_03fed2da == '\0') {
                                    thunk_FUN_01ad9084(
                                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                                  );
                                    DAT_03fed2da = '\x01';
                                  }
                                  uVar6 = **(undefined8 **)
                                            (*(long *)
                                              Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                            + 0xb8);
                                }
                                *(undefined8 *)(unaff_x25 + 8) = uVar6;
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
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


