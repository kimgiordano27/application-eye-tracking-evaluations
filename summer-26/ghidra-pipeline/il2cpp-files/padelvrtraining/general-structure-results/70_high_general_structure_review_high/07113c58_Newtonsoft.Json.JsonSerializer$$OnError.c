/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$OnError
ENTRY_POINT: 07113c58
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__OnError(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar6;
  long *unaff_x22;
  long unaff_x23;
  char cStack000000000000000c;
  
  uVar3 = FUN_06fd1ba0();
  if (((uVar3 & 1) != 0) &&
     (uVar3 = FUN_06fd1ba0(*(undefined8 *)PTR_DAT_0920fef8), (uVar3 & 1) != 0)) {
    FUN_07111a78();
    FUN_0711424c();
  }
  FUN_07110ec0();
  FUN_0711424c();
  FUN_071115b8();
  FUN_0711424c();
  cStack000000000000000c = '\0';
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (*(char *)(unaff_x23 + 0xbf7) == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    *(undefined1 *)(unaff_x23 + 0xbf7) = 1;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar4 = *unaff_x22;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    FUN_07114574();
    lVar4 = *unaff_x22;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (*(char *)(unaff_x23 + 0xbf7) == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    *(undefined1 *)(unaff_x23 + 0xbf7) = 1;
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar4 = *unaff_x22;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar4 = FUN_0710ffec();
    if (lVar4 == 0) goto LAB_0711417c;
    FUN_06fd15d4(lVar4,*(undefined8 *)PTR_DAT_0920ff00,0);
  }
  FUN_0711424c();
  if (cStack000000000000000c == '\0') {
    FUN_07111310();
    FUN_0711424c();
  }
  FUN_07114e4c();
  iVar6 = 1;
  do {
    FUN_07112998();
    FUN_0711424c();
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar3 = FUN_07113290();
    if ((uVar3 & 1) != 0) goto LAB_07113e64;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_07113e64:
    iVar6 = 1;
    do {
      FUN_07111e24();
      FUN_0711424c();
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_07113290();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar6 = 1;
    do {
      FUN_07111e24();
      FUN_0711424c();
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xe);
  }
  iVar6 = 0;
  do {
    FUN_0711289c();
    FUN_0711424c();
    FUN_07112098();
    FUN_0711424c();
    iVar6 = iVar6 + 1;
  } while (iVar6 != 7);
  plVar5 = *(long **)(unaff_x19 + 0x78);
  if ((plVar5 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar6 = 1;
      do {
        FUN_07111080();
        FUN_0711424c();
        FUN_071111c0();
        FUN_0711424c();
        iVar6 = iVar6 + 1;
      } while (iVar6 <= *(int *)(lVar4 + 0x18));
    }
    puVar1 = PTR_DAT_091addc8;
    if (*(int *)(*(long *)PTR_DAT_091addc8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar4 = FUN_07110974();
    if (lVar4 != 0) {
      FUN_07110ec0();
      FUN_0711424c();
      lVar4 = FUN_07110974();
      if (lVar4 != 0) {
        FUN_071115b8();
        iVar6 = 1;
        FUN_0711424c();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_07112a98(lVar4,iVar6);
          FUN_0711424c();
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_07112998(lVar4,iVar6);
          FUN_0711424c();
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0xd);
        iVar6 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_0711289c(lVar4,iVar6);
          FUN_0711424c();
          lVar4 = FUN_07110974();
          if (lVar4 == 0) goto LAB_0711417c;
          FUN_07112098(lVar4,iVar6);
          FUN_0711424c();
          iVar6 = iVar6 + 1;
        } while (iVar6 != 7);
        lVar4 = FUN_071112a8();
        if (lVar4 != 0) {
          uVar3 = 0;
          do {
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar3) {
              FUN_0711424c();
              FUN_0711424c();
              FUN_0711424c();
              FUN_0711424c();
              FUN_0711424c();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_03d1023c(unaff_x19 + 0x158);
              return;
            }
            lVar4 = FUN_071112a8();
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            uVar3 = uVar3 + 1;
            FUN_0711424c();
            lVar4 = FUN_071112a8();
          } while (lVar4 != 0);
        }
      }
    }
  }
LAB_0711417c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


