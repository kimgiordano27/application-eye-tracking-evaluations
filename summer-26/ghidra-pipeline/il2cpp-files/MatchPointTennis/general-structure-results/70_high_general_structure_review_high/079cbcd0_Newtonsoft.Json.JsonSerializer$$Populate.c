/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Populate
ENTRY_POINT: 079cbcd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Populate(ulong param_1,long param_2,long param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long unaff_x20;
  byte unaff_w22;
  undefined8 uVar12;
  ushort uStack000000000000002c;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f424e0);
    *(undefined1 *)(unaff_x20 + 0xcfa) = 1;
  }
  uStack000000000000002c = 0;
  FUN_07a80df4(param_2,0);
  puVar6 = PTR_DAT_09f424e0;
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + 0xb0) = 1;
    *(byte *)(param_2 + 0x10) = unaff_w22 & 1;
    *(byte *)(param_2 + 0x28) = param_4 & 1;
    uVar9 = thunk_FUN_04457f54(param_2,0);
    puVar5 = PTR_DAT_09f1e5b8;
    uVar12 = *(undefined8 *)puVar6;
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(PTR_DAT_09f1e5b8 + 0xe0));
    }
    uVar12 = FUN_07a4ce38(uVar12,0);
    bVar7 = FUN_07a56f5c(uVar9,uVar12,0);
    *(byte *)(param_2 + 200) = bVar7 & 1;
    if (*(int *)(param_3 + 0x10) == 0) {
      uVar9 = FUN_079ba290(0);
      *(undefined8 *)(param_2 + 0xc0) = uVar9;
      thunk_FUN_044bb4b4();
      FUN_079cb844(param_2,unaff_w22 & 1);
    }
    else {
      uVar9 = FUN_078b9094(param_3,0);
      uVar10 = FUN_079cbef4(param_2,uVar9);
      if ((uVar10 & 1) == 0) {
        thunk_FUN_044adef4(PTR_DAT_09f21428);
        FUN_03db7f50();
        uVar12 = FUN_079cbf94(param_3);
        goto LAB_079cbedc;
      }
      puVar11 = *(undefined4 **)(param_2 + 0x90);
      uVar9 = *(undefined8 *)(param_2 + 0x48);
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      uVar1 = *puVar11;
      uVar2 = puVar11[3];
      uVar4 = puVar11[4];
      uVar8 = FUN_079cb134(param_2);
      uStack000000000000002c = (ushort)((uint)uVar4 >> 8) & 0xff;
      uVar4 = *(undefined4 *)(param_2 + 0x20);
      uVar12 = *(undefined8 *)(param_2 + 0x68);
      if (*(int *)(*(long *)(puVar5 + 0x88) + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)(puVar5 + 0x88));
      }
      FUN_079932d0(&stack0x0000002c,0);
      uVar9 = FUN_079be388(uVar9,param_4 & 1,uVar3,uVar8,uVar4,uVar12,uVar1,uVar2);
      *(undefined8 *)(param_2 + 0xc0) = uVar9;
      thunk_FUN_044bb4b4((undefined8 *)(param_2 + 0xc0),uVar9);
    }
    return;
  }
  thunk_FUN_044adef4(PTR_DAT_09f251e0);
  uVar12 = thunk_FUN_0448520c();
  uVar9 = thunk_FUN_044adef4(PTR_DAT_09f22170);
  FUN_07996cc8(uVar12,uVar9,0);
LAB_079cbedc:
  uVar9 = thunk_FUN_044adef4(PTR_DAT_09f424e8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar12,uVar9);
}


