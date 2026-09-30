/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray.<get_Childs>d__13$$System.Collections.Generic.IEnumerable<Meta.WitAi.Json.WitResponseNode>.GetEnumerator
ENTRY_POINT: 07219870
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


bool Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_Collections_Generic_IEnumerable<Meta_WitAi_Json_WitResponseNode>_GetEnumerator
               (long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  undefined8 in_stack_00000038;
  long in_stack_00000058;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)PTR_DAT_092b6950;
    thunk_FUN_040ec700();
    if (unaff_x20 != (long *)0x0) {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092bc2c8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_072198f0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00();
LAB_072198f0:
      (*(code *)*puVar3)();
      if (in_stack_00000058 != 0) {
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_05f8c45c(&stack0x00000008,*(undefined4 *)(in_stack_00000058 + 0x20),4,1,
                     *(undefined8 *)PTR_DAT_092be1e0);
        *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000010;
        *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000008;
        if (in_stack_00000058 != 0) {
          FUN_072199cc();
          FUN_07219ae8(&stack0x00000018);
          cVar2 = in_stack_00000018;
          puVar1 = PTR_DAT_092bc3b0;
          if (in_stack_00000018 != '\0') {
            auVar7 = FUN_06016048(&stack0x00000018,*(undefined8 *)PTR_DAT_092bc300);
            FUN_05fff354(&stack0x00000040,0,auVar7._0_8_,auVar7._8_8_,*(undefined8 *)puVar1);
          }
          return cVar2 != '\0';
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


