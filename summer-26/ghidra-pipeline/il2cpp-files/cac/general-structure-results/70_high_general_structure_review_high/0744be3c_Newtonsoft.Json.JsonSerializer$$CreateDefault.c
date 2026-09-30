/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 0744be3c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateDefault(void)

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
  int unaff_w23;
  int iVar6;
  int unaff_w25;
  int iVar7;
  int unaff_w26;
  int iVar8;
  long unaff_x28;
  long in_stack_00000000;
  
  while (((long)((ulong)unaff_w19 - (long)unaff_w25) < 0x80000000 && (unaff_w26 != 0x7fffffff))) {
    lVar5 = (long)(int)(unaff_w19 - unaff_w25) * (long)(unaff_w26 + 1);
    if ((lVar5 - (int)lVar5 != 0) ||
       (iVar6 = (unaff_w19 - unaff_w25) * (unaff_w26 + 1), lVar5 = (long)unaff_w23 + (long)iVar6,
       lVar5 != (int)lVar5)) break;
    iVar6 = iVar6 + unaff_w23;
    if (0 < in_w8) {
      iVar7 = 0;
      do {
        uVar3 = FUN_073213d0(unaff_x28,iVar7,0);
        uVar3 = uVar3 & 0xffff;
        if ((uVar3 < 0x80) || ((int)uVar3 < (int)unaff_w19)) {
          if (iVar6 == 0x7fffffff) goto LAB_0744bfdc;
          iVar6 = iVar6 + 1;
        }
        if (unaff_w19 == uVar3) {
          iVar1 = *(int *)(unaff_x20 + 0x14);
          while( true ) {
            iVar8 = *(int *)(unaff_x20 + 0x18);
            if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < iVar1) {
              iVar8 = iVar1 - unaff_w22;
              if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= iVar1) {
                iVar8 = *(int *)(unaff_x20 + 0x1c);
              }
            }
            iVar2 = iVar6 - iVar8;
            if (iVar6 < iVar8) break;
            FUN_073317f8();
            iVar8 = *(int *)(unaff_x20 + 0x14) - iVar8;
            iVar1 = *(int *)(unaff_x20 + 0x14) + iVar1;
            iVar6 = 0;
            if (iVar8 != 0) {
              iVar6 = iVar2 / iVar8;
            }
          }
          FUN_073317f8();
          unaff_w26 = unaff_w26 + 1;
          unaff_w22 = FUN_0744c728();
          iVar6 = 0;
          unaff_x28 = in_stack_00000000;
        }
        in_w8 = *(int *)(unaff_x28 + 0x10);
        iVar7 = iVar7 + 1;
      } while (iVar7 < in_w8);
    }
    unaff_w23 = iVar6 + 1;
    unaff_w25 = unaff_w19 + 1;
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
        if ((unaff_w25 <= (int)(uVar3 & 0xffff)) &&
           (uVar3 = FUN_073213d0(unaff_x28,iVar6,0), (uVar3 & 0xffff) < unaff_w19)) {
          uVar3 = FUN_073213d0(unaff_x28,iVar6,0);
          unaff_w19 = uVar3 & 0xffff;
        }
        in_w8 = *(int *)(unaff_x28 + 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < in_w8);
    }
  }
LAB_0744bfdc:
  uVar4 = FUN_03f1363c();
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar4,*(undefined8 *)PTR_DAT_09131108);
}


