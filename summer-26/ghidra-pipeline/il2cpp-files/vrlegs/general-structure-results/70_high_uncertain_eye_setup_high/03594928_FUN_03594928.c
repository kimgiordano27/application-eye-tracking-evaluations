/*
FUNCTION_NAME: FUN_03594928
ENTRY_POINT: 03594928
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_5
*/


long FUN_03594928(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long local_58;
  undefined4 local_4c;
  ulong local_48;
  
  if ((DAT_0412e08f & 1) == 0) {
    FUN_01ab69ac(UnityEngine_ReflectionProbe_<>c__DisplayClass98_0_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_Universal_ReflectionProbeManager_ShaderProperties_TypeInfo);
    FUN_01ab69ac(Fusion_ReflectionUtils_<>c_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Utilities_ReflectionUtils_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbea58);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    DAT_0412e08f = 1;
  }
  local_58 = 0;
  if (((param_2 != 0) && (lVar5 = FUN_036d3364(param_2,0), param_1 != 0)) &&
     (lVar6 = Unity_Jobs_JobHandle__CombineDependenciesInternalPtr_Injected(param_1,0),
     puVar2 = OVRPlugin_Sizef_TypeInfo, lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)param_3 * 8 + 0x20);
    if (lVar6 != 0) {
      uVar7 = FUN_036d3364(lVar6,0);
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar9);
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 != 0) {
        uVar7 = uVar7 & 0xffffffff | lVar5 << 0x20;
        local_48 = uVar7;
        uVar8 = FUN_0219f8b8(lVar9,&local_48,&local_58,
                             *(undefined8 *)Fusion_ReflectionUtils_<>c_TypeInfo);
        if ((uVar8 & 1) == 0) {
          lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369922c(lVar5,param_2,0);
          puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
          if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar5 != 0) {
            FUN_03699854(lVar5,**(undefined4 **)(*(long *)puVar1 + 0xb8),lVar6,0);
            FUN_036d46a4(lVar5,0x3d,0);
            lVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                                        Newtonsoft_Json_Utilities_ReflectionUtils_<>c_TypeInfo);
            FUN_027b3d9c(lVar6,0);
            local_58 = lVar6;
            if (lVar6 != 0) {
              *(ulong *)(lVar6 + 0x10) = uVar7;
              *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_1 + 0x20);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar6 + 0x18));
              lVar6 = local_58;
              uVar4 = FUN_0369b34c(param_2,0);
              if ((lVar6 != 0) && (*(undefined4 *)(lVar6 + 0x20) = uVar4, local_58 != 0)) {
                *(long *)(local_58 + 0x28) = lVar5;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((long *)(local_58 + 0x28),lVar5);
                if (local_58 != 0) {
                  *(undefined4 *)(local_58 + 0x30) = 0;
                  lVar6 = *(long *)puVar2;
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar6 = *(long *)puVar2;
                  }
                  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                  if (lVar6 != 0) {
                    local_48 = uVar7;
                    FUN_0219b9a4(lVar6,&local_48,local_58,
                                 *(undefined8 *)
                                  UnityEngine_ReflectionProbe_<>c__DisplayClass98_0_TypeInfo);
                    lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
                    local_4c = FUN_036d3364(lVar5,0);
                    if (lVar6 != 0) {
                      local_48 = uVar7;
                      FUN_0219b9a4(lVar6,&local_4c,&local_48,
                                   *(undefined8 *)
                                    UnityEngine_Rendering_Universal_ReflectionProbeManager_ShaderProperties_TypeInfo
                                  );
                      return lVar5;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar3 = FUN_0369b34c(param_2,0);
          if (local_58 != 0) {
            lVar5 = *(long *)(local_58 + 0x28);
            if (iVar3 != *(int *)(local_58 + 0x20)) {
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_03594c28(param_2,lVar5);
              if (local_58 == 0) goto LAB_03594c20;
              lVar5 = *(long *)(local_58 + 0x28);
              *(int *)(local_58 + 0x20) = iVar3;
            }
            return lVar5;
          }
        }
      }
    }
  }
LAB_03594c20:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


