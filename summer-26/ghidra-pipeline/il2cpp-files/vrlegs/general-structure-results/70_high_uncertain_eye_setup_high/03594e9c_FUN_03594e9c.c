/*
FUNCTION_NAME: FUN_03594e9c
ENTRY_POINT: 03594e9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_03594e9c(long param_1,long param_2)

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
  
  if ((DAT_0412e090 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_ReflectionProbe_<>c__DisplayClass98_0_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_Universal_ReflectionProbeManager_ShaderProperties_TypeInfo);
    FUN_01ab69ac(Fusion_ReflectionUtils_<>c_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Utilities_ReflectionUtils_<>c_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbea58);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(OVRPlugin_Sizef_TypeInfo);
    DAT_0412e090 = 1;
  }
  puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
  local_58 = 0;
  if (param_1 == 0) goto LAB_035952f4;
  lVar5 = FUN_036d3364(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  if ((param_2 == 0) ||
     (lVar6 = FUN_036996d8(param_2,**(undefined4 **)(*(long *)puVar1 + 0xb8),0),
     puVar2 = OVRPlugin_Sizef_TypeInfo, lVar6 == 0)) goto LAB_035952f4;
  uVar7 = FUN_036d3364(lVar6,0);
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar9);
    lVar9 = *(long *)puVar2;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if (lVar9 == 0) goto LAB_035952f4;
  uVar7 = uVar7 & 0xffffffff | lVar5 << 0x20;
  local_48 = uVar7;
  uVar8 = FUN_0219f8b8(lVar9,&local_48,&local_58,*(undefined8 *)Fusion_ReflectionUtils_<>c_TypeInfo)
  ;
  if ((uVar8 & 1) != 0) {
    iVar3 = FUN_0369b34c(param_1,0);
    if (local_58 != 0) {
      lVar5 = *(long *)(local_58 + 0x28);
      if (iVar3 == *(int *)(local_58 + 0x20)) {
        return lVar5;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_03594c28(param_1,lVar5);
      if (local_58 != 0) {
        *(int *)(local_58 + 0x20) = iVar3;
        return *(long *)(local_58 + 0x28);
      }
    }
    goto LAB_035952f4;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  uVar8 = FUN_03699d3c(param_1,*(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x54),0);
  if ((uVar8 & 1) == 0) {
LAB_035951c8:
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
    FUN_0369922c(lVar5,param_2,0);
  }
  else {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar1;
    }
    uVar8 = FUN_03699d3c(param_2,*(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x54),0);
    if ((uVar8 & 1) == 0) goto LAB_035951c8;
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
    FUN_0369922c(lVar5,param_1,0);
    if (lVar5 == 0) goto LAB_035952f4;
    FUN_036d46a4(lVar5,0x3d,0);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar1;
    }
    FUN_03699854(lVar5,**(undefined4 **)(lVar9 + 0xb8),lVar6,0);
    uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54);
    FUN_0369e060(param_2,uVar4,0);
    FUN_0369d118(lVar5,uVar4,0);
    uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
    FUN_0369e060(param_2,uVar4,0);
    FUN_0369d118(lVar5,uVar4,0);
    uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c);
    FUN_0369e060(param_2,uVar4,0);
    FUN_0369d118(lVar5,uVar4,0);
    uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    FUN_0369e060(param_2,uVar4,0);
    FUN_0369d118(lVar5,uVar4,0);
    uVar4 = *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34);
    FUN_0369e060(param_2,uVar4,0);
    FUN_0369d118(lVar5,uVar4,0);
  }
  lVar6 = thunk_FUN_01a89e68(*(undefined8 *)Newtonsoft_Json_Utilities_ReflectionUtils_<>c_TypeInfo);
  FUN_027b3d9c(lVar6,0);
  local_58 = lVar6;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = param_1;
    *(ulong *)(lVar6 + 0x10) = uVar7;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(lVar6 + 0x18),param_1);
    lVar6 = local_58;
    uVar4 = FUN_0369b34c(param_1,0);
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
        if ((lVar6 != 0) &&
           (local_48 = uVar7,
           FUN_0219b9a4(lVar6,&local_48,local_58,
                        *(undefined8 *)UnityEngine_ReflectionProbe_<>c__DisplayClass98_0_TypeInfo),
           lVar5 != 0)) {
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
LAB_035952f4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


