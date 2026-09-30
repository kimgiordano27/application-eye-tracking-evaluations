/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 04fd021c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04fd0b4c) */

void Newtonsoft_Json_JsonWriter__BuildStateArray(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  int unaff_w25;
  long *in_stack_00000020;
  undefined2 uStack0000000000000028;
  undefined6 uStack000000000000002a;
  
  puVar5 = (undefined8 *)FUN_02d9a5d4(param_1,param_2,0);
  iVar4 = (*(code *)*puVar5)();
  if (iVar4 == 0) {
    *unaff_x19 = 4;
    *(ulong *)(unaff_x19 + 0x18) = CONCAT62(uStack000000000000002a,uStack0000000000000028);
    *(long **)(unaff_x19 + 0x16) = in_stack_00000020;
    thunk_FUN_02dd37b4(unaff_x19 + 0x16,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032ea098(unaff_x19 + 2,&stack0x00000020);
  }
  else {
    if (DAT_06b78a97 == '\0') {
      FUN_02d6084c(PTR_DAT_0676b838);
      DAT_06b78a97 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0676b838 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b7866a == '\0') {
      FUN_02d6084c(PTR_DAT_06771e78);
      FUN_02d6084c(PTR_DAT_06764930);
      DAT_06b7866a = '\x01';
    }
    uVar3 = uStack0000000000000028;
    plVar2 = in_stack_00000020;
    if (in_stack_00000020 != (long *)0x0) {
      lVar6 = *in_stack_00000020;
      bVar1 = *(byte *)(*(long *)PTR_DAT_06764930 + 0x130);
      if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06764930)) {
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06771e78) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_04fd0340;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(in_stack_00000020,*(long *)PTR_DAT_06771e78,2);
LAB_04fd0340:
        (*(code *)*puVar5)(plVar2,uVar3,puVar5[1]);
      }
      else {
        FUN_04f2cd34(in_stack_00000020,0);
      }
    }
    if (unaff_w25 < 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = FUN_04fcaf58();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_0506e848(lVar6,0);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_04f2db0c(unaff_x19 + 2,0);
  }
  return;
}


