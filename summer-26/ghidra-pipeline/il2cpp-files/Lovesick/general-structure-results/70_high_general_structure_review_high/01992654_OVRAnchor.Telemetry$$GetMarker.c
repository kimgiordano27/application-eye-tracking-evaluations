/*
FUNCTION_NAME: OVRAnchor.Telemetry$$GetMarker
ENTRY_POINT: 01992654
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void OVRAnchor_Telemetry__GetMarker(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  long unaff_x19;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x7c) == 3) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar7 = FUN_026653cc(*(long *)(unaff_x19 + 0x20),0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(unaff_x19 + 0x20);
        if (lVar8 != 0) {
LAB_019929c4:
          FUN_0266622c(lVar8,0,0);
          return;
        }
      }
    }
    else {
      in_stack_00000028 = *(undefined8 *)(param_1 + 0x1ac);
      in_stack_00000020 = *(undefined8 *)(param_1 + 0x1a4);
      in_stack_00000038 = *(undefined8 *)(param_1 + 0x1bc);
      in_stack_00000030 = *(undefined8 *)(param_1 + 0x1b4);
      lVar8 = *(long *)(*(long *)
                         DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_56_var
                       + 0x20);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        lVar8 = FUN_00d5941c();
      }
      pcVar9 = (char *)thunk_FUN_00d32ed4(&stack0x00000020,*(undefined8 *)(lVar8 + 0x80));
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if (lVar8 != 0) {
        if (*pcVar9 == '\0') goto LAB_019929c4;
        uVar7 = FUN_026653cc(lVar8,0);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01992a44;
          FUN_0266622c(*(long *)(unaff_x19 + 0x20),1,0);
        }
        lVar8 = *(long *)(unaff_x19 + 0x18);
        if (lVar8 != 0) {
          in_stack_00000028 = *(undefined8 *)(lVar8 + 0x1ac);
          in_stack_00000020 = *(undefined8 *)(lVar8 + 0x1a4);
          in_stack_00000038 = *(undefined8 *)(lVar8 + 0x1bc);
          in_stack_00000030 = *(undefined8 *)(lVar8 + 0x1b4);
          FUN_01347408(&stack0x00000020);
          lVar8 = FUN_0268fd10();
          lVar10 = *(long *)(unaff_x19 + 0x18);
          if ((lVar10 != 0) && (lVar8 != 0)) {
            fVar12 = *(float *)(unaff_x19 + 0x58);
            fVar14 = fStack0000000000000010 * fVar12 +
                     (float)((ulong)*(undefined8 *)(lVar10 + 0x198) >> 0x20);
            FUN_0269f618(CONCAT44(fVar14,in_stack_00000008._4_4_ * fVar12 +
                                         (float)*(undefined8 *)(lVar10 + 0x198)),fVar14,
                         fStack0000000000000014 * fVar12 + *(float *)(lVar10 + 0x1a0),lVar8,0);
            lVar8 = FUN_0268fd10();
            lVar10 = *(long *)(unaff_x19 + 0x18);
            if (lVar10 != 0) {
              in_stack_00000028 = *(undefined8 *)(lVar10 + 0x1ac);
              in_stack_00000020 = *(undefined8 *)(lVar10 + 0x1a4);
              in_stack_00000038 = *(undefined8 *)(lVar10 + 0x1bc);
              in_stack_00000030 = *(undefined8 *)(lVar10 + 0x1b4);
              FUN_01347408(&stack0x00000020);
              if (DAT_037750c4 == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                DAT_037750c4 = '\x01';
              }
              lVar10 = *(long *)(*(long *)
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                + 0xb8);
              FUN_02698e08(in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                           *(undefined4 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x1c),
                           *(undefined4 *)(lVar10 + 0x20),0);
              puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
              if (lVar8 != 0) {
                FUN_0269f894(lVar8,0);
                uVar11 = *(undefined8 *)(unaff_x19 + 0x60);
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar7 = FUN_02681b9c(uVar11,0,0);
                if ((uVar7 & 1) != 0) {
                  lVar8 = FUN_0268fd10();
                  if (lVar8 == 0) goto LAB_01992a44;
                  fVar12 = (float)FUN_0269f578(lVar8,0);
                  if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01992a44;
                  fVar14 = fStack0000000000000010;
                  fVar15 = fStack0000000000000014;
                  fVar13 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x60),0);
                  if (DAT_03774e1a == '\0') {
                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    DAT_03774e1a = '\x01';
                  }
                  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0)
                  {
                    thunk_FUN_00d32864();
                  }
                  lVar8 = FUN_0268fd10();
                  if (lVar8 == 0) goto LAB_01992a44;
                  fVar12 = SQRT((fStack0000000000000014 - fVar15) *
                                (fStack0000000000000014 - fVar15) +
                                (fVar12 - fVar13) * (fVar12 - fVar13) +
                                (fStack0000000000000010 - fVar14) *
                                (fStack0000000000000010 - fVar14));
                  FUN_0269fd98(fVar12 * *(float *)(unaff_x19 + 0x68),
                               fVar12 * *(float *)(unaff_x19 + 0x6c),
                               fVar12 * *(float *)(unaff_x19 + 0x70),lVar8,0);
                }
                if ((*(long *)(unaff_x19 + 0x18) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
                  iVar5 = *(int *)(*(long *)(unaff_x19 + 0x18) + 0x7c);
                  lVar8 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0);
                  if (lVar8 != 0) {
                    FUN_0267f1e8(*(undefined4 *)(&DAT_02945348 + (ulong)(iVar5 == 2) * 4),lVar8,
                                 *(undefined4 *)(unaff_x19 + 0x74),0);
                    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                       (lVar8 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0), lVar8 != 0)) {
                      FUN_0267f1e8(0x3f800000,lVar8,*(undefined4 *)(unaff_x19 + 0x78),0);
                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                         (lVar8 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0), lVar8 != 0)) {
                        FUN_0267f1e8(0x3f800000,lVar8,*(undefined4 *)(unaff_x19 + 0x7c),0);
                        if (*(long *)(unaff_x19 + 0x20) != 0) {
                          lVar8 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0);
                          if (iVar5 == 2) {
                            puVar1 = (undefined4 *)(unaff_x19 + 0x38);
                            puVar2 = (undefined4 *)(unaff_x19 + 0x3c);
                            puVar3 = (undefined4 *)(unaff_x19 + 0x40);
                            puVar4 = (undefined4 *)(unaff_x19 + 0x44);
                          }
                          else {
                            puVar1 = (undefined4 *)(unaff_x19 + 0x28);
                            puVar2 = (undefined4 *)(unaff_x19 + 0x2c);
                            puVar3 = (undefined4 *)(unaff_x19 + 0x30);
                            puVar4 = (undefined4 *)(unaff_x19 + 0x34);
                          }
                          if (lVar8 != 0) {
                            thunk_FUN_0267e7ec(*puVar1,*puVar2,*puVar3,*puVar4,lVar8,
                                               *(undefined4 *)(unaff_x19 + 0x80),0);
                            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                               (lVar8 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0), lVar8 != 0)) {
                              thunk_FUN_0267e7ec(*(undefined4 *)(unaff_x19 + 0x48),
                                                 *(undefined4 *)(unaff_x19 + 0x4c),
                                                 *(undefined4 *)(unaff_x19 + 0x50),
                                                 *(undefined4 *)(unaff_x19 + 0x54),lVar8,
                                                 *(undefined4 *)(unaff_x19 + 0x84),0);
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
LAB_01992a44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


