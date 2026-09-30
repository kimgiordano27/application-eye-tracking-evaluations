/*
FUNCTION_NAME: BayatGames.SaveGamePro.Serialization.Formatters.Json.JsonExtensions$$ToJson
ENTRY_POINT: 033d9358
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void BayatGames_SaveGamePro_Serialization_Formatters_Json_JsonExtensions__ToJson
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar7;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar5 + -2) == param_3) {
      lVar3 = param_1 + (long)(*piVar5 + param_4) * 0x10 + 0x138;
      goto LAB_033d9390;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  lVar3 = FUN_02feb5b8();
LAB_033d9390:
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8));
  (**(code **)(lVar3 + 8))();
  FUN_06975d28();
  lVar6 = *unaff_x25;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d9424;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d9424:
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))();
  FUN_06975da8();
  lVar6 = *unaff_x25;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d94b8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d94b8:
  puVar1 = PTR_DAT_06f7cfd8;
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))();
  uVar7 = FUN_06975e28();
  lVar6 = *unaff_x24;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d9554;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d9554:
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))(uVar7);
  FUN_06976124();
  lVar6 = *(long *)puVar1;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d95e8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d95e8:
  puVar2 = PTR_DAT_06f7c4d0;
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))();
  FUN_069760a4();
  lVar6 = *(long *)puVar1;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d9684;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d9684:
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))();
  FUN_068f62b0();
  lVar6 = *(long *)puVar2;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d9718;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d9718:
  puVar1 = PTR_DAT_06f7c4b8;
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))();
  FUN_068fc8bc();
  lVar6 = *(long *)puVar2;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d97b4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d97b4:
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
  (**(code **)(lVar3 + 8))();
  FUN_068fd700();
  lVar6 = *(long *)puVar1;
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_033d9840;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_02feb5b8();
LAB_033d9840:
  lVar3 = thunk_FUN_02fffafc(*(undefined8 *)(lVar3 + 8),lVar6);
                    /* WARNING: Could not recover jumptable at 0x033d987c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}


