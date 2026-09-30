/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetEyeTextureArrayEnabled
ENTRY_POINT: 0369de7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetEyeTextureArrayEnabled
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_04833f42 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__);
    DAT_04833f42 = 1;
  }
  if (*(char *)(param_5 + 0x28) == '\0') {
    lVar3 = FUN_04070398(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0369e1bc;
    FUN_0407d3c8(*(long *)(param_5 + 0x20),0);
  }
  else {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0369e1bc;
    FUN_0407d3c8(*(long *)(param_5 + 0x20),0);
    puVar1 = Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__;
    plVar7 = *(long **)(param_5 + 0x48);
    if (plVar7 == (long *)0x0) goto LAB_0369e1bc;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0369df64;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_VisualScripting_ModuloHandler_<>c_<_ctor>b__0_10__,1)
    ;
LAB_0369df64:
    (*(code *)*puVar2)(plVar7,param_5 + 0x2c,puVar2[1]);
    lVar3 = FUN_04070398(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0369e1bc;
    plVar7 = *(long **)(param_5 + 0x48);
    uVar8 = FUN_0407d3c8(*(long *)(param_5 + 0x20),0);
    param_4 = FUN_0407a33c(0);
    if (plVar7 == (long *)0x0) goto LAB_0369e1bc;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0369e008;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,2);
LAB_0369e008:
    (*(code *)*puVar2)(uVar8,param_2,param_3,param_4,plVar7,puVar2[1]);
  }
  if (lVar3 == 0) goto LAB_0369e1bc;
  FUN_0407d468(lVar3,0);
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_37__;
  if (*(char *)(param_5 + 0x38) == '\0') {
    lVar3 = FUN_04070398(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0369e1bc;
    FUN_0407bae8(*(long *)(param_5 + 0x20),0);
  }
  else {
    plVar7 = *(long **)(param_5 + 0x50);
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
    (*(code *)*puVar2)(plVar7,param_5 + 0x3c,puVar2[1]);
    lVar3 = FUN_04070398(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0369e1bc;
    plVar7 = *(long **)(param_5 + 0x50);
    uVar8 = FUN_0407bae8(*(long *)(param_5 + 0x20),0);
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
    (*(code *)*puVar2)(uVar8,param_2,param_3,param_4,uVar9,plVar7,puVar2[1]);
  }
  if (lVar3 != 0) {
    FUN_0407d5e8(lVar3,0);
    return;
  }
LAB_0369e1bc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


