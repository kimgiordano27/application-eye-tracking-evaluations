/*
FUNCTION_NAME: Newtonsoft.Json.Converters.XObjectWrapper$$get_ParentNode
ENTRY_POINT: 05125dbc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x051262d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Newtonsoft_Json_Converters_XObjectWrapper__get_ParentNode(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  
  FUN_02f08768();
  FUN_02f08768(UnityEngine_UIElements_StylePropertyNameCollection_Enumerator_var);
  FUN_02f08768(
              UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
              );
  FUN_02f08768(PTR_DAT_067d9340);
  FUN_02f08768(UnityEngine_UIElements_StyleSheet_ImportStruct_var);
  FUN_02f08768(UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var);
  *(undefined1 *)(unaff_x20 + 0xe94) = 1;
  if (*(char *)(unaff_x19 + 0xa0) != '\0') {
    return;
  }
  in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xa8);
  cStack0000000000000024 = '\0';
  FUN_05136fe0(in_stack_00000028,&stack0x00000024,0);
  puVar2 = UnityEngine_AsyncInstantiateOperation_var;
  if (*(char *)(unaff_x19 + 0xa0) != '\0') goto LAB_0512624c;
  if (*(int *)(*(long *)UnityEngine_AsyncInstantiateOperation_var + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_0511c5fc();
  if ((uVar4 & 1) == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067d5360);
    uVar5 = thunk_FUN_02f45270();
    uVar6 = thunk_FUN_02f6ef30(Unity_AppUI_UI_SwipeView_UxmlSerializedData_var);
    FUN_05089198(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02f6ef30(TMPro_TMP_DefaultControls_Resources_var);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,uVar6);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  thunk_FUN_02f3a8ec(0);
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x59);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar5;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x58);
  *(undefined8 *)(unaff_x19 + 0x98) = uVar5;
  if (*(long *)(unaff_x19 + 0x90) == 0) {
LAB_05125ed4:
    uVar5 = 0;
  }
  else {
    Newtonsoft_Json_Converters_XCommentWrapper__get_Text();
    if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_05125ed4;
    uVar5 = FUN_04f65260(0,*(long *)(unaff_x19 + 0x98),0);
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x129);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar6;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x12a);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar6;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x167);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar6;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar6 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x168);
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar6;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar3 = FUN_05126548(*(long *)(unaff_x19 + 0x10),0xd);
  puVar1 = PTR_DAT_067c8f80;
  *(undefined4 *)(unaff_x19 + 0xe8) = uVar3;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050d65ac(uVar3,0x10,0);
  uVar3 = FUN_050d645c(uVar6,1,0);
  *(undefined4 *)(unaff_x19 + 0xe8) = uVar3;
  lVar7 = 0xb8;
  if (*(long *)(unaff_x19 + 0xc0) != 0) {
    lVar7 = 0xc0;
  }
  if (*(long *)(unaff_x19 + lVar7) != 0) {
    uVar5 = FUN_04f65260(uVar5,*(long *)(unaff_x19 + lVar7),0);
  }
  puVar1 = System_Runtime_CompilerServices_AsyncMethodBuilderCore_var;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(int *)(*(long *)System_Runtime_CompilerServices_AsyncMethodBuilderCore_var + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar4 = FUN_02f1ebb0(uVar6,uVar5,unaff_x19 + 0x108,*(undefined8 *)(*(long *)puVar1 + 0xb8));
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320,0x11);
    lVar7 = *(long *)puVar1;
    *(undefined8 *)(unaff_x19 + 0x108) = uVar5;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar7 + 0xb8) = 0;
  }
  puVar2 = System_Runtime_Remoting_Messaging_AsyncResult_var;
  if (*(int *)(*(long *)System_Runtime_Remoting_Messaging_AsyncResult_var + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_0511c73c(0);
  if (DAT_06bb9ecf == '\0') {
    FUN_02f08768(System_Runtime_Remoting_Messaging_AsyncResult_var);
    DAT_06bb9ecf = '\x01';
  }
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar2;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d68b8);
  FUN_0508dae8(uVar6,uVar5,uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),5);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),1);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar5;
  if (*(long *)(unaff_x19 + 0x48) == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0xc);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),7);
    uVar5 = FUN_04f65260(uVar5,uVar6,0);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar7 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x10);
  *(long *)(unaff_x19 + 0x38) = lVar7;
  if (lVar7 == 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0x14);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),0xd);
  puVar2 = UnityEngine_UIElements_StyleVariableResolver_ResolveContext_var;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
  uVar4 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)puVar2,0);
  puVar8 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
  if (((uVar4 & 1) == 0) &&
     (uVar4 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)PTR_DAT_067d9340,0
                                ),
     puVar8 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var, (uVar4 & 1) == 0)) {
    uVar5 = 0;
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      uVar4 = FUN_04f6dcac(*(long *)(unaff_x19 + 0x58),
                           *(undefined8 *)
                            UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_MetaOpenXRRaycastProvider_var
                           ,0);
      puVar8 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
      if ((uVar4 & 1) != 0) goto LAB_05126208;
      uVar5 = *(undefined8 *)(unaff_x19 + 0x58);
    }
    uVar4 = thunk_FUN_04f6d944(uVar5,*(undefined8 *)
                                      UnityEngine_UIElements_StyleSheet_ImportStruct_var,0);
    puVar8 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var;
    if (((((uVar4 & 1) != 0) ||
         (uVar4 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                     *(undefined8 *)Unity_AppUI_UI_Stepper_UxmlSerializedData_var,0)
         , puVar8 = (undefined8 *)Unity_AppUI_UI_SliderFloat_UxmlSerializedData_var,
         (uVar4 & 1) != 0)) ||
        (uVar4 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                    *(undefined8 *)
                                     UnityEngine_UIElements_StylePropertyNameCollection_Enumerator_var
                                    ,0),
        puVar8 = (undefined8 *)
                 UnityEngine_UIElements_StylePropertyAnimationSystem_ElementPropertyPair_var,
        (uVar4 & 1) != 0)) ||
       (uVar4 = thunk_FUN_04f6d944(*(undefined8 *)(unaff_x19 + 0x58),
                                   *(undefined8 *)Unity_AppUI_UI_SliderInt_UxmlSerializedData_var,0)
       , puVar8 = (undefined8 *)Unity_AppUI_UI_Spacer_UxmlSerializedData_var, (uVar4 & 1) != 0))
    goto LAB_05126208;
  }
  else {
LAB_05126208:
    *(undefined8 *)(unaff_x19 + 0x28) = *puVar8;
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_051264c4(*(long *)(unaff_x19 + 0x10),10);
  *(undefined8 *)(unaff_x19 + 200) = uVar5;
  FUN_05126598();
  if (*(char *)(unaff_x19 + 0xec) != '\0') {
    Newtonsoft_Json_Converters_XCommentWrapper__get_Text();
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0xa0) = 1;
LAB_0512624c:
  if (cStack0000000000000024 != '\0') {
    thunk_FUN_02f16354(in_stack_00000028,0);
  }
  return;
}


