/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteValue
ENTRY_POINT: 05a8c1ec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__WriteValue(void)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar6;
  long *unaff_x22;
  long unaff_x23;
  char cStack000000000000000c;
  
  FUN_05a8c868();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (*(char *)(unaff_x23 + 0xf35) == '\0') {
    FUN_02fe925c(PTR_DAT_06faa438);
    *(undefined1 *)(unaff_x23 + 0xf35) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *unaff_x22;
  }
  if ((((**(char **)(lVar3 + 0xb8) == '\0') &&
       (uVar4 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06faa6a8), (uVar4 & 1) != 0)) &&
      (uVar4 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06faa6b8), (uVar4 & 1) != 0)) &&
     (uVar4 = System_Convert__ToUInt64(*(undefined8 *)PTR_DAT_06faa698), (uVar4 & 1) != 0)) {
    FUN_05a8a3f4();
    FUN_05a8c868();
  }
  FUN_05a8983c();
  FUN_05a8c868();
  FUN_05a89f34();
  FUN_05a8c868();
  cStack000000000000000c = '\0';
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (*(char *)(unaff_x23 + 0xf35) == '\0') {
    FUN_02fe925c(PTR_DAT_06faa438);
    *(undefined1 *)(unaff_x23 + 0xf35) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    FUN_05a8cb8c();
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (*(char *)(unaff_x23 + 0xf35) == '\0') {
    FUN_02fe925c(PTR_DAT_06faa438);
    *(undefined1 *)(unaff_x23 + 0xf35) = 1;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar3 = *unaff_x22;
  }
  if (**(char **)(lVar3 + 0xb8) == '\0') {
    lVar3 = FUN_05a88a38();
    if (lVar3 == 0) goto LAB_05a8c798;
    FUN_05971348(lVar3,*(undefined8 *)PTR_DAT_06faa6a0,0);
  }
  FUN_05a8c868();
  if (cStack000000000000000c == '\0') {
    FUN_05a89c8c();
    FUN_05a8c868();
  }
  FUN_05a8d46c();
  iVar6 = 1;
  do {
    FUN_05a8b314();
    FUN_05a8c868();
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0xe);
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar4 = Newtonsoft_Json_JsonWriter__WriteValue();
    if ((uVar4 & 1) != 0) goto LAB_05a8c480;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) != 0) {
LAB_05a8c480:
    iVar6 = 1;
    do {
      FUN_05a8a7a0();
      FUN_05a8c868();
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xe);
  }
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = Newtonsoft_Json_JsonWriter__WriteValue();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar6 = 1;
    do {
      FUN_05a8a7a0();
      FUN_05a8c868();
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xe);
  }
  iVar6 = 0;
  do {
    FUN_05a8b218();
    FUN_05a8c868();
    FUN_05a8aa14();
    FUN_05a8c868();
    iVar6 = iVar6 + 1;
  } while (iVar6 != 7);
  plVar5 = *(long **)(unaff_x19 + 0x78);
  if ((plVar5 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)), lVar3 != 0))
  {
    if (0 < *(int *)(lVar3 + 0x18)) {
      iVar6 = 1;
      do {
        FUN_05a899fc();
        FUN_05a8c868();
        Newtonsoft_Json_JsonWriter__BuildStateArray();
        FUN_05a8c868();
        iVar6 = iVar6 + 1;
      } while (iVar6 <= *(int *)(lVar3 + 0x18));
    }
    puVar1 = PTR_DAT_06faa590;
    if (*(int *)(*(long *)PTR_DAT_06faa590 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar3 = FUN_05a892f0();
    if (lVar3 != 0) {
      FUN_05a8983c();
      FUN_05a8c868();
      lVar3 = FUN_05a892f0();
      if (lVar3 != 0) {
        FUN_05a89f34();
        iVar6 = 1;
        FUN_05a8c868();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar3 = FUN_05a892f0();
          if (lVar3 == 0) goto LAB_05a8c798;
          FUN_05a8b414(lVar3,iVar6);
          FUN_05a8c868();
          lVar3 = FUN_05a892f0();
          if (lVar3 == 0) goto LAB_05a8c798;
          FUN_05a8b314(lVar3,iVar6);
          FUN_05a8c868();
          iVar6 = iVar6 + 1;
        } while (iVar6 != 0xd);
        iVar6 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar3 = FUN_05a892f0();
          if (lVar3 == 0) goto LAB_05a8c798;
          FUN_05a8b218(lVar3,iVar6);
          FUN_05a8c868();
          lVar3 = FUN_05a892f0();
          if (lVar3 == 0) goto LAB_05a8c798;
          FUN_05a8aa14(lVar3,iVar6);
          FUN_05a8c868();
          iVar6 = iVar6 + 1;
        } while (iVar6 != 7);
        lVar3 = FUN_05a89c24();
        if (lVar3 != 0) {
          uVar4 = 0;
          do {
            if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) {
              FUN_05a8c868();
              FUN_05a8c868();
              FUN_05a8c868();
              FUN_05a8c868();
              FUN_05a8c868();
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_03048534(unaff_x19 + 0x158);
              return;
            }
            lVar3 = FUN_05a89c24();
            if (lVar3 == 0) break;
            if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            uVar4 = uVar4 + 1;
            FUN_05a8c868();
            lVar3 = FUN_05a89c24();
          } while (lVar3 != 0);
        }
      }
    }
  }
LAB_05a8c798:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


