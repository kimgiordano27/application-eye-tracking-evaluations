/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 05b42da8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_18;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


undefined8 OVREyeGaze__set_Confidence(ulong param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar6;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float in_stack_00000018;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_00000240;
  float in_stack_00000248;
  float in_stack_00000254;
  undefined8 in_stack_00000258;
  
  do {
    fVar8 = (float)FUN_05b436ec(param_1,param_2,(int)unaff_x20[0x28]);
    if ((fVar8 <= *(float *)(unaff_x22 + 0xdc)) && (fVar8 <= in_stack_00000018)) {
LAB_05b42dd0:
      FUN_05496474(in_stack_00000058,*(undefined8 *)PTR_DAT_071140f0);
      if (in_stack_00000050 == 0) {
        uVar11 = 0;
        if ((unaff_x21 & 1) == 0) {
          uVar11 = unaff_x19;
        }
        return uVar11;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd0(in_stack_00000050);
    }
LAB_05b42a98:
    do {
      do {
        do {
          uVar2 = FUN_05496478(&stack0x00000230,*unaff_x26);
          unaff_x21 = uVar2 & 0xffffffff;
          if ((uVar2 & 1) == 0) goto LAB_05b42dd0;
          uVar11 = *(undefined8 *)(unaff_x28 + 0xdc);
          if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar2 = FUN_069d8404(in_stack_00000240);
        } while ((uVar2 & 1) != 0);
        if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        uVar2 = FUN_05248038(unaff_x20[0x41],in_stack_00000240,*unaff_x27);
        if ((uVar2 & 1) == 0) {
          if (in_stack_00000240 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          plVar6 = *(long **)(in_stack_00000240 + 0xd0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar4 = *plVar6;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x29) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto LAB_05b42b80;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x29,0);
LAB_05b42b80:
          plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          lVar4 = *plVar6;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 != 0) {
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x25) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
                goto OVRCustomFace__GetFaceExpression;
              }
              uVar2 = uVar2 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 != 0);
          }
          puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x25,0);
OVRCustomFace__GetFaceExpression:
          lVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          FUN_069e7b58(&stack0x00000060,lVar4,0);
        }
        else {
          if (unaff_x20[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          FUN_05247cac(&stack0x00000060,unaff_x20[0x41],in_stack_00000240,
                       *(undefined8 *)PTR_DAT_071140c8);
        }
        in_stack_000000b8 = in_stack_00000068;
        in_stack_000000b0 = in_stack_00000060;
        in_stack_000000c8 = in_stack_00000078;
        in_stack_000000c0 = in_stack_00000070;
        in_stack_000000d8 = in_stack_00000088;
        in_stack_000000d0 = in_stack_00000080;
        in_stack_000000e8 = in_stack_00000098;
        in_stack_000000e0 = in_stack_00000090;
        uVar10 = *(undefined4 *)((long)unaff_x20 + 0x164);
        in_stack_00000138 = in_stack_00000068;
        in_stack_00000130 = in_stack_00000060;
        in_stack_00000148 = in_stack_00000078;
        in_stack_00000140 = in_stack_00000070;
        uVar9 = (undefined4)unaff_x20[0x2c];
        in_stack_00000158 = in_stack_00000088;
        in_stack_00000150 = in_stack_00000080;
        in_stack_00000168 = in_stack_00000098;
        in_stack_00000160 = in_stack_00000090;
        uVar7 = FUN_069c2d88(*(undefined4 *)((long)unaff_x20 + 0x15c),uVar9,uVar10,&stack0x00000130,
                             0);
        if (in_stack_00000240 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        plVar6 = *(long **)(in_stack_00000240 + 0xd0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar4 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05b42c98;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x29,0);
LAB_05b42c98:
        plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        lVar4 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05b42cf8;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*unaff_x25,0);
LAB_05b42cf8:
        lVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        FUN_069e515c(uVar7,uVar9,uVar10,lVar4,0);
        uVar2 = FUN_05b435dc();
      } while ((uVar2 & 1) == 0);
      fVar8 = (float)((ulong)in_stack_00000258 >> 0x20) *
              ((float)((ulong)*unaff_x24 >> 0x20) - (float)((ulong)uVar11 >> 0x20)) +
              in_stack_00000254 * (*(float *)(unaff_x20 + 0x27) - in_stack_00000248) +
              (float)in_stack_00000258 * ((float)*unaff_x24 - (float)uVar11);
      if (*(float *)(unaff_x20 + 0x25) <= ABS(fVar8)) {
        if (fVar8 <= 0.0) goto LAB_05b42a98;
      }
      else {
        iVar1 = (**(code **)(*unaff_x20 + 0x548))();
        if (fVar8 <= 0.0 || 0 < iVar1) goto LAB_05b42a98;
      }
    } while (*(float *)(in_stack_00000240 + 0x110) < fVar8);
    param_1 = (ulong)*(uint *)(unaff_x20 + 0x27);
    param_2 = (ulong)*(uint *)((long)unaff_x20 + 0x13c);
    unaff_x22 = in_stack_00000240;
  } while( true );
}


