/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 05010074
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  long in_x9;
  uint in_w10;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  while ((iVar4 = (int)param_1, iVar4 != 0x2a && (param_1 = param_1 + 2, in_w10 == 0x30))) {
    in_w10 = (uint)*(ushort *)(unaff_x21 + param_1);
  }
  if (((iVar4 != 0x2a) && (in_w10 != 0)) &&
     (bVar1 = param_3 == 0xffffffffffffffff, param_3 = param_3 + 1, bVar1)) {
    iVar4 = (int)param_5;
    param_5 = (ulong)(iVar4 + 1);
    if (iVar4 == -1) {
      unaff_w23 = unaff_w23 + 1;
      param_3 = in_x9 + 2;
      param_5 = 0x19999999;
    }
    else {
      param_3 = 0;
    }
  }
  if (unaff_w23 < 1) {
    if (unaff_w23 < -0x1c) {
      param_3 = 0;
      uVar3 = 0;
      param_5 = 0;
      iVar4 = 0x1c;
    }
    else {
      uVar3 = param_3 >> 0x20;
      iVar4 = -unaff_w23;
    }
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_0505d7f4(&stack0x00000008,param_3,uVar3,param_5,unaff_w20 & 1,iVar4,0);
    uVar2 = 1;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


