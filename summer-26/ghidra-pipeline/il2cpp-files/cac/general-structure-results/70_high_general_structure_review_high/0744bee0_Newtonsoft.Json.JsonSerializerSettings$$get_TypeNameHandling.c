/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameHandling
ENTRY_POINT: 0744bee0
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


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameHandling(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int in_w9;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  int iVar7;
  int unaff_w25;
  int unaff_w26;
  int iVar8;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    while( true ) {
      iVar8 = *(int *)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < unaff_w23) {
        iVar8 = unaff_w23 - unaff_w22;
        if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= unaff_w23) {
          iVar8 = *(int *)(unaff_x20 + 0x1c);
        }
      }
      iVar5 = in_w9 - iVar8;
      if (in_w9 < iVar8) break;
      FUN_073317f8();
      iVar8 = *(int *)(unaff_x20 + 0x14) - iVar8;
      unaff_w23 = *(int *)(unaff_x20 + 0x14) + unaff_w23;
      in_w9 = 0;
      if (iVar8 != 0) {
        in_w9 = iVar5 / iVar8;
      }
    }
    FUN_073317f8();
    iVar8 = unaff_w26 + 1;
    unaff_w22 = FUN_0744c728();
    in_w9 = 0;
    uVar3 = in_stack_00000008._4_4_;
    do {
      iVar5 = *(int *)(in_stack_00000000 + 0x10);
      unaff_w25 = unaff_w25 + 1;
      if (iVar5 <= unaff_w25) {
        do {
          iVar1 = uVar3 + 1;
          if (iVar5 <= iVar8) {
                    /* WARNING: Could not recover jumptable at 0x0744bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x21 + 0x168))();
            return;
          }
          if (iVar5 < 1) {
            uVar3 = 0x7fffffff;
          }
          else {
            iVar7 = 0;
            uVar3 = 0x7fffffff;
            do {
              uVar2 = FUN_073213d0(in_stack_00000000,iVar7,0);
              if ((iVar1 <= (int)(uVar2 & 0xffff)) &&
                 (uVar2 = FUN_073213d0(in_stack_00000000,iVar7,0), (uVar2 & 0xffff) < uVar3)) {
                uVar3 = FUN_073213d0(in_stack_00000000,iVar7,0);
                uVar3 = uVar3 & 0xffff;
              }
              iVar5 = *(int *)(in_stack_00000000 + 0x10);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar5);
          }
          if ((0x7fffffff < (long)((ulong)uVar3 - (long)iVar1)) || (iVar8 == 0x7fffffff))
          goto LAB_0744bfdc;
          lVar6 = (long)(int)(uVar3 - iVar1) * (long)(unaff_w26 + 2);
          if ((lVar6 - (int)lVar6 != 0) ||
             (iVar1 = (uVar3 - iVar1) * (unaff_w26 + 2), lVar6 = (long)(in_w9 + 1) + (long)iVar1,
             lVar6 != (int)lVar6)) goto LAB_0744bfdc;
          in_w9 = iVar1 + in_w9 + 1;
        } while (iVar5 < 1);
        unaff_w25 = 0;
        in_stack_00000008._4_4_ = uVar3;
      }
      uVar2 = FUN_073213d0(in_stack_00000000,unaff_w25,0);
      uVar2 = uVar2 & 0xffff;
      if ((uVar2 < 0x80) || ((int)uVar2 < (int)uVar3)) {
        if (in_w9 == 0x7fffffff) {
LAB_0744bfdc:
          uVar4 = FUN_03f1363c();
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar4,*(undefined8 *)PTR_DAT_09131108);
        }
        in_w9 = in_w9 + 1;
      }
    } while (uVar3 != uVar2);
    unaff_w23 = *(int *)(unaff_x20 + 0x14);
    unaff_w26 = iVar8;
  } while( true );
}


