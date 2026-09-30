/*
FUNCTION_NAME: FUN_0288c08c
ENTRY_POINT: 0288c08c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0288c08c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_037894f2 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRResult<OVRPlugin_Result>_get_Success__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Color32>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__4__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_037894f2 = 1;
  }
  plVar10 = (long *)(param_1 + 0x40);
  lVar7 = *plVar10;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_02681b9c(lVar7,0,0);
  if ((uVar4 & 1) == 0) {
    plVar10 = (long *)(param_1 + 0x48);
    lVar7 = *plVar10;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0268b4e0(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      lVar7 = FUN_010c3320(param_1,*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Color32>__
                          );
      puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
      puVar2 = Method_OVRResult<OVRPlugin_Result>_get_Success__;
      if (lVar7 == 0) {
LAB_0288c2a0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar4 = 0;
        uVar6 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar8 = *(long *)(lVar7 + 0x20 + uVar4 * 8);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_02681b9c(lVar8,0,0);
          if ((uVar6 & 1) != 0) {
            if (lVar8 == 0) goto LAB_0288c2a0;
            uVar5 = thunk_FUN_00d93c64(lVar8,0);
            uVar9 = *(undefined8 *)puVar2;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            uVar9 = FUN_01780344(uVar9,0);
            uVar6 = FUN_01789ac0(uVar5,uVar9,0);
            if ((uVar6 & 1) != 0) {
              *plVar10 = lVar8;
              goto LAB_0288c234;
            }
          }
          uVar6 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar8 = *plVar10;
LAB_0288c234:
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0268b4e0(lVar8,0,0);
      if ((uVar4 & 1) != 0) {
        lVar7 = FUN_0268fd4c(param_1,0);
        if (lVar7 == 0) goto LAB_0288c2a0;
        lVar7 = FUN_010e5800(lVar7,*(undefined8 *)
                                    Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__4__
                            );
        *plVar10 = lVar7;
      }
    }
  }
  return *plVar10;
}


