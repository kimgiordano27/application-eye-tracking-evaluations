/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XElementWrapper$$get_Attributes
ENTRY_POINT: 051260bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Converters_XElementWrapper__get_Attributes(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 unaff_x21;
  long in_stack_00000008;
  char *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  *(undefined8 *)(unaff_x19 + 0x60) = unaff_x21;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar2 = FUN_051264c4(param_1,5);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar2 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),1);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  if (*(long *)(unaff_x19 + 0x48) == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0xc);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),7);
    uVar2 = FUN_04f65260(uVar2,uVar3,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x10);
  *(long *)(unaff_x19 + 0x38) = lVar4;
  if (lVar4 == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x14);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar2 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0xd);
  puVar1 = UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
  uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)puVar1,0);
  puVar6 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_067d9340,0
                                ),
     puVar6 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var, (uVar5 & 1) == 0)) {
    uVar2 = 0;
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      uVar5 = FUN_04f6dcac(*(long *)(unaff_x19 + 0x58),
                           *(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
                           ,0);
      puVar6 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
      if ((uVar5 & 1) != 0) goto LAB_05126208;
      uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
    }
    uVar5 = thunk_FUN_04f6d944(uVar2,*(undefined8 *)
                                      UnityEngine_UIElements_StyleSheet_ImportStruct_var,0);
    puVar6 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
    if (((((uVar5 & 1) == 0) &&
         (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                     *(undefined8 *)Unity_AppUI_UI_Stepper_UxmlSerializedData_var,0)
         , puVar6 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var,
         (uVar5 & 1) == 0)) &&
        (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                    *(undefined8 *)
                                     UnityEngine_UIElements_StylePropertyNameCollection_Enumerator_var
                                    ,0),
        puVar6 = (undefined8 *)
                 UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var,
        (uVar5 & 1) == 0)) &&
       (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                   *(undefined8 *)Unity_AppUI_UI_SliderInt_UxmlSerializedData_var,0)
       , puVar6 = (undefined8 *)Unity_AppUI_UI_Spacer_UxmlSerializedData_var, (uVar5 & 1) == 0))
    goto LAB_05126210;
  }
LAB_05126208:
  *(undefined8 *)(unaff_x19 + 0x28) = *puVar6;
LAB_05126210:
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar2 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),10);
  *(undefined8 *)(unaff_x19 + 200) = uVar2;
  FUN_05126598();
  if (*(char *)(unaff_x19 + 0xec) != '\0') {
    Newtonsoft_Json_Converters_XCommentWrapper__get_Text();
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xa0) = 1;
  if (*in_stack_00000010 != '\0') {
    thunk_FUN_02f16354(*in_stack_00000018,0);
  }
  if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  return;
}


