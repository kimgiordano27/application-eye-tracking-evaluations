/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 07a43658
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName
          (long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int in_w9;
  ulong uVar4;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  
  if (in_w9 == 0) {
    thunk_FUN_044a54b4();
    param_2 = *unaff_x22;
    param_1 = *(long *)(param_2 + 0xb8);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    if (unaff_w21 + (unaff_w23 >> 0x1f & 0x15U) < *(uint *)(*(long *)(param_1 + 0x40) + 0x18)) {
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar2 = FUN_07a4b904();
      uVar4 = uVar2;
      if ((((uint)uVar2 >> 10 & 1) != 0) &&
         (uVar4 = uVar2 + (uVar2 >> 0xb & 1) + 0x3ff, uVar4 < uVar2)) {
        uVar4 = uVar4 >> 1 | 0x8000000000000000;
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
      }
      uVar1 = in_stack_00000008._4_4_ + 0x3fe;
      if ((int)uVar1 < 1) {
        if ((uVar4 < 0x8000000000000058) || (uVar1 != 0xffffffcc)) {
          if ((int)uVar1 < -0x33) {
            uVar4 = 0;
          }
          else {
            uVar4 = uVar4 >> (0xfffffc0e - (ulong)in_stack_00000008._4_4_ & 0x3f);
          }
        }
        else {
          uVar4 = 1;
        }
      }
      else if ((int)uVar1 < 0x7ff) {
        uVar4 = uVar4 >> 0xb & 0xfffffffffffff | (ulong)uVar1 << 0x34;
      }
      else {
        uVar4 = 0x7ff0000000000000;
      }
      uVar3 = FUN_07a4cb84();
      uVar2 = uVar4 | 0x8000000000000000;
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar4;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar2;
      return auVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


