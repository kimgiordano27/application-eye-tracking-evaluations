/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 0500c808
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined1 in_w8;
  short *psVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  long unaff_x19;
  int unaff_w20;
  ulong uVar8;
  ulong uVar9;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar10;
  long unaff_x25;
  long unaff_x29;
  undefined4 uStack_10;
  
  *(undefined1 *)(unaff_x23 + 0xa5) = in_w8;
  if (unaff_x22 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    goto LAB_0500ca00;
  }
  if (*(int *)(unaff_x22 + 0x10) == 1) {
    uVar7 = *(uint *)(unaff_x19 + 0x18);
    if ((int)*(uint *)(unaff_x19 + 0x10) <= (int)uVar7) goto LAB_0500c8e4;
    if (*(uint *)(unaff_x19 + 0x10) <= uVar7) {
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      goto LAB_0500ca00;
    }
    lVar10 = *(long *)(unaff_x19 + 8);
    uVar3 = FUN_04e7a3d8();
    *(undefined2 *)(lVar10 + (long)(int)uVar7 * 2) = uVar3;
    *(uint *)(unaff_x19 + 0x18) = uVar7 + 1;
  }
  else {
LAB_0500c8e4:
    FUN_04e98608();
  }
  uStack_10 = 0;
  if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  if ((-1 < unaff_w21 + -1) || (-unaff_w20 != 0)) {
    psVar4 = (short *)((long)&uStack_10 + 2);
    uVar8 = (ulong)(uint)-unaff_w20;
    iVar6 = unaff_w21 + -2;
    do {
      do {
        uVar9 = uVar8 / 10;
        uVar7 = (uint)uVar8;
        psVar5 = psVar4 + -1;
        *psVar4 = (short)uVar8 + (short)(uVar8 / 10) * -10 + 0x30;
        iVar2 = iVar6 + -1;
        bVar1 = -1 < iVar6;
        psVar4 = psVar5;
        uVar8 = uVar9;
        iVar6 = iVar2;
      } while (bVar1);
    } while (9 < uVar7);
  }
  FUN_04e98b98();
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_0500ca00:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


