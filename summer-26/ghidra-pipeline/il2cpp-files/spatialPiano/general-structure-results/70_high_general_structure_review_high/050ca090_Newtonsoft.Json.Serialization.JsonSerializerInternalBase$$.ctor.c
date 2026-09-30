/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 050ca090
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x28;
  undefined2 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_050cc800();
  puVar1 = PTR_DAT_067c93a8;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_050cc800();
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = FUN_050cc800();
      if ((uVar2 & 1) == 0) {
        return 1;
      }
    }
    puVar1 = PTR_DAT_067c93a8;
    lVar3 = *(long *)PTR_DAT_067c93a8;
    *(int *)(unaff_x20 + 0x10) = *(int *)(unaff_x20 + 0x10) + -1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    in_stack_00000008 = 0;
    if (*(int *)(*(long *)PTR_DAT_067db0e0 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_050c8a24();
    uVar5 = in_stack_00000008;
    if ((uVar2 & 1) == 0) {
      FUN_050cd700();
      return 0;
    }
    uVar4 = *(uint *)(unaff_x19 + 0x24);
    if ((uVar4 >> 8 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = FUN_050ecb98(uVar5,uVar6,0);
      if ((uVar2 & 1) != 0) goto LAB_050caa94;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
    }
    uVar4 = uVar4 | 0x100;
    *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000008;
  }
  else {
    uVar4 = *(uint *)(unaff_x19 + 0x24);
    if ((uVar4 >> 8 & 1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
      lVar3 = *(long *)PTR_DAT_067c93a8;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar3 = *(long *)puVar1;
      }
      uVar2 = FUN_050ecb98(uVar5,**(undefined8 **)(lVar3 + 0xb8),0);
      if ((uVar2 & 1) != 0) {
LAB_050caa94:
        uStack0000000000000004 = 0x4b;
        thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x88),&stack0x00000004);
        FUN_050cd75c();
        return 0;
      }
      uVar4 = *(uint *)(unaff_x19 + 0x24);
    }
    uVar4 = uVar4 | 0x300;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  *(uint *)(unaff_x19 + 0x24) = uVar4;
  return 1;
}


