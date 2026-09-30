/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetDirectionAwayFromClosestWall
ENTRY_POINT: 04c55a7c
PROGRAM: hellodot-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_file_logging_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetDirectionAwayFromClosestWall(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x4b8));
  *(undefined1 *)(unaff_x20 + 0x8fb) = 1;
  FUN_0400503c();
  plVar8 = *(long **)(unaff_x19 + 0x50);
  lVar3 = thunk_FUN_02cea894(*unaff_x23);
  FUN_04c2c1d8(lVar3,0);
  puVar1 = PTR_DAT_065dd4b8;
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)PTR_DAT_065e6920;
    *(undefined1 *)(lVar3 + 0x20) = 1;
    *(undefined8 *)(lVar3 + 0x10) = uVar9;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    puVar2 = PTR_DAT_065e01b8;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e01b8) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_04c55b38;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e01b8,5);
LAB_04c55b38:
      (*(code *)*puVar4)(plVar8,uVar9,lVar3,puVar4[1]);
      plVar8 = *(long **)(unaff_x19 + 0x50);
      lVar3 = thunk_FUN_02cea894(*unaff_x23);
      FUN_04c2c1d8(lVar3,0);
      if (lVar3 != 0) {
        uVar9 = *(undefined8 *)PTR_DAT_065e6df8;
        *(undefined1 *)(lVar3 + 0x20) = 1;
        *(undefined8 *)(lVar3 + 0x10) = uVar9;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                goto LAB_04c55bdc;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c55bdc:
          (*(code *)*puVar4)(plVar8,uVar9,lVar3,puVar4[1]);
          plVar8 = *(long **)(unaff_x19 + 0x50);
          lVar3 = thunk_FUN_02cea894(*unaff_x23);
          FUN_04c2c1d8(lVar3,0);
          puVar1 = PTR_DAT_065e0200;
          if (lVar3 != 0) {
            uVar9 = *(undefined8 *)PTR_DAT_065e6b78;
            *(undefined1 *)(lVar3 + 0x20) = 1;
            *(undefined8 *)(lVar3 + 0x10) = uVar9;
            *(undefined8 *)(lVar3 + 0x18) = 0;
            *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            if (plVar8 != (long *)0x0) {
              lVar5 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                    goto LAB_04c55c88;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c55c88:
              (*(code *)*puVar4)(plVar8,uVar9,lVar3,puVar4[1]);
              plVar8 = *(long **)(unaff_x19 + 0x50);
              lVar3 = thunk_FUN_02cea894(*unaff_x23);
              FUN_04c2c1d8(lVar3,0);
              if (lVar3 != 0) {
                uVar9 = *(undefined8 *)PTR_DAT_065e6e00;
                *(undefined1 *)(lVar3 + 0x20) = 0;
                *(undefined8 *)(lVar3 + 0x10) = uVar9;
                *(undefined8 *)(lVar3 + 0x18) = 0;
                *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                *(undefined8 *)(lVar3 + 0x30) = 0;
                if (plVar8 != (long *)0x0) {
                  lVar5 = *plVar8;
                  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar6 != 0) {
                    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                        goto LAB_04c55d28;
                      }
                      uVar6 = uVar6 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c55d28:
                  (*(code *)*puVar4)(plVar8,uVar9,lVar3,puVar4[1]);
                  plVar8 = *(long **)(unaff_x19 + 0x50);
                  lVar3 = thunk_FUN_02cea894(*unaff_x23);
                  FUN_04c2c1d8(lVar3,0);
                  if (lVar3 != 0) {
                    uVar9 = *(undefined8 *)PTR_DAT_065e6a08;
                    *(undefined1 *)(lVar3 + 0x20) = 0;
                    *(undefined8 *)(lVar3 + 0x10) = uVar9;
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                    *(undefined8 *)(lVar3 + 0x30) = 0;
                    if (plVar8 != (long *)0x0) {
                      lVar5 = *plVar8;
                      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                            goto LAB_04c55dc8;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,5);
LAB_04c55dc8:
                    /* WARNING: Could not recover jumptable at 0x04c55de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)*puVar4)(plVar8,uVar9,lVar3,puVar4[1]);
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


