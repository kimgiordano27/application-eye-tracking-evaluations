/*
FUNCTION_NAME: SimpleJSON.JSONArray.<get_Children>d__18$$System.Collections.Generic.IEnumerable<SimpleJSON.JSONNode>.GetEnumerator
ENTRY_POINT: 0057b780
PROGRAM: TheRagmans-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void SimpleJSON_JSONArray_<get_Children>d__18__System_Collections_Generic_IEnumerable<SimpleJSON_JSONNode>_GetEnumerator
               (undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_x9;
  ulong uVar5;
  ulong in_x10;
  long in_x11;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  long in_stack_00000020;
  
  if (in_x10 < param_3) {
    lVar3 = ((long)param_1 - *param_2 >> 3) * in_x11;
    uVar1 = lVar3 + unaff_x20;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_004e1b28(param_2,0xaaaaaaaaaaaaaaa,lVar3,param_2 + 2);
    }
    lVar3 = in_x9 - *param_2 >> 3;
    uVar2 = 0xaaaaaaaaaaaaaaa;
    if (((ulong)(lVar3 * -0x5555555555555555) < 0x555555555555555) &&
       (uVar5 = lVar3 * 0x5555555555555556, uVar2 = uVar1, uVar1 <= uVar5)) {
      uVar2 = uVar5;
    }
    FUN_0057b938(&stack0x00000008,uVar2);
    lVar3 = unaff_x20 * 0x18;
    puVar4 = in_stack_00000018;
    if (lVar3 != 0) {
      puVar4 = in_stack_00000018 + unaff_x20 * 3;
      do {
        *in_stack_00000018 = 0;
        in_stack_00000018[1] = 0;
        in_stack_00000018[2] = 0;
        lVar3 = lVar3 + -0x18;
        in_stack_00000018 = in_stack_00000018 + 3;
      } while (lVar3 != 0);
    }
    in_stack_00000008 = *param_2;
    in_stack_00000018 = (undefined8 *)param_2[1];
    if (in_stack_00000018 != (undefined8 *)in_stack_00000008) {
      do {
        uVar7 = *(undefined8 *)((long)in_stack_00000018 + -0x10);
        uVar6 = *(undefined8 *)((long)in_stack_00000018 + -0x18);
        *(undefined8 *)(in_stack_00000010 + -8) = *(undefined8 *)((long)in_stack_00000018 + -8);
        *(undefined8 *)(in_stack_00000010 + -0x10) = uVar7;
        *(undefined8 *)(in_stack_00000010 + -0x18) = uVar6;
        *(undefined8 *)((long)in_stack_00000018 + -0x10) = 0;
        *(undefined8 *)((long)in_stack_00000018 + -8) = 0;
        *(undefined8 *)((long)in_stack_00000018 + -0x18) = 0;
        in_stack_00000018 = (undefined8 *)((long)in_stack_00000018 + -0x18);
        in_stack_00000010 = in_stack_00000010 + -0x18;
      } while ((undefined8 *)in_stack_00000008 != in_stack_00000018);
      in_stack_00000008 = *param_2;
      in_stack_00000018 = (undefined8 *)param_2[1];
    }
    *param_2 = in_stack_00000010;
    param_2[1] = (long)puVar4;
    lVar3 = param_2[2];
    param_2[2] = in_stack_00000020;
    in_stack_00000010 = in_stack_00000008;
    in_stack_00000020 = lVar3;
    FUN_0057b9a8(&stack0x00000008);
  }
  else {
    lVar3 = unaff_x20 * 0x18;
    puVar4 = param_1;
    if (lVar3 != 0) {
      puVar4 = param_1 + unaff_x20 * 3;
      do {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        lVar3 = lVar3 + -0x18;
        param_1 = param_1 + 3;
      } while (lVar3 != 0);
    }
    param_2[1] = (long)puVar4;
  }
  return;
}


