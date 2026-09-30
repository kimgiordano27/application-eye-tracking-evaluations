/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteValue
ENTRY_POINT: 05a8c510
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__WriteValue(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w22;
  int iVar4;
  ulong uVar5;
  
  for (; unaff_w22 != 0xe; unaff_w22 = unaff_w22 + 1) {
    FUN_05a8a7a0();
    FUN_05a8c868();
  }
  iVar4 = 0;
  do {
    FUN_05a8b218();
    FUN_05a8c868();
    FUN_05a8aa14();
    FUN_05a8c868();
    iVar4 = iVar4 + 1;
  } while (iVar4 != 7);
  plVar2 = *(long **)(unaff_x19 + 0x78);
  if (plVar2 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    if (lVar3 != 0) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar4 = 1;
        do {
          FUN_05a899fc();
          FUN_05a8c868();
          Newtonsoft_Json_JsonWriter__BuildStateArray();
          FUN_05a8c868();
          iVar4 = iVar4 + 1;
        } while (iVar4 <= *(int *)(lVar3 + 0x18));
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
          iVar4 = 1;
          FUN_05a8c868();
          do {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            lVar3 = FUN_05a892f0();
            if (lVar3 == 0) goto LAB_05a8c798;
            FUN_05a8b414(lVar3,iVar4);
            FUN_05a8c868();
            lVar3 = FUN_05a892f0();
            if (lVar3 == 0) goto LAB_05a8c798;
            FUN_05a8b314(lVar3,iVar4);
            FUN_05a8c868();
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0xd);
          iVar4 = 0;
          do {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            lVar3 = FUN_05a892f0();
            if (lVar3 == 0) goto LAB_05a8c798;
            FUN_05a8b218(lVar3,iVar4);
            FUN_05a8c868();
            lVar3 = FUN_05a892f0();
            if (lVar3 == 0) goto LAB_05a8c798;
            FUN_05a8aa14(lVar3,iVar4);
            FUN_05a8c868();
            iVar4 = iVar4 + 1;
          } while (iVar4 != 7);
          lVar3 = FUN_05a89c24();
          if (lVar3 != 0) {
            uVar5 = 0;
            do {
              if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar5) {
                FUN_05a8c868();
                FUN_05a8c868();
                FUN_05a8c868();
                FUN_05a8c868();
                FUN_05a8c868();
                *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
                thunk_FUN_03048534();
                return;
              }
              lVar3 = FUN_05a89c24();
              if (lVar3 == 0) break;
              if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_02fe94f0();
              }
              uVar5 = uVar5 + 1;
              FUN_05a8c868();
              lVar3 = FUN_05a89c24();
            } while (lVar3 != 0);
          }
        }
      }
    }
  }
LAB_05a8c798:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


