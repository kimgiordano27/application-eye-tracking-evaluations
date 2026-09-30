/*
FUNCTION_NAME: Best.HTTP.Request.Settings.UploadSettings$$Dispose
ENTRY_POINT: 032291e8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Best_HTTP_Request_Settings_UploadSettings__Dispose
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong in_x9;
  ulong in_x10;
  long lVar2;
  ulong uVar3;
  long *unaff_x19;
  long unaff_x20;
  size_t __n;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_stack_00000008;
  long in_stack_00000010;
  void *in_stack_00000018;
  long in_stack_00000020;
  
  uVar3 = (param_1 >> 3) * 0x5555555555555556;
  if (in_x10 <= uVar3) {
    in_x10 = uVar3;
  }
  if (0x555555555555554 < (ulong)((param_1 >> 3) * -0x5555555555555555)) {
    in_x10 = in_x9;
  }
  FUN_03212280(&stack0x00000008,in_x10,param_4,unaff_x19 + 2);
  pvVar1 = in_stack_00000018;
  if ((unaff_x20 * 3 & 0x1fffffffffffffffU) != 0) {
    __n = (unaff_x20 * 8 - 8U >> 3) * 0x18 + 0x18;
    memset(in_stack_00000018,0,__n);
    in_stack_00000018 = (void *)((long)pvVar1 + __n);
  }
  in_stack_00000008 = *unaff_x19;
  lVar2 = unaff_x19[1];
  lVar6 = in_stack_00000008;
  if (lVar2 != in_stack_00000008) {
    do {
      uVar5 = *(undefined8 *)(lVar2 + -0x10);
      uVar4 = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(in_stack_00000010 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(in_stack_00000010 + -0x10) = uVar5;
      *(undefined8 *)(in_stack_00000010 + -0x18) = uVar4;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined8 *)(lVar2 + -8) = 0;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      lVar2 = lVar2 + -0x18;
      in_stack_00000010 = in_stack_00000010 + -0x18;
    } while (in_stack_00000008 != lVar2);
    in_stack_00000008 = *unaff_x19;
    lVar6 = unaff_x19[1];
  }
  *unaff_x19 = in_stack_00000010;
  unaff_x19[1] = (long)in_stack_00000018;
  lVar2 = unaff_x19[2];
  unaff_x19[2] = in_stack_00000020;
  in_stack_00000010 = in_stack_00000008;
  in_stack_00000018 = (void *)lVar6;
  in_stack_00000020 = lVar2;
  FUN_032235fc(&stack0x00000008);
  return;
}


