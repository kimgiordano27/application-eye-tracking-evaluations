/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateObject
ENTRY_POINT: 0680ca38
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong Newtonsoft_Json_JsonValidatingReader__ValidateObject(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong uVar5;
  ulong unaff_x20;
  undefined1 in_stack_00000008;
  undefined1 uStack000000000000000c;
  ulong in_stack_00000018;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2018,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2040,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0xb0f) = 1;
  in_stack_00000008 = 0;
  if (-1 < (long)unaff_x20) {
    if (*(int *)(DAT_083ca3d0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_0680cc88();
    return unaff_x20;
  }
  uVar5 = unaff_x20 & 0x3fffffffffffffff;
  if (uVar5 < 0x3fffff36d5964001) {
    uStack000000000000000c = 0;
    if (uVar5 < 0x2bca2875f4374000) {
      FUN_0680ac08();
      in_stack_00000008 = 0;
      if (*(int *)(DAT_083d2040 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar1 = FUN_0677b1fc(0);
      lVar2 = FUN_0677b27c(0,uVar1,&stack0x00000008,&stack0x0000000c,0);
      goto Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition;
    }
    if (*(int *)(DAT_083ca3d0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = *(undefined8 *)(*(long *)(DAT_083ca3d0 + 0xb8) + 0x18);
    if (*(int *)(DAT_083d2040 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d2040);
    }
  }
  else {
    uStack000000000000000c = 0;
    if (*(int *)(DAT_083ca3d0 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = unaff_x20 | 0xc000000000000000;
    uVar1 = *(undefined8 *)(*(long *)(DAT_083ca3d0 + 0xb8) + 0x10);
    if (*(int *)(DAT_083d2040 + 0xe0) == 0) {
      FUN_033b9870(DAT_083d2040);
    }
  }
  lVar2 = FUN_0677e874(uVar1,2,0);
Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition:
  if (*(int *)(DAT_083d2018 + 0xe0) == 0) {
    FUN_033b9870(DAT_083d2018);
  }
  uVar5 = lVar2 + uVar5;
  if ((long)uVar5 < 0) {
    uVar5 = uVar5 + 864000000000;
  }
  if (uVar5 < 0x2bca2875f4374000) {
    in_stack_00000018 = 0;
    FUN_0680ace8(&stack0x00000018);
    return in_stack_00000018;
  }
  FUN_033d1ba8(&DAT_083c8a08);
  uVar1 = thunk_FUN_03398a84();
  uVar3 = FUN_033d1ba8(&DAT_08448308);
  uVar4 = FUN_033d1ba8(&DAT_08451858);
  FUN_0677f1f8(uVar1,uVar3,uVar4,0);
  uVar3 = FUN_033d1ba8(&DAT_08407750);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar1,uVar3);
}


