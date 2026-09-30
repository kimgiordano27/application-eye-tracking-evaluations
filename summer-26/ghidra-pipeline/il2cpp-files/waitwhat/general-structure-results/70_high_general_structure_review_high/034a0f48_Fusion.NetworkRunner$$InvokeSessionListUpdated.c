/*
FUNCTION_NAME: Fusion.NetworkRunner$$InvokeSessionListUpdated
ENTRY_POINT: 034a0f48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Fusion_NetworkRunner__InvokeSessionListUpdated(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar10;
  long *unaff_x25;
  undefined8 uVar11;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_02d34dac(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_032a9e8c(param_1);
  }
  plVar6 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar6;
  in_stack_00000008 = lVar10;
  __cxa_end_catch();
  plVar6 = (long *)*in_stack_00000010;
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_070c2e88) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034a0b9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_070c2e88,0);
LAB_034a0b9c:
    (*(code *)*puVar3)(plVar6,puVar3[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd0(lVar10);
  }
  lVar10 = FUN_034a14b0();
  if (lVar10 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070cab90);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar11 = 0x6d;
  }
  else {
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar7 = *unaff_x25;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar7 == 0) {
LAB_034a0ec0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar8 = FUN_034972b8(lVar7,lVar10,0);
    if ((uVar8 & 1) != 0) {
      plVar6 = *(long **)(unaff_x19 + 0xb0);
      if (plVar6 == (long *)0x0) goto LAB_034a0ec0;
      uVar4 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x25);
      }
      uVar8 = FUN_03496b10(uVar4,lVar10,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar8 = FUN_034a151c(unaff_w20,lVar10);
        puVar1 = PTR_DAT_070ccf48;
        if ((uVar8 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0xc0) != 0) {
            uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0xc0) + 0x18);
            if (*(int *)(*unaff_x26 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar8 = FUN_03485028(uVar4,1,0);
            if ((uVar8 & 1) == 0) {
              plVar6 = *(long **)(unaff_x19 + 0xa8);
              *(undefined8 *)(unaff_x19 + 0xc0) = 0;
              if (plVar6 == (long *)0x0) goto LAB_034a0ec0;
              lVar7 = *plVar6;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
                    goto LAB_034a0ce4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar1,10);
LAB_034a0ce4:
              (*(code *)*puVar3)(plVar6,0,puVar3[1]);
            }
          }
          uVar2 = FUN_034a163c();
          uVar4 = *(undefined8 *)(unaff_x21 + 0xf0);
          uVar11 = *(undefined8 *)(unaff_x19 + 0xb8);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_031e5338(*unaff_x27);
          }
          uVar8 = FUN_034a16ac(lVar10,uVar4,uVar11,uVar2);
          if ((uVar8 & 1) != 0) {
            uVar5 = FUN_034a17ec();
            lVar7 = *unaff_x27;
            *(long *)(unaff_x21 + 0x128) = lVar10;
            uVar4 = *(undefined8 *)(unaff_x19 + 0xa8);
            uVar11 = *(undefined8 *)(unaff_x19 + 0xb0);
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_034a1858(uVar11,uVar4);
            lVar10 = *unaff_x27;
            plVar6 = *(long **)(unaff_x19 + 0xa8);
            *(undefined1 *)(unaff_x21 + 0x14) = 0;
            uVar4 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20);
            *(undefined8 *)(unaff_x21 + 0x90) = uVar4;
            if (plVar6 != (long *)0x0) {
              lVar10 = *plVar6;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                    goto LAB_034a0dd0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar1,8);
LAB_034a0dd0:
              (*(code *)*puVar3)(plVar6,uVar4,puVar3[1]);
              FUN_034a1a14();
              plVar6 = *(long **)(unaff_x19 + 0xa8);
              if (plVar6 != (long *)0x0) {
                lVar10 = *plVar6;
                uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                      puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                      goto LAB_034a0e44;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar1,9);
LAB_034a0e44:
                (*(code *)*puVar3)(plVar6,unaff_w20,puVar3[1]);
                *(undefined8 *)(unaff_x19 + 0xb8) = 0;
                *(undefined8 *)(unaff_x19 + 0x70) = uVar5;
                *(undefined4 *)(unaff_x19 + 0x78) = uVar2;
                return;
              }
            }
            goto LAB_034a0ec0;
          }
        }
      }
    }
    thunk_FUN_031edd38(PTR_DAT_070cab90);
    uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar11 = 0x2f;
  }
  FUN_03499dbc(uVar4,uVar11);
  uVar11 = thunk_FUN_031edd38(PTR_DAT_070cd098);
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar4,uVar11);
}


