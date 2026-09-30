/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ObjectCreationHandling
ENTRY_POINT: 02707ba4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializer__set_ObjectCreationHandling(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint unaff_w19;
  int unaff_w20;
  long unaff_x23;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x23 + 0x7c6) = 1;
  iVar4 = FUN_02706ef4();
  puVar3 = PTR_DAT_03cf5f38;
  uVar2 = unaff_w19 - 1;
  if (0xb < uVar2) {
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf7f10);
    uVar6 = FUN_027b3d94(uVar6,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
    uVar7 = thunk_FUN_01a89e68();
    uVar8 = thunk_FUN_01a6ca08(PTR_DAT_03cf6230);
    FUN_026ade84(uVar7,uVar8,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf7f88);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar7,uVar6);
  }
  uVar1 = iVar4 + unaff_w20;
  if (((uVar1 & 3) == 0) &&
     ((0x28f5c28 < (uVar1 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar1 * 0x40000000) ||
      ((int)uVar1 % 400 == 0)))) {
    lVar5 = *(long *)PTR_DAT_03cf5f38;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar3;
    }
    plVar9 = (long *)(*(long *)(lVar5 + 0xb8) + 8);
  }
  else {
    lVar5 = *(long *)PTR_DAT_03cf5f38;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar3;
    }
    plVar9 = *(long **)(lVar5 + 0xb8);
  }
  lVar5 = *plVar9;
  if (lVar5 != 0) {
    if ((unaff_w19 < *(uint *)(lVar5 + 0x18)) && (uVar2 < *(uint *)(lVar5 + 0x18))) {
      return *(int *)(lVar5 + 0x20 + (ulong)unaff_w19 * 4) -
             *(int *)(lVar5 + 0x20 + (ulong)uVar2 * 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


