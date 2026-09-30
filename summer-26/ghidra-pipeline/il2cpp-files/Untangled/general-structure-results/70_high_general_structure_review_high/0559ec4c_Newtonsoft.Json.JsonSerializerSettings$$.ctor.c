/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 0559ec4c
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x22;
  uint uVar8;
  undefined8 *unaff_x23;
  
  do {
    uVar3 = FUN_0559c314();
    FUN_05465414(*unaff_x22,uVar3,*unaff_x23,0);
    FUN_0559e27c();
    puVar2 = PTR_DAT_06d4f330;
    unaff_w21 = unaff_w21 + 1;
  } while (unaff_w21 != 7);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar4 = FUN_0559ef2c(uVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar5 = FUN_0559d6cc();
  if ((lVar5 != 0) && (plVar6 = *(long **)(lVar5 + 0x78), plVar6 != (long *)0x0)) {
    uVar8 = 0;
    do {
      lVar7 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (lVar7 == 0) break;
      iVar1 = uVar8 + 1;
      if (*(int *)(lVar7 + 0x18) < iVar1) {
        return;
      }
      FUN_0559b2fc(lVar5,iVar1);
      FUN_0559e27c();
      FUN_0559b43c(lVar5,iVar1);
      FUN_0559e27c();
      lVar7 = FUN_0559b524(lVar5);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      FUN_0559e27c();
      plVar6 = *(long **)(lVar5 + 0x78);
      uVar8 = uVar8 + 1;
    } while (plVar6 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


