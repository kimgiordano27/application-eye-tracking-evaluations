/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 019fe6d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceQueryComplete(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x21;
  long lVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IntegratedSubsystem>_Add__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x8ab) = 1;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_02681b9c(uVar6,0,0);
  lVar4 = *(long *)(param_2 + 0x18);
  if ((uVar2 & 1) == 0) {
    if (lVar4 == 0) goto LAB_019fe888;
  }
  else {
    if (lVar4 == 0) goto LAB_019fe888;
    if (*(int *)(lVar4 + 0x7c) == 3) {
      return;
    }
  }
  FUN_019fc8d0(&stack0x00000020,lVar4);
  FUN_019fe88c(param_2);
  plVar7 = *(long **)(param_2 + 0x48);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    lVar8 = *(long *)(param_2 + 0x38);
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__)
        {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_019fe7d0;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_00d59724(plVar7,*(long *)
                                  Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                          ,0);
LAB_019fe7d0:
    uVar9 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((lVar8 != 0) && (*(undefined4 *)(lVar8 + 0xa8) = uVar9, *(long *)(param_2 + 0x18) != 0)) {
      lVar4 = *(long *)(param_2 + 0x38);
      uVar9 = FUN_019fdbf8();
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0xa4) = uVar9;
        lVar4 = *(long *)(param_2 + 0x38);
        uVar6 = *(undefined8 *)(param_2 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar2 = FUN_0268b4e0(uVar6,0,0);
        if ((uVar2 & 1) == 0) {
          if (*(long *)(param_2 + 0x20) == 0) goto LAB_019fe888;
          bVar1 = *(int *)(*(long *)(param_2 + 0x20) + 0x38) == 0;
        }
        else {
          bVar1 = true;
        }
        if (lVar4 != 0) {
          *(bool *)(lVar4 + 0xac) = bVar1;
          if ((*(long *)(param_2 + 0x18) != 0) && (*(long *)(param_2 + 0x38) != 0)) {
            *(bool *)(*(long *)(param_2 + 0x38) + 0xa0) =
                 *(int *)(*(long *)(param_2 + 0x18) + 0x7c) == 2;
            FUN_019fbdd4();
            return;
          }
        }
      }
    }
  }
LAB_019fe888:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


