/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 05e91998
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar8;
  long *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 uVar9;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  if (param_1 == *in_x9) {
    in_stack_00000018 = (long)&stack0x00000028 + 4;
    in_stack_00000010 = 0;
    in_stack_00000020 = &stack0x00000030;
    in_stack_00000028._4_1_ = 0;
    in_stack_00000030 = unaff_x20;
    FUN_05e7c56c();
    FUN_0315402c(&stack0x00000010);
    puVar3 = PTR_DAT_07a17c00;
    iVar1 = *(int *)(unaff_x20 + 0x18);
    if (0 < iVar1) {
      iVar8 = 0;
      do {
        plVar4 = (long *)FUN_047e11e8();
        if (plVar4 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
          if (((bVar2 <= *(byte *)(*plVar4 + 0x130)) &&
              (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) &&
             ((*(byte *)((long)plVar4 + 0x1a) >> 3 & 1) == 0)) {
            FUN_047e1258();
            (**(code **)(*plVar4 + 0x178))
                      (plVar4,unaff_x19,unaff_w21,*(undefined8 *)(*plVar4 + 0x180));
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
      if (0 < iVar1) {
        iVar8 = 0;
        plVar4 = (long *)PTR_DAT_079f5050;
        do {
          plVar5 = (long *)FUN_047e11e8();
          if (plVar5 != (long *)0x0) {
            FUN_047e1258();
            lVar7 = *plVar5;
            if (lVar7 == *plVar4) {
              lVar7 = *unaff_x26;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_036a1978();
                lVar7 = *unaff_x26;
              }
              uVar9 = FUN_0364297c(lVar7);
              FUN_05e93678(plVar5,unaff_w21,uVar9);
            }
            else {
              bVar2 = *(byte *)(*(long *)PTR_DAT_07a17c08 + 0x130);
              if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_07a17c08)) {
                uVar9 = *unaff_x28;
                lVar7 = thunk_FUN_0367fd24(plVar5,uVar9);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03643084(plVar5,uVar9);
                }
                if ((unaff_w21 == 0) && (uVar6 = FUN_03156cec(1,*unaff_x28,lVar7), (uVar6 & 1) != 0)
                   ) {
                  uVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a17be0);
                  FUN_05e93810(uVar9,lVar7,unaff_x19);
                  FUN_05e888b4(uVar9,0);
                  plVar4 = (long *)PTR_DAT_079f5050;
                }
                else {
                  FUN_0315f2c4(0,*unaff_x28,lVar7,unaff_x19);
                  plVar4 = (long *)PTR_DAT_079f5050;
                }
              }
              else {
                (**(code **)(lVar7 + 0x178))
                          (plVar5,unaff_x19,unaff_w21,*(undefined8 *)(lVar7 + 0x180));
              }
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar1 != iVar8);
      }
    }
  }
  FUN_05e9eafc();
  return;
}


