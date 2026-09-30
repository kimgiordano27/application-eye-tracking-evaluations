/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 045c5480
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject<object>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_062ae3b4(param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = unaff_x23;
    thunk_FUN_03d233cc();
    puVar1 = PTR_DAT_08e695f0;
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar8 = FUN_0710fcf0(uVar8,0);
    uVar4 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    FUN_084bae28(&stack0x00000010,uVar8,uVar4,0);
    puVar3 = PTR_DAT_08e80808;
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar5 = FUN_06b295f4(*(long *)(unaff_x20 + 0x30),in_stack_00000010,in_stack_00000018,
                           *(undefined8 *)PTR_DAT_08e80808);
      uVar4 = in_stack_00000018;
      uVar8 = in_stack_00000010;
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        thunk_FUN_03ce5214(PTR_DAT_08e695f0);
        FUN_036f8b20();
        uVar8 = FUN_0710fcf0(uVar8,0);
        FUN_036f8b10();
        uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
        uVar4 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
        uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e80818);
        uVar8 = FUN_06f75284(uVar6,uVar8,uVar7,uVar4,0);
        thunk_FUN_03ce5214(PTR_DAT_08e76350);
        uVar4 = thunk_FUN_03cf5234();
        FUN_07064ba8(uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar4);
      }
      lVar9 = *(long *)(unaff_x20 + 0x30);
      uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
      FUN_04d6ed0c(uVar6,param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),0);
      puVar2 = PTR_DAT_08e80800;
      if (lVar9 != 0) {
        FUN_06b293e8(lVar9,uVar8,uVar4,uVar6,*(undefined8 *)PTR_DAT_08e80800);
        if ((unaff_x22 & 1) != 0) {
          uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar8 = FUN_0710fcf0(uVar8,0);
          uVar4 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
          uVar5 = FUN_0711a11c(uVar8,uVar4,0);
          if ((uVar5 & 1) != 0) {
            uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_0710fcf0(uVar8,0);
            FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
            FUN_084bae28();
            if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_045c5698;
            uVar5 = FUN_06b295f4(*(long *)(unaff_x20 + 0x30),in_stack_00000000,in_stack_00000008,
                                 *(undefined8 *)puVar3);
            if ((uVar5 & 1) == 0) {
              lVar9 = *(long *)(unaff_x20 + 0x30);
              uVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
              FUN_04d6ed0c(uVar8,param_1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30),0);
              if (lVar9 == 0) goto LAB_045c5698;
              FUN_06b293e8(lVar9,in_stack_00000000,in_stack_00000008,uVar8,*(undefined8 *)puVar2);
            }
          }
        }
        return;
      }
    }
  }
LAB_045c5698:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


