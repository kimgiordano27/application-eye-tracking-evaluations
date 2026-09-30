/*
FUNCTION_NAME: Oculus.Interaction.RectTransformBoundsClipperDriver$$Start
ENTRY_POINT: 051bfff4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


uint Oculus_Interaction_RectTransformBoundsClipperDriver__Start(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w9;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined8 uVar5;
  long unaff_x26;
  
  if (in_w9 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050e4454();
  uVar1 = FUN_050ed374();
  if ((uVar1 & 1) == 0) {
    if ((unaff_x23 != 0) && (*(int *)(unaff_x23 + 0x18) == 1)) {
      plVar2 = *(long **)(unaff_x23 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_051c022c;
      uVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      uVar5 = *(undefined8 *)Unity_AppUI_UI_Checkbox_UxmlSerializedData_var;
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(unaff_x26 + 0xe0));
      }
      uVar5 = FUN_050e4454(uVar5,0);
      uVar1 = FUN_050edfb8(uVar3,uVar5,0);
      if ((uVar1 & 1) == 0) {
LAB_051c020c:
        *unaff_x21 = unaff_x20;
        return unaff_w22 & 1;
      }
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar3 = FUN_050656a0(0);
    FUN_02a7da48();
    uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
    thunk_FUN_02f6ef30(System_Converter<ParameterExpression,_Expression>_TypeInfo);
    FUN_02a7d698();
    uVar5 = FUN_051c3610(uVar5);
    uVar4 = thunk_FUN_02f6ef30(Unity_AppUI_UI_Checkbox_UxmlSerializedData_var);
    FUN_02a7d698(*(undefined8 *)(unaff_x26 + 0xe0));
    FUN_050e4454(uVar4,0);
    uVar4 = thunk_FUN_02f6ef30(System_Func<Type,_SerializationEvents>_TypeInfo);
    uVar3 = FUN_051b956c(uVar4,uVar3,uVar5);
  }
  else {
    if ((unaff_x23 != 0) && (*(int *)(unaff_x23 + 0x18) == 2)) {
      plVar2 = *(long **)(unaff_x23 + 0x20);
      if (plVar2 == (long *)0x0) {
LAB_051c022c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      uVar5 = *(undefined8 *)Unity_AppUI_UI_Checkbox_UxmlSerializedData_var;
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)(unaff_x26 + 0xe0));
      }
      uVar5 = FUN_050e4454(uVar5,0);
      uVar1 = FUN_050edfb8(uVar3,uVar5,0);
      if ((uVar1 & 1) == 0) {
        if ((*(uint *)(unaff_x23 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar2 = *(long **)(unaff_x23 + 0x28);
        if (plVar2 == (long *)0x0) goto LAB_051c022c;
        uVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
        uVar5 = *(undefined8 *)System_Func<Type,_object>_TypeInfo;
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)(unaff_x26 + 0xe0));
        }
        uVar5 = FUN_050e4454(uVar5,0);
        uVar1 = FUN_050edfb8(uVar3,uVar5,0);
        if ((uVar1 & 1) == 0) goto LAB_051c020c;
      }
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar3 = FUN_050656a0(0);
    FUN_02a7da48();
    uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
    thunk_FUN_02f6ef30(System_Converter<ParameterExpression,_Expression>_TypeInfo);
    FUN_02a7d698();
    uVar5 = FUN_051c3610(uVar5);
    uVar4 = thunk_FUN_02f6ef30(Unity_AppUI_UI_Checkbox_UxmlSerializedData_var);
    FUN_02a7d698(*(undefined8 *)(unaff_x26 + 0xe0));
    FUN_050e4454(uVar4,0);
    uVar4 = thunk_FUN_02f6ef30(System_Func<Type,_object>_TypeInfo);
    FUN_050e4454(uVar4,0);
    uVar4 = thunk_FUN_02f6ef30(System_Func<Type,_ReflectionObject>_TypeInfo);
    uVar3 = FUN_051b9674(uVar4,uVar3,uVar5);
  }
  thunk_FUN_02f6ef30(
                    UnityEngine_Pool_CollectionPool<List<GradientAlphaKey>,_GradientAlphaKey>_TypeInfo
                    );
  uVar5 = thunk_FUN_02f45270();
  FUN_0515dff4(uVar5,uVar3,0);
  uVar3 = thunk_FUN_02f6ef30(System_Func<Vector2,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar5,uVar3);
}


