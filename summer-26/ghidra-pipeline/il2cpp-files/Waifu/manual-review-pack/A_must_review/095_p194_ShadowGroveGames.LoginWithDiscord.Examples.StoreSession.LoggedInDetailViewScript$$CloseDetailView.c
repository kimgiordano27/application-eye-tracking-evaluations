/*
FUNCTION_NAME: ShadowGroveGames.LoginWithDiscord.Examples.StoreSession.LoggedInDetailViewScript$$CloseDetailView
ENTRY_POINT: 06b91d84
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
ShadowGroveGames_LoginWithDiscord_Examples_StoreSession_LoggedInDetailViewScript__CloseDetailView
          (undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w22;
  long unaff_x24;
  long unaff_x25;
  undefined8 uStack0000000000000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack00000000000000e4;
  undefined4 uStack0000000000000104;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  undefined8 in_stack_00000208;
  
  uStack0000000000000020 = in_stack_000001e8;
  uStack0000000000000018 = in_stack_000001e0;
  lVar3 = *unaff_x20;
  bVar1 = (param_2 & 1) == 0;
  uVar4 = 2;
  if (bVar1) {
    uVar4 = 0;
  }
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uVar8 = 3;
  if (!bVar1) {
    uVar8 = 1;
  }
  if (unaff_w22 == 0) {
    uVar4 = uVar8;
  }
  uStack0000000000000028 = param_1;
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(unaff_x25 + 0x4a0)) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
        goto FUN_06b91e0c;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_0338f71c();
FUN_06b91e0c:
  uStack00000000000000e4 = (undefined4)((ulong)_uStack0000000000000038 >> 0x18);
  pcVar6 = (code *)*puVar2;
  *(undefined4 *)(unaff_x24 + 1) = uStack0000000000000038;
  *(undefined2 *)(unaff_x24 + 9) = in_stack_00000030._4_2_;
  uStack0000000000000104 = uStack0000000000000020;
  *(undefined8 *)(unaff_x24 + 0x1c) = uStack0000000000000018;
  (*pcVar6)();
  if (*(long *)(unaff_x19 + 0xf8) != 0) {
    FUN_07ca6848(*(long *)(unaff_x19 + 0xf8),0,uVar4,in_stack_00000208,0);
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      FUN_07ca6848(*(long *)(unaff_x19 + 0xf8),1,3,in_stack_000001d8,0);
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        FUN_07ca6848(*(long *)(unaff_x19 + 0xf8),2,3,in_stack_000001d0,0);
        return *(undefined8 *)(unaff_x19 + 0xf8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


