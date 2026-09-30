/*
FUNCTION_NAME: ParadoxNotion.Serialization.JSONSerializer$$FlushMem
ENTRY_POINT: 05dedb20
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


void ParadoxNotion_Serialization_JSONSerializer__FlushMem(void)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  uint unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  undefined1 unaff_w24;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  
  while (in_NG != in_OV) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (*(char *)(unaff_x29 + 0xfdd) == '\0') {
      FUN_02fe925c();
      *(undefined1 *)(unaff_x29 + 0xfdd) = unaff_w24;
    }
    lVar2 = *unaff_x23;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *unaff_x23;
    }
    if (*(int *)(*(long *)(lVar2 + 0xb8) + 4) == 1) {
      if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_05dedc88;
      if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= (uint)unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (unaff_x22 == 0) goto LAB_05dedc88;
      FUN_05dede28();
    }
    unaff_x19 = unaff_x19 + 1;
    in_OV = SBORROW8(unaff_x19,(long)*(int *)(unaff_x20 + 0x10));
    in_NG = unaff_x19 - *(int *)(unaff_x20 + 0x10) < 0;
  }
  lVar3 = *(long *)(unaff_x27 + 0x28);
  lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fbce50);
  FUN_05b32c00(lVar2,0);
  *(long *)(lVar2 + 0x18) = unaff_x22;
  thunk_FUN_03048534();
  if (lVar3 == 0) {
LAB_05dedc88:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  FUN_0443006c(lVar3,0,lVar2,*(undefined8 *)PTR_DAT_06fbce68);
  puVar1 = PTR_DAT_06fbce30;
  if (1 < unaff_w21) {
    do {
      if (*(long *)(unaff_x27 + 0x28) == 0) goto LAB_05dedc88;
      FUN_044319c0(*(long *)(unaff_x27 + 0x28),1,*(undefined8 *)puVar1);
      in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + -1;
    } while (in_stack_00000000._4_4_ != 0);
  }
  return;
}


