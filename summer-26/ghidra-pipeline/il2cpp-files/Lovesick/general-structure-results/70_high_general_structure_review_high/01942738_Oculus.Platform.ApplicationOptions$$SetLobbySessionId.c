/*
FUNCTION_NAME: Oculus.Platform.ApplicationOptions$$SetLobbySessionId
ENTRY_POINT: 01942738
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


undefined8 Oculus_Platform_ApplicationOptions__SetLobbySessionId(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 in_stack_00000000;
  
  if (param_1 == 0) goto LAB_01942ab4;
  if (*(uint *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(unaff_x23 + 0x24);
    uVar2 = iVar1 - 1;
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      fVar11 = *(float *)(param_1 + 0x20);
      fVar15 = *(float *)(param_1 + 0x24);
      fVar13 = *(float *)(param_1 + 0x28);
      pfVar5 = (float *)(param_1 + 0x20) + (long)(int)uVar2 * 3;
      fVar17 = *pfVar5;
      fVar18 = pfVar5[1];
      fVar19 = pfVar5[2];
      lVar9 = *(long *)(unaff_x23 + 0x130);
      if (*(char *)(unaff_x22 + 0xe1b) == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        *(undefined1 *)(unaff_x22 + 0xe1b) = 1;
      }
      puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar9 != 0) {
        uVar3 = iVar1 - 2;
        if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_01942ab8;
        fVar11 = fVar11 - fVar17;
        fVar15 = fVar15 - fVar18;
        fVar13 = fVar13 - fVar19;
        fVar17 = SQRT(fVar11 * fVar11 + fVar15 * fVar15 + fVar13 * fVar13);
        *(float *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = fVar17;
        lVar9 = *(long *)(unaff_x23 + 0x48);
        if (lVar9 != 0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01942ab8;
          lVar9 = lVar9 + (long)(int)uVar2 * 0xc;
          uVar12 = *(undefined4 *)(lVar9 + 0x20);
          uVar14 = *(undefined4 *)(lVar9 + 0x24);
          uVar16 = *(undefined4 *)(lVar9 + 0x28);
          if (DAT_0377518c == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_0377518c = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (fVar17 <= DAT_028aa038) {
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            pfVar5 = *(float **)
                      (*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
            fVar11 = *pfVar5;
            fVar15 = pfVar5[1];
            fVar13 = pfVar5[2];
          }
          else {
            fVar11 = fVar11 / fVar17;
            fVar15 = fVar15 / fVar17;
            fVar13 = fVar13 / fVar17;
          }
          FUN_01942bc0(uVar12,uVar14,uVar16,fVar11,fVar15,fVar13,0,unaff_x19 + 0x30);
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            lVar9 = *(long *)(unaff_x23 + 0x58);
            iVar1 = *(int *)(unaff_x23 + 0x24);
            uVar14 = *(undefined4 *)(unaff_x19 + 0x40);
            uVar16 = *(undefined4 *)(unaff_x19 + 0x44);
            uVar12 = *(undefined4 *)(unaff_x19 + 0x3c);
            FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar2);
            uVar12 = FUN_02698e08(uVar12,0);
            if (lVar9 != 0) {
              uVar2 = iVar1 - 1;
              if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01942ab8;
              lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
              *(undefined4 *)(lVar9 + 0x20) = uVar12;
              *(undefined4 *)(lVar9 + 0x24) = uVar14;
              *(undefined4 *)(lVar9 + 0x28) = uVar16;
              *(undefined4 *)(lVar9 + 0x2c) = in_stack_00000000;
              lVar9 = *(long *)(unaff_x23 + 0x58);
              if (lVar9 != 0) {
                uVar2 = *(int *)(unaff_x23 + 0x24) - 1;
                if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01942ab8;
                lVar7 = *(long *)(unaff_x23 + 0x60);
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_01942ab8;
                  lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
                  uVar10 = *(undefined8 *)(lVar9 + 0x20);
                  lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
                  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
                  *(undefined8 *)(lVar7 + 0x20) = uVar10;
                  lVar9 = *(long *)(unaff_x23 + 0x130);
                  if (lVar9 != 0) {
                    uVar2 = *(int *)(unaff_x23 + 0x24) - 2;
                    if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_01942ab8;
                    uVar12 = *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20);
                    if (*(char *)(unaff_x24 + 0xf00) == '\0') {
                      thunk_FUN_00d48444(
                                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                        );
                      *(undefined1 *)(unaff_x24 + 0xf00) = 1;
                    }
                    puVar6 = *(undefined4 **)
                              (*(long *)
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                              + 0xb8);
                    FUN_018ffaa8(uVar12,*puVar6,puVar6[1],puVar6[2],puVar6[3]);
                    *(int *)(unaff_x20 + 0x24) = *(int *)(unaff_x20 + 0x24) + 1;
                    lVar9 = *(long *)(unaff_x23 + 0x130);
                    *(undefined4 *)(unaff_x23 + 0x128) = 0;
                    if (lVar9 != 0) {
                      uVar2 = *(uint *)(lVar9 + 0x18);
                      if (0 < (long)((ulong)uVar2 << 0x20)) {
                        uVar8 = 0;
                        fVar11 = 0.0;
                        do {
                          if (uVar2 == uVar8) goto LAB_01942ab8;
                          lVar7 = uVar8 * 4;
                          uVar8 = uVar8 + 1;
                          fVar11 = *(float *)(lVar9 + 0x20 + lVar7) + fVar11;
                          *(float *)(unaff_x23 + 0x128) = fVar11;
                        } while ((long)uVar8 < (long)(int)uVar2);
                      }
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_01942ab4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_01942ab8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


