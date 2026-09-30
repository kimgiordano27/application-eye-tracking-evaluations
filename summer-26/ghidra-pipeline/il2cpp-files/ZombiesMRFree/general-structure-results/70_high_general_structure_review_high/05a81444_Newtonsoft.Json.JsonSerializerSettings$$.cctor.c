/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 05a81444
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x19;
  int iVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x24;
  uint uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xb28));
  *(undefined1 *)(unaff_x20 + 0xebf) = 1;
  lVar10 = *(long *)(unaff_x19 + 0x2d8);
  lVar5 = *(long *)(unaff_x19 + 0x2c0);
  lVar6 = *unaff_x24;
  uVar9 = (uint)lVar10;
  iVar4 = *(uint *)(unaff_x19 + 0x2c8) - uVar9;
  if (*(uint *)(unaff_x19 + 0x2c8) < uVar9) {
    FUN_05b0fafc(0);
  }
  puVar2 = PTR_DAT_06f9d050;
  if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x2e8);
  lVar5 = lVar5 + ((lVar10 << 0x20) >> 0x1f);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f6dce0;
  uVar3 = FUN_05a3d9f8(uVar7,uVar8,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar3 = FUN_05a3da78(lVar5,iVar4,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = *unaff_x24;
      if (iVar4 == 0) {
        FUN_05b0fafc(0);
      }
      if ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + 2;
    }
  }
  uVar7 = *(undefined8 *)(unaff_x19 + 0x2e0);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x2e8);
  auVar11 = FUN_05a81244();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_05a7eb70(uVar7,uVar8,lVar5,iVar4,auVar11._0_8_,auVar11._8_8_);
  return;
}


