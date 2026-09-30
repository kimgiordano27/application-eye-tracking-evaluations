/*
FUNCTION_NAME: FUN_07de69bc
ENTRY_POINT: 07de69bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07de69bc(int *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0848e5b0;
  puVar9 = &local_90;
  if ((DAT_0899a19f & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_39_0_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848e5b0);
    FUN_03a8a718(PTR_DAT_084ba068);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_ResolveStencilPassData,_RenderGraphContext>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08489148);
    FUN_03a8a718(PTR_DAT_08489158);
    FUN_03a8a718(PTR_DAT_0848f8e8);
    DAT_0899a19f = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  plVar2 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_065d66f0(plVar2,0);
  if (*param_1 == 1) {
    lVar7 = *(long *)(param_1 + 0x1a);
    if (lVar7 != 0) goto LAB_07de6a78;
LAB_07de6aa0:
    uVar3 = FUN_065cd268(0,0);
    if ((uVar3 & 1) == 0) goto LAB_07de6c04;
LAB_07de6ab0:
    puVar8 = (undefined8 *)PTR_DAT_084ba068;
    if ((*param_1 != 0) &&
       (puVar8 = (undefined8 *)
                 UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<HDRenderPipeline_ResolveStencilPassData,_RenderGraphContext>_TypeInfo
       , *param_1 != 1)) {
      if (plVar2 == (long *)0x0) goto LAB_07de6c04;
      goto LAB_07de6af4;
    }
  }
  else {
    lVar7 = FUN_07f3ed64(*param_1,0);
    if (lVar7 == 0) goto LAB_07de6aa0;
LAB_07de6a78:
    puVar8 = (undefined8 *)(lVar7 + 0x18);
    uVar3 = FUN_065cd268(*puVar8,0);
    if ((uVar3 & 1) != 0) goto LAB_07de6ab0;
  }
  if (plVar2 == (long *)0x0) {
LAB_07de6c04:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_065d8050(plVar2,*puVar8,0);
LAB_07de6af4:
  FUN_065d8050(plVar2,*(undefined8 *)PTR_DAT_08489158,0);
  puVar1 = PTR_DAT_08489148;
  if (0 < param_1[0x19]) {
    lVar7 = 0;
    do {
      if (lVar7 != 0) {
        FUN_065d8050(plVar2,*(undefined8 *)puVar1,0);
      }
      memcpy(&local_90,param_1 + 1,0x60);
      if (lVar7 == 4) {
        uVar6 = *(undefined8 *)OVRPlugin_OVRP_1_39_0_TypeInfo;
        thunk_FUN_03af1434(PTR_DAT_0848daa8);
        uVar4 = thunk_FUN_03ac74bc();
        uVar5 = thunk_FUN_03af1434(PTR_DAT_08486d40);
        FUN_0674c1e8(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar4,uVar6);
      }
      uVar4 = FUN_07de6c08(puVar9);
      FUN_065d8050(plVar2,uVar4,0);
      lVar7 = lVar7 + 1;
      puVar9 = (undefined8 *)((long)puVar9 + 0x18);
    } while (lVar7 < param_1[0x19]);
  }
  FUN_065d8050(plVar2,*(undefined8 *)PTR_DAT_0848f8e8,0);
  (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  return;
}


