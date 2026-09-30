/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 0767ecf0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
          (long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long in_x9;
  int in_w10;
  int in_w11;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined1 auVar6 [16];
  uint uStack000000000000000c;
  
  iVar5 = in_w10 - *(short *)(in_x9 + 0x20);
  if (-1 < unaff_w23) {
    iVar5 = (int)*(short *)(in_x9 + 0x20);
  }
  uStack000000000000000c = iVar5 + in_w11;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_2 = *unaff_x22;
    param_1 = *(long *)(param_2 + 0xb8);
  }
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(uint *)(*(long *)(param_1 + 0x40) + 0x18) <= unaff_w21 + (unaff_w23 >> 0x1f & 0x15U)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar3 = FUN_076873e8();
  iVar5 = uStack000000000000000c;
  if ((((uint)uVar3 >> 10 & 1) != 0) &&
     (uVar1 = uVar3 + (uVar3 >> 0xb & 1) + 0x3ff, bVar2 = uVar1 < uVar3, uVar3 = uVar1, bVar2)) {
    uVar3 = uVar1 >> 1 | 0x8000000000000000;
    iVar5 = uStack000000000000000c + 1;
  }
  uStack000000000000000c = iVar5 + 0x3fe;
  if ((int)uStack000000000000000c < 1) {
    if ((uStack000000000000000c == 0xffffffcc) && (0x8000000000000057 < uVar3)) {
      uVar3 = 1;
    }
    else if ((int)uStack000000000000000c < -0x33) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 >> ((ulong)(-iVar5 - 0x3f2) & 0x3f);
    }
  }
  else if (uStack000000000000000c < 0x7ff) {
    uVar3 = uVar3 >> 0xb & 0xfffffffffffff | (ulong)uStack000000000000000c << 0x34;
  }
  else {
    uVar3 = 0x7ff0000000000000;
  }
  uVar4 = FUN_0768865c();
  uVar1 = uVar3 | 0x8000000000000000;
  if ((uVar4 & 1) == 0) {
    uVar1 = uVar3;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar1;
  return auVar6;
}


