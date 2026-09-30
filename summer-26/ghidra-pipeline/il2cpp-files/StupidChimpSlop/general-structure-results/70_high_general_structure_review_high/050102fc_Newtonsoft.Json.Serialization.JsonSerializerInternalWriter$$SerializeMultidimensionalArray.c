/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 050102fc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  ulong uVar1;
  int iVar2;
  long unaff_x19;
  long lVar3;
  int unaff_w21;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar4;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  long in_stack_00000098;
  
  uVar4 = FUN_04e7d3e0();
  iVar2 = *(int *)(unaff_x22 + 0x10);
  if (*(char *)(unaff_x26 + 0xc67) == '\0') {
    FUN_02d4dc40(PTR_DAT_06650a78);
    uVar4 = FUN_02d4dc40(PTR_DAT_06650830);
    *(undefined1 *)(unaff_x26 + 0xc67) = 1;
  }
  if ((unaff_w21 == iVar2) &&
     ((unaff_w21 == 0 || (uVar1 = FUN_04e866dc(), uVar4 = extraout_d0, (uVar1 & 1) != 0)))) {
    uVar4 = 0xfff0000000000000;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x68);
    if (*(char *)(unaff_x27 + 0xab6) == '\0') {
      uVar4 = FUN_02d4dc40(PTR_DAT_0664e730);
      *(undefined1 *)(unaff_x27 + 0xab6) = 1;
    }
    iVar2 = 0;
    if (lVar3 != 0) {
      uVar4 = FUN_04e7d3e0(lVar3,0);
      iVar2 = *(int *)(lVar3 + 0x10);
    }
    if (*(char *)(unaff_x26 + 0xc67) == '\0') {
      FUN_02d4dc40(PTR_DAT_06650a78);
      uVar4 = FUN_02d4dc40(PTR_DAT_06650830);
      *(undefined1 *)(unaff_x26 + 0xc67) = 1;
    }
    if ((unaff_w21 != iVar2) ||
       ((unaff_w21 != 0 && (uVar1 = FUN_04e866dc(), uVar4 = extraout_d0_00, (uVar1 & 1) == 0)))) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        uVar4 = thunk_FUN_02dabd98();
      }
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
        uVar4 = FUN_0500d2b8(0,0);
      }
      goto LAB_050104cc;
    }
    uVar4 = 0x7ff8000000000000;
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_050104cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


