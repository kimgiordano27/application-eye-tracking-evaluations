/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$ResetReader
ENTRY_POINT: 0744c91c
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__ResetReader(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  
  FUN_074f9228();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  iVar2 = (**(code **)(*unaff_x20 + 0x198))();
  puVar1 = PTR_DAT_09131178;
  if (iVar2 == 0x7f) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xf4;
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)puVar1;
    thunk_FUN_03f86000();
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)PTR_DAT_09131168;
    thunk_FUN_03f86000();
    *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)PTR_DAT_09131190;
    thunk_FUN_03f86000();
    uVar4 = *(undefined8 *)PTR_DAT_09131170;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
    thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x30),uVar4);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar4;
    thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x38),uVar4);
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_0912fad0;
    thunk_FUN_03f86000();
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)PTR_DAT_09131180;
    thunk_FUN_03f86000();
    uVar4 = *(undefined8 *)PTR_DAT_09131188;
    *(undefined8 *)(unaff_x19 + 0x58) = uVar4;
    thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x58),uVar4);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar4;
    thunk_FUN_03f86000((undefined8 *)(unaff_x19 + 0x50),uVar4);
    return;
  }
  if (unaff_x20[0xf] != 0) {
    FUN_0732bbd4(unaff_x20[0xf],0);
    FUN_03f19e84();
    return;
  }
  thunk_FUN_03f786f8(PTR_DAT_0910be80);
  uVar4 = thunk_FUN_03f4e68c();
  uVar3 = thunk_FUN_03f786f8(PTR_DAT_09131198);
  FUN_074b7de8(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03f786f8(PTR_DAT_091311a0);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar4,uVar3);
}


