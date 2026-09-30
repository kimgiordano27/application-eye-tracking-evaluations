/*
FUNCTION_NAME: FUN_0591cd98
ENTRY_POINT: 0591cd98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0591d114) */

void FUN_0591cd98(long param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long local_40;
  long *local_38;
  
  puVar1 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
  ;
  if ((DAT_066d35fc & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<HelpBoxMessageType>_set_defaultValue__
                );
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<Color>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<Color>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__);
    DAT_066d35fc = 1;
  }
  lVar3 = *(long *)puVar1;
  local_40 = 0;
  local_38 = (long *)0x0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  if ((lVar3 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  local_38 = (long *)FUN_032fa71c(param_2,*(undefined8 *)(lVar3 + 0x20),&local_40,lVar3,
                                  *(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<AutoGun>_Invoke__,0x3d5,
                                  *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Color>__ctor__
                                 );
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(local_40 + 0x10) = param_1;
  thunk_FUN_02bb0e9c((long *)(local_40 + 0x10),param_1);
  lVar3 = local_40;
  if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar4 = FUN_0590661c(*(long *)(param_1 + 0x138),
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  puVar8 = (undefined8 *)(lVar3 + 0x18);
  *puVar8 = uVar4;
  thunk_FUN_02bb0e9c(puVar8);
  plVar2 = local_38;
  if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(local_40 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar4 = *(undefined8 *)(*(long *)(local_40 + 0x18) + 0xf8);
  *(byte *)(local_40 + 0x20) = param_3 & 1;
  *(undefined8 *)(local_40 + 0x24) = uVar4;
  if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *local_38;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
        puVar8 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_0591cf70;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_02b7654c(local_38,*(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,
                        0xc);
LAB_0591cf70:
  (*(code *)*puVar8)(plVar2,1,puVar8[1]);
  plVar2 = local_38;
  puVar1 = Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
  lVar3 = *(long *)Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  puVar8 = *(undefined8 **)(lVar3 + 0xb8);
  lVar9 = puVar8[3];
  if (lVar9 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar4 = *puVar8;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    FUN_03e02810(lVar9,uVar4,
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Color>_AddListener__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar5 = lVar9;
    thunk_FUN_02bb0e9c(plVar5,lVar9);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar3 = *plVar2;
  lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_0591d064;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar3 = FUN_02b7654c(plVar2);
LAB_0591d064:
  lVar3 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar3 + 8),lVar10);
  (**(code **)(lVar3 + 8))(plVar2,lVar9,lVar3);
  plVar2 = local_38;
  if (local_38 != (long *)0x0) {
    lVar3 = *local_38;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar8 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0591d0e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_02b7654c(local_38,*(long *)PTR_DAT_06312f78,0);
LAB_0591d0e8:
    (*(code *)*puVar8)(plVar2,puVar8[1]);
  }
  return;
}


