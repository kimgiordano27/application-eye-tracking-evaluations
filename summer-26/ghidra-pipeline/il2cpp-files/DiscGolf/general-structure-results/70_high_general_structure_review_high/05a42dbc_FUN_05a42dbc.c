/*
FUNCTION_NAME: FUN_05a42dbc
ENTRY_POINT: 05a42dbc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


long * FUN_05a42dbc(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  
  if ((DAT_06dc19ea & 1) == 0) {
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_Manager_TweakManager_<>c_TypeInfo);
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c_TypeInfo);
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t_TypeInfo
                );
    FUN_02d965b8(
                Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t_TypeInfo
                );
    FUN_02d965b8(UnityWebSocketSharp_WebSocketFrame_<>c__DisplayClass71_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a11590);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_0000119A_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo);
    FUN_02d965b8(UnityWebSocketSharp_WebSocketFrame_<>c__DisplayClass75_0_TypeInfo);
    DAT_06dc19ea = 1;
  }
  (**(code **)(*param_1 + 0x238))(param_1,param_2,*(undefined8 *)(*param_1 + 0x240));
  FUN_05a3fb6c(param_1,1);
  puVar2 = PTR_DAT_06a11590;
  if (param_1[0xf] == 0) {
LAB_05a432e0:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar10 = *(undefined8 *)(param_1[0xf] + 0x18);
  lVar3 = *(long *)PTR_DAT_06a11590;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *(long *)puVar2;
  }
  uVar4 = FUN_0536ba54(uVar10,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x208),0);
  if ((uVar4 & 1) != 0) {
    if (param_2 != 0) {
      FUN_05a509cc(param_2,0);
      if (param_1[0xf] != 0) {
        lVar3 = FUN_05a425e0(param_1,*(undefined8 *)(param_1[0xf] + 0x18));
        puVar2 = 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_0000119A_PostfixBurstDelegate_TypeInfo
        ;
        lVar5 = thunk_FUN_02dd3048(lVar3,*(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateStabilizedLerp_0000119A_PostfixBurstDelegate_TypeInfo
                                  );
        if (lVar5 == 0) {
          plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                               Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t_TypeInfo
                                             );
          FUN_04bad87c(plVar6,lVar3,
                       *(undefined8 *)
                        Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t_TypeInfo
                      );
        }
        else {
          if (lVar3 == 0) goto LAB_05a432e0;
          uVar10 = *(undefined8 *)puVar2;
          plVar6 = (long *)thunk_FUN_02dd3048(lVar3,uVar10);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(lVar3,uVar10);
          }
        }
        if ((param_1[0xf] != 0) && (plVar6 != (long *)0x0)) {
          lVar5 = *plVar6;
          uVar10 = *(undefined8 *)(param_1[0xf] + 0x18);
          lVar3 = *(long *)puVar2;
          uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar3) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
                goto LAB_05a42fdc;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_02dd004c(plVar6,lVar3,0xc);
LAB_05a42fdc:
          (*(code *)*puVar7)(plVar6,uVar10,puVar7[1]);
          return plVar6;
        }
      }
    }
    goto LAB_05a432e0;
  }
  lVar3 = param_1[0xf];
  if (lVar3 == 0) goto LAB_05a432e0;
  if (*(char *)(lVar3 + 0x38) == '\0') {
    lVar5 = *(long *)(lVar3 + 0x20);
    if (lVar5 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar3 + 0x28);
    }
    uVar4 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x2b0));
    if ((uVar4 & 1) != 0) {
LAB_05a43024:
      FUN_05a4277c(param_2);
      plVar6 = (long *)FUN_05a432e4(param_1,param_2,lVar5,uVar10);
      return plVar6;
    }
    if (param_1[0xf] == 0) goto LAB_05a432e0;
    if (*(long *)(param_1[0xf] + 0x58) != 0) {
LAB_05a43060:
      FUN_05a4277c(param_2);
      plVar6 = (long *)FUN_05a437ac(param_1,param_2,lVar5,uVar10);
      return plVar6;
    }
    uVar4 = (**(code **)(*param_1 + 0x2b8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x2c0));
    if ((uVar4 & 1) != 0) {
LAB_05a430a8:
      FUN_05a4277c(param_2);
      plVar6 = (long *)FUN_05a43a30(param_1,param_2,lVar5,uVar10);
      return plVar6;
    }
    plVar6 = (long *)(**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_05a43c28(param_1,param_2,lVar5,uVar10);
      return plVar6;
    }
    lVar3 = *plVar6;
    if (lVar3 == *(long *)UnityWebSocketSharp_WebSocketFrame_<>c__DisplayClass75_0_TypeInfo) {
      plVar6 = (long *)FUN_05a43eac(param_1,param_2,lVar5,uVar10);
      return plVar6;
    }
    uVar4 = (**(code **)(lVar3 + 0x1b8))(plVar6,*(undefined8 *)(lVar3 + 0x1c0));
    if ((uVar4 & 1) != 0) goto LAB_05a43060;
    lVar3 = *plVar6;
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo
                     + 0x130);
    if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo)) {
      if (lVar3 != *(long *)UnityWebSocketSharp_WebSocketFrame_<>c__DisplayClass71_0_TypeInfo) {
        if (lVar3 == *(long *)Meta_XR_ImmersiveDebugger_Manager_TweakManager_<>c_TypeInfo)
        goto LAB_05a430a8;
        if (lVar3 == *(long *)Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c_TypeInfo)
        goto LAB_05a43024;
        goto LAB_05a42f3c;
      }
      uVar8 = FUN_05a275f8(plVar6,param_2,0);
    }
    else {
      if (param_1[0xf] == 0) goto LAB_05a432e0;
      lVar3 = *(long *)puVar2;
      uVar8 = *(undefined8 *)(param_1[0xf] + 0x10);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar2;
      }
      uVar4 = thunk_FUN_0536b75c(uVar8,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x208),0);
      if ((uVar4 & 1) != 0) {
        FUN_05a4277c(param_2);
        if (param_2 != 0) {
          FUN_05a4cbac(param_2,0);
          uVar8 = FUN_05a17a54(plVar6,0);
          plVar6 = (long *)FUN_05a442d8(param_1,param_2,uVar8,lVar5,uVar10);
          FUN_05a4cc0c(param_2,0);
          return plVar6;
        }
        goto LAB_05a432e0;
      }
      uVar8 = FUN_05a17a54(plVar6,0);
      if (param_2 == 0) goto LAB_05a432e0;
      uVar8 = FUN_05a4cdf4(param_2,uVar8,0);
    }
    plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                         Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_trace_callback_t_TypeInfo
                                       );
    FUN_04bad87c(plVar6,uVar8,
                 *(undefined8 *)
                  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t_TypeInfo
                );
    FUN_05a44334(param_1,plVar6,lVar5,uVar10);
  }
  else {
    if (param_2 == 0) goto LAB_05a432e0;
    FUN_05a509cc(param_2,0);
LAB_05a42f3c:
    plVar6 = (long *)0x0;
  }
  return plVar6;
}


