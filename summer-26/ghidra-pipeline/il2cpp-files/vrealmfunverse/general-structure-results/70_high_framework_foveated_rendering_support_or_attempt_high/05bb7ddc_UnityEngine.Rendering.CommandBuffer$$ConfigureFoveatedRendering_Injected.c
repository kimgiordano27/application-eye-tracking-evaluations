/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected
ENTRY_POINT: 05bb7ddc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_12;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering_Injected(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  
  thunk_FUN_02b9ad44();
  FUN_04d8a7b0(unaff_x20 + 0x20,0);
  lVar4 = *unaff_x24;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar4);
    lVar4 = *unaff_x24;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  if (puVar5[6] == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar4);
      puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar10 = *puVar5;
    uVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631f850);
    FUN_05bb6fbc(uVar2,uVar10,*(undefined8 *)Method_LitJson_Lexer_State3__);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x30);
    *puVar5 = uVar2;
    thunk_FUN_02bb0e9c(puVar5,uVar2);
  }
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_05bb7ec0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c();
LAB_05bb7ec0:
    (*(code *)*puVar5)();
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *unaff_x23;
    }
    lVar9 = *(long *)(unaff_x25 + 0x38);
    plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_04d8a7b0(lVar9 + 0x20,0);
    lVar4 = *unaff_x24;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar4);
      lVar4 = *unaff_x24;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar5[7];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar4);
        puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
      }
      uVar10 = *puVar5;
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631f850);
      FUN_05bb6fbc(lVar9,uVar10,*(undefined8 *)Method_LitJson_Lexer_State4__);
      plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x38);
      *plVar3 = lVar9;
      thunk_FUN_02bb0e9c(plVar3,lVar9);
    }
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_05bb7fe8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x26,1);
LAB_05bb7fe8:
      (*(code *)*puVar5)(plVar8,uVar2,lVar9,puVar5[1]);
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *unaff_x23;
      }
      lVar9 = *(long *)(unaff_x25 + 0x40);
      plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0xe0));
      }
      uVar2 = FUN_04d8a7b0(lVar9 + 0x20,0);
      lVar4 = *unaff_x24;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar4);
        lVar4 = *unaff_x24;
      }
      puVar5 = *(undefined8 **)(lVar4 + 0xb8);
      lVar9 = puVar5[8];
      if (lVar9 == 0) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar4);
          puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
        }
        uVar10 = *puVar5;
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631f850);
        FUN_05bb6fbc(lVar9,uVar10,*(undefined8 *)Method_LitJson_Lexer_State5__);
        plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x40);
        *plVar3 = lVar9;
        thunk_FUN_02bb0e9c(plVar3,lVar9);
      }
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_05bb8110;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x26,1);
LAB_05bb8110:
        (*(code *)*puVar5)(plVar8,uVar2,lVar9,puVar5[1]);
        lVar4 = *unaff_x23;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar4 = *unaff_x23;
        }
        lVar9 = *(long *)(unaff_x25 + 0x50);
        plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0xe0));
        }
        uVar2 = FUN_04d8a7b0(lVar9 + 0x20,0);
        lVar4 = *unaff_x24;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar4);
          lVar4 = *unaff_x24;
        }
        puVar5 = *(undefined8 **)(lVar4 + 0xb8);
        lVar9 = puVar5[9];
        if (lVar9 == 0) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(lVar4);
            puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
          }
          uVar10 = *puVar5;
          lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631f850);
          FUN_05bb6fbc(lVar9,uVar10,*(undefined8 *)Method_LitJson_Lexer_State6__);
          plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x48);
          *plVar3 = lVar9;
          thunk_FUN_02bb0e9c(plVar3,lVar9);
        }
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x26) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_05bb8238;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x26,1);
LAB_05bb8238:
          (*(code *)*puVar5)(plVar8,uVar2,lVar9,puVar5[1]);
          lVar4 = *unaff_x23;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *unaff_x23;
          }
          lVar9 = *(long *)(unaff_x25 + 0x70);
          plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0xe0));
          }
          uVar2 = FUN_04d8a7b0(lVar9 + 0x20,0);
          lVar4 = *unaff_x24;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(lVar4);
            lVar4 = *unaff_x24;
          }
          puVar5 = *(undefined8 **)(lVar4 + 0xb8);
          lVar9 = puVar5[10];
          if (lVar9 == 0) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44(lVar4);
              puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
            }
            uVar10 = *puVar5;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631f850);
            FUN_05bb6fbc(lVar9,uVar10,*(undefined8 *)Method_LitJson_Lexer_State7__);
            plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x50);
            *plVar3 = lVar9;
            thunk_FUN_02bb0e9c(plVar3,lVar9);
          }
          if (plVar8 != (long *)0x0) {
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *unaff_x26) {
                  puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_05bb8360;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar5 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x26,1);
LAB_05bb8360:
            puVar1 = PTR_DAT_0631e420;
            (*(code *)*puVar5)(plVar8,uVar2,lVar9,puVar5[1]);
            lVar4 = *unaff_x23;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar4 = *unaff_x23;
            }
            uVar2 = *(undefined8 *)puVar1;
            plVar8 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x10);
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02b9ad44(*(long *)(unaff_x25 + 0xe0));
            }
            uVar2 = FUN_04d8a7b0(uVar2,0);
            lVar4 = *unaff_x24;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44(lVar4);
              lVar4 = *unaff_x24;
            }
            puVar5 = *(undefined8 **)(lVar4 + 0xb8);
            lVar9 = puVar5[0xb];
            if (lVar9 == 0) {
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02b9ad44(lVar4);
                puVar5 = *(undefined8 **)(*unaff_x24 + 0xb8);
              }
              uVar10 = *puVar5;
              lVar9 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631f850);
              FUN_05bb6fbc(lVar9,uVar10,*(undefined8 *)Method_LitJson_Lexer_State8__);
              plVar3 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x58);
              *plVar3 = lVar9;
              thunk_FUN_02bb0e9c(plVar3,lVar9);
            }
            if (plVar8 != (long *)0x0) {
              lVar4 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *unaff_x26) {
                    puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_05bb8490;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02b7654c(plVar8,*unaff_x26,1);
LAB_05bb8490:
                    /* WARNING: Could not recover jumptable at 0x05bb84b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar5)(plVar8,uVar2,lVar9,puVar5[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


