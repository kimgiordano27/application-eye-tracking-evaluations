/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 04f88248
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__CreateMarkerHandle(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong uVar6;
  long *plVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312db8);
    FUN_02b3c81c(System_Xml_XmlElement_var);
    FUN_02b3c81c(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var);
    FUN_02b3c81c(System_Func<MeshHandle>_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0xd3f) = 1;
  }
  puVar2 = System_Xml_XmlElement_var;
  puVar1 = UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var;
  uVar3 = thunk_FUN_02b79644(*unaff_x21);
  FUN_04cf4310(uVar3,param_2,*unaff_x20,0);
  FUN_04e83350(param_2,param_2 + 0x20,uVar3,0);
  uVar6 = 0;
  do {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *(long *)puVar2;
    }
    if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_04f883d0:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if ((long)*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (long)uVar6) {
      FUN_04e833f4(param_2,param_2 + 0x20,0);
      return;
    }
    plVar7 = *(long **)(param_2 + 0xd8);
    uVar3 = *(undefined8 *)(param_2 + 0xa0);
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_04f0df40(lVar4,uVar3,0);
    if (plVar7 == (long *)0x0) goto LAB_04f883d0;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
LAB_04f883d8:
      uVar3 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,0);
    }
    if (*(uint *)(plVar7 + 3) <= uVar6) {
LAB_04f883d4:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar7[uVar6 + 4] = lVar4;
    thunk_FUN_02bb0e9c(plVar7 + uVar6 + 4,lVar4);
    plVar7 = *(long **)(param_2 + 0xe0);
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
    FUN_04f0df40(lVar4,uVar3,0);
    if (plVar7 == (long *)0x0) goto LAB_04f883d0;
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0))
    goto LAB_04f883d8;
    if (*(uint *)(plVar7 + 3) <= uVar6) goto LAB_04f883d4;
    plVar7[uVar6 + 4] = lVar4;
    thunk_FUN_02bb0e9c(plVar7 + uVar6 + 4,lVar4);
    uVar6 = uVar6 + 1;
  } while( true );
}


