/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateArray
ENTRY_POINT: 0713f658
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Newtonsoft_Json_JsonValidatingReader__ValidateArray(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_OV;
  uint uVar3;
  undefined8 uVar4;
  int in_w8;
  int in_w9;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_w26;
  uint unaff_w28;
  
  while (!(bool)in_OV) {
    iVar8 = in_w9 + unaff_w26;
    if (0 < in_w8) {
      iVar7 = 0;
      do {
        uVar3 = FUN_06fcd2c8();
        uVar3 = uVar3 & 0xffff;
        if ((uVar3 < 0x80) || ((int)uVar3 < (int)unaff_w28)) {
          if (iVar8 == 0x7fffffff) goto LAB_0713f7bc;
          iVar8 = iVar8 + 1;
        }
        if (unaff_w28 == uVar3) {
          iVar1 = *(int *)(unaff_x20 + 0x14);
          while( true ) {
            iVar6 = *(int *)(unaff_x20 + 0x18);
            if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < iVar1) {
              iVar6 = iVar1 - unaff_w22;
              if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= iVar1) {
                iVar6 = *(int *)(unaff_x20 + 0x1c);
              }
            }
            iVar2 = iVar8 - iVar6;
            if (iVar8 < iVar6) break;
            FUN_06fdb178();
            iVar6 = *(int *)(unaff_x20 + 0x14) - iVar6;
            iVar8 = 0;
            if (iVar6 != 0) {
              iVar8 = iVar2 / iVar6;
            }
            iVar1 = *(int *)(unaff_x20 + 0x14) + iVar1;
          }
          FUN_06fdb178();
          unaff_w23 = unaff_w23 + 1;
          unaff_w22 = FUN_0713ff54();
          iVar8 = 0;
        }
        in_w8 = *(int *)(unaff_x19 + 0x10);
        iVar7 = iVar7 + 1;
      } while (iVar7 < in_w8);
    }
    unaff_w26 = iVar8 + 1;
    iVar8 = unaff_w28 + 1;
    if (in_w8 <= unaff_w23) {
                    /* WARNING: Could not recover jumptable at 0x0713f7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 0x168))();
      return;
    }
    if (in_w8 < 1) {
      unaff_w28 = 0x7fffffff;
    }
    else {
      iVar7 = 0;
      unaff_w28 = 0x7fffffff;
      do {
        uVar3 = FUN_06fcd2c8();
        if ((iVar8 <= (int)(uVar3 & 0xffff)) &&
           (uVar3 = FUN_06fcd2c8(), (uVar3 & 0xffff) < unaff_w28)) {
          uVar3 = FUN_06fcd2c8();
          unaff_w28 = uVar3 & 0xffff;
        }
        in_w8 = *(int *)(unaff_x19 + 0x10);
        iVar7 = iVar7 + 1;
      } while (iVar7 < in_w8);
    }
    if ((((long)(int)unaff_w28 - (long)iVar8) + 0x80000000U >> 0x20 != 0) ||
       (unaff_w23 == 0x7fffffff)) break;
    lVar5 = (long)(int)(unaff_w28 - iVar8) * (long)(unaff_w23 + 1);
    if (lVar5 - (int)lVar5 != 0) break;
    in_w9 = (unaff_w28 - iVar8) * (unaff_w23 + 1);
    in_OV = SCARRY4(unaff_w26,in_w9);
  }
LAB_0713f7bc:
  uVar4 = FUN_03d2d558();
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar4,*(undefined8 *)PTR_DAT_09211b18);
}


