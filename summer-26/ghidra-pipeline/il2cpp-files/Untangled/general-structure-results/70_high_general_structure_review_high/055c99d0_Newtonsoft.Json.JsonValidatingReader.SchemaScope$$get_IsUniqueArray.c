/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$get_IsUniqueArray
ENTRY_POINT: 055c99d0
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void Newtonsoft_Json_JsonValidatingReader_SchemaScope__get_IsUniqueArray(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  int iVar8;
  int iVar9;
  int unaff_w25;
  int unaff_w26;
  int unaff_w28;
  uint in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    FUN_0546ce88();
    iVar2 = *(int *)(unaff_x20 + 0x14) - unaff_w23;
    iVar9 = 0;
    if (iVar2 != 0) {
      iVar9 = unaff_w28 / iVar2;
    }
    unaff_w26 = *(int *)(unaff_x20 + 0x14) + unaff_w26;
    while( true ) {
      unaff_w23 = *(int *)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < unaff_w26) {
        unaff_w23 = unaff_w26 - unaff_w22;
        if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= unaff_w26) {
          unaff_w23 = *(int *)(unaff_x20 + 0x1c);
        }
      }
      unaff_w28 = iVar9 - unaff_w23;
      if (unaff_w23 <= iVar9) break;
      FUN_0546ce88();
      iVar2 = in_stack_00000018._4_4_ + 1;
      unaff_w22 = Newtonsoft_Json_JsonWriter__CloseAsync();
      iVar9 = 0;
      uVar4 = in_stack_00000010;
      do {
        iVar6 = *(int *)(unaff_x19 + 0x10);
        unaff_w25 = unaff_w25 + 1;
        if (iVar6 <= unaff_w25) {
          do {
            iVar1 = uVar4 + 1;
            if (iVar6 <= iVar2) {
                    /* WARNING: Could not recover jumptable at 0x055c9a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*unaff_x21 + 0x168))();
              return;
            }
            if (iVar6 < 1) {
              uVar4 = 0x7fffffff;
            }
            else {
              iVar8 = 0;
              uVar4 = 0x7fffffff;
              do {
                uVar3 = FUN_05460528();
                if ((iVar1 <= (int)(uVar3 & 0xffff)) &&
                   (uVar3 = FUN_05460528(), (uVar3 & 0xffff) < uVar4)) {
                  uVar4 = FUN_05460528();
                  uVar4 = uVar4 & 0xffff;
                }
                iVar6 = *(int *)(unaff_x19 + 0x10);
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar6);
            }
            if ((((long)(int)uVar4 - (long)iVar1) + 0x80000000U >> 0x20 != 0) ||
               (iVar2 == 0x7fffffff)) goto LAB_055c9a80;
            lVar7 = (long)(int)(uVar4 - iVar1) * (long)(in_stack_00000018._4_4_ + 2);
            if ((lVar7 - (int)lVar7 != 0) ||
               (iVar1 = (uVar4 - iVar1) * (in_stack_00000018._4_4_ + 2), SCARRY4(iVar9 + 1,iVar1)))
            goto LAB_055c9a80;
            iVar9 = iVar1 + iVar9 + 1;
          } while (iVar6 < 1);
          unaff_w25 = 0;
          in_stack_00000010 = uVar4;
        }
        uVar3 = FUN_05460528();
        uVar3 = uVar3 & 0xffff;
        if ((uVar3 < 0x80) || ((int)uVar3 < (int)uVar4)) {
          if (iVar9 == 0x7fffffff) {
LAB_055c9a80:
            uVar5 = FUN_02f080d0();
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar5,*(undefined8 *)PTR_DAT_06d50fd0);
          }
          iVar9 = iVar9 + 1;
        }
      } while (uVar4 != uVar3);
      unaff_w26 = *(int *)(unaff_x20 + 0x14);
      in_stack_00000018._4_4_ = iVar2;
    }
  } while( true );
}


