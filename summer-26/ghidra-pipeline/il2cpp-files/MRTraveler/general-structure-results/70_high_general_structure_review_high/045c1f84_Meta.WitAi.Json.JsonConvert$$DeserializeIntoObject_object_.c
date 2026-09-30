/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeIntoObject<object>
ENTRY_POINT: 045c1f84
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


void Meta_WitAi_Json_JsonConvert__DeserializeIntoObject<object>
               (long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar8 = *(long **)(param_4 + 0x38);
  if (plVar8 == (long *)0x0) {
    FUN_03c8f898(PTR_DAT_08e80800);
    FUN_03c8f898(PTR_DAT_08e80808);
    FUN_03c8f898(PTR_DAT_08e80810);
    FUN_03c8f898(PTR_DAT_08e695f0);
    plVar8 = *(long **)(param_4 + 0x38);
    if (plVar8 == (long *)0x0) {
      FUN_03cf12a0(param_4);
      plVar8 = *(long **)(param_4 + 0x38);
    }
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if ((*(byte *)(*plVar8 + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  lVar4 = thunk_FUN_03cf5234();
  FUN_062ac8fc(lVar4,*(undefined8 *)(*(long *)(param_4 + 0x38) + 8));
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x10),param_2);
    puVar1 = PTR_DAT_08e695f0;
    uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_0710fcf0(uVar10,0);
    uVar5 = FUN_0710fcf0(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20),0);
    FUN_084bae28(&stack0x00000010,uVar10,uVar5,0);
    puVar3 = PTR_DAT_08e80808;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar6 = FUN_06b295f4(*(long *)(param_1 + 0x30),in_stack_00000010,in_stack_00000018,
                           *(undefined8 *)PTR_DAT_08e80808);
      uVar5 = in_stack_00000018;
      uVar10 = in_stack_00000010;
      if ((uVar6 & 1) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
        thunk_FUN_03ce5214(PTR_DAT_08e695f0);
        FUN_036f8b20();
        uVar10 = FUN_0710fcf0(uVar10,0);
        FUN_036f8b10(param_1);
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        uVar5 = FUN_0710fcf0(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20),0);
        uVar7 = thunk_FUN_03ce5214(PTR_DAT_08e80818);
        uVar10 = FUN_06f75284(uVar7,uVar10,uVar9,uVar5,0);
        thunk_FUN_03ce5214(PTR_DAT_08e76350);
        uVar5 = thunk_FUN_03cf5234();
        FUN_07064ba8(uVar5,uVar10,0);
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar5,param_4);
      }
      lVar11 = *(long *)(param_1 + 0x30);
      uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
      FUN_04d6ed0c(uVar7,lVar4,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x28),0);
      puVar2 = PTR_DAT_08e80800;
      if (lVar11 != 0) {
        FUN_06b293e8(lVar11,uVar10,uVar5,uVar7,*(undefined8 *)PTR_DAT_08e80800);
        if ((param_3 & 1) != 0) {
          uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar10 = FUN_0710fcf0(uVar10,0);
          uVar5 = FUN_0710fcf0(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20),0);
          uVar6 = FUN_0711a11c(uVar10,uVar5,0);
          if ((uVar6 & 1) != 0) {
            uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            FUN_0710fcf0(uVar10,0);
            FUN_0710fcf0(*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18),0);
            FUN_084bae28();
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_045c2218;
            uVar6 = FUN_06b295f4(*(long *)(param_1 + 0x30),0,0,*(undefined8 *)puVar3);
            if ((uVar6 & 1) == 0) {
              lVar11 = *(long *)(param_1 + 0x30);
              uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80810);
              FUN_04d6ed0c(uVar10,lVar4,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x30),0);
              if (lVar11 == 0) goto LAB_045c2218;
              FUN_06b293e8(lVar11,0,0,uVar10,*(undefined8 *)puVar2);
            }
          }
        }
        return;
      }
    }
  }
LAB_045c2218:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


