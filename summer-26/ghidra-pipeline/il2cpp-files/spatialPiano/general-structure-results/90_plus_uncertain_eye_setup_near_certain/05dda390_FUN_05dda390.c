/*
FUNCTION_NAME: FUN_05dda390
ENTRY_POINT: 05dda390
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_05dda390(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 local_54 [4];
  ulong local_48;
  
  puVar2 = Method_System_Resources_ResourceSet_GetCaseInsensitiveObjectInternal__;
  local_48 = param_5;
  if ((DAT_06bc3c78 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_ResourcesData_Initialize__
                );
    FUN_02f08768(PTR_DAT_067c8f80);
    FUN_02f08768(Method_Oculus_Interaction_DistanceReticles_ReticleGhostDrawer_<Start>b__18_0__);
    FUN_02f08768(Method_Oculus_Interaction_DistanceReticles_ReticleIconDrawer_<Start>b__24_0__);
    FUN_02f08768(Method_System_Resources_ResourceSet_GetCaseInsensitiveObjectInternal__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3c78 = 1;
  }
  lVar8 = *(long *)puVar2;
  local_54[0] = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  FUN_05c5cb44(local_54,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x28),0);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar8 = FUN_05dea00c(param_1,*(undefined8 *)
                                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_ResourcesData_Initialize__
                      );
  puVar2 = PTR_DAT_067cb280;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(undefined8 *)(lVar8 + 0x20) = param_3;
  *(undefined8 *)(lVar8 + 0x28) = param_4;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar5 = FUN_05ddd67c(param_2,param_3,param_4);
  *(int *)(lVar8 + 0x10) = iVar5;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x94) == 0) {
      uVar6 = 0;
      *(undefined4 *)(lVar8 + 0x14) = 0;
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar2);
      }
      uVar6 = FUN_05dd2e14();
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050d65ac((int)param_4 - (uint)(iVar5 != -1),uVar6,0);
      uVar6 = *(undefined4 *)(param_2 + 0x98);
      *(undefined4 *)(lVar8 + 0x14) = uVar7;
      uVar6 = FUN_050d65ac(uVar6,8,0);
    }
    iVar5 = *(int *)(param_2 + 0x88);
    *(undefined4 *)(lVar8 + 0x18) = uVar6;
    if (iVar5 == 0) {
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        lVar9 = thunk_FUN_02f6670c();
      }
      iVar5 = FUN_05ddd7c4(lVar9,param_3,param_4);
      if (iVar5 != -1) {
        *(int *)(lVar8 + 0x10) = iVar5;
        *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + -1;
      }
    }
    iVar5 = *(int *)(param_2 + 0x94);
    *(undefined1 *)(lVar8 + 0x31) = *(undefined1 *)(param_2 + 0xf6);
    uVar1 = *(undefined1 *)(param_2 + 0xb1);
    *(bool *)(lVar8 + 0x36) = iVar5 != 0;
    *(bool *)(lVar8 + 0x30) = iVar5 == 2;
    *(undefined1 *)(lVar8 + 0x32) = uVar1;
    uVar6 = FUN_060fb038(0);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_05dab44c(uVar6,0);
    if ((uVar10 & 1) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(param_2 + 0xf8) != '\0';
    }
    *(bool *)(lVar8 + 0x35) = bVar3;
    bVar4 = FUN_05d36fdc(param_2,0);
    *(byte *)(lVar8 + 0x33) = bVar4 & 1;
    if ((param_5 & 0xff) == 0) {
      bVar4 = 0;
    }
    else {
      uVar6 = FUN_03e1bd38(&local_48,
                           *(undefined8 *)
                            Method_Oculus_Interaction_DistanceReticles_ReticleIconDrawer_<Start>b__24_0__
                          );
      bVar4 = FUN_05d3701c(param_2,uVar6,0);
    }
    *(byte *)(lVar8 + 0x34) = bVar4 & 1;
    FUN_05c5cb50(local_54,0);
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


