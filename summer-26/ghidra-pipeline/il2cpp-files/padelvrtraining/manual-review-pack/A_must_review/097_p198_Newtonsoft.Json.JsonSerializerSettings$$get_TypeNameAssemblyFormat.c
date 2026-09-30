/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TypeNameAssemblyFormat
ENTRY_POINT: 07113fd0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_TypeNameAssemblyFormat(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar3;
  long unaff_x22;
  ulong uVar4;
  int unaff_w23;
  
  while (puVar1 = PTR_DAT_091addc8, unaff_w23 = unaff_w23 + 1, unaff_w23 <= in_w8) {
    FUN_07111080();
    FUN_0711424c();
    FUN_071111c0();
    FUN_0711424c();
    in_w8 = *(int *)(unaff_x22 + 0x18);
  }
  if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar2 = FUN_07110974();
  if (lVar2 != 0) {
    FUN_07110ec0();
    FUN_0711424c();
    lVar2 = FUN_07110974();
    if (lVar2 != 0) {
      FUN_071115b8();
      iVar3 = 1;
      FUN_0711424c();
      do {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar2 = FUN_07110974();
        if (lVar2 == 0) goto LAB_0711417c;
        FUN_07112a98(lVar2,iVar3);
        FUN_0711424c();
        lVar2 = FUN_07110974();
        if (lVar2 == 0) goto LAB_0711417c;
        FUN_07112998(lVar2,iVar3);
        FUN_0711424c();
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0xd);
      iVar3 = 0;
      do {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar2 = FUN_07110974();
        if (lVar2 == 0) goto LAB_0711417c;
        FUN_0711289c(lVar2,iVar3);
        FUN_0711424c();
        lVar2 = FUN_07110974();
        if (lVar2 == 0) goto LAB_0711417c;
        FUN_07112098(lVar2,iVar3);
        FUN_0711424c();
        iVar3 = iVar3 + 1;
      } while (iVar3 != 7);
      lVar2 = FUN_071112a8();
      if (lVar2 != 0) {
        uVar4 = 0;
        do {
          if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar4) {
            FUN_0711424c();
            FUN_0711424c();
            FUN_0711424c();
            FUN_0711424c();
            FUN_0711424c();
            *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
            thunk_FUN_03d1023c();
            return;
          }
          lVar2 = FUN_071112a8();
          if (lVar2 == 0) break;
          if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
          uVar4 = uVar4 + 1;
          FUN_0711424c();
          lVar2 = FUN_071112a8();
        } while (lVar2 != 0);
      }
    }
  }
LAB_0711417c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


