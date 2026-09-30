/*
FUNCTION_NAME: Oculus.Platform.Models.NetSyncSetSessionPropertyResult$$.ctor
ENTRY_POINT: 01980464
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void Oculus_Platform_Models_NetSyncSetSessionPropertyResult___ctor
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long unaff_x21;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000050;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  float fStack0000000000000064;
  undefined4 in_stack_00000068;
  
  lVar6 = *unaff_x20;
  plVar11 = *(long **)(unaff_x21 + 0x388);
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *plVar11) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_019804b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
LAB_019804b4:
  lVar6 = (*(code *)*puVar4)();
  if (lVar6 != 0) {
    FUN_0132138c(lVar6,0,&stack0x00000030,
                 *(undefined8 *)Method_System_Collections_SortedList_CopyTo__);
    fVar18 = in_stack_00000038;
    fVar13 = fStack0000000000000030;
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      lVar6 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0198053c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar10,lVar6,1);
LAB_0198053c:
      lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        fVar12 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x18),0);
        puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
        puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        fVar13 = fVar13 - fVar12;
        param_2 = fStack0000000000000034 - param_2;
        fVar18 = fVar18 - param_3;
        fVar12 = *(float *)(unaff_x19 + 0x40);
        fVar24 = fVar18 * fVar18 + fVar13 * fVar13 + param_2 * param_2;
        if (*(char *)(unaff_x19 + 0x28) == '\0') {
          if (lVar6 == 0) goto LAB_01980c28;
          fVar25 = *(float *)(unaff_x19 + 0x44);
          fVar19 = 0.0;
          fVar12 = (float)FUN_026a0cd4(fVar12,lVar6,0);
          fVar24 = fVar24 - (fVar19 * fVar19 + fVar12 * fVar12 + fVar25 * fVar25);
          if (fVar24 <= 0.0) {
            return;
          }
          fVar19 = *(float *)(unaff_x19 + 0x48);
          fVar25 = 0.0;
          fVar12 = (float)FUN_026a0cd4(0,lVar6,0);
          if (DAT_03774e1b == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_03774e1b = '\x01';
          }
          fVar28 = SQRT(fVar24);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar12 = SQRT(fVar19 * fVar19 + fVar12 * fVar12 + fVar25 * fVar25);
          fVar25 = -fVar12;
          if (0.0 <= *(float *)(unaff_x19 + 0x48)) {
            fVar25 = fVar12;
          }
          fVar25 = fVar28 - fVar25;
        }
        else {
          if (lVar6 == 0) goto LAB_01980c28;
          fVar25 = *(float *)(unaff_x19 + 0x2c);
          fVar26 = *(float *)(unaff_x19 + 0x30);
          fVar28 = *(float *)(unaff_x19 + 0x44);
          fVar29 = *(float *)(unaff_x19 + 0x48);
          fVar30 = *(float *)(unaff_x19 + 0x34);
          fVar19 = fVar18;
          uVar5 = FUN_0269fe30(lVar6,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar1);
          }
          uVar8 = FUN_02681b9c(uVar5,0,0);
          if ((uVar8 & 1) == 0) {
            if (DAT_03774e1c == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774e1c = '\x01';
            }
            lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
            fVar14 = *(float *)(lVar7 + 0xc);
            fVar19 = *(float *)(lVar7 + 0x10);
            param_3 = *(float *)(lVar7 + 0x14);
          }
          else {
            lVar7 = FUN_0269fe30(lVar6,0);
            if (lVar7 == 0) goto LAB_01980c28;
            fVar14 = (float)FUN_026a125c(lVar7,0);
          }
          fVar12 = fVar12 * fVar25;
          fVar28 = fVar28 * fVar26;
          fVar25 = fVar29 * fVar30 + 0.0 + 1.0;
          fVar24 = fVar24 / ((fVar28 * fVar28) / (fVar25 * fVar25) +
                            (fVar12 * fVar12) / (fVar25 * fVar25) + 1.0);
          fVar28 = SQRT(fVar24);
          fVar25 = fVar28 / fVar25;
          FUN_0269fd98((fVar25 * *(float *)(unaff_x19 + 0x2c)) / fVar14,
                       (fVar25 * *(float *)(unaff_x19 + 0x30)) / fVar19,
                       (fVar25 * *(float *)(unaff_x19 + 0x34)) / param_3,lVar6,0);
        }
        fVar19 = *(float *)(unaff_x19 + 0x44);
        fVar26 = 0.0;
        fVar12 = (float)FUN_026a0cd4(0,lVar6,0);
        fVar19 = fVar26 * fVar26 + fVar12 * fVar12 + fVar19 * fVar19;
        param_2 = param_2 / SQRT(fVar24 + fVar19);
        fVar12 = param_2;
        if (1.0 < param_2) {
          fVar12 = 1.0;
        }
        if (param_2 < -1.0) {
          fVar12 = -1.0;
        }
        fVar26 = asinf(fVar12);
        fVar12 = DAT_028aa158;
        fVar19 = SQRT(fVar19);
        fVar26 = fVar26 * DAT_028aa158;
        fVar24 = -fVar19;
        if (0.0 <= *(float *)(unaff_x19 + 0x44)) {
          fVar24 = fVar19;
        }
        fVar24 = atan2f(-fVar24,fVar28);
        fVar26 = fVar26 + fVar24 * fVar12;
        fVar24 = *(float *)(unaff_x19 + 0x24);
        if (fVar26 <= *(float *)(unaff_x19 + 0x24)) {
          fVar24 = fVar26;
        }
        if (fVar26 < *(float *)(unaff_x19 + 0x20)) {
          fVar24 = *(float *)(unaff_x19 + 0x20);
        }
        if (DAT_03775438 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03775438 = '\x01';
        }
        puVar1 = StringLiteral_6259;
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        uVar8 = (ulong)*(uint *)(lVar7 + 0x3c);
        uVar21 = (ulong)*(uint *)(lVar7 + 0x40);
        uVar23 = (ulong)*(uint *)(lVar7 + 0x44);
        uVar5 = FUN_02698d50(-fVar24,uVar8,uVar21,uVar23,0);
        if (DAT_03775377 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03775377 = '\x01';
        }
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        uVar20 = uVar8;
        uVar22 = uVar21;
        uVar16 = FUN_02699088(uVar5,uVar8,uVar21,uVar23,fVar25 * *(float *)(lVar7 + 0x48),
                              fVar25 * *(float *)(lVar7 + 0x4c),fVar25 * *(float *)(lVar7 + 0x50),0)
        ;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02666aac(uVar16,uVar20,uVar22,uVar5,uVar8,uVar21,uVar23,&stack0x00000050,0);
        fVar29 = (float)uVar22;
        fVar26 = (float)uVar20;
        fVar28 = (float)FUN_026a125c(lVar6,0);
        fVar19 = fStack0000000000000058;
        fVar24 = in_stack_00000050;
        fVar28 = (float)FUN_02699088(uStack000000000000005c,uStack0000000000000060,
                                     fStack0000000000000064,in_stack_00000068,
                                     fVar28 * *(float *)(unaff_x19 + 0x40),
                                     fVar26 * *(float *)(unaff_x19 + 0x44),
                                     fVar29 * *(float *)(unaff_x19 + 0x48),0);
        if (DAT_037750c4 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_037750c4 = '\x01';
        }
        fVar24 = fVar24 + fVar28;
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        fVar19 = fVar19 + fStack0000000000000064;
        fVar28 = *(float *)(lVar7 + 0x18);
        fVar26 = *(float *)(lVar7 + 0x1c);
        fVar29 = *(float *)(lVar7 + 0x20);
        fVar30 = (float)uVar21;
        if (DAT_03775508 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775508 = '\x01';
        }
        fVar14 = 0.0;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar15 = SQRT((fVar18 * fVar18 + fVar13 * fVar13 + 0.0) *
                      (fVar19 * fVar19 + fVar24 * fVar24 + 0.0));
        if (DAT_028aa5c8 <= fVar15) {
          fVar15 = (fVar18 * fVar19 + fVar13 * fVar24 + 0.0) / fVar15;
          fVar14 = fVar15;
          if (1.0 < fVar15) {
            fVar14 = 1.0;
          }
          if (fVar15 < -1.0) {
            fVar14 = -1.0;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          dVar17 = acos((double)fVar14);
          fVar14 = (float)dVar17 * fVar12;
        }
        fVar12 = 1.0;
        if ((fVar24 * 0.0 - fVar13 * 0.0) * fVar29 +
            (fVar18 * 0.0 - fVar19 * 0.0) * fVar28 + (fVar13 * fVar19 - fVar18 * fVar24) * fVar26 <
            0.0) {
          fVar12 = -1.0;
        }
        if (DAT_037750c4 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_037750c4 = '\x01';
        }
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        fVar18 = *(float *)(lVar7 + 0x18);
        fVar24 = *(float *)(lVar7 + 0x1c);
        fVar19 = *(float *)(lVar7 + 0x20);
        fVar13 = (float)FUN_02698d50(fVar12 * fVar14,fVar18,fVar24,fVar19,0);
        if (*(long *)(unaff_x19 + 0x18) != 0) {
          fVar29 = (float)uVar5;
          fVar15 = (float)uVar23;
          fVar26 = (float)uVar8;
          fVar12 = fVar26 * fVar18;
          fVar28 = fVar30 * fVar24;
          fVar27 = (fVar30 * fVar18 + fVar29 * fVar19 + fVar15 * fVar13) - fVar26 * fVar24;
          fVar14 = (fVar29 * fVar24 + fVar26 * fVar19 + fVar15 * fVar18) - fVar30 * fVar13;
          fVar24 = (fVar26 * fVar13 + fVar30 * fVar19 + fVar15 * fVar24) - fVar29 * fVar18;
          fVar18 = ((fVar15 * fVar19 - fVar29 * fVar13) - fVar12) - fVar28;
          fVar13 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x18),0);
          if (DAT_03775377 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03775377 = '\x01';
          }
          lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
          fVar19 = fVar14;
          fVar26 = fVar24;
          fVar25 = (float)FUN_02699088(fVar27,fVar14,fVar24,fVar18,fVar25 * *(float *)(lVar7 + 0x48)
                                       ,fVar25 * *(float *)(lVar7 + 0x4c),
                                       fVar25 * *(float *)(lVar7 + 0x50),0);
          FUN_0269f618(fVar13 + fVar25,fVar12 + fVar19,fVar28 + fVar26,lVar6,0);
          FUN_0269f894(fVar27,fVar14,fVar24,fVar18,lVar6,0);
          return;
        }
      }
    }
  }
LAB_01980c28:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


