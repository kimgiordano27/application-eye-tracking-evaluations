/*
FUNCTION_NAME: UnityEngine.UIElements.Internal.TypePathVisitor$$Unity.Properties.IPropertyVisitor.Visit<Cursor,-Vector2>
ENTRY_POINT: 020a00d8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4
*/


void UnityEngine_UIElements_Internal_TypePathVisitor__Unity_Properties_IPropertyVisitor_Visit<Cursor,_Vector2>
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long *param_4,
               undefined8 param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((*(long *)(param_6 + 0x38) == 0) &&
     (FUN_01c5c92c(PTR_Unity_Properties_IPropertyBag_TypeInfo_03cb7210),
     *(long *)(param_6 + 0x38) == 0)) {
    FUN_01c8c87c(param_6);
  }
  local_28 = 0;
  local_38 = 0;
  if (param_4 == (long *)0x0) {
LAB_020a031c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  uVar8 = (**(code **)(*param_4 + 0x218))(param_4,param_5,*(undefined8 *)(*param_4 + 0x220));
  local_28 = CONCAT44(param_2,uVar8);
  if (*(int *)(param_3 + 0x98) <= *(int *)(param_3 + 0xb8)) {
    uVar4 = Unity_Properties_Property<Cursor,_Vector2>__DeclaredValueType
                      (param_4,*(undefined8 *)(*(long *)(param_6 + 0x38) + 0x20));
    *(undefined8 *)(param_3 + 0xa0) = uVar4;
    thunk_FUN_01cc8040((undefined8 *)(param_3 + 0xa0),uVar4);
    return;
  }
  uVar1 = Unity_Properties_PropertyBag__TryGetPropertyBagForValue<Vector2>
                    (&local_28,&local_38,*(undefined8 *)(*(long *)(param_6 + 0x38) + 0x28));
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_3 + 0xa8) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_6 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01c8c820();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    lVar7 = *(long *)(*(long *)(param_6 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01c8c820();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01c8c820();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    lVar2 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01c8c820();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01c8c820();
    }
    lVar7 = *(long *)(param_6 + 0x38);
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_01ea7a74(*(undefined8 *)(lVar7 + 0x48));
      if (plVar3 == (long *)0x0) goto LAB_020a031c;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))
                        ((undefined4)local_28,local_28._4_4_,0,0,plVar3,
                         *(undefined8 *)(*plVar3 + 0x1c0));
      lVar7 = *(long *)(param_6 + 0x38);
      if ((uVar1 & 1) != 0) {
        uVar4 = Unity_Properties_Property<Cursor,_Vector2>__DeclaredValueType
                          (param_4,*(undefined8 *)(lVar7 + 0x20));
        plVar3 = (long *)Unity_Properties_PropertyBag__GetPropertyBag(uVar4,0);
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar2 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)PTR_Unity_Properties_IPropertyBag_TypeInfo_03cb7210) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_020a02f8;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01c8cb54(plVar3,*(long *)PTR_Unity_Properties_IPropertyBag_TypeInfo_03cb7210,0)
        ;
LAB_020a02f8:
        (*(code *)*puVar5)(plVar3,param_3,puVar5[1]);
        return;
      }
    }
    Unity_Properties_PropertyContainer__Accept<Vector2>
              (param_3,&local_28,0,*(undefined8 *)(lVar7 + 0x68));
  }
  return;
}


