/*
FUNCTION_NAME: UnityEngine.UIElements.ComputedStyle$$ApplyPropertyAnimation
ENTRY_POINT: 05e5d548
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


void UnityEngine_UIElements_ComputedStyle__ApplyPropertyAnimation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long unaff_x21;
  long *plVar10;
  long lVar11;
  undefined4 in_stack_00000008;
  int iStack000000000000000c;
  
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
  *(undefined1 *)(unaff_x21 + 0x631) = 1;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  if (unaff_x19 == 0) {
LAB_05e5d7ac:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar3 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                    (unaff_x19 + 0x18,
                     *(undefined8 *)
                      Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                    );
  iVar4 = FUN_03ac7100(unaff_x19 + 0x28,*(undefined8 *)puVar2);
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
      iStack000000000000000c = iVar3;
      uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&stack0x0000000c);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)puVar2);
      }
      in_stack_00000008 = FUN_05e799b4(0);
      uVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(puVar1 + 0x50),&stack0x00000008);
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
      if (unaff_x20 != 0) {
        plVar10 = (long *)(unaff_x20 + 0x78);
        if (*plVar10 == 0) {
          plVar9 = (long *)(unaff_x20 + 0x70);
          lVar11 = *plVar9;
          if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05c45700(lVar11 == 0,0);
        }
        else {
          plVar9 = (long *)(*plVar10 + 0x68);
        }
        *plVar9 = unaff_x19;
        thunk_FUN_02bb0e9c(plVar9);
        *plVar10 = unaff_x19;
        thunk_FUN_02bb0e9c(plVar10);
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


