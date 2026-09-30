/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceAvailable
ENTRY_POINT: 0369dfd4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceAvailable
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_01ecb238();
      goto LAB_0369e008;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
LAB_0369e008:
  (*(code *)*puVar2)();
  if (unaff_x20 == 0) goto LAB_0369e1bc;
  FUN_0407d468();
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__;
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    lVar3 = FUN_04070398();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0369e1bc;
    FUN_0407bae8(*(long *)(unaff_x19 + 0x20),0);
  }
  else {
    plVar7 = *(long **)(unaff_x19 + 0x50);
    if (plVar7 == (long *)0x0) goto LAB_0369e1bc;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0369e0cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__,1);
LAB_0369e0cc:
    (*(code *)*puVar2)(plVar7,unaff_x19 + 0x3c,puVar2[1]);
    lVar3 = FUN_04070398();
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0369e1bc;
    plVar7 = *(long **)(unaff_x19 + 0x50);
    uVar8 = FUN_0407bae8(*(long *)(unaff_x19 + 0x20),0);
    uVar9 = FUN_0407a33c(0);
    if (plVar7 == (long *)0x0) goto LAB_0369e1bc;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0369e174;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,2);
LAB_0369e174:
    (*(code *)*puVar2)(uVar8,unaff_d9,unaff_d10,unaff_d11,uVar9,plVar7,puVar2[1]);
  }
  if (lVar3 != 0) {
    FUN_0407d5e8(lVar3,0);
    return;
  }
LAB_0369e1bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


