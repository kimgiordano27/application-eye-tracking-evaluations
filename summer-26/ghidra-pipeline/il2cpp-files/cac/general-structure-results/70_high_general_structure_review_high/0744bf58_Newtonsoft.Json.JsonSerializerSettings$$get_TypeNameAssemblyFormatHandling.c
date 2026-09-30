/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 0744bf58
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


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormatHandling(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long unaff_x20;
  long *unaff_x21;
  int iVar8;
  int iVar9;
  int unaff_w25;
  int unaff_w26;
  int iVar10;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    FUN_073317f8();
    iVar1 = unaff_w26 + 1;
    iVar4 = FUN_0744c728();
    iVar9 = 0;
    uVar3 = in_stack_00000008._4_4_;
    do {
      iVar6 = *(int *)(in_stack_00000000 + 0x10);
      unaff_w25 = unaff_w25 + 1;
      if (iVar6 <= unaff_w25) {
        do {
          iVar10 = uVar3 + 1;
          if (iVar6 <= iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0744bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x21 + 0x168))();
            return;
          }
          if (iVar6 < 1) {
            uVar3 = 0x7fffffff;
          }
          else {
            iVar8 = 0;
            uVar3 = 0x7fffffff;
            do {
              uVar2 = FUN_073213d0(in_stack_00000000,iVar8,0);
              if ((iVar10 <= (int)(uVar2 & 0xffff)) &&
                 (uVar2 = FUN_073213d0(in_stack_00000000,iVar8,0), (uVar2 & 0xffff) < uVar3)) {
                uVar3 = FUN_073213d0(in_stack_00000000,iVar8,0);
                uVar3 = uVar3 & 0xffff;
              }
              iVar6 = *(int *)(in_stack_00000000 + 0x10);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar6);
          }
          if ((0x7fffffff < (long)((ulong)uVar3 - (long)iVar10)) || (iVar1 == 0x7fffffff))
          goto LAB_0744bfdc;
          lVar7 = (long)(int)(uVar3 - iVar10) * (long)(unaff_w26 + 2);
          if ((lVar7 - (int)lVar7 != 0) ||
             (iVar10 = (uVar3 - iVar10) * (unaff_w26 + 2), lVar7 = (long)(iVar9 + 1) + (long)iVar10,
             lVar7 != (int)lVar7)) goto LAB_0744bfdc;
          iVar9 = iVar10 + iVar9 + 1;
        } while (iVar6 < 1);
        unaff_w25 = 0;
        in_stack_00000008._4_4_ = uVar3;
      }
      uVar2 = FUN_073213d0(in_stack_00000000,unaff_w25,0);
      uVar2 = uVar2 & 0xffff;
      if ((uVar2 < 0x80) || ((int)uVar2 < (int)uVar3)) {
        if (iVar9 == 0x7fffffff) {
LAB_0744bfdc:
          uVar5 = FUN_03f1363c();
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar5,*(undefined8 *)PTR_DAT_09131108);
        }
        iVar9 = iVar9 + 1;
      }
    } while (uVar3 != uVar2);
    iVar6 = *(int *)(unaff_x20 + 0x14);
    while( true ) {
      iVar10 = *(int *)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x18) + iVar4 < iVar6) {
        iVar10 = iVar6 - iVar4;
        if (*(int *)(unaff_x20 + 0x1c) + iVar4 <= iVar6) {
          iVar10 = *(int *)(unaff_x20 + 0x1c);
        }
      }
      iVar8 = iVar9 - iVar10;
      unaff_w26 = iVar1;
      if (iVar9 < iVar10) break;
      FUN_073317f8();
      iVar10 = *(int *)(unaff_x20 + 0x14) - iVar10;
      iVar6 = *(int *)(unaff_x20 + 0x14) + iVar6;
      iVar9 = 0;
      if (iVar10 != 0) {
        iVar9 = iVar8 / iVar10;
      }
    }
  } while( true );
}


