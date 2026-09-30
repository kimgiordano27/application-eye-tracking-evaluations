/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 0369df6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices
               (code *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  (*param_1)();
  lVar2 = FUN_04070398();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar7 = *(long **)(unaff_x19 + 0x48);
    uVar8 = FUN_0407d3c8(*(long *)(unaff_x19 + 0x20),0);
    uVar9 = FUN_0407a33c(0);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0369e008;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x22,2);
LAB_0369e008:
      (*(code *)*puVar3)(uVar8,param_3,param_4,uVar9,plVar7,puVar3[1]);
      if (lVar2 != 0) {
        FUN_0407d468(lVar2,0);
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__;
        if (*(char *)(unaff_x19 + 0x38) == '\0') {
          lVar2 = FUN_04070398();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0369e1bc;
          FUN_0407bae8(*(long *)(unaff_x19 + 0x20),0);
        }
        else {
          plVar7 = *(long **)(unaff_x19 + 0x50);
          if (plVar7 == (long *)0x0) goto LAB_0369e1bc;
          lVar2 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0369e0cc;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(plVar7,*(long *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__,
                                1);
LAB_0369e0cc:
          (*(code *)*puVar3)(plVar7,unaff_x19 + 0x3c,puVar3[1]);
          lVar2 = FUN_04070398();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0369e1bc;
          plVar7 = *(long **)(unaff_x19 + 0x50);
          uVar8 = FUN_0407bae8(*(long *)(unaff_x19 + 0x20),0);
          uVar10 = FUN_0407a33c(0);
          if (plVar7 == (long *)0x0) goto LAB_0369e1bc;
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_0369e174;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,2);
LAB_0369e174:
          (*(code *)*puVar3)(uVar8,param_3,param_4,uVar9,uVar10,plVar7,puVar3[1]);
        }
        if (lVar2 != 0) {
          FUN_0407d5e8(lVar2,0);
          return;
        }
      }
    }
  }
LAB_0369e1bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


