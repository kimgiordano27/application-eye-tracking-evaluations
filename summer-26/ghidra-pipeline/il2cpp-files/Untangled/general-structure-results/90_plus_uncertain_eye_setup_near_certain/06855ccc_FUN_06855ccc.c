/*
FUNCTION_NAME: FUN_06855ccc
ENTRY_POINT: 06855ccc
PROGRAM: Untangled-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_06855ccc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_06d37040;
  if ((DAT_071d6b4a & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d08068);
    FUN_02f07e70(PTR_DAT_06d3a2a0);
    FUN_02f07e70(PTR_DAT_06d3a2a8);
    FUN_02f07e70(OVRObjectPool_IPoolObject_TypeInfo);
    FUN_02f07e70(OVRPlugin_Media_TypeInfo);
    FUN_02f07e70(OVRPlugin_Mesh_TypeInfo);
    FUN_02f07e70(OVRPlugin_MeshType_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_0_1_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_Hand_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37040);
    FUN_02f07e70(UnityEngine_Rendering_RenderPipelineManager_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_0_1_1_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_0_1_2_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_071d6b4a = 1;
  }
  puVar5 = OVRPlugin_Hand_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar1 = OVRPlugin_Media_TypeInfo;
  FUN_068c963c(param_3,0);
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar8 = *(long *)puVar5;
  }
  FUN_068cbd7c(param_3,**(undefined8 **)(lVar8 + 0xb8),0);
  lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_0685a43c(param_1,param_2,0x41a00000,lVar8,param_5);
  puVar1 = UnityEngine_Rendering_RenderPipelineManager_TypeInfo;
  if (lVar8 != 0) {
    FUN_068c920c(lVar8,*(undefined8 *)OVRPlugin_OVRP_0_1_1_TypeInfo,0);
    FUN_068c584c(lVar8,*(undefined8 *)puVar1,0);
    *(long *)(param_3 + 0x3d0) = lVar8;
    thunk_FUN_02f411dc(param_3 + 0x3d0,lVar8);
    puVar7 = OVRPlugin_OVRP_0_1_0_TypeInfo;
    puVar6 = OVRPlugin_Mesh_TypeInfo;
    puVar4 = OVRObjectPool_IPoolObject_TypeInfo;
    puVar3 = PTR_DAT_06d3a2a8;
    puVar2 = PTR_DAT_06d3a2a0;
    puVar1 = PTR_DAT_06d08068;
    if (*(long *)(param_3 + 0x3d0) != 0) {
      FUN_068cbd7c(*(long *)(param_3 + 0x3d0),
                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
      uVar10 = *(undefined8 *)(param_3 + 0x3d0);
      uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_05025f00(uVar9,param_3,*(undefined8 *)puVar6,0);
      FUN_03abf250(uVar10,uVar9,*(undefined8 *)puVar3);
      uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
      FUN_0555e110(uVar9,param_3,*(undefined8 *)puVar7,0);
      lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
      FUN_06852d00();
      FUN_06852dd4(lVar8,uVar9,0xfa,0x1e);
      if (lVar8 != 0) {
        FUN_068c920c(lVar8,*(undefined8 *)OVRPlugin_OVRP_0_1_3_TypeInfo,0);
        *(long *)(param_3 + 0x3d8) = lVar8;
        thunk_FUN_02f411dc(param_3 + 0x3d8,lVar8);
        puVar2 = OVRPlugin_MeshType_TypeInfo;
        if (*(long *)(param_3 + 0x3d8) != 0) {
          FUN_068cbd7c(*(long *)(param_3 + 0x3d8),
                       *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20),0);
          FUN_068d0324(param_3,*(undefined8 *)(param_3 + 0x3d8),0);
          uVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
          FUN_0555e110(uVar9,param_3,*(undefined8 *)puVar2,0);
          lVar8 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
          FUN_06852d00();
          FUN_06852dd4(lVar8,uVar9,0xfa,0x1e);
          if (lVar8 != 0) {
            FUN_068c920c(lVar8,*(undefined8 *)OVRPlugin_OVRP_0_1_2_TypeInfo,0);
            *(long *)(param_3 + 0x3e0) = lVar8;
            thunk_FUN_02f411dc(param_3 + 0x3e0,lVar8);
            if (*(long *)(param_3 + 0x3e0) != 0) {
              FUN_068cbd7c(*(long *)(param_3 + 0x3e0),
                           *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28),0);
              FUN_068d0324(param_3,*(undefined8 *)(param_3 + 0x3e0),0);
              FUN_068d0324(param_3,*(undefined8 *)(param_3 + 0x3d0),0);
              FUN_0685a200(param_3,param_5);
              *(undefined8 *)(param_3 + 0x3c8) = param_4;
              thunk_FUN_02f411dc(param_3 + 0x3c8,param_4);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


