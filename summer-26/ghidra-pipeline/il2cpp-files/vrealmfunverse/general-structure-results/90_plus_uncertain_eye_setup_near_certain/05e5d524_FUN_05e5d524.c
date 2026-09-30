/*
FUNCTION_NAME: FUN_05e5d524
ENTRY_POINT: 05e5d524
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_05e5d524(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined4 local_38;
  int local_34;
  
  if ((DAT_066dc631 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_152__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_153__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_16__);
    DAT_066dc631 = 1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  if (param_2 == 0) {
LAB_05e5d7ac:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar3 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                    (param_2 + 0x18,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                    );
  iVar4 = FUN_03ac7100(param_2 + 0x28,*(undefined8 *)puVar2);
  puVar2 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
  ;
  if (iVar3 == 0) {
    puVar8 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_153__;
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_153__;
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar5 = FUN_05e799b4(0);
    puVar1 = PTR_DAT_06312310;
    if ((long)(uVar5 & 0xffffffff) < (long)iVar3) {
      local_34 = iVar3;
      uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_34);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar2);
      }
      local_38 = FUN_05e799b4(0);
      uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(puVar1 + 0x50),&local_38);
      uVar6 = FUN_04c0af28(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_16__,uVar6,uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c44f60(uVar6,0);
      return;
    }
    if (iVar4 != 0) {
      if (DAT_066dc628 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312d90);
        DAT_066dc628 = '\x01';
      }
      if (param_1 != 0) {
        plVar10 = (long *)(param_1 + 0x78);
        if (*plVar10 == 0) {
          plVar9 = (long *)(param_1 + 0x70);
          lVar11 = *plVar9;
          if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(lVar11 == 0,0);
        }
        else {
          plVar9 = (long *)(*plVar10 + 0x68);
        }
        *plVar9 = param_2;
        thunk_FUN_02bb0e9c(plVar9,param_2);
        *plVar10 = param_2;
        thunk_FUN_02bb0e9c(plVar10,param_2);
        return;
      }
      goto LAB_05e5d7ac;
    }
    puVar8 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_152__;
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_152__;
    }
  }
  FUN_05c44f60(*puVar8,0);
  return;
}


