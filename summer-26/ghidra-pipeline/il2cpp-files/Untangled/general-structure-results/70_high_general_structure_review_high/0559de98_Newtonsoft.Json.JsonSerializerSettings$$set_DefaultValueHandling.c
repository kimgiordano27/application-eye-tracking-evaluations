/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DefaultValueHandling
ENTRY_POINT: 0559de98
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_DefaultValueHandling(void)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w22;
  int iVar5;
  ulong uVar6;
  
  do {
    FUN_0559c0a0();
    FUN_0559e27c();
    unaff_w22 = unaff_w22 + 1;
  } while (unaff_w22 != 0xe);
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_0559d424();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar5 = 1;
    do {
      FUN_0559c0a0();
      FUN_0559e27c();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
  iVar5 = 0;
  do {
    FUN_0559cb18();
    FUN_0559e27c();
    FUN_0559c314();
    FUN_0559e27c();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  plVar3 = *(long **)(unaff_x19 + 0x78);
  if ((plVar3 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar5 = 1;
      do {
        FUN_0559b2fc();
        FUN_0559e27c();
        FUN_0559b43c();
        FUN_0559e27c();
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(int *)(lVar4 + 0x18));
    }
    puVar1 = PTR_DAT_06d4f330;
    if (*(int *)(*(long *)PTR_DAT_06d4f330 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar4 = FUN_0559abf0();
    if (lVar4 != 0) {
      FUN_0559b13c();
      FUN_0559e27c();
      lVar4 = FUN_0559abf0();
      if (lVar4 != 0) {
        FUN_0559b834();
        iVar5 = 1;
        FUN_0559e27c();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar4 = FUN_0559abf0();
          if (lVar4 == 0) goto LAB_0559e1ac;
          FUN_0559cd14(lVar4,iVar5);
          FUN_0559e27c();
          lVar4 = FUN_0559abf0();
          if (lVar4 == 0) goto LAB_0559e1ac;
          FUN_0559cc14(lVar4,iVar5);
          FUN_0559e27c();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xd);
        iVar5 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar4 = FUN_0559abf0();
          if (lVar4 == 0) goto LAB_0559e1ac;
          FUN_0559cb18(lVar4,iVar5);
          FUN_0559e27c();
          lVar4 = FUN_0559abf0();
          if (lVar4 == 0) goto LAB_0559e1ac;
          FUN_0559c314(lVar4,iVar5);
          FUN_0559e27c();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 7);
        lVar4 = FUN_0559b524();
        if (lVar4 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_02f411dc();
              return;
            }
            lVar4 = FUN_0559b524();
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            uVar6 = uVar6 + 1;
            FUN_0559e27c();
            lVar4 = FUN_0559b524();
          } while (lVar4 != 0);
        }
      }
    }
  }
LAB_0559e1ac:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


