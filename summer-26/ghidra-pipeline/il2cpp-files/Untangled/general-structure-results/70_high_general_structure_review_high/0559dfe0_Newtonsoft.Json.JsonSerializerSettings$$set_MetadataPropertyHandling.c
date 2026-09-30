/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MetadataPropertyHandling
ENTRY_POINT: 0559dfe0
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar3;
  long unaff_x22;
  ulong uVar4;
  int unaff_w23;
  
  while( true ) {
    FUN_0559b43c();
    FUN_0559e27c();
    puVar1 = PTR_DAT_06d4f330;
    unaff_w23 = unaff_w23 + 1;
    if (*(int *)(unaff_x22 + 0x18) < unaff_w23) break;
    FUN_0559b2fc();
    FUN_0559e27c();
  }
  if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar2 = FUN_0559abf0();
  if (lVar2 != 0) {
    FUN_0559b13c();
    FUN_0559e27c();
    lVar2 = FUN_0559abf0();
    if (lVar2 != 0) {
      FUN_0559b834();
      iVar3 = 1;
      FUN_0559e27c();
      do {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        lVar2 = FUN_0559abf0();
        if (lVar2 == 0) goto LAB_0559e1ac;
        FUN_0559cd14(lVar2,iVar3);
        FUN_0559e27c();
        lVar2 = FUN_0559abf0();
        if (lVar2 == 0) goto LAB_0559e1ac;
        FUN_0559cc14(lVar2,iVar3);
        FUN_0559e27c();
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0xd);
      iVar3 = 0;
      do {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        lVar2 = FUN_0559abf0();
        if (lVar2 == 0) goto LAB_0559e1ac;
        FUN_0559cb18(lVar2,iVar3);
        FUN_0559e27c();
        lVar2 = FUN_0559abf0();
        if (lVar2 == 0) goto LAB_0559e1ac;
        FUN_0559c314(lVar2,iVar3);
        FUN_0559e27c();
        iVar3 = iVar3 + 1;
      } while (iVar3 != 7);
      lVar2 = FUN_0559b524();
      if (lVar2 != 0) {
        uVar4 = 0;
        do {
          if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar4) {
            FUN_0559e27c();
            FUN_0559e27c();
            FUN_0559e27c();
            FUN_0559e27c();
            FUN_0559e27c();
            *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
            thunk_FUN_02f411dc();
            return;
          }
          lVar2 = FUN_0559b524();
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          uVar4 = uVar4 + 1;
          FUN_0559e27c();
          lVar2 = FUN_0559b524();
        } while (lVar2 != 0);
      }
    }
  }
LAB_0559e1ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


