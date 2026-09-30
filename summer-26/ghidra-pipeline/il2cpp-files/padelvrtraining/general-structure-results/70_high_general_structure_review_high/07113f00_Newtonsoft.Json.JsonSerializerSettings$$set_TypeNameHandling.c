/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 07113f00
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w22;
  int iVar4;
  ulong uVar5;
  
  do {
    FUN_0711289c();
    FUN_0711424c();
    FUN_07112098();
    FUN_0711424c();
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 != 7);
  plVar2 = *(long **)(unaff_x19 + 0x78);
  if (plVar2 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar4 = 1;
        do {
          FUN_07111080();
          FUN_0711424c();
          FUN_071111c0();
          FUN_0711424c();
          iVar4 = iVar4 + 1;
        } while (iVar4 <= *(int *)(lVar3 + 0x18));
      }
      puVar1 = PTR_DAT_091addc8;
      if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar3 = FUN_07110974();
      if (lVar3 != 0) {
        FUN_07110ec0();
        FUN_0711424c();
        lVar3 = FUN_07110974();
        if (lVar3 != 0) {
          FUN_071115b8();
          iVar4 = 1;
          FUN_0711424c();
          do {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            lVar3 = FUN_07110974();
            if (lVar3 == 0) goto LAB_0711417c;
            FUN_07112a98(lVar3,iVar4);
            FUN_0711424c();
            lVar3 = FUN_07110974();
            if (lVar3 == 0) goto LAB_0711417c;
            FUN_07112998(lVar3,iVar4);
            FUN_0711424c();
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0xd);
          iVar4 = 0;
          do {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_03db619c();
            }
            lVar3 = FUN_07110974();
            if (lVar3 == 0) goto LAB_0711417c;
            FUN_0711289c(lVar3,iVar4);
            FUN_0711424c();
            lVar3 = FUN_07110974();
            if (lVar3 == 0) goto LAB_0711417c;
            FUN_07112098(lVar3,iVar4);
            FUN_0711424c();
            iVar4 = iVar4 + 1;
          } while (iVar4 != 7);
          lVar3 = FUN_071112a8();
          if (lVar3 != 0) {
            uVar5 = 0;
            do {
              if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
                FUN_0711424c();
                FUN_0711424c();
                FUN_0711424c();
                FUN_0711424c();
                FUN_0711424c();
                *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
                thunk_FUN_03d1023c();
                return;
              }
              lVar3 = FUN_071112a8();
              if (lVar3 == 0) break;
              if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_03d2d550();
              }
              uVar5 = uVar5 + 1;
              FUN_0711424c();
              lVar3 = FUN_071112a8();
            } while (lVar3 != 0);
          }
        }
      }
    }
  }
LAB_0711417c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


