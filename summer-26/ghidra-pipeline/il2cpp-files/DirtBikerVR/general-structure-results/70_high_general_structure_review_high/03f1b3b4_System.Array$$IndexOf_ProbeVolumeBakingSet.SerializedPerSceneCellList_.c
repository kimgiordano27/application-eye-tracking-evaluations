/*
FUNCTION_NAME: System.Array$$IndexOf<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 03f1b3b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOf<ProbeVolumeBakingSet_SerializedPerSceneCellList>(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x26;
  
  FUN_04de82e0(param_1,1);
  FUN_03f1b928();
  if ((*(long *)(unaff_x22 + 0x438) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 != 0)) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = FUN_04de82e0(lVar2,3,*unaff_x26);
    FUN_03f1b928(uVar3,uVar4,uVar5);
    if ((*(long *)(unaff_x22 + 0x438) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 != 0)) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar3 = FUN_04de82e0(lVar2,3,*unaff_x26);
      FUN_03f1b928(uVar3,uVar4,uVar5);
      if ((*(long *)(unaff_x22 + 0x438) != 0) &&
         (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 != 0)) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar3 = FUN_04de82e0(lVar2,2,*unaff_x26);
        FUN_03f1b928(uVar3,uVar4,uVar5);
        if ((*(long *)(unaff_x22 + 0x438) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 != 0)) {
          uVar4 = *(undefined8 *)(unaff_x22 + 200);
          uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar3 = FUN_04de82e0(lVar2,2,*unaff_x26);
          FUN_03f1b928(uVar3,uVar4,uVar5);
          puVar1 = PTR_DAT_0848e750;
          if ((*(long *)(unaff_x22 + 0x438) != 0) &&
             (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0)) {
            lVar2 = FUN_04de82e0(lVar2,0,*(undefined8 *)PTR_DAT_0848e750);
            if (lVar2 != 0) {
              if (*(char *)(lVar2 + 400) == '\0') {
                if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                   (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0))
                goto LAB_03f1b924;
                FUN_04de82e0(lVar2,0,*unaff_x26);
                FUN_03f1c000();
              }
              if (((*(long *)(unaff_x22 + 0x438) != 0) &&
                  (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0)) &&
                 (lVar2 = FUN_04de82e0(lVar2,0,*(undefined8 *)puVar1), lVar2 != 0)) {
                if (*(char *)(lVar2 + 0x191) == '\0') {
                  if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                     (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0))
                  goto LAB_03f1b924;
                  FUN_04de82e0(lVar2,1,*unaff_x26);
                  FUN_03f1c000();
                }
                if (((*(long *)(unaff_x22 + 0x438) != 0) &&
                    (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0)) &&
                   (lVar2 = FUN_04de82e0(lVar2,1,*(undefined8 *)puVar1), lVar2 != 0)) {
                  if (*(char *)(lVar2 + 0x191) == '\0') {
                    if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                       (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0))
                    goto LAB_03f1b924;
                    FUN_04de82e0(lVar2,2,*unaff_x26);
                    FUN_03f1c000();
                  }
                  if (((*(long *)(unaff_x22 + 0x438) != 0) &&
                      (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0)) &&
                     (lVar2 = FUN_04de82e0(lVar2,1,*(undefined8 *)puVar1), lVar2 != 0)) {
                    if (*(char *)(lVar2 + 400) == '\0') {
                      if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                         (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0))
                      goto LAB_03f1b924;
                      FUN_04de82e0(lVar2,3,*unaff_x26);
                      FUN_03f1c000();
                    }
                    if (((*(long *)(unaff_x22 + 0x438) != 0) &&
                        (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0)) &&
                       (lVar2 = FUN_04de82e0(lVar2,2,*(undefined8 *)puVar1), lVar2 != 0)) {
                      if (*(char *)(lVar2 + 400) == '\0') {
                        if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                           (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0))
                        goto LAB_03f1b924;
                        FUN_04de82e0(lVar2,2,*unaff_x26);
                        FUN_03f1c000();
                      }
                      if (((*(long *)(unaff_x22 + 0x438) != 0) &&
                          (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0)) &&
                         (lVar2 = FUN_04de82e0(lVar2,2,*(undefined8 *)puVar1), lVar2 != 0)) {
                        if (*(char *)(lVar2 + 0x191) == '\0') {
                          if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                             (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0))
                          goto LAB_03f1b924;
                          FUN_04de82e0(lVar2,0,*unaff_x26);
                          FUN_03f1c000();
                        }
                        if (((*(long *)(unaff_x22 + 0x438) != 0) &&
                            (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0)) &&
                           (lVar2 = FUN_04de82e0(lVar2,3,*(undefined8 *)puVar1), lVar2 != 0)) {
                          if (*(char *)(lVar2 + 400) == '\0') {
                            if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                               (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0))
                            goto LAB_03f1b924;
                            FUN_04de82e0(lVar2,1,*unaff_x26);
                            FUN_03f1c000();
                          }
                          if (((*(long *)(unaff_x22 + 0x438) != 0) &&
                              (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x20), lVar2 != 0))
                             && (lVar2 = FUN_04de82e0(lVar2,3,*(undefined8 *)puVar1), lVar2 != 0)) {
                            if (*(char *)(lVar2 + 0x191) == '\0') {
                              if ((*(long *)(unaff_x22 + 0x438) == 0) ||
                                 (lVar2 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0x28), lVar2 == 0
                                 )) goto LAB_03f1b924;
                              FUN_04de82e0(lVar2,3,*unaff_x26);
                              FUN_03f1c000();
                            }
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03f1b924:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


