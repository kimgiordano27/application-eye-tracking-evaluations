/*
FUNCTION_NAME: FUN_027da0b0
ENTRY_POINT: 027da0b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_027da0b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_24__;
  if ((DAT_03788943 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_11911);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_24__);
    thunk_FUN_00d48444(StringLiteral_11321);
    thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
    DAT_03788943 = 1;
  }
  lVar4 = **(long **)(*(long *)(*(long *)puVar1 + 0x20) + 0xc0);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  puVar2 = StringLiteral_11911;
  puVar1 = StringLiteral_11321;
  pcVar5 = (char *)thunk_FUN_00d32ed4(param_1,*(long *)(lVar4 + 0x80) + 0x260);
  if (*pcVar5 == '\0') {
    lVar4 = FUN_011d4e6c(param_1,*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      FUN_0275301c(lVar4,0);
      lVar4 = FUN_011d3f64(param_1,*(undefined8 *)puVar1);
      if (lVar4 != 0) {
        FUN_02751e94(lVar4,*(undefined8 *)(param_1 + 0x410),0);
        lVar4 = *(long *)(param_1 + 0x420);
        if (lVar4 == 0) {
          return;
        }
LAB_027da240:
        FUN_027d9a84(param_1,lVar4);
        return;
      }
    }
  }
  else {
    lVar4 = FUN_011d3f64(param_1,*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      uVar3 = FUN_0274dcf8(lVar4,0);
      FUN_0274dd00(lVar4,uVar3 & 0xfffffff7,0);
      uVar3 = FUN_0274dcf8(param_1,0);
      FUN_0274dd00(param_1,uVar3 & 0xfffffff7,0);
      if (*(long *)(param_1 + 0x410) != 0) {
        FUN_0275301c(*(long *)(param_1 + 0x410),0);
        lVar4 = FUN_011d3f64(param_1,*(undefined8 *)puVar1);
        uVar6 = FUN_011d4e6c(param_1,*(undefined8 *)puVar2);
        puVar1 = TMPro_TMP_InputField_SubmitEvent_TypeInfo;
        if (lVar4 != 0) {
          FUN_02751e94(lVar4,uVar6,0);
          plVar7 = *(long **)(param_1 + 0x408);
          uVar6 = 0;
          if (plVar7 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar7 + 0x7a8))(plVar7,*(undefined8 *)(*plVar7 + 0x7b0));
          }
          *(undefined8 *)(param_1 + 0x420) = uVar6;
          lVar4 = *(long *)puVar1;
          goto LAB_027da240;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


