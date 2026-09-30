/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 055df48c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  undefined2 *unaff_x23;
  long lVar16;
  undefined2 *unaff_x24;
  undefined8 uVar17;
  long *unaff_x27;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  if (unaff_w20 == 0) {
LAB_055df6d8:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
  uVar1 = *unaff_x24;
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar7 = FUN_055b9ef0(uVar1,0);
  uVar1 = *(undefined2 *)
           ((long)unaff_x24 + ((long)(((ulong)unaff_w20 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar9 = FUN_055b9ef0(uVar1,0);
  if ((uVar9 & 1) == 0) {
    if (unaff_w19 == 0) goto LAB_055df6d8;
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar8 = FUN_055b9ef0(uVar1,0);
  }
  else {
    uVar8 = 1;
  }
  puVar2 = PTR_DAT_06a83828;
  uVar10 = FUN_03999244();
  uVar11 = FUN_03999244();
  uVar12 = FUN_03999244();
  uVar10 = FUN_05651138(uVar10,0);
  uVar11 = FUN_05651138(uVar11,0);
  uVar12 = FUN_05651138(uVar12,0);
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  FUN_049d9420(&stack0x00000080,uVar10,unaff_w21,uVar11,unaff_w20,uVar12,unaff_w19,uVar7 & 1);
  lVar13 = *(long *)puVar2;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar13 = *(long *)puVar2;
  }
  uVar6 = in_stack_000000a8;
  uVar5 = in_stack_000000a0;
  uVar4 = in_stack_00000098;
  uVar12 = in_stack_00000090;
  uVar11 = in_stack_00000088;
  uVar10 = in_stack_00000080;
  puVar3 = PTR_DAT_06a83840;
  puVar15 = *(undefined8 **)(lVar13 + 0xb8);
  lVar16 = puVar15[2];
  if (lVar16 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar15 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar17 = *puVar15;
    lVar16 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a83838);
    FUN_045d32e0(lVar16,uVar17,*(undefined8 *)PTR_DAT_06a83848,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar14 = lVar16;
    thunk_FUN_02ee2be8(plVar14,lVar16);
  }
  in_stack_00000080 = uVar10;
  in_stack_00000088 = uVar11;
  in_stack_00000090 = uVar12;
  in_stack_00000098 = uVar4;
  in_stack_000000a0 = uVar5;
  in_stack_000000a8 = uVar6;
  FUN_03aa24a0(unaff_w20 + unaff_w21 + unaff_w19 + ((uVar7 ^ 0xffffffff) & 1) +
               ((uVar8 ^ 0xffffffff) & 1),&stack0x00000080,lVar16,*(undefined8 *)puVar3);
  return;
}


