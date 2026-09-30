/*
FUNCTION_NAME: OVRAnchor.Telemetry$$SetAsyncResultAndSend
ENTRY_POINT: 01992720
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void OVRAnchor_Telemetry__SetAsyncResultAndSend
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 uVar10;
  undefined8 *unaff_x21;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
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
  FUN_01347408(param_3,param_4,*unaff_x21);
  lVar7 = FUN_0268fd10();
  lVar9 = *(long *)(unaff_x19 + 0x18);
  if ((lVar9 != 0) && (lVar7 != 0)) {
    fVar11 = *(float *)(unaff_x19 + 0x58);
    fVar13 = fStack0000000000000010 * fVar11 +
             (float)((ulong)*(undefined8 *)(lVar9 + 0x198) >> 0x20);
    FUN_0269f618(CONCAT44(fVar13,in_stack_00000008._4_4_ * fVar11 +
                                 (float)*(undefined8 *)(lVar9 + 0x198)),fVar13,
                 fStack0000000000000014 * fVar11 + *(float *)(lVar9 + 0x1a0),lVar7,0);
    lVar7 = FUN_0268fd10();
    lVar9 = *(long *)(unaff_x19 + 0x18);
    if (lVar9 != 0) {
      uStack0000000000000028 = *(undefined8 *)(lVar9 + 0x1ac);
      uStack0000000000000020 = *(undefined8 *)(lVar9 + 0x1a4);
      uStack0000000000000038 = *(undefined8 *)(lVar9 + 0x1bc);
      uStack0000000000000030 = *(undefined8 *)(lVar9 + 0x1b4);
      FUN_01347408(&stack0x00000020);
      if (DAT_037750c4 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_037750c4 = '\x01';
      }
      lVar9 = *(long *)(*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8);
      FUN_02698e08(in_stack_00000008._4_4_,fStack0000000000000010,fStack0000000000000014,
                   *(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                   *(undefined4 *)(lVar9 + 0x20),0);
      puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (lVar7 != 0) {
        FUN_0269f894(lVar7,0);
        uVar10 = *(undefined8 *)(unaff_x19 + 0x60);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_02681b9c(uVar10,0,0);
        if ((uVar8 & 1) != 0) {
          lVar7 = FUN_0268fd10();
          if (lVar7 == 0) goto LAB_01992a44;
          fVar11 = (float)FUN_0269f578(lVar7,0);
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01992a44;
          fVar13 = fStack0000000000000010;
          fVar14 = fStack0000000000000014;
          fVar12 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x60),0);
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_03774e1a = '\x01';
          }
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar7 = FUN_0268fd10();
          if (lVar7 == 0) goto LAB_01992a44;
          fVar11 = SQRT((fStack0000000000000014 - fVar14) * (fStack0000000000000014 - fVar14) +
                        (fVar11 - fVar12) * (fVar11 - fVar12) +
                        (fStack0000000000000010 - fVar13) * (fStack0000000000000010 - fVar13));
          FUN_0269fd98(fVar11 * *(float *)(unaff_x19 + 0x68),fVar11 * *(float *)(unaff_x19 + 0x6c),
                       fVar11 * *(float *)(unaff_x19 + 0x70),lVar7,0);
        }
        if ((*(long *)(unaff_x19 + 0x18) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
          iVar5 = *(int *)(*(long *)(unaff_x19 + 0x18) + 0x7c);
          lVar7 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0);
          if (lVar7 != 0) {
            FUN_0267f1e8(*(undefined4 *)(&DAT_02945348 + (ulong)(iVar5 == 2) * 4),lVar7,
                         *(undefined4 *)(unaff_x19 + 0x74),0);
            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
               (lVar7 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0)) {
              FUN_0267f1e8(0x3f800000,lVar7,*(undefined4 *)(unaff_x19 + 0x78),0);
              if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                 (lVar7 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0)) {
                FUN_0267f1e8(0x3f800000,lVar7,*(undefined4 *)(unaff_x19 + 0x7c),0);
                if (*(long *)(unaff_x19 + 0x20) != 0) {
                  lVar7 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0);
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
                  if (lVar7 != 0) {
                    thunk_FUN_0267e7ec(*puVar1,*puVar2,*puVar3,*puVar4,lVar7,
                                       *(undefined4 *)(unaff_x19 + 0x80),0);
                    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                       (lVar7 = FUN_02668954(*(long *)(unaff_x19 + 0x20),0), lVar7 != 0)) {
                      thunk_FUN_0267e7ec(*(undefined4 *)(unaff_x19 + 0x48),
                                         *(undefined4 *)(unaff_x19 + 0x4c),
                                         *(undefined4 *)(unaff_x19 + 0x50),
                                         *(undefined4 *)(unaff_x19 + 0x54),lVar7,
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
LAB_01992a44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


