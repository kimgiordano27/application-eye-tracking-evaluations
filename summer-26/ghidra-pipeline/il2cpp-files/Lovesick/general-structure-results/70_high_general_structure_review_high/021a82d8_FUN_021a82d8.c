/*
FUNCTION_NAME: FUN_021a82d8
ENTRY_POINT: 021a82d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x021a853c) */

long FUN_021a82d8(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 local_50 [2];
  long local_48;
  
  puVar3 = Method_System_Xml_XmlTextWriter_WriteCData__;
  if ((DAT_0378155c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Append__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Character>_Clear__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_XmlTextWriter_WriteCData__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IntPoint>_get_Current__);
    DAT_0378155c = 1;
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  lVar4 = *(long *)puVar3;
  local_50[0] = 0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  cVar1 = *(char *)(*(long *)(lVar4 + 0xb8) + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  lVar4 = FUN_0112fd4c(param_1,*(undefined8 *)
                                Method_System_Collections_Generic_List<TMP_Character>_Clear__);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0268ace8(lVar4,1,0);
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar3;
  }
  lVar8 = *(long *)(lVar5 + 0xb8);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  if (*(long *)(lVar8 + 0x20) != 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
      uVar7 = *(undefined4 *)(lVar8 + 0x18);
    }
    else {
      uVar7 = 0;
    }
    FUN_0179519c(*(undefined8 *)(lVar8 + 0x20),0,uVar7,0);
    lVar5 = *(long *)puVar3;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 0xffffffffffffffff;
  *(undefined1 *)(lVar5 + 0x38) = 0;
  if (lVar4 != 0) {
    FUN_010e5b20(lVar4,&local_48,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionState>_Append__);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0268b4e0(local_48,0,0);
    puVar3 = StringLiteral_302;
    if ((uVar6 & 1) == 0) {
      if (cVar1 == '\0') {
        return local_48;
      }
      if (local_48 == 0) goto LAB_021a8538;
      local_50[0] = *(undefined4 *)(local_48 + 0x98);
      uVar6 = FUN_021a6500(local_50);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_021a7314(local_48), (uVar6 & 1) == 0)) {
        return local_48;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c1d0(lVar4,0);
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar2 = Method_System_Collections_Generic_List_Enumerator<IntPoint>_get_Current__;
      FUN_0268c1d0(lVar4,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026611ec(*(undefined8 *)puVar2,param_1,0);
    }
    return 0;
  }
LAB_021a8538:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


