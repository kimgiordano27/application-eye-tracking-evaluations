/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 031339ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusAcquired
               (float param_1,float param_2,undefined8 param_3,float param_4,float param_5)

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
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  float unaff_s8;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float unaff_s10;
  float fVar17;
  float unaff_s11;
  undefined4 uVar18;
  float unaff_s12;
  undefined4 uVar19;
  float unaff_s13;
  ulong unaff_d14;
  undefined8 unaff_d15;
  undefined8 in_stack_00000010;
  uint in_stack_00000020;
  ulong uVar9;
  
  fVar8 = unaff_s11 * unaff_s12 + (float)param_3 + param_4 * unaff_s13;
  uVar9 = (ulong)(uint)fVar8;
  uVar5 = (ulong)in_stack_00000020;
  if (0.0 < ((param_5 * unaff_s11 + param_1 * unaff_s10 + param_2 * param_4) - fVar8) / unaff_s8) {
    uVar5 = FUN_038f7ac0(&stack0x000000d8,0);
    unaff_d14 = uVar9;
    unaff_d15 = param_3;
  }
  fVar8 = (float)uVar9;
  fVar11 = (float)param_3;
  if (*(long *)(unaff_x21 + 0x70) != 0) {
    lVar2 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
    fVar14 = *(float *)(unaff_x23 + 0x28);
    fVar16 = *(float *)(unaff_x23 + 0x2c);
    fVar17 = *(float *)(unaff_x23 + 0x30);
    lVar3 = FUN_0391c27c();
    if ((lVar3 != 0) && (fVar4 = (float)FUN_039291ac(lVar3,0), lVar2 != 0)) {
      uVar12 = (ulong)(uint)(fVar17 - fVar11);
      uVar9 = (ulong)(uint)(fVar16 - fVar8);
      FUN_03928dd4(fVar14 - fVar4,uVar9,uVar12,lVar2,0);
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar2 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
        uVar15 = *(undefined4 *)(unaff_x23 + 0x28);
        uVar18 = *(undefined4 *)(unaff_x23 + 0x2c);
        uVar19 = *(undefined4 *)(unaff_x23 + 0x30);
        lVar3 = FUN_0391c27c();
        if ((lVar3 != 0) && (uVar6 = FUN_03929130(lVar3,0), lVar2 != 0)) {
          thunk_FUN_0392a110(uVar15,uVar18,uVar19,uVar6,uVar9,uVar12,lVar2,0);
          if (*(long *)(unaff_x21 + 0x70) != 0) {
            uVar9 = unaff_d14;
            uVar6 = unaff_d15;
            uVar15 = FUN_038f13a0(uVar5,unaff_d14,unaff_d15,*(long *)(unaff_x21 + 0x70),0);
            fVar11 = (float)uVar6;
            *(undefined4 *)(unaff_x19 + 0x104) = uVar15;
            fVar8 = (float)uVar9;
            *(float *)(unaff_x19 + 0x108) = fVar8;
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
                      fVar14 = fVar11;
                      fVar16 = fVar8;
                      lVar3 = FUN_0391c27c();
                      if ((lVar3 != 0) && (fVar4 = (float)FUN_039291ac(lVar3,0), lVar2 != 0)) {
                        uVar12 = (ulong)(uint)(fVar11 - fVar14);
                        uVar9 = (ulong)(uint)(fVar8 - fVar16);
                        FUN_03928dd4(fVar17 - fVar4,uVar9,uVar12,lVar2,0);
                        if (*(long *)(unaff_x21 + 0x70) != 0) {
                          lVar2 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
                          lVar3 = FUN_0391c27c();
                          if (lVar3 != 0) {
                            uVar6 = FUN_03928d34(lVar3,0);
                            uVar10 = uVar9;
                            uVar13 = uVar12;
                            lVar3 = FUN_0391c27c();
                            if ((lVar3 != 0) && (uVar7 = FUN_03929130(lVar3,0), lVar2 != 0)) {
                              thunk_FUN_0392a110(uVar6,uVar9,uVar12,uVar7,uVar10,uVar13,lVar2,0);
                              if (*(long *)(unaff_x21 + 0x70) != 0) {
                                fVar8 = (float)FUN_038f13a0(uVar5,unaff_d14,unaff_d15,
                                                            *(long *)(unaff_x21 + 0x70),0);
                                *(float *)(unaff_x19 + 0x104) = fVar8;
                                *(float *)(unaff_x19 + 0x108) = (float)unaff_d14;
                                if (*unaff_x20 == '\0') {
                                  uVar6 = CONCAT44((float)unaff_d14 -
                                                   (float)((ulong)in_stack_00000010 >> 0x20),
                                                   fVar8 - (float)in_stack_00000010);
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


