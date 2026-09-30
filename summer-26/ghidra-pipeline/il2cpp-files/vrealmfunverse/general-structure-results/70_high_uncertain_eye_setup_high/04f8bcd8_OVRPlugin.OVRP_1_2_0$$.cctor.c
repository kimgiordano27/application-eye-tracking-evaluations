/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$.cctor
ENTRY_POINT: 04f8bcd8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_2_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar10;
  uint uVar11;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0x588));
  FUN_02b3c81c(System_Func<NavigationCancelEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<NavigationMoveEvent>_TypeInfo);
  FUN_02b3c81c(System_Func<MouseOverEvent>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xd74) = 1;
  lVar6 = FUN_02b3c908(*unaff_x21,0x1a);
  lVar7 = thunk_FUN_02b79644(*unaff_x19);
  FUN_04dbdb8c(lVar7,0);
  puVar4 = System_Func<NavigationMoveEvent>_TypeInfo;
  puVar3 = System_Func<NavigationCancelEvent>_TypeInfo;
  puVar2 = System_Func<MouseUpEvent>_TypeInfo;
  puVar1 = System_Xml_XmlElement_var;
  if (lVar7 != 0) {
    uVar11 = 0;
    *(undefined4 *)(lVar7 + 0x10) = 0;
    while( true ) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar8 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      uVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_03bfcd24(uVar9,lVar7,*(undefined8 *)puVar4,0);
      uVar5 = FUN_0325f4bc(uVar10,uVar9,*(undefined8 *)puVar2);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      *(undefined4 *)(lVar6 + (long)(int)uVar11 * 4 + 0x20) = uVar5;
      uVar11 = *(int *)(lVar7 + 0x10) + 1;
      *(uint *)(lVar7 + 0x10) = uVar11;
      if (0x19 < (int)uVar11) {
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


