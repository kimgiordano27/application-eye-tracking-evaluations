/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsMultidimensionalArray
ENTRY_POINT: 074ae0f8
PROGRAM: cac-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__get_IsMultidimensionalArray(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined1 auVar4 [16];
  
  while (!(bool)in_ZR) {
    uVar3 = FUN_074ae808(*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x18),
                         unaff_w20 + unaff_w21 + 1);
    if ((uVar3 & 1) == 0) goto LAB_074ae150;
    unaff_w20 = unaff_w20 + unaff_w21 + 3;
    auVar4 = FUN_039696f4(unaff_x29 + -0x20,unaff_w20,*unaff_x25);
    if (unaff_x23 == 7) {
      unaff_w21 = FUN_074c43f0(auVar4._0_8_,auVar4._8_8_,0x7d,*unaff_x26);
    }
    else {
      unaff_w21 = FUN_074c43f0(auVar4._0_8_,auVar4._8_8_,0x2c,*unaff_x26);
    }
    if (unaff_w21 < 1) goto LAB_074ae150;
    auVar4 = FUN_03e4b76c(unaff_x29 + -0x20,unaff_w20,unaff_w21,*(undefined8 *)PTR_DAT_0912eb70);
    *(undefined4 *)(unaff_x29 + -0xc) = 0;
    param_1 = FUN_074aeaa0(auVar4._0_8_,auVar4._8_8_,unaff_x29 + -0xc,0xffffffff,0x1000,
                           unaff_x29 + -0x24);
    if ((param_1 & 1) == 0) goto LAB_074ae15c;
    if (0xff < *(uint *)(unaff_x29 + -0x24)) goto LAB_074ae150;
    *(char *)((long)unaff_x22 + unaff_x23) = (char)*(uint *)(unaff_x29 + -0x24);
    unaff_x23 = unaff_x23 + 1;
    in_ZR = unaff_x23 == 8;
  }
  uVar2 = *(uint *)(unaff_x29 + -0x18);
  uVar1 = unaff_w20 + unaff_w21 + 1;
  *(undefined8 *)(unaff_x19 + 8) = *unaff_x22;
  if ((int)uVar1 < (int)uVar2) {
    if (uVar2 <= uVar1) {
      if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      goto LAB_074ae244;
    }
    if ((*(short *)(*(long *)(unaff_x29 + -0x20) + (long)(int)uVar1 * 2) != 0x7d) ||
       (unaff_w20 + unaff_w21 != uVar2 - 2)) goto LAB_074ae150;
    param_1 = 1;
  }
  else {
LAB_074ae150:
    FUN_074ae520();
LAB_074ae15c:
    param_1 = 0;
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_074ae244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


