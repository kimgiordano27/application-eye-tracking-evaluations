/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 08e2a710
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long in_x10;
  undefined4 *unaff_x19;
  long *plVar8;
  long *unaff_x20;
  long *in_stack_00000010;
  undefined2 uStack0000000000000018;
  undefined6 uStack000000000000001a;
  
  lVar5 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == **(long **)(in_x10 + 0x8c0)) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_08e2a918;
      }
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68();
LAB_08e2a918:
  iVar3 = (*(code *)*puVar4)();
  if (iVar3 == 0) {
    *unaff_x19 = 0;
    *(ulong *)(unaff_x19 + 10) = CONCAT62(uStack000000000000001a,uStack0000000000000018);
    *(long **)(unaff_x19 + 8) = in_stack_00000010;
    thunk_FUN_049ee3d8(unaff_x19 + 8,0);
    FUN_05a7c33c(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    if (DAT_0b31f1c9 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac098c0);
      DAT_0b31f1c9 = '\x01';
    }
    uVar2 = uStack0000000000000018;
    plVar8 = in_stack_00000010;
    if (in_stack_00000010 != (long *)0x0) {
      lVar5 = *in_stack_00000010;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac098c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_08e2a768;
          }
          uVar7 = uVar7 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(in_stack_00000010,*(long *)PTR_DAT_0ac098c0,2);
LAB_08e2a768:
      (*(code *)*puVar4)(plVar8,uVar2,puVar4[1]);
    }
    cVar1 = DAT_0b31f1cb;
    *unaff_x19 = 0xfffffffe;
    if (cVar1 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac09870);
      DAT_0b31f1cb = '\x01';
    }
    plVar8 = *(long **)(unaff_x19 + 2);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac09870) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_08e2a800;
          }
          uVar7 = uVar7 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac09870,2);
LAB_08e2a800:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
    }
  }
  return;
}


