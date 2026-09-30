/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsArray
ENTRY_POINT: 04f24c50
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonArrayContract__get_IsArray(void)

{
  int iVar1;
  uint uVar2;
  undefined1 in_ZR;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  uint *unaff_x20;
  uint unaff_w22;
  long *unaff_x25;
  int unaff_w26;
  
  do {
    if ((bool)in_ZR) {
      uVar2 = *unaff_x20;
      if (-1 < (int)uVar2) {
        *(int *)(unaff_x19 + 0x10) = unaff_w26 + *(int *)(unaff_x19 + 0x10) + -1;
      }
      return ~uVar2 >> 0x1f;
    }
    lVar3 = FUN_04ed3a1c();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    iVar1 = *(int *)(lVar3 + 0x10);
    uVar4 = FUN_04ed2fb8();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c(*unaff_x25);
      if ((uVar4 & 1) == 0) goto LAB_04f24c20;
LAB_04f24bf4:
      uVar4 = FUN_04f27be4();
    }
    else {
      if ((uVar4 & 1) != 0) goto LAB_04f24bf4;
LAB_04f24c20:
      uVar4 = FUN_04f26e0c();
    }
    if (((uVar4 & 1) != 0) && (unaff_w26 < iVar1)) {
      *unaff_x20 = unaff_w22;
      unaff_w26 = iVar1;
    }
    unaff_w22 = unaff_w22 + 1;
    in_ZR = unaff_w22 == 7;
  } while( true );
}


