/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MetadataPropertyHandling
ENTRY_POINT: 0744bf1c
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonSerializerSettings__get_MetadataPropertyHandling(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  int iVar8;
  int iVar9;
  int unaff_w25;
  int unaff_w26;
  int unaff_w28;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    FUN_073317f8();
    iVar2 = *(int *)(unaff_x20 + 0x14) - unaff_w28;
    unaff_w23 = *(int *)(unaff_x20 + 0x14) + unaff_w23;
    iVar9 = 0;
    if (iVar2 != 0) {
      iVar9 = unaff_w19 / iVar2;
    }
    while( true ) {
      unaff_w28 = *(int *)(unaff_x20 + 0x18);
      if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < unaff_w23) {
        unaff_w28 = unaff_w23 - unaff_w22;
        if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= unaff_w23) {
          unaff_w28 = *(int *)(unaff_x20 + 0x1c);
        }
      }
      unaff_w19 = iVar9 - unaff_w28;
      if (unaff_w28 <= iVar9) break;
      FUN_073317f8();
      iVar2 = unaff_w26 + 1;
      unaff_w22 = FUN_0744c728();
      iVar9 = 0;
      uVar4 = in_stack_00000008._4_4_;
      do {
        iVar6 = *(int *)(in_stack_00000000 + 0x10);
        unaff_w25 = unaff_w25 + 1;
        if (iVar6 <= unaff_w25) {
          do {
            iVar1 = uVar4 + 1;
            if (iVar6 <= iVar2) {
                    /* WARNING: Could not recover jumptable at 0x0744bfd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*unaff_x21 + 0x168))();
              return;
            }
            if (iVar6 < 1) {
              uVar4 = 0x7fffffff;
            }
            else {
              iVar8 = 0;
              uVar4 = 0x7fffffff;
              do {
                uVar3 = FUN_073213d0(in_stack_00000000,iVar8,0);
                if ((iVar1 <= (int)(uVar3 & 0xffff)) &&
                   (uVar3 = FUN_073213d0(in_stack_00000000,iVar8,0), (uVar3 & 0xffff) < uVar4)) {
                  uVar4 = FUN_073213d0(in_stack_00000000,iVar8,0);
                  uVar4 = uVar4 & 0xffff;
                }
                iVar6 = *(int *)(in_stack_00000000 + 0x10);
                iVar8 = iVar8 + 1;
              } while (iVar8 < iVar6);
            }
            if ((0x7fffffff < (long)((ulong)uVar4 - (long)iVar1)) || (iVar2 == 0x7fffffff))
            goto LAB_0744bfdc;
            lVar7 = (long)(int)(uVar4 - iVar1) * (long)(unaff_w26 + 2);
            if ((lVar7 - (int)lVar7 != 0) ||
               (iVar1 = (uVar4 - iVar1) * (unaff_w26 + 2), lVar7 = (long)(iVar9 + 1) + (long)iVar1,
               lVar7 != (int)lVar7)) goto LAB_0744bfdc;
            iVar9 = iVar1 + iVar9 + 1;
          } while (iVar6 < 1);
          unaff_w25 = 0;
          in_stack_00000008._4_4_ = uVar4;
        }
        uVar3 = FUN_073213d0(in_stack_00000000,unaff_w25,0);
        uVar3 = uVar3 & 0xffff;
        if ((uVar3 < 0x80) || ((int)uVar3 < (int)uVar4)) {
          if (iVar9 == 0x7fffffff) {
LAB_0744bfdc:
            uVar5 = FUN_03f1363c();
                    /* WARNING: Subroutine does not return */
            FUN_03f134f0(uVar5,*(undefined8 *)PTR_DAT_09131108);
          }
          iVar9 = iVar9 + 1;
        }
      } while (uVar4 != uVar3);
      unaff_w23 = *(int *)(unaff_x20 + 0x14);
      unaff_w26 = iVar2;
    }
  } while( true );
}


