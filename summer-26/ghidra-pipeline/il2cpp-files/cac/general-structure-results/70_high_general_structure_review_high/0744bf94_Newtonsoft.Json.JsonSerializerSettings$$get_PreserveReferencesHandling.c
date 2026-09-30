/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_PreserveReferencesHandling
ENTRY_POINT: 0744bf94
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_PreserveReferencesHandling(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int in_w8;
  long lVar5;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int iVar6;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x28;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    unaff_w25 = unaff_w25 + 1;
    if (in_w8 <= unaff_w25) {
      do {
        iVar1 = unaff_w19 + 1;
        if (in_w8 <= unaff_w26) {
                    /* WARNING: Could not recover jumptable at 0x0744bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x21 + 0x168))();
          return;
        }
        if (in_w8 < 1) {
          unaff_w19 = 0x7fffffff;
        }
        else {
          iVar6 = 0;
          unaff_w19 = 0x7fffffff;
          do {
            uVar3 = FUN_073213d0(unaff_x28,iVar6,0);
            if ((iVar1 <= (int)(uVar3 & 0xffff)) &&
               (uVar3 = FUN_073213d0(unaff_x28,iVar6,0), (uVar3 & 0xffff) < unaff_w19)) {
              uVar3 = FUN_073213d0(unaff_x28,iVar6,0);
              unaff_w19 = uVar3 & 0xffff;
            }
            in_w8 = *(int *)(unaff_x28 + 0x10);
            iVar6 = iVar6 + 1;
          } while (iVar6 < in_w8);
        }
        if ((0x7fffffff < (long)((ulong)unaff_w19 - (long)iVar1)) || (unaff_w26 == 0x7fffffff))
        goto LAB_0744bfdc;
        lVar5 = (long)(int)(unaff_w19 - iVar1) * (long)(unaff_w26 + 1);
        if ((lVar5 - (int)lVar5 != 0) ||
           (iVar1 = (unaff_w19 - iVar1) * (unaff_w26 + 1),
           lVar5 = (long)(unaff_w24 + 1) + (long)iVar1, lVar5 != (int)lVar5)) goto LAB_0744bfdc;
        unaff_w24 = iVar1 + unaff_w24 + 1;
      } while (in_w8 < 1);
      unaff_w25 = 0;
      in_stack_00000008._4_4_ = unaff_w19;
    }
    uVar3 = FUN_073213d0(unaff_x28,unaff_w25,0);
    uVar3 = uVar3 & 0xffff;
    if ((uVar3 < 0x80) || ((int)uVar3 < (int)unaff_w19)) {
      if (unaff_w24 == 0x7fffffff) {
LAB_0744bfdc:
        uVar4 = FUN_03f1363c();
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar4,*(undefined8 *)PTR_DAT_09131108);
      }
      unaff_w24 = unaff_w24 + 1;
    }
    if (unaff_w19 == uVar3) {
      iVar1 = *(int *)(unaff_x20 + 0x14);
      while( true ) {
        iVar6 = *(int *)(unaff_x20 + 0x18);
        if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < iVar1) {
          iVar6 = iVar1 - unaff_w22;
          if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= iVar1) {
            iVar6 = *(int *)(unaff_x20 + 0x1c);
          }
        }
        iVar2 = unaff_w24 - iVar6;
        if (unaff_w24 < iVar6) break;
        FUN_073317f8();
        iVar6 = *(int *)(unaff_x20 + 0x14) - iVar6;
        iVar1 = *(int *)(unaff_x20 + 0x14) + iVar1;
        unaff_w24 = 0;
        if (iVar6 != 0) {
          unaff_w24 = iVar2 / iVar6;
        }
      }
      FUN_073317f8();
      unaff_w26 = unaff_w26 + 1;
      unaff_w22 = FUN_0744c728();
      unaff_w24 = 0;
      unaff_x28 = in_stack_00000000;
      unaff_w19 = in_stack_00000008._4_4_;
    }
    in_w8 = *(int *)(unaff_x28 + 0x10);
  } while( true );
}


