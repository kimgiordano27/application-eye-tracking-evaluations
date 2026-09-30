/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 054b3d80
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray(void)

{
  ulong uVar1;
  undefined8 extraout_x1;
  int iVar2;
  long unaff_x19;
  undefined4 *puVar3;
  long *unaff_x21;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 *in_stack_00000048;
  
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    _in_stack_00000030 = FUN_0555c350(*(long *)(unaff_x19 + 0x20),0,0);
    uVar1 = FUN_05410178(&stack0x00000030,0);
    if ((uVar1 & 1) == 0) {
      in_stack_00000040._4_4_ = 0;
      *in_stack_00000048 = 0;
      *(undefined1 (*) [16])(in_stack_00000048 + 0xc) = _in_stack_00000030;
      LeanTween__value(in_stack_00000048 + 0xc,0);
      puVar3 = in_stack_00000048;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x21,extraout_x1,in_stack_00000048);
      }
      FUN_0353b0bc(puVar3 + 2,&stack0x00000030,in_stack_00000048,*(undefined8 *)PTR_DAT_06a216b8);
      iVar2 = 4;
    }
    else {
      FUN_05410190(&stack0x00000030,0);
      iVar2 = 5;
    }
    FUN_02cf4ec8(&stack0x00000008);
    if ((iVar2 == 0) || (iVar2 == 5)) {
      iVar2 = *(int *)(*unaff_x21 + 0xe4);
      puVar3 = in_stack_00000048 + 2;
      *in_stack_00000048 = 0xfffffffe;
      if (iVar2 == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05410914(puVar3,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


