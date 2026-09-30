/*
FUNCTION_NAME: TMPro.TMP_InputField$$CreateCursorVerts
ENTRY_POINT: 0591ce54
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0591d114) */

void TMPro_TMP_InputField__CreateCursorVerts(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  int in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  byte unaff_w19;
  long unaff_x20;
  long lVar9;
  long unaff_x21;
  long lVar10;
  long *unaff_x22;
  long in_stack_00000010;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
    param_1 = *unaff_x22;
  }
  if ((*(long *)(*(long *)(param_1 + 0xb8) + 0x40) == 0) || (unaff_x21 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar2 = (long *)FUN_032fa71c();
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(long *)(in_stack_00000010 + 0x10) = unaff_x20;
  thunk_FUN_02bb0e9c();
  if (*(long *)(unaff_x20 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = FUN_0590661c(*(long *)(unaff_x20 + 0x138),
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(in_stack_00000010 + 0x18) = uVar3;
  thunk_FUN_02bb0e9c((undefined8 *)(in_stack_00000010 + 0x18));
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(long *)(in_stack_00000010 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = *(undefined8 *)(*(long *)(in_stack_00000010 + 0x18) + 0xf8);
  *(byte *)(in_stack_00000010 + 0x20) = unaff_w19 & 1;
  *(undefined8 *)(in_stack_00000010 + 0x24) = uVar3;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_0591cf70;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02b7654c(plVar2,*(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,
                        0xc);
LAB_0591cf70:
  (*(code *)*puVar4)(plVar2,1,puVar4[1]);
  puVar1 = Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
  lVar6 = *(long *)Method_UnityEngine_Events_UnityEvent<AutoGun>_AddListener__;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar6 + 0xb8);
  lVar9 = puVar4[3];
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar3 = *puVar4;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)Method_UnityEngine_Events_UnityEvent<bool>_Invoke__);
    FUN_03e02810(lVar9,uVar3,
                 *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Color>_AddListener__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar5 = lVar9;
    thunk_FUN_02bb0e9c(plVar5,lVar9);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar6 = *plVar2;
  lVar10 = *(long *)Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x50)) * 0x10 + 0x138;
        goto LAB_0591d064;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_02b7654c(plVar2);
LAB_0591d064:
  lVar6 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar6 + 8),lVar10);
  (**(code **)(lVar6 + 8))(plVar2,lVar9,lVar6);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0591d0e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)PTR_DAT_06312f78,0);
LAB_0591d0e8:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return;
}


