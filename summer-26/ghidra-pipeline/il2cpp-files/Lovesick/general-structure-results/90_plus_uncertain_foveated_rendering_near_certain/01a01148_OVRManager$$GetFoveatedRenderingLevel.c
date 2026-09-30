/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 01a01148
PROGRAM: Lovesick-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_12;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRManager__GetFoveatedRenderingLevel(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long *unaff_x21;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 in_stack_00000028;
  
  puVar8 = (undefined8 *)FUN_00d59724();
  uVar9 = (*(code *)*puVar8)();
  if ((uVar9 & 1) == 0) {
    return *(float *)(unaff_x19 + 0x3c);
  }
  plVar14 = *(long **)(unaff_x19 + 0x20);
  if (plVar14 != (long *)0x0) {
    lVar10 = *plVar14;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x21) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01a011d8;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar14,*unaff_x21,0);
LAB_01a011d8:
    iVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
    if (DAT_037750c4 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_037750c4 = '\x01';
    }
    puVar4 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      lVar10 = *(long *)(*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8);
      fVar15 = *(float *)(lVar10 + 0x18);
      fVar21 = *(float *)(lVar10 + 0x1c);
      fVar22 = *(float *)(lVar10 + 0x20);
      fVar16 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x28),0);
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
      fStack0000000000000010 = fStack0000000000000010 - fVar16;
      fStack0000000000000014 = fStack0000000000000014 - param_2;
      fStack0000000000000018 = fStack0000000000000018 - param_3;
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar16 = DAT_028aa038;
      fVar17 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
                    fStack0000000000000010 * fStack0000000000000010 +
                    fStack0000000000000014 * fStack0000000000000014);
      if (fVar17 <= DAT_028aa038) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
        fStack0000000000000010 = *pfVar12;
        fStack0000000000000014 = pfVar12[1];
        fStack0000000000000018 = pfVar12[2];
      }
      else {
        fStack0000000000000010 = fStack0000000000000010 / fVar17;
        fStack0000000000000014 = fStack0000000000000014 / fVar17;
        fStack0000000000000018 = fStack0000000000000018 / fVar17;
      }
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      fVar17 = fVar21 * fStack0000000000000018 - fVar22 * fStack0000000000000014;
      fVar22 = fVar22 * fStack0000000000000010 - fVar15 * fStack0000000000000018;
      fVar15 = fVar15 * fStack0000000000000014 - fVar21 * fStack0000000000000010;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar21 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + fVar22 * fVar22);
      if (fVar21 <= fVar16) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
        fVar17 = *pfVar12;
        fVar22 = pfVar12[1];
        fVar15 = pfVar12[2];
      }
      else {
        fVar17 = fVar17 / fVar21;
        fVar22 = fVar22 / fVar21;
        fVar15 = fVar15 / fVar21;
      }
      puVar5 = StringLiteral_1471;
      if (iVar7 != 1) {
        fVar17 = -fVar17;
        fVar22 = -fVar22;
        fVar15 = -fVar15;
      }
      lVar10 = *(long *)StringLiteral_1471;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar5;
      }
      lVar11 = *(long *)(lVar10 + 0xb8);
      bVar6 = iVar7 != 1;
      lVar10 = 0x2c;
      if (bVar6) {
        lVar10 = 0x74;
      }
      lVar1 = 0x28;
      if (bVar6) {
        lVar1 = 0x70;
      }
      lVar2 = 0x24;
      if (bVar6) {
        lVar2 = 0x6c;
      }
      fVar21 = (float)FUN_02699088(uStack000000000000001c,fStack0000000000000020,
                                   fStack0000000000000024,in_stack_00000028,
                                   *(undefined4 *)(lVar11 + lVar2),*(undefined4 *)(lVar11 + lVar1),
                                   *(undefined4 *)(lVar11 + lVar10),0);
      if (DAT_0377518b == '\0') {
        thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
        DAT_0377518b = '\x01';
      }
      fVar18 = fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000010 * fStack0000000000000010 +
               fStack0000000000000014 * fStack0000000000000014;
      if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar18) {
        fVar20 = fStack0000000000000018 * fStack0000000000000024 +
                 fStack0000000000000010 * fVar21 + fStack0000000000000014 * fStack0000000000000020;
        fVar21 = fVar21 - (fStack0000000000000010 * fVar20) / fVar18;
        fStack0000000000000020 = fStack0000000000000020 - (fStack0000000000000014 * fVar20) / fVar18
        ;
        fStack0000000000000024 = fStack0000000000000024 - (fStack0000000000000018 * fVar20) / fVar18
        ;
      }
      if (DAT_0377518c == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_0377518c = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar18 = SQRT(fStack0000000000000024 * fStack0000000000000024 +
                    fVar21 * fVar21 + fStack0000000000000020 * fStack0000000000000020);
      if (fVar18 <= fVar16) {
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        pfVar12 = *(float **)(*(long *)puVar4 + 0xb8);
        fVar21 = *pfVar12;
        fStack0000000000000020 = pfVar12[1];
        fStack0000000000000024 = pfVar12[2];
      }
      else {
        fVar21 = fVar21 / fVar18;
        fStack0000000000000020 = fStack0000000000000020 / fVar18;
        fStack0000000000000024 = fStack0000000000000024 / fVar18;
      }
      if (DAT_03775508 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03775508 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar16 = SQRT((fVar15 * fVar15 + fVar22 * fVar22 + fVar17 * fVar17) *
                    (fStack0000000000000024 * fStack0000000000000024 +
                    fVar21 * fVar21 + fStack0000000000000020 * fStack0000000000000020));
      fVar18 = 0.0;
      if (DAT_028aa5c8 <= fVar16) {
        fVar16 = (fVar15 * fStack0000000000000024 +
                 fVar17 * fVar21 + fVar22 * fStack0000000000000020) / fVar16;
        fVar18 = fVar16;
        if (1.0 < fVar16) {
          fVar18 = 1.0;
        }
        if (fVar16 < -1.0) {
          fVar18 = -1.0;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar19 = acos((double)fVar18);
        fVar18 = (float)dVar19 * DAT_028aa158;
      }
      plVar14 = *(long **)(unaff_x19 + 0x20);
      fVar16 = 1.0;
      if (fStack0000000000000018 * (fVar22 * fVar21 - fVar17 * fStack0000000000000020) +
          fStack0000000000000010 *
          (fVar15 * fStack0000000000000020 - fVar22 * fStack0000000000000024) +
          fStack0000000000000014 * (fVar17 * fStack0000000000000024 - fVar15 * fVar21) < 0.0) {
        fVar16 = -1.0;
      }
      if (plVar14 != (long *)0x0) {
        lVar10 = *plVar14;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x21) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01a016d4;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar14,*unaff_x21,0);
LAB_01a016d4:
        iVar7 = (*(code *)*puVar8)(plVar14,puVar8[1]);
        fVar15 = -(fVar16 * fVar18);
        if (iVar7 != 1) {
          fVar15 = fVar16 * fVar18;
        }
        if (-70.0 <= fVar15) {
          return fVar15;
        }
        return fVar15 + 360.0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


