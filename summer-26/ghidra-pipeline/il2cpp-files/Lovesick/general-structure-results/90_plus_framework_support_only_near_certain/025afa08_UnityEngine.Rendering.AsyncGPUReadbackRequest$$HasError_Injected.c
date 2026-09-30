/*
FUNCTION_NAME: UnityEngine.Rendering.AsyncGPUReadbackRequest$$HasError_Injected
ENTRY_POINT: 025afa08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x025afe24) */

undefined4
UnityEngine_Rendering_AsyncGPUReadbackRequest__HasError_Injected
          (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
          undefined8 param_6,long param_7)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x23;
  long *unaff_x24;
  uint unaff_w25;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_7) {
      puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 5) * 0x10 + 0x138);
      goto LAB_025afa2c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_025afa2c:
  uVar4 = (*(code *)*puVar3)();
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  bVar1 = *(byte *)(unaff_x19 + 0x19);
  uVar5 = (uint)bVar1;
  if ((uVar4 & 1) == 0) {
    if (unaff_w25 == 0) {
      if (bVar1 != 0) {
        if (*(char *)(unaff_x19 + 0x40) != '\0') {
          lVar6 = *(long *)(unaff_x19 + 0x38);
          if (lVar6 == 0) goto LAB_025aff28;
          *(undefined1 *)(lVar6 + 0x88) = *(undefined1 *)(unaff_x19 + 0x60);
          *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(unaff_x19 + 0x58);
        }
        plVar8 = *(long **)(unaff_x19 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_025aff28;
        lVar6 = *plVar8;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_025afbb8;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,2);
LAB_025afbb8:
        (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
        plVar8 = *(long **)(unaff_x19 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_025aff28;
        lVar6 = *plVar8;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_025afc48;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,3);
LAB_025afc48:
        (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
        if (*(char *)(unaff_x19 + 0x18) == '\0') {
          *(undefined1 *)(unaff_x19 + 0x30) = 1;
        }
      }
    }
    else if (bVar1 == 0) {
      if (*(char *)(unaff_x19 + 0x40) != '\0') {
        lVar6 = *(long *)(unaff_x19 + 0x38);
        if (lVar6 == 0) goto LAB_025aff28;
        *(undefined1 *)(unaff_x19 + 0x60) = *(undefined1 *)(lVar6 + 0x88);
        *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(lVar6 + 0x90);
        *(undefined1 *)(lVar6 + 0x88) = 1;
        *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(unaff_x19 + 0x78);
      }
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_025aff28;
      lVar6 = *plVar8;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x68);
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_025afb4c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,2);
LAB_025afb4c:
      (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_025aff28;
      lVar6 = *plVar8;
      uVar9 = *(undefined8 *)(unaff_x19 + 0x70);
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_025afc24;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar2,3);
LAB_025afc24:
      (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
    }
    *(char *)(unaff_x19 + 0x19) = (char)unaff_w25;
    uVar5 = unaff_w25;
  }
  if (uVar5 != 0) {
    if (unaff_x20 == 0) goto LAB_025aff28;
    fVar10 = (float)FUN_0269f578();
    fVar13 = param_3;
    fVar18 = param_4;
    FUN_0269f810();
    if (*(char *)(unaff_x19 + 0x18) == '\0') {
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 == (long *)0x0) goto LAB_025aff28;
      lVar6 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_025afd0c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x24,5);
LAB_025afd0c:
      uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if ((uVar4 & 1) != 0) {
        plVar8 = *(long **)(unaff_x19 + 0x28);
        if (plVar8 == (long *)0x0) goto LAB_025aff28;
        lVar6 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_025afd74;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x24,4);
LAB_025afd74:
        uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x70) != 0) {
            fVar11 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x70),0);
            fVar14 = fVar13;
            fVar17 = fVar18;
            if (DAT_03774e1b == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_03774e1b = '\x01';
            }
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (*(long *)(unaff_x19 + 0x48) != 0) {
              lVar6 = *(long *)(unaff_x19 + 0x68);
              fVar12 = (float)FUN_0269f578(*(long *)(unaff_x19 + 0x48),0);
              if (*(long *)(unaff_x19 + 0x48) != 0) {
                fVar18 = fVar18 - param_4;
                uVar19 = 0;
                fVar15 = fVar18 * fVar18;
                uVar16 = 0;
                fVar13 = SQRT(fVar15 + (fVar11 - fVar10) * (fVar11 - fVar10) +
                                       (fVar13 - param_3) * (fVar13 - param_3));
                fVar13 = fVar13 + fVar13;
                FUN_0269f810(*(long *)(unaff_x19 + 0x48),0);
                uVar9 = FUN_02698a98(0);
                if (lVar6 != 0) {
                  FUN_026a01f4(fVar12 + fVar13 * (fVar10 - fVar12),
                               fVar14 + fVar13 * (param_3 - fVar14),
                               fVar17 + fVar13 * (param_4 - fVar17),uVar9,CONCAT44(uVar16,fVar15),
                               CONCAT44(uVar19,fVar18),param_5,lVar6,0);
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


