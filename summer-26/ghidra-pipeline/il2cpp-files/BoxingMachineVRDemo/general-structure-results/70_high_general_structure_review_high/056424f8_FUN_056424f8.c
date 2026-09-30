/*
FUNCTION_NAME: FUN_056424f8
ENTRY_POINT: 056424f8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_056424f8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long local_38;
  undefined8 local_28;
  
  if ((DAT_06b7f6a1 & 1) == 0) {
    FUN_02d6084c(System_Func<FocusOutEvent>_TypeInfo);
    DAT_06b7f6a1 = 1;
  }
  local_38 = 0;
  iVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  if (iVar2 != 1) {
    uVar3 = thunk_FUN_02dc61f4(
                              UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<PostProcessPass_UpdateCameraResolutionPassData,_UnsafeGraphContext>_TypeInfo
                              );
    uVar3 = System_Security_Cryptography_X509Certificates_X509ChainPolicy__set_VerificationFlags
                      (param_1,uVar3,0);
    uVar6 = thunk_FUN_02dc61f4(
                              System_Collections_Generic_List<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,uVar6);
  }
  local_28 = 0;
  uVar3 = FUN_05645c64(param_1,&local_38,0,&local_28);
  puVar1 = System_Func<FocusOutEvent>_TypeInfo;
  if (local_38 == 0) {
    lVar5 = *(long *)System_Func<FocusOutEvent>_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar1;
    }
    plVar4 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar4 + 0x228))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x230));
  }
  else {
    plVar4 = (long *)FUN_055ca138(local_38,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(*plVar4 + 0x228))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x230));
  }
  return;
}


