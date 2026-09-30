/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnDeserializedCallbacks
ENTRY_POINT: 055f8644
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonContract__get_OnDeserializedCallbacks(void)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int in_w8;
  undefined4 uVar7;
  undefined4 *unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w28;
  undefined1 unaff_w29;
  long in_stack_00000000;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  while( true ) {
    *unaff_x20 = in_w8;
    iVar1 = (int)unaff_x21[2] + 1;
    *(int *)(unaff_x21 + 2) = iVar1;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if ((*(byte *)(unaff_x26 + 0xbf2) & 1) == 0) {
      FUN_02f07e70();
      *(undefined1 *)(unaff_x26 + 0xbf2) = unaff_w29;
    }
    uVar4 = *(uint *)(unaff_x21 + 2);
    if ((int)*(uint *)(unaff_x21 + 1) <= iVar1) break;
    if (*(uint *)(unaff_x21 + 1) <= uVar4) goto LAB_055f8720;
    uVar3 = *(ushort *)(*unaff_x21 + (long)(int)uVar4 * 2);
    *(ushort *)((long)unaff_x21 + 0x14) = uVar3;
    if (9 < uVar3 - 0x30) break;
    in_w8 = (uint)uVar3 + *unaff_x20 * unaff_w28 + -0x30;
  }
  if ((int)(uVar4 - unaff_w24) < 9) {
    if ((int)(uVar4 - unaff_w24) < 3) {
      uVar7 = 1;
    }
    else {
      uVar7 = 2;
    }
    *unaff_x19 = uVar7;
  }
  else {
    *unaff_x19 = 1;
    *unaff_x20 = -1;
  }
  if ((char)unaff_x21[4] != '\0') {
    lVar5 = unaff_x21[2];
    uVar2 = *(undefined2 *)((long)unaff_x21 + 0x14);
    *(uint *)(unaff_x21 + 2) = unaff_w24;
    if (*(uint *)(unaff_x21 + 1) <= unaff_w24) {
LAB_055f8720:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined2 *)((long)unaff_x21 + 0x14) = *(undefined2 *)(*unaff_x21 + in_stack_00000000 * 2);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar6 = FUN_0559f2f4();
    if ((uVar6 & 1) == 0) {
      *(int *)(unaff_x21 + 2) = (int)lVar5;
      *(undefined2 *)((long)unaff_x21 + 0x14) = uVar2;
    }
    else {
      *unaff_x19 = uStack000000000000000c;
      *unaff_x20 = iStack0000000000000008;
    }
  }
  return;
}


