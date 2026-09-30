/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XAttributeWrapper$$get_Value
ENTRY_POINT: 05125ebc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_8;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Converters_XAttributeWrapper__get_Value(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x22;
  undefined8 uVar8;
  long in_stack_00000008;
  char *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_04f65260(0,param_2,0);
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x129);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x12a);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x167);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar4 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x168);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar4;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar2 = FUN_05126548(*(long *)(unaff_x19 + 0x10),0xd);
  puVar1 = PTR_DAT_067c8f80;
  *(undefined4 *)(unaff_x19 + 0xe8) = uVar2;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_050d65ac(uVar2,0x10,0);
  uVar2 = FUN_050d645c(uVar4,1,0);
  *(undefined4 *)(unaff_x19 + 0xe8) = uVar2;
  lVar6 = 0xb8;
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    lVar6 = 0xc0;
  }
  if (*(long *)(unaff_x19 + lVar6) != 0) {
    uVar3 = FUN_04f65260(uVar3,*(long *)(unaff_x19 + lVar6),0);
  }
  puVar1 = System_Runtime_CompilerServices_AsyncMethodBuilderCore_var;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(int *)(*(long *)System_Runtime_CompilerServices_AsyncMethodBuilderCore_var + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_02f1ebb0(uVar4,uVar3,unaff_x19 + 0x108,*(undefined8 *)(*(long *)puVar1 + 0xb8));
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320,0x11);
    lVar6 = *(long *)puVar1;
    *(undefined8 *)(unaff_x19 + 0x108) = uVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar6 + 0xb8) = 0;
  }
  puVar1 = System_Runtime_Remoting_Messaging_AsyncResult_var;
  if (*(int *)(*(long *)System_Runtime_Remoting_Messaging_AsyncResult_var + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_0511c73c(0);
  if (DAT_06bb9ecf == '\0') {
    FUN_02f08768(System_Runtime_Remoting_Messaging_AsyncResult_var);
    DAT_06bb9ecf = '\x01';
  }
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar1;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d68b8);
  FUN_0508dae8(uVar4,uVar3,uVar8,0);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar4;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),5);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),1);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  if (*(long *)(unaff_x19 + 0x48) == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0xc);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),7);
    uVar3 = FUN_04f65260(uVar3,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x10);
  *(long *)(unaff_x19 + 0x38) = lVar6;
  if (lVar6 == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x14);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0xd);
  puVar1 = UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)puVar1,0);
  puVar7 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
  if (((uVar5 & 1) == 0) &&
     (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_067d9340,0
                                ),
     puVar7 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var, (uVar5 & 1) == 0)) {
    uVar3 = 0;
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      uVar5 = FUN_04f6dcac(*(long *)(unaff_x19 + 0x58),
                           *(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
                           ,0);
      puVar7 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
      if ((uVar5 & 1) != 0) goto LAB_05126208;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x58);
    }
    uVar5 = thunk_FUN_04f6d944(uVar3,*(undefined8 *)
                                      UnityEngine_UIElements_StyleSheet_ImportStruct_var,0);
    puVar7 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
    if (((((uVar5 & 1) == 0) &&
         (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                     *(undefined8 *)Unity_AppUI_UI_Stepper_UxmlSerializedData_var,0)
         , puVar7 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var,
         (uVar5 & 1) == 0)) &&
        (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                    *(undefined8 *)
                                     UnityEngine_UIElements_StylePropertyNameCollection_Enumerator_var
                                    ,0),
        puVar7 = (undefined8 *)
                 UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var,
        (uVar5 & 1) == 0)) &&
       (uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                   *(undefined8 *)Unity_AppUI_UI_SliderInt_UxmlSerializedData_var,0)
       , puVar7 = (undefined8 *)Unity_AppUI_UI_Spacer_UxmlSerializedData_var, (uVar5 & 1) == 0))
    goto LAB_05126210;
  }
LAB_05126208:
  *(undefined8 *)(unaff_x19 + 0x28) = *puVar7;
LAB_05126210:
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),10);
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
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


