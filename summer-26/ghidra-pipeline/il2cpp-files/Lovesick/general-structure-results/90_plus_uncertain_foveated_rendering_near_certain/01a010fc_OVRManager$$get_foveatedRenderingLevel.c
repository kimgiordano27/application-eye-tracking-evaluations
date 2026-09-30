/*
FUNCTION_NAME: OVRManager$$get_foveatedRenderingLevel
ENTRY_POINT: 01a010fc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_12;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__get_foveatedRenderingLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  puVar6 = StringLiteral_6481;
  _fStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  plVar16 = *(long **)(unaff_x19 + 0x20);
  if (plVar16 != (long *)0x0) {
    lVar11 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_6481) {
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_01a01164;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar16,*(long *)StringLiteral_6481,9);
LAB_01a01164:
    uVar14 = (*(code *)*puVar10)(plVar16,1,&stack0x00000010,puVar10[1]);
    if ((uVar14 & 1) == 0) {
      return *(float *)(unaff_x19 + 0x3c);
    }
    plVar16 = *(long **)(unaff_x19 + 0x20);
    if (plVar16 != (long *)0x0) {
      lVar12 = *plVar16;
      lVar11 = *(long *)puVar6;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_01a011d8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar16,lVar11,0);
LAB_01a011d8:
      iVar9 = (*(code *)*puVar10)(plVar16,puVar10[1]);
      if (DAT_037750c4 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_037750c4 = '\x01';
      }
      fVar23 = fStack0000000000000018;
      puVar4 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        fVar28 = fStack0000000000000010;
        fVar24 = fStack0000000000000014;
        lVar11 = *(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8);
        fStack000000000000007c = *(float *)(lVar11 + 0x18);
        fVar25 = *(float *)(lVar11 + 0x1c);
        fVar26 = *(float *)(lVar11 + 0x20);
        fVar17 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x28),0);
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
        fVar28 = fVar28 - fVar17;
        fVar24 = fVar24 - param_2;
        fVar23 = fVar23 - param_3;
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar17 = DAT_028aa038;
        fVar18 = SQRT(fVar23 * fVar23 + fVar28 * fVar28 + fVar24 * fVar24);
        if (fVar18 <= DAT_028aa038) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
          fVar28 = *pfVar13;
          fStack0000000000000078 = pfVar13[1];
          fVar23 = pfVar13[2];
        }
        else {
          fVar28 = fVar28 / fVar18;
          fStack0000000000000078 = fVar24 / fVar18;
          fVar23 = fVar23 / fVar18;
        }
        fVar18 = fVar26 * fStack0000000000000078;
        fVar27 = fStack000000000000007c * fVar23;
        fVar24 = fStack000000000000007c * fStack0000000000000078;
        fStack000000000000007c = fVar28;
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        fVar18 = fVar25 * fVar23 - fVar18;
        fVar27 = fVar26 * fVar28 - fVar27;
        fVar24 = fVar24 - fVar25 * fVar28;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar28 = fStack0000000000000078;
        fVar25 = SQRT(fVar24 * fVar24 + fVar18 * fVar18 + fVar27 * fVar27);
        if (fVar25 <= fVar17) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
          fVar18 = *pfVar13;
          fVar27 = pfVar13[1];
          fVar24 = pfVar13[2];
        }
        else {
          fVar18 = fVar18 / fVar25;
          fVar27 = fVar27 / fVar25;
          fVar24 = fVar24 / fVar25;
        }
        uVar7 = uStack0000000000000028;
        fVar25 = fStack0000000000000020;
        puVar5 = StringLiteral_1471;
        if (iVar9 != 1) {
          fVar18 = -fVar18;
          fVar27 = -fVar27;
          fVar24 = -fVar24;
        }
        lVar11 = *(long *)StringLiteral_1471;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar11 = *(long *)puVar5;
        }
        lVar12 = *(long *)(lVar11 + 0xb8);
        bVar8 = iVar9 != 1;
        lVar11 = 0x2c;
        if (bVar8) {
          lVar11 = 0x74;
        }
        lVar1 = 0x28;
        if (bVar8) {
          lVar1 = 0x70;
        }
        lVar2 = 0x24;
        if (bVar8) {
          lVar2 = 0x6c;
        }
        fVar26 = fStack0000000000000024;
        fVar19 = (float)FUN_02699088(uStack000000000000001c,fVar25,fStack0000000000000024,uVar7,
                                     *(undefined4 *)(lVar12 + lVar2),*(undefined4 *)(lVar12 + lVar1)
                                     ,*(undefined4 *)(lVar12 + lVar11),0);
        if (DAT_0377518b == '\0') {
          thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
          DAT_0377518b = '\x01';
        }
        fVar20 = fVar23 * fVar23 + fStack000000000000007c * fStack000000000000007c + fVar28 * fVar28
        ;
        if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar20) {
          fVar22 = fVar23 * fVar26 + fStack000000000000007c * fVar19 + fVar28 * fVar25;
          fVar19 = fVar19 - (fStack000000000000007c * fVar22) / fVar20;
          fVar25 = fVar25 - (fVar28 * fVar22) / fVar20;
          fVar26 = fVar26 - (fVar23 * fVar22) / fVar20;
        }
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar28 = SQRT(fVar26 * fVar26 + fVar19 * fVar19 + fVar25 * fVar25);
        if (fVar28 <= fVar17) {
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar13 = *(float **)(*(long *)puVar4 + 0xb8);
          fVar19 = *pfVar13;
          fVar25 = pfVar13[1];
          fVar26 = pfVar13[2];
        }
        else {
          fVar19 = fVar19 / fVar28;
          fVar25 = fVar25 / fVar28;
          fVar26 = fVar26 / fVar28;
        }
        if (DAT_03775508 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775508 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar28 = SQRT((fVar24 * fVar24 + fVar27 * fVar27 + fVar18 * fVar18) *
                      (fVar26 * fVar26 + fVar19 * fVar19 + fVar25 * fVar25));
        fVar17 = 0.0;
        if (DAT_028aa5c8 <= fVar28) {
          fVar28 = (fVar24 * fVar26 + fVar18 * fVar19 + fVar27 * fVar25) / fVar28;
          fVar17 = fVar28;
          if (1.0 < fVar28) {
            fVar17 = 1.0;
          }
          if (fVar28 < -1.0) {
            fVar17 = -1.0;
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          dVar21 = acos((double)fVar17);
          fVar17 = (float)dVar21 * DAT_028aa158;
        }
        plVar16 = *(long **)(unaff_x19 + 0x20);
        fVar28 = 1.0;
        if (fVar23 * (fVar27 * fVar19 - fVar18 * fVar25) +
            fStack000000000000007c * (fVar24 * fVar25 - fVar27 * fVar26) +
            fStack0000000000000078 * (fVar18 * fVar26 - fVar24 * fVar19) < 0.0) {
          fVar28 = -1.0;
        }
        if (plVar16 != (long *)0x0) {
          lVar12 = *plVar16;
          lVar11 = *(long *)puVar6;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar11) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01a016d4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar16,lVar11,0);
LAB_01a016d4:
          iVar9 = (*(code *)*puVar10)(plVar16,puVar10[1]);
          fVar23 = -(fVar28 * fVar17);
          if (iVar9 != 1) {
            fVar23 = fVar28 * fVar17;
          }
          if (-70.0 <= fVar23) {
            return fVar23;
          }
          return fVar23 + 360.0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


