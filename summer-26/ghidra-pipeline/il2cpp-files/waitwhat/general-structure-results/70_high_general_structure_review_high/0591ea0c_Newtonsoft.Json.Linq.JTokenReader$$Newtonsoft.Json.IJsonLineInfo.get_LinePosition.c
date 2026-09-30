/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JTokenReader$$Newtonsoft.Json.IJsonLineInfo.get_LinePosition
ENTRY_POINT: 0591ea0c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


bool Newtonsoft_Json_Linq_JTokenReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
               (short param_1)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  int unaff_w24;
  int unaff_w26;
  int iVar6;
  
  do {
    if (param_1 == 0x79) goto LAB_0591e9e8;
    do {
      bVar2 = false;
LAB_0591ea98:
      while( true ) {
        iVar6 = unaff_w26;
        unaff_w21 = unaff_w23 + 1;
                    /* try { // try from 0591eaa8 to 05a1eaff has its CatchHandler @ 0591eaa8
                       catch() { ... } // from try @ 0591eaa8 with catch @ 0591eaa8
                       catch() { ... } // from try @ 0591eba0 with catch @ 0591eaa8
                       catch() { ... } // from try @ 0591ebe4 with catch @ 0591eaa8
                       catch() { ... } // from try @ 0591ec80 with catch @ 0591eaa8 */
        if ((*(int *)(unaff_x20 + 0x10) <= unaff_w21) || (1 < iVar6)) {
          uVar5 = 5;
          if (unaff_w22 != 0 || unaff_w24 != 1) {
            uVar5 = 0xffffffff;
          }
          uVar1 = 4;
          if (unaff_w24 != 0 || unaff_w22 != 1) {
            uVar1 = uVar5;
          }
          *unaff_x19 = uVar1;
          return unaff_w24 == 0 && unaff_w22 == 1 || unaff_w22 == 0 && unaff_w24 == 1;
        }
        uVar3 = FUN_057b9840();
        unaff_w26 = iVar6;
        if (uVar3 < 0x27) break;
        if (uVar3 == 0x27) goto LAB_0591ea40;
        if (uVar3 != 0x5c) goto LAB_0591e9cc;
LAB_0591ea38:
        unaff_w23 = unaff_w23 + 2;
      }
      if (uVar3 == 0x22) {
LAB_0591ea40:
        if (!bVar2) {
LAB_0591ea44:
          bVar2 = true;
          unaff_w23 = unaff_w21;
          goto LAB_0591ea98;
        }
      }
      else {
        if (uVar3 == 0x25) goto LAB_0591ea38;
LAB_0591e9cc:
        if (bVar2) goto LAB_0591ea44;
      }
      if (uVar3 == 0x4d) {
        do {
          unaff_w23 = unaff_w21;
          unaff_w21 = unaff_w23 + 1;
          if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) break;
          sVar4 = FUN_057b9840();
        } while (sVar4 == 0x4d);
        bVar2 = false;
        unaff_w26 = iVar6 + 1;
        unaff_w22 = iVar6;
        goto LAB_0591ea98;
      }
      if (uVar3 != 0x79) {
        bVar2 = false;
        unaff_w23 = unaff_w21;
        goto LAB_0591ea98;
      }
      unaff_w26 = iVar6 + 1;
      unaff_w24 = iVar6;
LAB_0591e9e8:
      unaff_w23 = unaff_w21;
    } while (*(int *)(unaff_x20 + 0x10) <= unaff_w21 + 1);
    param_1 = FUN_057b9840();
    unaff_w21 = unaff_w21 + 1;
  } while( true );
}


