/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 0329b734
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  int iVar7;
  int unaff_w24;
  int iVar8;
  int unaff_w25;
  int iVar9;
  int unaff_w26;
  
code_r0x0329b734:
  uVar2 = FUN_0314e438();
  uVar2 = uVar2 & 0xffff;
LAB_0329b748:
  iVar5 = *(int *)(unaff_x19 + 0x10);
  unaff_w24 = unaff_w24 + 1;
  if (iVar5 <= unaff_w24) {
    do {
      if ((((long)(int)uVar2 - (long)unaff_w25) + 0x80000000U >> 0x20 != 0) ||
         (unaff_w23 == 0x7fffffff)) {
LAB_0329b904:
        uVar4 = FUN_01c5d4b4();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<byte,_RemoteVoice>__ctor__)
        ;
      }
      lVar6 = (long)(int)(uVar2 - unaff_w25) * (long)(unaff_w23 + 1);
      if ((lVar6 - (int)lVar6 != 0) ||
         (iVar8 = (uVar2 - unaff_w25) * (unaff_w23 + 1), SCARRY4(unaff_w26,iVar8)))
      goto LAB_0329b904;
      iVar8 = iVar8 + unaff_w26;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          uVar3 = FUN_0314e438();
          uVar3 = uVar3 & 0xffff;
          if ((uVar3 < 0x80) || (uVar3 < uVar2)) {
            if (iVar8 == 0x7fffffff) goto LAB_0329b904;
            iVar8 = iVar8 + 1;
          }
          if (uVar2 == uVar3) {
            iVar5 = *(int *)(unaff_x20 + 0x14);
            while( true ) {
              iVar7 = *(int *)(unaff_x20 + 0x18);
              if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < iVar5) {
                iVar7 = iVar5 - unaff_w22;
                if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= iVar5) {
                  iVar7 = *(int *)(unaff_x20 + 0x1c);
                }
              }
              iVar1 = iVar8 - iVar7;
              if (iVar8 < iVar7) break;
              FUN_0315aa9c();
              iVar7 = *(int *)(unaff_x20 + 0x14) - iVar7;
              iVar8 = 0;
              if (iVar7 != 0) {
                iVar8 = iVar1 / iVar7;
              }
              iVar5 = *(int *)(unaff_x20 + 0x14) + iVar5;
            }
            FUN_0315aa9c();
            unaff_w23 = unaff_w23 + 1;
            unaff_w22 = FUN_0329c09c();
            iVar8 = 0;
          }
          iVar5 = *(int *)(unaff_x19 + 0x10);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar5);
      }
      unaff_w26 = iVar8 + 1;
      unaff_w25 = uVar2 + 1;
      if (iVar5 <= unaff_w23) {
                    /* WARNING: Could not recover jumptable at 0x0329b900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x21 + 0x168))();
        return;
      }
      if (0 < iVar5) goto code_r0x0329b6fc;
      uVar2 = 0x7fffffff;
    } while( true );
  }
  goto LAB_0329b704;
code_r0x0329b6fc:
  unaff_w24 = 0;
  uVar2 = 0x7fffffff;
LAB_0329b704:
  uVar3 = FUN_0314e438();
  if (((int)(uVar3 & 0xffff) < unaff_w25) || (uVar3 = FUN_0314e438(), uVar2 <= (uVar3 & 0xffff)))
  goto LAB_0329b748;
  goto code_r0x0329b734;
}


