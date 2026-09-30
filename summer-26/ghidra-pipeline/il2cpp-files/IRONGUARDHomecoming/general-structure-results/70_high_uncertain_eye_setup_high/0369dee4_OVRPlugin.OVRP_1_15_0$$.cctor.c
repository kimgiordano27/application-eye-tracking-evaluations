/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$.cctor
ENTRY_POINT: 0369dee4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0___cctor
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  plVar9 = *(long **)(unaff_x22 + 0x2d0);
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *plVar9) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0369df64;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0369df64:
  (*(code *)*puVar2)();
  lVar3 = FUN_04070398();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x48);
    uVar10 = FUN_0407d3c8(*(long *)(unaff_x19 + 0x20),0);
    uVar11 = FUN_0407a33c(0);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      lVar4 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0369e008;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar8,lVar4,2);
LAB_0369e008:
      (*(code *)*puVar2)(uVar10,param_3,param_4,uVar11,plVar8,puVar2[1]);
      if (lVar3 != 0) {
        FUN_0407d468(lVar3,0);
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__;
        if (*(char *)(unaff_x19 + 0x38) == '\0') {
          lVar3 = FUN_04070398();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0369e1bc;
          FUN_0407bae8(*(long *)(unaff_x19 + 0x20),0);
        }
        else {
          plVar9 = *(long **)(unaff_x19 + 0x50);
          if (plVar9 == (long *)0x0) goto LAB_0369e1bc;
          lVar3 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0369e0cc;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_01ecb238(plVar9,*(long *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__,
                                1);
LAB_0369e0cc:
          (*(code *)*puVar2)(plVar9,unaff_x19 + 0x3c,puVar2[1]);
          lVar3 = FUN_04070398();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0369e1bc;
          plVar9 = *(long **)(unaff_x19 + 0x50);
          uVar10 = FUN_0407bae8(*(long *)(unaff_x19 + 0x20),0);
          uVar12 = FUN_0407a33c(0);
          if (plVar9 == (long *)0x0) goto LAB_0369e1bc;
          lVar4 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_0369e174;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,2);
LAB_0369e174:
          (*(code *)*puVar2)(uVar10,param_3,param_4,uVar11,uVar12,plVar9,puVar2[1]);
        }
        if (lVar3 != 0) {
          FUN_0407d5e8(lVar3,0);
          return;
        }
      }
    }
  }
LAB_0369e1bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


