/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
ENTRY_POINT: 07113afc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetMatchingConverter(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar7;
  long *unaff_x22;
  long unaff_x23;
  
  if (*(char *)(unaff_x23 + 0xbf7) == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    *(undefined1 *)(unaff_x23 + 0xbf7) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    lVar3 = FUN_0710ffec();
    if (lVar3 == 0) goto LAB_0711417c;
    FUN_06fd15d4(lVar3,*(undefined8 *)PTR_DAT_09208510,0);
  }
  lVar3 = FUN_07111a78();
  if (lVar3 == 0) goto LAB_0711417c;
  uVar4 = FUN_06fd67fc(lVar3,0);
  uVar5 = FUN_06fd1ba0(*(undefined8 *)PTR_DAT_091a5888,uVar4,0);
  if ((uVar5 & 1) != 0) {
    FUN_0711424c();
  }
  uVar5 = FUN_06fd1ba0(*(undefined8 *)PTR_DAT_091a5478,uVar4,0);
  if ((uVar5 & 1) != 0) {
    FUN_0711424c();
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (*(char *)(unaff_x23 + 0xbf7) == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    *(undefined1 *)(unaff_x23 + 0xbf7) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *unaff_x22;
  }
  if ((((**(char **)(lVar3 + 0xb8) == '\0') &&
       (uVar5 = FUN_06fd1ba0(*(undefined8 *)PTR_DAT_0920ff08,uVar4,0), (uVar5 & 1) != 0)) &&
      (uVar5 = FUN_06fd1ba0(*(undefined8 *)PTR_DAT_0920ff10,uVar4,0), (uVar5 & 1) != 0)) &&
     (uVar5 = FUN_06fd1ba0(*(undefined8 *)PTR_DAT_0920fef8,uVar4,0), (uVar5 & 1) != 0)) {
    FUN_07111a78();
    FUN_0711424c();
  }
  FUN_07110ec0();
  FUN_0711424c();
  FUN_071115b8();
  FUN_0711424c();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (*(char *)(unaff_x23 + 0xbf7) == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    *(undefined1 *)(unaff_x23 + 0xbf7) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    FUN_07114574();
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  if (*(char *)(unaff_x23 + 0xbf7) == '\0') {
    FUN_03d2d2b0(PTR_DAT_0920fc68);
    *(undefined1 *)(unaff_x23 + 0xbf7) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    lVar3 = FUN_0710ffec();
    if (lVar3 == 0) goto LAB_0711417c;
    FUN_06fd15d4(lVar3,*(undefined8 *)PTR_DAT_0920ff00,0);
  }
  FUN_0711424c();
  FUN_07111310();
  FUN_0711424c();
  FUN_07114e4c();
  iVar7 = 1;
  do {
    FUN_07112998();
    FUN_0711424c();
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar5 = FUN_07113290();
    if ((uVar5 & 1) != 0) goto LAB_07113e64;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_07113e64:
    iVar7 = 1;
    do {
      FUN_07111e24();
      FUN_0711424c();
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = FUN_07113290();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar7 = 1;
    do {
      FUN_07111e24();
      FUN_0711424c();
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0xe);
  }
  iVar7 = 0;
  do {
    FUN_0711289c();
    FUN_0711424c();
    FUN_07112098();
    FUN_0711424c();
    iVar7 = iVar7 + 1;
  } while (iVar7 != 7);
  plVar6 = *(long **)(unaff_x19 + 0x78);
  if ((plVar6 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar7 = 1;
      do {
        FUN_07111080();
        FUN_0711424c();
        FUN_071111c0();
        FUN_0711424c();
        iVar7 = iVar7 + 1;
      } while (iVar7 <= *(int *)(lVar3 + 0x18));
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
        iVar7 = 1;
        FUN_0711424c();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar3 = FUN_07110974();
          if (lVar3 == 0) goto LAB_0711417c;
          FUN_07112a98(lVar3,iVar7);
          FUN_0711424c();
          lVar3 = FUN_07110974();
          if (lVar3 == 0) goto LAB_0711417c;
          FUN_07112998(lVar3,iVar7);
          FUN_0711424c();
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0xd);
        iVar7 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_03db619c();
          }
          lVar3 = FUN_07110974();
          if (lVar3 == 0) goto LAB_0711417c;
          FUN_0711289c(lVar3,iVar7);
          FUN_0711424c();
          lVar3 = FUN_07110974();
          if (lVar3 == 0) goto LAB_0711417c;
          FUN_07112098(lVar3,iVar7);
          FUN_0711424c();
          iVar7 = iVar7 + 1;
        } while (iVar7 != 7);
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
              thunk_FUN_03d1023c(unaff_x19 + 0x158);
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
LAB_0711417c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


