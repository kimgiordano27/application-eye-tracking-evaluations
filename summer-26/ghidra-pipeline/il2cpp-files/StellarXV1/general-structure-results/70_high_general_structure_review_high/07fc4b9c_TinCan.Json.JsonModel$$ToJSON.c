/*
FUNCTION_NAME: TinCan.Json.JsonModel$$ToJSON
ENTRY_POINT: 07fc4b9c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void TinCan_Json_JsonModel__ToJSON(long param_1)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (unaff_x21 == (long *)0x0) goto LAB_07fc4c2c;
  uVar5 = (**(code **)(*unaff_x21 + 0x138))();
  if ((uVar5 & 1) == 0) {
    if (*(char *)(unaff_x19 + 0x19) != '\0') {
      thunk_FUN_040dedf8(PTR_DAT_0929cb88);
      uVar4 = thunk_FUN_040b4efc();
      FUN_07679408(uVar4,0);
      goto LAB_07fc4c80;
    }
    plVar6 = (long *)FUN_07fc44f0();
    puVar2 = PTR_DAT_0930aba0;
    if (plVar6 == (long *)0x0) goto LAB_07fc4c2c;
    uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
    uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
    cVar1 = *(char *)(unaff_x19 + 0x50);
    in_stack_00000008._4_4_ = 0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_07fc4cb4(uVar8,uVar4,(long)&stack0x00000008 + 4,cVar1 != '\0');
    if ((in_stack_00000008._4_4_ == 0x2733) || (in_stack_00000008._4_4_ == 0)) {
      *(long *)(unaff_x19 + 0x38) = (long)plVar6;
      thunk_FUN_040ec700((long *)(unaff_x19 + 0x38),plVar6);
      puVar2 = PTR_DAT_092a9c90;
      if (in_stack_00000008._4_4_ == 0) {
        bVar3 = 1;
        if (*(int *)(unaff_x19 + 0x24) == 2) {
          plVar6 = *(long **)(unaff_x20 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_092a9c90 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (plVar6 == (long *)0x0) {
LAB_07fc4c2c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar5 = (**(code **)(*plVar6 + 0x138))
                            (plVar6,**(undefined8 **)(*(long *)puVar2 + 0xb8),
                             *(undefined8 *)(*plVar6 + 0x140));
          if ((uVar5 & 1) == 0) {
            plVar6 = *(long **)(unaff_x20 + 0x10);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            if (plVar6 == (long *)0x0) goto LAB_07fc4c2c;
            bVar3 = (**(code **)(*plVar6 + 0x138))
                              (plVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20),
                               *(undefined8 *)(*plVar6 + 0x140));
            bVar3 = bVar3 ^ 1;
          }
          else {
            bVar3 = 0;
          }
        }
        *(undefined1 *)(unaff_x19 + 0x51) = 1;
        *(byte *)(unaff_x19 + 0x52) = bVar3 & 1;
        return;
      }
    }
    if (*(char *)(unaff_x19 + 0x18) != '\0') {
      in_stack_00000008._4_4_ = 0x2714;
    }
    iVar7 = in_stack_00000008._4_4_;
    thunk_FUN_040dedf8(PTR_DAT_092f8778);
    uVar4 = thunk_FUN_040b4efc();
  }
  else {
    thunk_FUN_040dedf8(PTR_DAT_092f8778);
    uVar4 = thunk_FUN_040b4efc();
    iVar7 = 0x2741;
  }
  FUN_07fbc5ec(uVar4,iVar7);
LAB_07fc4c80:
  uVar8 = thunk_FUN_040dedf8(PTR_DAT_0930b660);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar4,uVar8);
}


