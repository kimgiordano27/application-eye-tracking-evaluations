/*
FUNCTION_NAME: UnityEngine.Rendering.AsyncGPUReadbackRequest$$WaitForCompletion_Injected
ENTRY_POINT: 025af8a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x025afe24) */

undefined4
UnityEngine_Rendering_AsyncGPUReadbackRequest__WaitForCompletion_Injected
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int in_w8;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar10;
  undefined8 uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float unaff_s8;
  
  puVar1 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (in_w8 != 0) {
    if ((unaff_x21 & 1) == 0) {
      if (unaff_x20 == 0) goto LAB_025aff28;
      fVar18 = (float)FUN_0269fb58();
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_025aff28;
      fVar24 = param_2;
      fVar15 = param_3;
      fVar13 = (float)FUN_0269fb58(*(long *)(unaff_x19 + 0x48),0);
      fVar23 = fVar15;
      if (DAT_03775508 == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03775508 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar14 = SQRT((param_3 * param_3 + fVar18 * fVar18 + param_2 * param_2) *
                    (fVar15 * fVar15 + fVar13 * fVar13 + fVar24 * fVar24));
      fVar20 = 0.0;
      if (DAT_028aa5c8 <= fVar14) {
        fVar14 = (param_3 * fVar15 + fVar18 * fVar13 + param_2 * fVar24) / fVar14;
        fVar23 = -1.0;
        fVar18 = fVar14;
        if (1.0 < fVar14) {
          fVar18 = 1.0;
        }
        if (fVar14 < -1.0) {
          fVar18 = -1.0;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        dVar19 = acos((double)fVar18);
        fVar20 = (float)dVar19 * DAT_028aa158;
      }
      bVar12 = unaff_s8 < fVar20;
    }
    else {
      bVar12 = false;
      fVar20 = param_2;
      fVar23 = param_3;
    }
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__;
    plVar10 = *(long **)(unaff_x19 + 0x28);
    if (plVar10 == (long *)0x0) goto LAB_025aff28;
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_025afa2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmin_s8__,5);
LAB_025afa2c:
    uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    puVar2 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    cVar5 = *(char *)(unaff_x19 + 0x19);
    if ((uVar8 & 1) == 0) {
      if (bVar12 == false) {
        if (cVar5 != '\0') {
          if (*(char *)(unaff_x19 + 0x40) != '\0') {
            lVar6 = *(long *)(unaff_x19 + 0x38);
            if (lVar6 == 0) goto LAB_025aff28;
            *(undefined1 *)(lVar6 + 0x88) = *(undefined1 *)(unaff_x19 + 0x60);
            *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(unaff_x19 + 0x58);
          }
          plVar10 = *(long **)(unaff_x19 + 0x20);
          if (plVar10 == (long *)0x0) goto LAB_025aff28;
          lVar6 = *plVar10;
          uVar11 = *(undefined8 *)(unaff_x19 + 0x48);
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_025afbb8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,2);
LAB_025afbb8:
          (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
          plVar10 = *(long **)(unaff_x19 + 0x20);
          if (plVar10 == (long *)0x0) goto LAB_025aff28;
          lVar6 = *plVar10;
          uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_025afc48;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,3);
LAB_025afc48:
          (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
          if (*(char *)(unaff_x19 + 0x18) == '\0') {
            *(undefined1 *)(unaff_x19 + 0x30) = 1;
          }
        }
      }
      else if (cVar5 == '\0') {
        if (*(char *)(unaff_x19 + 0x40) != '\0') {
          lVar6 = *(long *)(unaff_x19 + 0x38);
          if (lVar6 == 0) goto LAB_025aff28;
          *(undefined1 *)(unaff_x19 + 0x60) = *(undefined1 *)(lVar6 + 0x88);
          *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(lVar6 + 0x90);
          *(undefined1 *)(lVar6 + 0x88) = 1;
          *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(unaff_x19 + 0x78);
        }
        plVar10 = *(long **)(unaff_x19 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_025aff28;
        lVar6 = *plVar10;
        uVar11 = *(undefined8 *)(unaff_x19 + 0x68);
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_025afb4c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,2);
LAB_025afb4c:
        (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
        plVar10 = *(long **)(unaff_x19 + 0x20);
        if (plVar10 == (long *)0x0) goto LAB_025aff28;
        lVar6 = *plVar10;
        uVar11 = *(undefined8 *)(unaff_x19 + 0x70);
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_025afc24;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,3);
LAB_025afc24:
        (*(code *)*puVar4)(plVar10,uVar11,puVar4[1]);
      }
      *(bool *)(unaff_x19 + 0x19) = bVar12;
      cVar5 = bVar12;
    }
    if (cVar5 == '\0') {
      return 0;
    }
    if (unaff_x20 == 0) goto LAB_025aff28;
    fVar15 = (float)FUN_0269f578();
    fVar18 = fVar20;
    fVar24 = fVar23;
    FUN_0269f810();
    if (*(char *)(unaff_x19 + 0x18) == '\0') {
      plVar10 = *(long **)(unaff_x19 + 0x28);
      if (plVar10 == (long *)0x0) goto LAB_025aff28;
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_025afd0c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724(plVar10,lVar6,5);
LAB_025afd0c:
      uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if ((uVar8 & 1) != 0) {
        plVar10 = *(long **)(unaff_x19 + 0x28);
        if (plVar10 == (long *)0x0) goto LAB_025aff28;
        lVar7 = *plVar10;
        lVar6 = *(long *)puVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_025afd74;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724(plVar10,lVar6,4);
LAB_025afd74:
        uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if ((uVar8 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x70) != 0) {
            fVar16 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x70),0);
            fVar13 = fVar18;
            fVar14 = fVar24;
            if (DAT_03774e1b == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774e1b = '\x01';
            }
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              lVar6 = *(long *)(unaff_x19 + 0x68);
              fVar17 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x48),0);
              if (*(long *)(unaff_x19 + 0x48) != 0) {
                fVar24 = fVar24 - fVar23;
                uVar25 = 0;
                fVar21 = fVar24 * fVar24;
                uVar22 = 0;
                fVar18 = SQRT(fVar21 + (fVar16 - fVar15) * (fVar16 - fVar15) +
                                       (fVar18 - fVar20) * (fVar18 - fVar20));
                fVar18 = fVar18 + fVar18;
                FUN_0269f810(*(long *)(unaff_x19 + 0x48),0);
                uVar11 = FUN_02698a98(0);
                if (lVar6 != 0) {
                  FUN_026a01f4(fVar17 + fVar18 * (fVar15 - fVar17),
                               fVar13 + fVar18 * (fVar20 - fVar13),
                               fVar14 + fVar18 * (fVar23 - fVar14),uVar11,CONCAT44(uVar22,fVar21),
                               CONCAT44(uVar25,fVar24),param_4,lVar6,0);
                  if (*(char *)(unaff_x19 + 0x40) == '\0') {
                    return 1;
                  }
                  if (*(long *)(unaff_x19 + 0x38) != 0) {
                    FUN_02689f9c(*(long *)(unaff_x19 + 0x38),1,0);
                    return 1;
                  }
                }
              }
            }
          }
          goto LAB_025aff28;
        }
      }
    }
    if ((*(char *)(unaff_x19 + 0x40) != '\0') && (*(char *)(unaff_x19 + 0x18) == '\0')) {
      if (*(long *)(unaff_x19 + 0x38) == 0) {
LAB_025aff28:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_02689f9c(*(long *)(unaff_x19 + 0x38),0,0);
    }
  }
  return 0;
}


