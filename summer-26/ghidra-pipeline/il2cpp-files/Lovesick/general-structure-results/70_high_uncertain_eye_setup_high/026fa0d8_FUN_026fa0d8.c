/*
FUNCTION_NAME: FUN_026fa0d8
ENTRY_POINT: 026fa0d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_026fa0d8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__;
  if ((DAT_03788083 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRScenePlane>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas_<>c__DisplayClass3_0_<Toggle>b__0__
                      );
    thunk_FUN_00d48444(StringLiteral_1141);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_5472);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_Dispose__);
    DAT_03788083 = 1;
  }
  lVar8 = *(long *)puVar4;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar4;
  }
  puVar7 = StringLiteral_5472;
  puVar6 = StringLiteral_1141;
  puVar5 = 
  Method_UnityEngine_Rendering_UI_DebugUIHandlerPersistentCanvas_<>c__DisplayClass3_0_<Toggle>b__0__
  ;
  puVar3 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<OVRScenePlane>__ctor__;
  if (**(long **)(lVar8 + 0xb8) != 0) {
    FUN_01323390(**(long **)(lVar8 + 0xb8),&local_58,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<StyleValue>_get_Current__);
    while (uVar9 = FUN_012b894c(&local_58,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
      lVar8 = FUN_00cde674(&local_58,*(undefined8 *)puVar6);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined8 *)(lVar8 + 0x10) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    FUN_012b8948(&local_58,*(undefined8 *)puVar2);
    lVar8 = *(long *)puVar4;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar4;
    }
    lVar8 = **(long **)(lVar8 + 0xb8);
    if (lVar8 != 0) {
      lVar10 = *(long *)puVar7;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
      if ((uVar9 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


