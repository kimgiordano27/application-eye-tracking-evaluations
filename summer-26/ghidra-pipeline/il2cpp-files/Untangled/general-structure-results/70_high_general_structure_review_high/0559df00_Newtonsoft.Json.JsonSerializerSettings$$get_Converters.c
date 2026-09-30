/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Converters
ENTRY_POINT: 0559df00
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Converters(void)

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
    FUN_0559c0a0();
    FUN_0559e27c();
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 != 0xe);
  iVar4 = 0;
  do {
    FUN_0559cb18();
    FUN_0559e27c();
    FUN_0559c314();
    FUN_0559e27c();
    iVar4 = iVar4 + 1;
  } while (iVar4 != 7);
  plVar2 = *(long **)(unaff_x19 + 0x78);
  if ((plVar2 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar4 = 1;
      do {
        FUN_0559b2fc();
        FUN_0559e27c();
        FUN_0559b43c();
        FUN_0559e27c();
        iVar4 = iVar4 + 1;
      } while (iVar4 <= *(int *)(lVar3 + 0x18));
    }
    puVar1 = PTR_DAT_06d4f330;
    if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar3 = FUN_0559abf0();
    if (lVar3 != 0) {
      FUN_0559b13c();
      FUN_0559e27c();
      lVar3 = FUN_0559abf0();
      if (lVar3 != 0) {
        FUN_0559b834();
        iVar4 = 1;
        FUN_0559e27c();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559cd14(lVar3,iVar4);
          FUN_0559e27c();
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559cc14(lVar3,iVar4);
          FUN_0559e27c();
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0xd);
        iVar4 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559cb18(lVar3,iVar4);
          FUN_0559e27c();
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559c314(lVar3,iVar4);
          FUN_0559e27c();
          iVar4 = iVar4 + 1;
        } while (iVar4 != 7);
        lVar3 = FUN_0559b524();
        if (lVar3 != 0) {
          uVar5 = 0;
          do {
            if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_02f411dc();
              return;
            }
            lVar3 = FUN_0559b524();
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            uVar5 = uVar5 + 1;
            FUN_0559e27c();
            lVar3 = FUN_0559b524();
          } while (lVar3 != 0);
        }
      }
    }
  }
LAB_0559e1ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


