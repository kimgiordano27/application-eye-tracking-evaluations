/*
FUNCTION_NAME: FUN_05d571e0
ENTRY_POINT: 05d571e0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d571e0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_48;
  
  puVar1 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_06bc392a & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRRuntimeAssetsBase_LoadAsset<OVRRuntimeSettings>__);
    FUN_02f08768(Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__);
    FUN_02f08768(Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__);
    DAT_06bc392a = 1;
  }
  lVar6 = *(long *)puVar1;
  local_48 = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__;
  puVar1 = PTR_DAT_067c8f48;
  uVar4 = FUN_05dad3e4(param_2,0);
  local_48._4_4_ = uVar4;
  iVar5 = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterInt16Converters>b__18_5(0);
  puVar2 = Method_OVRRuntimeAssetsBase_LoadAsset<RuntimeSettings>__;
  if ((long)iVar5 < (long)(ulong)uVar4) {
    uVar7 = FUN_050f1a48((long)&local_48 + 4,0);
    local_48._0_4_ = UnityEngine_UIElements_ConverterGroups_<>c__<RegisterInt16Converters>b__18_5(0)
    ;
    uVar8 = FUN_050d2c48(&local_48,0);
    uVar7 = FUN_04f6fc18(*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar2,uVar8,0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar6);
    }
    UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(uVar7,0);
  }
  if ((param_2 != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    uVar4 = *(uint *)(param_2 + 0x18);
    if (*(int *)(*(long *)(param_1 + 0x80) + 0x18) < (int)uVar4) {
      local_48._0_4_ = uVar4;
      uVar7 = FUN_050d2c48(&local_48,0);
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_05d5744c;
      local_48._0_4_ = (uint)*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
      uVar8 = FUN_050d2c48(&local_48,0);
      uVar7 = FUN_04f6fc18(*(undefined8 *)puVar3,uVar7,
                           *(undefined8 *)
                            Method_OVRRuntimeAssetsBase_LoadAsset<OVRRuntimeSettings>__,uVar8,0);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar6);
      }
      UnityEngine_TextCore_Text_TextGenerator__get_m_LineOffset(uVar7,0);
      uVar4 = *(uint *)(param_2 + 0x18);
    }
    uVar10 = (ulong)uVar4;
    if (0 < (int)uVar4) {
      lVar6 = 4;
      do {
        if ((uVar10 & 0xffffffff) <= lVar6 - 4U) goto LAB_05d5746c;
        plVar12 = *(long **)(param_1 + 0x80);
        if (plVar12 == (long *)0x0) goto LAB_05d5744c;
        lVar11 = *(long *)(param_2 + lVar6 * 8);
        if ((lVar11 != 0) &&
           (lVar9 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar9 == 0)) {
          uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar7,0);
        }
        if ((ulong)*(uint *)(plVar12 + 3) <= lVar6 - 4U) goto LAB_05d5746c;
        uVar10 = *(ulong *)(param_2 + 0x18);
        lVar9 = lVar6 + -3;
        plVar12[lVar6] = lVar11;
        uVar4 = (uint)uVar10;
        lVar6 = lVar6 + 1;
      } while (lVar9 < (int)uVar4);
    }
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 != 0) {
      lVar11 = (long)(int)uVar4;
      do {
        uVar4 = (uint)*(undefined8 *)(lVar6 + 0x18);
        if ((int)uVar4 <= lVar11) {
          *(undefined8 *)(param_1 + 0x98) = param_3;
          return;
        }
        if (uVar4 <= (uint)lVar11) {
LAB_05d5746c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar9 = lVar11 * 8;
        lVar11 = lVar11 + 1;
        *(undefined8 *)(lVar6 + lVar9 + 0x20) = 0;
        lVar6 = *(long *)(param_1 + 0x80);
      } while (lVar6 != 0);
    }
  }
LAB_05d5744c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


