/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$add_Error
ENTRY_POINT: 02707694
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__add_Error(void)

{
  int iVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_w8;
  long *plVar6;
  long lVar7;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  
  if (in_w8 % 400 == 0) {
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *unaff_x24;
    }
    plVar6 = (long *)(*(long *)(lVar3 + 0xb8) + 8);
  }
  else {
    lVar3 = *unaff_x24;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar3 = *unaff_x24;
    }
    plVar6 = *(long **)(lVar3 + 0xb8);
  }
  if (0 < unaff_w19) {
    lVar3 = *plVar6;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((*(uint *)(lVar3 + 0x18) <= unaff_w20) || (*(uint *)(lVar3 + 0x18) <= unaff_w23)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    iVar1 = *(int *)(lVar3 + 0x20 + (ulong)unaff_w23 * 4);
    if (unaff_w19 <= *(int *)(lVar3 + 0x20 + (ulong)unaff_w20 * 4) - iVar1) {
      sVar2 = (short)unaff_w22;
      lVar7 = (long)(int)sVar2 * -0x51eb851f;
      lVar3 = (long)(int)sVar2 * 0x51eb851f;
      return (long)(unaff_w19 + unaff_w22 * 0x16d +
                    ((int)(short)(sVar2 + ((ushort)(sVar2 >> 0xf) >> 0xd & 3)) >> 2) +
                    (int)(short)((short)(uint)((ulong)lVar7 >> 0x25) - (short)(lVar7 >> 0x3f)) +
                    (int)(short)((short)(uint)((ulong)lVar3 >> 0x27) - (short)(lVar3 >> 0x3f)) +
                    iVar1 + -1);
    }
  }
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cf7f00);
  uVar4 = FUN_027b3d94(uVar4,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
  uVar5 = thunk_FUN_01a89e68();
  FUN_026ade84(uVar5,0,uVar4,0);
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cf7f78);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar5,uVar4);
}


