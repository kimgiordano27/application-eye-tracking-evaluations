/*
FUNCTION_NAME: FUN_01ff8e74
ENTRY_POINT: 01ff8e74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01ff9078) */

void FUN_01ff8e74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char local_34 [4];
  
  if ((DAT_03780842 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Selectable>__ctor__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03780842 = 1;
  }
  local_34[0] = '\0';
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar5 = StringLiteral_2091;
  }
  else {
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar1 = FUN_01789ac0(param_2,0,0);
    puVar5 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar2 = *(long *)puVar5;
      }
      uVar6 = **(undefined8 **)(lVar2 + 0xb8);
      local_34[0] = '\0';
      FUN_017d75a8(uVar6,local_34,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar3 = FUN_01ff90f8(param_2,1);
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<Selectable>__ctor__);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01fd81bc(lVar2,0);
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(long *)(lVar2 + 0x28) = param_1;
      plVar4 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar4 + 0x318))(plVar4,param_2,lVar2,*(undefined8 *)(*plVar4 + 800));
      plVar4 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      (**(code **)(*plVar4 + 0x2b8))(plVar4,*(undefined8 *)(*plVar4 + 0x2c0));
      if (local_34[0] != '\0') {
        thunk_FUN_00d56f10(uVar6,0);
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01ff9638(param_2);
      return;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar5 = Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__;
  }
  uVar3 = thunk_FUN_00d48444(puVar5);
  FUN_016ec5b8(uVar6,uVar3,0);
  uVar3 = thunk_FUN_00d48444(Oculus_Platform_CAPI_ovrKeyValuePair___TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar3);
}


