/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ReferenceLoopHandling
ENTRY_POINT: 0559dcf8
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ReferenceLoopHandling(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar5;
  long *unaff_x22;
  ulong uVar6;
  long unaff_x23;
  char cStack000000000000000c;
  
  FUN_0559e27c();
  cStack000000000000000c = '\0';
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (*(char *)(unaff_x23 + 0x924) == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    *(undefined1 *)(unaff_x23 + 0x924) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    FUN_0559e5a0();
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (*(char *)(unaff_x23 + 0x924) == '\0') {
    FUN_02f07e70(PTR_DAT_06d4f1e0);
    *(undefined1 *)(unaff_x23 + 0x924) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    lVar3 = FUN_0559a338();
    if (lVar3 == 0) goto LAB_0559e1ac;
    FUN_05464898(lVar3,*(undefined8 *)PTR_DAT_06d4f450,0);
  }
  FUN_0559e27c();
  if (cStack000000000000000c == '\0') {
    FUN_0559b58c();
    FUN_0559e27c();
  }
  FUN_0559ee80();
  iVar5 = 1;
  do {
    FUN_0559cc14();
    FUN_0559e27c();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = FUN_0559d424();
    if ((uVar6 & 1) != 0) goto LAB_0559de94;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_0559de94:
    iVar5 = 1;
    do {
      FUN_0559c0a0();
      FUN_0559e27c();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
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
  plVar4 = *(long **)(unaff_x19 + 0x78);
  if ((plVar4 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar5 = 1;
      do {
        FUN_0559b2fc();
        FUN_0559e27c();
        FUN_0559b43c();
        FUN_0559e27c();
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(int *)(lVar3 + 0x18));
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
        iVar5 = 1;
        FUN_0559e27c();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559cd14(lVar3,iVar5);
          FUN_0559e27c();
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559cc14(lVar3,iVar5);
          FUN_0559e27c();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xd);
        iVar5 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559cb18(lVar3,iVar5);
          FUN_0559e27c();
          lVar3 = FUN_0559abf0();
          if (lVar3 == 0) goto LAB_0559e1ac;
          FUN_0559c314(lVar3,iVar5);
          FUN_0559e27c();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 7);
        lVar3 = FUN_0559b524();
        if (lVar3 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar6) {
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              FUN_0559e27c();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_02f411dc(unaff_x19 + 0x158);
              return;
            }
            lVar3 = FUN_0559b524();
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c8();
            }
            uVar6 = uVar6 + 1;
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


