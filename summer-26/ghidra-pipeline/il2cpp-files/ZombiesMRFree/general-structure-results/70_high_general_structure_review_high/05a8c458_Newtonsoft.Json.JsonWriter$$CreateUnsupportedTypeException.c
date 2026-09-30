/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$CreateUnsupportedTypeException
ENTRY_POINT: 05a8c458
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonWriter__CreateUnsupportedTypeException(void)

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
  
  for (; unaff_w22 != 0xe; unaff_w22 = unaff_w22 + 1) {
    FUN_05a8b314();
    FUN_05a8c868();
  }
  if (*(uint *)(unaff_x19 + 0x144) == 0xffffffff) {
    uVar6 = Newtonsoft_Json_JsonWriter__WriteValue();
    if ((uVar6 & 1) == 0) goto LAB_05a8c4bc;
  }
  else if ((*(uint *)(unaff_x19 + 0x144) & 1) == 0) goto LAB_05a8c4bc;
  iVar5 = 1;
  do {
    FUN_05a8a7a0();
    FUN_05a8c868();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0xe);
LAB_05a8c4bc:
  uVar2 = *(uint *)(unaff_x19 + 0x144);
  if (uVar2 == 0xffffffff) {
    uVar2 = Newtonsoft_Json_JsonWriter__WriteValue();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    iVar5 = 1;
    do {
      FUN_05a8a7a0();
      FUN_05a8c868();
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xe);
  }
  iVar5 = 0;
  do {
    FUN_05a8b218();
    FUN_05a8c868();
    FUN_05a8aa14();
    FUN_05a8c868();
    iVar5 = iVar5 + 1;
  } while (iVar5 != 7);
  plVar3 = *(long **)(unaff_x19 + 0x78);
  if ((plVar3 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)), lVar4 != 0))
  {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar5 = 1;
      do {
        FUN_05a899fc();
        FUN_05a8c868();
        Newtonsoft_Json_JsonWriter__BuildStateArray();
        FUN_05a8c868();
        iVar5 = iVar5 + 1;
      } while (iVar5 <= *(int *)(lVar4 + 0x18));
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
        iVar5 = 1;
        FUN_05a8c868();
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8b414(lVar4,iVar5);
          FUN_05a8c868();
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8b314(lVar4,iVar5);
          FUN_05a8c868();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 0xd);
        iVar5 = 0;
        do {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8b218(lVar4,iVar5);
          FUN_05a8c868();
          lVar4 = FUN_05a892f0();
          if (lVar4 == 0) goto LAB_05a8c798;
          FUN_05a8aa14(lVar4,iVar5);
          FUN_05a8c868();
          iVar5 = iVar5 + 1;
        } while (iVar5 != 7);
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
              *(undefined8 *)(unaff_x19 + 0x158) = unaff_x20;
              thunk_FUN_03048534();
              return;
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


