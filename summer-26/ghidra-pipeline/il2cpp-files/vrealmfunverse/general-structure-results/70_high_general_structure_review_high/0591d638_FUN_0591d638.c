/*
FUNCTION_NAME: FUN_0591d638
ENTRY_POINT: 0591d638
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0591d9a8) */

void FUN_0591d638(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long local_38;
  
  if ((DAT_066d35fe & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<DamageInfo>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<DamageInfo>_Invoke__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                );
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>_Invoke__);
    DAT_066d35fe = 1;
  }
  local_38 = 0;
  if (((*(long *)(param_1 + 0x138) != 0) &&
      (lVar2 = FUN_0590661c(*(long *)(param_1 + 0x138),
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                           ), lVar2 != 0)) && (*(long *)(lVar2 + 0x1a0) != 0)) {
    uVar3 = FUN_057ec748(*(long *)(lVar2 + 0x1a0),0);
    puVar1 = 
    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
    ;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (param_2 == 0) goto LAB_0591d9a0;
      plVar4 = (long *)FUN_032fa71c(param_2,*(undefined8 *)
                                             Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>_Invoke__
                                    ,&local_38,
                                    *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90),
                                    *(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__,0x491,
                                    *(undefined8 *)
                                     Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>__ctor__
                                   );
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(long *)(local_38 + 0x10) = lVar2;
      thunk_FUN_02bb0e9c((long *)(local_38 + 0x10),lVar2);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar2 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
            goto LAB_0591d804;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02b7654c(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xc);
LAB_0591d804:
      (*(code *)*puVar5)(plVar4,1,puVar5[1]);
      puVar1 = Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
      lVar2 = *(long *)Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar2 = *(long *)puVar1;
      }
      puVar5 = *(undefined8 **)(lVar2 + 0xb8);
      lVar8 = puVar5[5];
      if (lVar8 == 0) {
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar9 = *puVar5;
        lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_UnityEngine_Events_UnityEvent<DamageInfo>__ctor__);
        FUN_03e02810(lVar8,uVar9,
                     *(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<DeactivateEventArgs>_AddListener__,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
        *plVar6 = lVar8;
        thunk_FUN_02bb0e9c(plVar6,lVar8);
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar2 = *plVar4;
      lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<DamageInfo>_Invoke__;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
            lVar2 = lVar2 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
            goto LAB_0591d8f8;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      lVar2 = FUN_02b7654c(plVar4);
LAB_0591d8f8:
      lVar2 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar2 + 8),lVar10);
      (**(code **)(lVar2 + 8))(plVar4,lVar8,lVar2);
      if (plVar4 != (long *)0x0) {
        lVar2 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0591d97c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)PTR_DAT_06312f78,0);
LAB_0591d97c:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
    }
    return;
  }
LAB_0591d9a0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


