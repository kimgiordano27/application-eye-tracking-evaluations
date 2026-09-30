/*
FUNCTION_NAME: Meta.WitAi.Json.WitResponseArray.<get_Childs>d__13$$System.Collections.Generic.IEnumerator<Meta.WitAi.Json.WitResponseNode>.get_Current
ENTRY_POINT: 07219828
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


bool Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_Collections_Generic_IEnumerator<Meta_WitAi_Json_WitResponseNode>_get_Current
               (long param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  char in_stack_00000018;
  undefined8 in_stack_00000038;
  long in_stack_00000058;
  
  (**(code **)(param_1 + 0x138))();
  if (in_stack_00000058 == 0) goto LAB_072199c4;
  if (*(long *)(in_stack_00000058 + 0x48) != 0) {
    plVar8 = *(long **)(unaff_x19 + 0x10);
    lVar3 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
    if (lVar3 == 0) goto LAB_072199c4;
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_092b6950;
    thunk_FUN_040ec700();
    if (plVar8 == (long *)0x0) goto LAB_072199c4;
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092bc2c8) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_072198f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092bc2c8,0);
LAB_072198f0:
    (*(code *)*puVar4)(plVar8,0x2a,lVar3,puVar4[1]);
    if (in_stack_00000058 == 0) goto LAB_072199c4;
  }
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
      auVar9 = FUN_06016048(&stack0x00000018,*(undefined8 *)PTR_DAT_092bc300);
      FUN_05fff354(&stack0x00000040,0,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)puVar1);
    }
    return cVar2 != '\0';
  }
LAB_072199c4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


