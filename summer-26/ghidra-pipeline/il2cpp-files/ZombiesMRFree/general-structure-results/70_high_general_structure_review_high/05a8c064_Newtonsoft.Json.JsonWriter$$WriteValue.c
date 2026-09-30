/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteValue
ENTRY_POINT: 05a8c064
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long Newtonsoft_Json_JsonWriter__WriteValue(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  
  FUN_02fe925c(PTR_DAT_06f773c8);
  FUN_02fe925c(PTR_DAT_06fa3608);
  FUN_02fe925c(PTR_DAT_06faa6b0);
  FUN_02fe925c(PTR_DAT_06f6d6b8);
  FUN_02fe925c(PTR_DAT_06f80a40);
  FUN_02fe925c(PTR_DAT_06faa6b8);
  FUN_02fe925c(PTR_DAT_06faa6c0);
  FUN_02fe925c(PTR_DAT_06f76b68);
  FUN_02fe925c(PTR_DAT_06f6dd20);
  *(undefined1 *)(unaff_x20 + 0xf2b) = 1;
  if (*(long *)(unaff_x19 + 0x158) != 0) {
    return *(long *)(unaff_x19 + 0x158);
  }
  lVar3 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06faa690,199);
  puVar1 = PTR_DAT_06faa438;
  if (*(int *)(*(long *)PTR_DAT_06faa438 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)PTR_DAT_06faa438);
  }
  if (DAT_07396f35 == '\0') {
    FUN_02fe925c(PTR_DAT_06faa438);
    DAT_07396f35 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar4 = FUN_05a88a38();
    if (lVar4 == 0) goto LAB_05a8c798;
    FUN_05971348(lVar4,*(undefined8 *)PTR_DAT_06fa3608,0);
  }
  lVar4 = FUN_05a8a3f4();
  if (lVar4 == 0) goto LAB_05a8c798;
  uVar5 = FUN_05975e5c(lVar4,0);
  uVar6 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06f76b68,uVar5,0);
  if ((uVar6 & 1) != 0) {
    FUN_05a8c868();
  }
  uVar6 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06f6dd20,uVar5,0);
  if ((uVar6 & 1) != 0) {
    FUN_05a8c868();
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (DAT_07396f35 == '\0') {
    FUN_02fe925c(PTR_DAT_06faa438);
    DAT_07396f35 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar1;
  }
  if ((((**(char **)(lVar4 + 0xb8) == '\0') &&
       (uVar6 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06faa6a8,uVar5,0), (uVar6 & 1) != 0)
       ) && (uVar6 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06faa6b8,uVar5,0),
            (uVar6 & 1) != 0)) &&
     (uVar6 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06faa698,uVar5,0), (uVar6 & 1) != 0))
  {
    FUN_05a8a3f4();
    FUN_05a8c868();
  }
  FUN_05a8983c();
  FUN_05a8c868();
  FUN_05a89f34();
  FUN_05a8c868();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (DAT_07396f35 == '\0') {
    FUN_02fe925c(PTR_DAT_06faa438);
    DAT_07396f35 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    FUN_05a8cb8c();
    lVar4 = *(long *)puVar1;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (DAT_07396f35 == '\0') {
    FUN_02fe925c(PTR_DAT_06faa438);
    DAT_07396f35 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar4 = *(long *)puVar1;
  }
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar4 = FUN_05a88a38();
    if (lVar4 == 0) goto LAB_05a8c798;
    FUN_05971348(lVar4,*(undefined8 *)PTR_DAT_06faa6a0,0);
  }
  FUN_05a8c868();
  FUN_05a89c8c();
  FUN_05a8c868();
  FUN_05a8d46c();
  iVar8 = 1;
  do {
    FUN_05a8b314();
    FUN_05a8c868();
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = Newtonsoft_Json_JsonWriter__WriteValue();
    if ((uVar6 & 1) != 0) goto LAB_05a8c480;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_05a8c480:
    iVar8 = 1;
    do {
      FUN_05a8a7a0();
      FUN_05a8c868();
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = Newtonsoft_Json_JsonWriter__WriteValue();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar8 = 1;
    do {
      FUN_05a8a7a0();
      FUN_05a8c868();
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0xe);
  }
  iVar8 = 0;
  do {
    FUN_05a8b218();
    FUN_05a8c868();
    FUN_05a8aa14();
    FUN_05a8c868();
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  plVar7 = *(long **)(unaff_x19 + 0x78);
  if ((plVar7 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar8 = 1;
      do {
        FUN_05a899fc();
        FUN_05a8c868();
        Newtonsoft_Json_JsonWriter__BuildStateArray();
        FUN_05a8c868();
        iVar8 = iVar8 + 1;
      } while (iVar8 <= *(int *)(lVar4 + 0x18));
    }
    puVar1 = PTR_DAT_06faa590;
    if (*(int *)(*(long *)PTR_DAT_06faa590 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar4 = FUN_05a892f0();
    if (lVar4 != 0) {
      FUN_05a8983c();
      FUN_05a8c868();
      lVar4 = FUN_05a892f0();
      if (lVar4 != 0) {
        FUN_05a89f34();
        iVar8 = 1;
        FUN_05a8c868();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8b414(lVar4,iVar8);
          FUN_05a8c868();
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8b314(lVar4,iVar8);
          FUN_05a8c868();
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0xd);
        iVar8 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8b218(lVar4,iVar8);
          FUN_05a8c868();
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8aa14(lVar4,iVar8);
          FUN_05a8c868();
          iVar8 = iVar8 + 1;
        } while (iVar8 != 7);
        lVar4 = FUN_05a89c24();
        if (lVar4 != 0) {
          uVar6 = 0;
          do {
            if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar6) {
              FUN_05a8c868();
              FUN_05a8c868();
              FUN_05a8c868();
              FUN_05a8c868();
              FUN_05a8c868();
              *(long *)(unaff_x19 + 0x158) = lVar3;
              thunk_FUN_03048534(unaff_x19 + 0x158,lVar3);
              return lVar3;
            }
            lVar4 = FUN_05a89c24();
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            uVar6 = uVar6 + 1;
            FUN_05a8c868();
            lVar4 = FUN_05a89c24();
          } while (lVar4 != 0);
        }
      }
    }
  }
LAB_05a8c798:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


