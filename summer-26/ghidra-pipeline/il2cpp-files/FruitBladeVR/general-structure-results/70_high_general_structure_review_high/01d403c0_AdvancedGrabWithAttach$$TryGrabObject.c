/*
FUNCTION_NAME: AdvancedGrabWithAttach$$TryGrabObject
ENTRY_POINT: 01d403c0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;repeated_pose_getters;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

void AdvancedGrabWithAttach__TryGrabObject
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long local_a8 [4];
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  if ((DAT_03ef1392 & 1) == 0) {
    FUN_01c5c92c(PTR_AdvancedGrabWithAttach_TypeInfo_03cb5a88);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_Dictionary<string,_GameObject>_TryGetValue___03cb5a90
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_HashSet<GameObject>_Add___03cb5a98);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_HashSet<GameObject>_Contains___03cb5aa0);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(PTR_UnityEngine_Physics_TypeInfo_03cb5aa8);
    DAT_03ef1392 = 1;
  }
  local_a8[0] = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  local_a8[2] = 0;
  local_a8[1] = 0;
  uStack_88 = 0;
  local_84 = 0;
  local_a8[3] = 0;
  lVar4 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar4 != 0) {
    uVar11 = UnityEngine_Transform__get_position(lVar4,0);
    uVar13 = param_2;
    uVar14 = param_3;
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    puVar1 = PTR_UnityEngine_Physics_TypeInfo_03cb5aa8;
    if (lVar4 != 0) {
      uVar12 = UnityEngine_Transform__get_forward(lVar4,0);
      uVar15 = *(undefined4 *)(param_4 + 0x24);
      uVar3 = UnityEngine_LayerMask__op_Implicit(*(undefined4 *)(param_4 + 0x28),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Physics__Raycast
                        (uVar11,param_2,param_3,uVar12,uVar13,uVar14,uVar15,local_a8 + 1,uVar3,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar4 = UnityEngine_RaycastHit__get_collider(local_a8 + 1,0);
      if (lVar4 != 0) {
        lVar4 = UnityEngine_Component__get_gameObject(lVar4,0);
        plVar9 = (long *)(param_4 + 0x48);
        *plVar9 = lVar4;
        thunk_FUN_01cc8040(plVar9,lVar4);
        puVar1 = PTR_AdvancedGrabWithAttach_TypeInfo_03cb5a88;
        lVar4 = *(long *)PTR_AdvancedGrabWithAttach_TypeInfo_03cb5a88;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
          lVar4 = *(long *)puVar1;
        }
        if (**(long **)(lVar4 + 0xb8) != 0) {
          uVar5 = System_Collections_Generic_HashSet<object>__Contains
                            (**(long **)(lVar4 + 0xb8),*plVar9,
                             *(undefined8 *)
                              PTR_Method_System_Collections_Generic_HashSet<GameObject>_Contains___03cb5aa0
                            );
          if ((uVar5 & 1) != 0) {
            return;
          }
          if (*(long *)(param_4 + 0x48) != 0) {
            lVar4 = *(long *)(param_4 + 0x40);
            uVar6 = UnityEngine_GameObject__get_tag(*(long *)(param_4 + 0x48),0);
            if (lVar4 != 0) {
              uVar5 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                                (lVar4,uVar6,local_a8,
                                 *(undefined8 *)
                                  PTR_Method_System_Collections_Generic_Dictionary<string,_GameObject>_TryGetValue___03cb5a90
                                );
              if ((uVar5 & 1) == 0) {
                return;
              }
              plVar10 = (long *)(param_4 + 0x50);
              lVar4 = *plVar10;
              if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
                thunk_FUN_01cb0d4c();
              }
              uVar5 = UnityEngine_Object__op_Inequality(lVar4,0,0);
              if ((uVar5 & 1) != 0) {
                AdvancedGrabWithAttach__ReleaseObject(param_4);
              }
              if (*plVar9 != 0) {
                UnityEngine_GameObject__SetActive(*plVar9,0,0);
                *plVar10 = local_a8[0];
                thunk_FUN_01cc8040(plVar10);
                if (*plVar10 != 0) {
                  UnityEngine_GameObject__SetActive(*plVar10,1,0);
                  if ((*plVar10 != 0) &&
                     (lVar4 = UnityEngine_GameObject__get_transform(*plVar10,0), lVar4 != 0)) {
                    UnityEngine_Transform__SetParent(lVar4,*(undefined8 *)(param_4 + 0x30),0);
                    if (*(long *)(param_4 + 0x50) != 0) {
                      lVar4 = UnityEngine_GameObject__get_transform(*(long *)(param_4 + 0x50),0);
                      if (DAT_03ef1415 == '\0') {
                        FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
                        DAT_03ef1415 = '\x01';
                      }
                      puVar2 = PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0;
                      if (lVar4 != 0) {
                        puVar7 = *(undefined4 **)
                                  (*(long *)PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0 + 0xb8);
                        UnityEngine_Transform__set_localPosition
                                  (*puVar7,puVar7[1],puVar7[2],lVar4,0);
                        if (*plVar10 != 0) {
                          lVar4 = UnityEngine_GameObject__get_transform(*plVar10,0);
                          if (DAT_03ef1416 == '\0') {
                            FUN_01c5c92c(PTR_UnityEngine_Quaternion_TypeInfo_03cb5ab8);
                            DAT_03ef1416 = '\x01';
                          }
                          if (lVar4 != 0) {
                            puVar7 = *(undefined4 **)
                                      (*(long *)PTR_UnityEngine_Quaternion_TypeInfo_03cb5ab8 + 0xb8)
                            ;
                            UnityEngine_Transform__set_localRotation
                                      (*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar4,0);
                            if (*plVar10 != 0) {
                              lVar4 = UnityEngine_GameObject__get_transform(*plVar10,0);
                              if (DAT_03ef1417 == '\0') {
                                FUN_01c5c92c(PTR_UnityEngine_Vector3_TypeInfo_03cb5ab0);
                                DAT_03ef1417 = '\x01';
                              }
                              if (lVar4 != 0) {
                                lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
                                UnityEngine_Transform__set_localScale
                                          (*(undefined4 *)(lVar8 + 0xc),
                                           *(undefined4 *)(lVar8 + 0x10),
                                           *(undefined4 *)(lVar8 + 0x14),lVar4,0);
                                lVar4 = *(long *)puVar1;
                                if (*(int *)(lVar4 + 0xe4) == 0) {
                                  thunk_FUN_01cb0d4c();
                                  lVar4 = *(long *)puVar1;
                                }
                                if (**(long **)(lVar4 + 0xb8) != 0) {
                                  System_Collections_Generic_HashSet<object>__Add
                                            (**(long **)(lVar4 + 0xb8),*plVar9,
                                             *(undefined8 *)
                                              PTR_Method_System_Collections_Generic_HashSet<GameObject>_Add___03cb5a98
                                            );
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


