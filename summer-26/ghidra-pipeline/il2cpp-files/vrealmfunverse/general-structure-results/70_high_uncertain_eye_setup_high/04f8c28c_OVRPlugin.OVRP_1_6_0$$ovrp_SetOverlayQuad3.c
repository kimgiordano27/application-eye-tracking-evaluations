/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetOverlayQuad3
ENTRY_POINT: 04f8c28c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_6_0__ovrp_SetOverlayQuad3(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x21;
  uint uVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063183d0);
    FUN_02b3c81c(System_Xml_XmlElement_var);
    *(undefined1 *)(unaff_x19 + 0xd78) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar2 = FUN_04f8c14c();
  if (**(long **)(*unaff_x21 + 0xb8) == 0) {
LAB_04f8c3ac:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = FUN_02b3c908(*(undefined8 *)PTR_DAT_063183d0,
                       *(undefined4 *)(**(long **)(*unaff_x21 + 0xb8) + 0x18));
  lVar4 = *unaff_x21;
  uVar6 = 0;
  while( true ) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *unaff_x21;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) goto LAB_04f8c3ac;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar6) {
      return lVar3;
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *unaff_x21;
      lVar5 = **(long **)(lVar4 + 0xb8);
      if (lVar5 == 0) goto LAB_04f8c3ac;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) break;
    if (lVar2 == 0) goto LAB_04f8c3ac;
    uVar1 = *(uint *)(lVar5 + (long)(int)uVar6 * 4 + 0x20);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
    if (lVar3 == 0) goto LAB_04f8c3ac;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) break;
    lVar5 = (long)(int)uVar6;
    uVar6 = uVar6 + 1;
    *(bool *)(lVar3 + lVar5 + 0x20) =
         *(int *)(lVar2 + (long)(int)uVar1 * 4 + 0x20) < 2 && uVar1 != 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


