/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 071814d4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (undefined *param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long lVar4;
  long unaff_x29;
  
code_r0x071814d4:
  do {
    FUN_03d2d2b0(param_1);
    *(undefined1 *)(unaff_x29 + 0x15) = 1;
LAB_071814e0:
    do {
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(int *)(unaff_x26 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar1) goto LAB_0718152c;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar1) {
LAB_071815d0:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        lVar4 = *(long *)(unaff_x22 + 8);
        uVar3 = FUN_06fcd2c8(unaff_x26,0,0);
        *(undefined2 *)(lVar4 + (long)(int)uVar1 * 2) = uVar3;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      }
      else {
LAB_0718152c:
        FUN_06ff1720();
      }
      while( true ) {
        unaff_w24 = unaff_w24 + 1;
        if (*(int *)(unaff_x23 + 0x10) <= unaff_w24) {
          return;
        }
        sVar2 = FUN_06fcd2c8();
        param_1 = PTR_DAT_091fa408;
        if (sVar2 == 0x2d) {
          unaff_x26 = *(long *)(unaff_x19 + 0x30);
          if (*(char *)(unaff_x29 + 0x15) == '\0') goto code_r0x071814d4;
          goto LAB_071814e0;
        }
        if (sVar2 == 0x25) break;
        if (sVar2 == 0x23) {
          if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          FUN_071805d8();
        }
        else {
          if (*(char *)(unaff_x25 + 0x200) == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            *(undefined1 *)(unaff_x25 + 0x200) = 1;
          }
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_071815d0;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar2;
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          }
          else {
            FUN_06ff15f4();
          }
        }
      }
      unaff_x26 = *(long *)(unaff_x19 + 0x90);
    } while (*(char *)(unaff_x29 + 0x15) != '\0');
  } while( true );
}


