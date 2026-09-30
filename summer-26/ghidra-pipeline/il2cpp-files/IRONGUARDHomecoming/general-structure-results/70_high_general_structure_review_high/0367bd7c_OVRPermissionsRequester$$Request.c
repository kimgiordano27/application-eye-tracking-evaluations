/*
FUNCTION_NAME: OVRPermissionsRequester$$Request
ENTRY_POINT: 0367bd7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16] OVRPermissionsRequester__Request(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *plVar6;
  float fVar7;
  float extraout_s0;
  undefined4 uVar9;
  undefined4 extraout_var;
  undefined8 uVar10;
  undefined1 auVar8 [16];
  undefined8 extraout_var_00;
  
  plVar6 = *(long **)(unaff_x20 + 0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)
           Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0367bf74;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                        ,0);
LAB_0367bf74:
  iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
  }
  FUN_0407bb40();
  fVar7 = extraout_s0;
  uVar9 = extraout_var;
  uVar10 = extraout_var_00;
  if (iVar1 == 0) {
    fVar7 = -extraout_s0;
    uVar9 = 0;
    uVar10 = 0;
  }
  auVar8._4_4_ = uVar9;
  auVar8._0_4_ = fVar7;
  auVar8._8_8_ = uVar10;
  return auVar8;
}


