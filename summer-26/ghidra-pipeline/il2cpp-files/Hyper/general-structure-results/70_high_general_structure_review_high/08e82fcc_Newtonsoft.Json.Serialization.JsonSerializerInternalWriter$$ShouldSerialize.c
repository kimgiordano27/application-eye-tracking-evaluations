/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 08e82fcc
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined1 unaff_w26;
  
  FUN_08ec28d8(param_1,0,*unaff_x25,0);
  uVar4 = thunk_FUN_04983f60(*unaff_x24);
  FUN_08ec29e4(uVar4,500,4,0,param_1,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x18),uVar4);
  FUN_08dbf2f0();
  *(undefined1 *)(unaff_x19 + 0x10) = unaff_w26;
  puVar2 = PTR_DAT_0ac6de48;
  puVar1 = PTR_DAT_0ac6de40;
  if (unaff_x21 != 0) {
    uVar4 = FUN_09a6d800();
    *(undefined8 *)(unaff_x19 + 0x20) = uVar4;
    thunk_FUN_049ee3d8();
    uVar3 = FUN_09a6e090();
    *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
    uVar4 = FUN_09a6e39c();
    *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
    thunk_FUN_049ee3d8();
    *(undefined8 *)(unaff_x19 + 0x38) = unaff_x22;
    thunk_FUN_049ee3d8();
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_08e4210c();
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x48),uVar4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08e82898();
    puVar1 = PTR_DAT_0ac6de50;
    if (unaff_x20 != (long *)0x0) {
      lVar7 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac6ca28) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_08e83144;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68();
LAB_08e83144:
      uVar4 = (*(code *)*puVar5)();
      uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_08ec2c28(uVar6,uVar4,0);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar6;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x58),uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


