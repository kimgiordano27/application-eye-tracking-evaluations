/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 0501079c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty
               (long param_1)

{
  ulong uVar1;
  int iVar2;
  long unaff_x19;
  long lVar3;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  long in_stack_00000098;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0xa78));
  uVar4 = FUN_02d4dc40(PTR_DAT_06650830);
  *(undefined1 *)(unaff_x26 + 0xc67) = 1;
  if ((unaff_w21 == unaff_w22) &&
     ((unaff_w21 == 0 || (uVar1 = FUN_04e866dc(), uVar4 = extraout_s0, (uVar1 & 1) != 0)))) {
    uVar4 = 0xff800000;
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
       ((unaff_w21 != 0 && (uVar1 = FUN_04e866dc(), uVar4 = extraout_s0_00, (uVar1 & 1) == 0)))) {
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        uVar4 = thunk_FUN_02dabd98();
      }
      if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
        uVar4 = FUN_0500d2b8(0,0);
      }
      goto LAB_05010900;
    }
    uVar4 = 0x7fc00000;
  }
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_05010900:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


