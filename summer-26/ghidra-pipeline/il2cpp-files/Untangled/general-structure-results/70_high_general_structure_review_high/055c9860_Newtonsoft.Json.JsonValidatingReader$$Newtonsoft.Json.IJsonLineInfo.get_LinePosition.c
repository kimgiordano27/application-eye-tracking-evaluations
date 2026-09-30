/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 055c9860
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Newtonsoft_Json_JsonValidatingReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int iVar7;
  int iVar8;
  int unaff_w25;
  int iVar9;
  undefined8 in_stack_00000008;
  
  iVar9 = 0;
  while( true ) {
    if (in_w8 < 1) {
      uVar4 = 0x7fffffff;
    }
    else {
      iVar8 = 0;
      uVar4 = 0x7fffffff;
      do {
        uVar3 = FUN_05460528();
        if ((unaff_w25 <= (int)(uVar3 & 0xffff)) &&
           (uVar3 = FUN_05460528(), (uVar3 & 0xffff) < uVar4)) {
          uVar4 = FUN_05460528();
          uVar4 = uVar4 & 0xffff;
        }
        in_w8 = *(int *)(unaff_x19 + 0x10);
        iVar8 = iVar8 + 1;
      } while (iVar8 < in_w8);
    }
    if ((((long)(int)uVar4 - (long)unaff_w25) + 0x80000000U >> 0x20 != 0) ||
       (in_stack_00000008._4_4_ == 0x7fffffff)) break;
    lVar6 = (long)(int)(uVar4 - unaff_w25) * (long)(in_stack_00000008._4_4_ + 1);
    if ((lVar6 - (int)lVar6 != 0) ||
       (iVar8 = (uVar4 - unaff_w25) * (in_stack_00000008._4_4_ + 1), SCARRY4(iVar9,iVar8))) break;
    iVar8 = iVar8 + iVar9;
    if (0 < in_w8) {
      iVar9 = 0;
      do {
        uVar3 = FUN_05460528();
        uVar3 = uVar3 & 0xffff;
        if ((uVar3 < 0x80) || (uVar3 < uVar4)) {
          if (iVar8 == 0x7fffffff) goto LAB_055c9a80;
          iVar8 = iVar8 + 1;
        }
        if (uVar4 == uVar3) {
          iVar1 = *(int *)(unaff_x20 + 0x14);
          while( true ) {
            iVar7 = *(int *)(unaff_x20 + 0x18);
            if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < iVar1) {
              iVar7 = iVar1 - unaff_w22;
              if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= iVar1) {
                iVar7 = *(int *)(unaff_x20 + 0x1c);
              }
            }
            iVar2 = iVar8 - iVar7;
            if (iVar8 < iVar7) break;
            FUN_0546ce88();
            iVar7 = *(int *)(unaff_x20 + 0x14) - iVar7;
            iVar8 = 0;
            if (iVar7 != 0) {
              iVar8 = iVar2 / iVar7;
            }
            iVar1 = *(int *)(unaff_x20 + 0x14) + iVar1;
          }
          FUN_0546ce88();
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          unaff_w22 = Newtonsoft_Json_JsonWriter__CloseAsync();
          iVar8 = 0;
        }
        in_w8 = *(int *)(unaff_x19 + 0x10);
        iVar9 = iVar9 + 1;
      } while (iVar9 < in_w8);
    }
    iVar9 = iVar8 + 1;
    unaff_w25 = uVar4 + 1;
    if (in_w8 <= in_stack_00000008._4_4_) {
                    /* WARNING: Could not recover jumptable at 0x055c9a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 0x168))();
      return;
    }
  }
LAB_055c9a80:
  uVar5 = FUN_02f080d0();
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar5,*(undefined8 *)PTR_DAT_06d50fd0);
}


