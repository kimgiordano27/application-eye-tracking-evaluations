/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeToken<WitEntityKeywordInfo>
ENTRY_POINT: 045c43fc
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


void Meta_WitAi_Json_JsonConvert__SerializeToken<WitEntityKeywordInfo>(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  if ((*(byte *)(*param_1 + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  lVar4 = thunk_FUN_03cf5234();
  FUN_062adb5c(lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x23;
    thunk_FUN_03d233cc();
    puVar1 = PTR_DAT_08e695f0;
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar9 = FUN_0710fcf0(uVar9,0);
    uVar5 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
    FUN_084bae28(&stack0x00000010,uVar9,uVar5,0);
    puVar3 = PTR_DAT_08e80808;
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar6 = FUN_06b295f4(*(long *)(unaff_x20 + 0x30),uStack0000000000000010,uStack0000000000000018
                           ,*(undefined8 *)PTR_DAT_08e80808);
      uVar5 = uStack0000000000000018;
      uVar9 = uStack0000000000000010;
      if ((uVar6 & 1) != 0) {
        uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        thunk_FUN_03ce5214(PTR_DAT_08e695f0);
        FUN_036f8b20();
        uVar9 = FUN_0710fcf0(uVar9,0);
        FUN_036f8b10();
        uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
        uVar5 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e80818);
        uVar9 = FUN_06f75284(uVar7,uVar9,uVar8,uVar5,0);
        thunk_FUN_03ce5214(PTR_DAT_08e76350);
        uVar5 = thunk_FUN_03cf5234();
        FUN_07064ba8(uVar5,uVar9,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar5);
      }
      lVar10 = *(long *)(unaff_x20 + 0x30);
      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
      FUN_04d6ed0c(uVar7,lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28),0);
      puVar2 = PTR_DAT_08e80800;
      if (lVar10 != 0) {
        FUN_06b293e8(lVar10,uVar9,uVar5,uVar7,*(undefined8 *)PTR_DAT_08e80800);
        if ((unaff_x22 & 1) != 0) {
          uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar9 = FUN_0710fcf0(uVar9,0);
          uVar5 = FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20),0);
          uVar6 = FUN_0711a11c(uVar9,uVar5,0);
          if ((uVar6 & 1) != 0) {
            uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_0710fcf0(uVar9,0);
            FUN_0710fcf0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
            FUN_084bae28();
            if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_045c4630;
            uVar6 = FUN_06b295f4(*(long *)(unaff_x20 + 0x30),uStack0000000000000000,
                                 uStack0000000000000008,*(undefined8 *)puVar3);
            uVar5 = uStack0000000000000008;
            uVar9 = uStack0000000000000000;
            if ((uVar6 & 1) == 0) {
              lVar10 = *(long *)(unaff_x20 + 0x30);
              uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
              FUN_04d6ed0c(uVar7,lVar4,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30),0);
              if (lVar10 == 0) goto LAB_045c4630;
              FUN_06b293e8(lVar10,uVar9,uVar5,uVar7,*(undefined8 *)puVar2);
            }
          }
        }
        return;
      }
    }
  }
LAB_045c4630:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


