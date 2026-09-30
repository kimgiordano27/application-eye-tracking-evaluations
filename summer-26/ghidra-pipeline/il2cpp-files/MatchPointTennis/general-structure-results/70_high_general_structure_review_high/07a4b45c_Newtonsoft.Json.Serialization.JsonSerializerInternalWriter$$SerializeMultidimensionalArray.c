/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 07a4b45c
PROGRAM: MatchPointTennis-libil2cpp.so
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
  int unaff_w22;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined4 uVar4;
  long in_stack_00000098;
  
  if ((unaff_w21 == unaff_w22) && ((unaff_w21 == 0 || (uVar1 = FUN_078baef4(), (uVar1 & 1) != 0))))
  {
    uVar4 = 0xff800000;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x68);
    if (*(char *)(unaff_x27 + 0x28) == '\0') {
      FUN_04447ba8(PTR_DAT_09f28738);
      *(undefined1 *)(unaff_x27 + 0x28) = 1;
    }
    iVar2 = 0;
    if (lVar3 != 0) {
      FUN_078b1c78(lVar3,0);
      iVar2 = *(int *)(lVar3 + 0x10);
    }
    if (*(char *)(unaff_x26 + 0xce7) == '\0') {
      FUN_04447ba8(PTR_DAT_09f3b220);
      FUN_04447ba8(PTR_DAT_09f3aff0);
      *(undefined1 *)(unaff_x26 + 0xce7) = 1;
    }
    if ((unaff_w21 != iVar2) || ((unaff_w21 != 0 && (uVar1 = FUN_078baef4(), (uVar1 & 1) == 0)))) {
      FUN_03db7f50(*unaff_x25);
      uVar4 = FUN_07a48004(0,0);
      goto LAB_07a4b57c;
    }
    uVar4 = 0x7fc00000;
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_07a4b57c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


