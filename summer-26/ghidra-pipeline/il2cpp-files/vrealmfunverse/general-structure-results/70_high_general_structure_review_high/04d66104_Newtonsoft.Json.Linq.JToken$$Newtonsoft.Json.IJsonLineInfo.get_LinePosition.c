/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 04d66104
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_Linq_JToken__Newtonsoft_Json_IJsonLineInfo_get_LinePosition(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint in_w8;
  long unaff_x19;
  
  if (in_w8 < 0x56) {
    if ((int)in_w8 < 0x4f) {
      if (0x46 < (int)in_w8) {
        if (in_w8 == 0x47) {
          if (unaff_x19 != 0) {
            uVar1 = FUN_04cd4804();
            return uVar1;
          }
          goto LAB_04d66398;
        }
        if (in_w8 != 0x4d) goto LAB_04d6639c;
LAB_04d661f8:
        if (unaff_x19 != 0) {
          uVar1 = FUN_04cd4518();
          return uVar1;
        }
        goto LAB_04d66398;
      }
      if (in_w8 == 0x44) {
        if (unaff_x19 != 0) {
          uVar1 = FUN_04cd43dc();
          return uVar1;
        }
        goto LAB_04d66398;
      }
      if (in_w8 != 0x46) {
LAB_04d6639c:
        thunk_FUN_02ba3594(PTR_DAT_06328948);
        uVar1 = thunk_FUN_02b79644();
        uVar2 = thunk_FUN_02ba3594(PTR_DAT_0632a370);
        FUN_04d63e8c(uVar1,uVar2);
        uVar2 = thunk_FUN_02ba3594(PTR_DAT_063330a8);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar1,uVar2);
      }
    }
    else {
      if ((int)in_w8 < 0x54) {
        if (in_w8 == 0x4f) {
Newtonsoft_Json_Linq_JToken__DeepClone:
          return *(undefined8 *)PTR_DAT_0632efd8;
        }
        if (in_w8 != 0x52) goto LAB_04d6639c;
LAB_04d6618c:
        if (unaff_x19 != 0) {
          uVar1 = FUN_04cd45c0();
          return uVar1;
        }
        goto LAB_04d66398;
      }
      if (in_w8 == 0x54) {
        if (unaff_x19 != 0) {
          uVar1 = FUN_04cd4428();
          return uVar1;
        }
        goto LAB_04d66398;
      }
      if (in_w8 != 0x55) goto LAB_04d6639c;
    }
    if (unaff_x19 != 0) {
      uVar1 = FUN_04cd4354();
      return uVar1;
    }
  }
  else {
    if ((int)in_w8 < 0x6f) {
      if (0x65 < (int)in_w8) {
        if (in_w8 == 0x66) {
          if (unaff_x19 != 0) {
            uVar1 = FUN_04cd43dc();
            uVar2 = FUN_04cd46b0();
            uVar1 = FUN_04c0a5c4(uVar1,*(undefined8 *)PTR_DAT_0631d458,uVar2,0);
            return uVar1;
          }
          goto LAB_04d66398;
        }
        if (in_w8 == 0x67) {
          if (unaff_x19 != 0) {
            uVar1 = FUN_04cd477c();
            return uVar1;
          }
          goto LAB_04d66398;
        }
        if (in_w8 != 0x6d) goto LAB_04d6639c;
        goto LAB_04d661f8;
      }
      if (in_w8 != 0x59) {
        if (in_w8 != 100) goto LAB_04d6639c;
        if (unaff_x19 != 0) {
          uVar1 = FUN_04cd4600();
          return uVar1;
        }
        goto LAB_04d66398;
      }
    }
    else {
      if ((int)in_w8 < 0x74) {
        if (in_w8 == 0x6f) goto Newtonsoft_Json_Linq_JToken__DeepClone;
        if (in_w8 != 0x72) {
          if (in_w8 != 0x73) goto LAB_04d6639c;
          if (unaff_x19 != 0) {
            uVar1 = FUN_04cd473c();
            return uVar1;
          }
          goto LAB_04d66398;
        }
        goto LAB_04d6618c;
      }
      if (in_w8 == 0x74) {
        if (unaff_x19 != 0) {
          uVar1 = FUN_04cd46b0();
          return uVar1;
        }
        goto LAB_04d66398;
      }
      if (in_w8 == 0x75) {
        if (unaff_x19 != 0) {
          uVar1 = FUN_04cd4a74();
          return uVar1;
        }
        goto LAB_04d66398;
      }
      if (in_w8 != 0x79) goto LAB_04d6639c;
    }
    if (unaff_x19 != 0) {
      uVar1 = FUN_04cd4ab4();
      return uVar1;
    }
  }
LAB_04d66398:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


