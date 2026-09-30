/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
ENTRY_POINT: 0747bc3c
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetMatchingConverter(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int iVar7;
  int iVar8;
  int unaff_w25;
  int iVar9;
  long unaff_x28;
  int in_stack_00000008;
  
  iVar5 = *(int *)(unaff_x28 + 0x10);
  if (in_stack_00000008 < iVar5) {
    iVar7 = 0;
    do {
      if (iVar5 < 1) {
        uVar3 = 0x7fffffff;
      }
      else {
        iVar8 = 0;
        uVar3 = 0x7fffffff;
        do {
          uVar2 = FUN_07363804(unaff_x28,iVar8,0);
          if ((unaff_w25 <= (int)(uVar2 & 0xffff)) &&
             (uVar2 = FUN_07363804(unaff_x28,iVar8,0), (uVar2 & 0xffff) < uVar3)) {
            uVar3 = FUN_07363804(unaff_x28,iVar8,0);
            uVar3 = uVar3 & 0xffff;
          }
          iVar5 = *(int *)(unaff_x28 + 0x10);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar5);
      }
      if ((0x7fffffff < (long)((ulong)uVar3 - (long)unaff_w25)) || (in_stack_00000008 == 0x7fffffff)
         ) {
LAB_0747be6c:
        uVar4 = FUN_0403189c();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar4,*(undefined8 *)PTR_DAT_08fa1210);
      }
      lVar6 = (long)(int)(uVar3 - unaff_w25) * (long)(in_stack_00000008 + 1);
      if ((lVar6 - (int)lVar6 != 0) ||
         (iVar8 = (uVar3 - unaff_w25) * (in_stack_00000008 + 1), lVar6 = (long)iVar7 + (long)iVar8,
         lVar6 != (int)lVar6)) goto LAB_0747be6c;
      iVar8 = iVar8 + iVar7;
      if (0 < iVar5) {
        iVar7 = 0;
        do {
          uVar2 = FUN_07363804(unaff_x28,iVar7,0);
          uVar2 = uVar2 & 0xffff;
          if ((uVar2 < 0x80) || (uVar2 < uVar3)) {
            if (iVar8 == 0x7fffffff) goto LAB_0747be6c;
            iVar8 = iVar8 + 1;
          }
          if (uVar3 == uVar2) {
            iVar5 = *(int *)(unaff_x20 + 0x14);
            while( true ) {
              iVar9 = *(int *)(unaff_x20 + 0x18);
              if (*(int *)(unaff_x20 + 0x18) + unaff_w22 < iVar5) {
                iVar9 = iVar5 - unaff_w22;
                if (*(int *)(unaff_x20 + 0x1c) + unaff_w22 <= iVar5) {
                  iVar9 = *(int *)(unaff_x20 + 0x1c);
                }
              }
              iVar1 = iVar8 - iVar9;
              if (iVar8 < iVar9) break;
              FUN_07371250();
              iVar9 = *(int *)(unaff_x20 + 0x14) - iVar9;
              iVar5 = *(int *)(unaff_x20 + 0x14) + iVar5;
              iVar8 = 0;
              if (iVar9 != 0) {
                iVar8 = iVar1 / iVar9;
              }
            }
            FUN_07371250();
            in_stack_00000008 = in_stack_00000008 + 1;
            unaff_w22 = FUN_0747c5b8();
            iVar8 = 0;
          }
          iVar5 = *(int *)(unaff_x28 + 0x10);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar5);
      }
      iVar7 = iVar8 + 1;
      unaff_w25 = uVar3 + 1;
    } while (in_stack_00000008 < iVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0747be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x21 + 0x168))();
  return;
}


