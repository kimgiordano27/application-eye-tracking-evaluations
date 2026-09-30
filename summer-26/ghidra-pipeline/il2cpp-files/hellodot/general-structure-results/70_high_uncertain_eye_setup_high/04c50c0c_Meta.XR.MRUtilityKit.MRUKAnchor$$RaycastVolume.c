/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastVolume
ENTRY_POINT: 04c50c0c
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastVolume(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  *(undefined8 *)(unaff_x21 + 0x28) = param_1;
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_04c50c64;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c50c64:
    (*(code *)*puVar1)();
    plVar6 = *(long **)(unaff_x19 + 0x50);
    lVar2 = thunk_FUN_02cea894(*unaff_x23);
    FUN_04c2c1d8(lVar2,0);
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)PTR_DAT_065e6ac0;
      *(undefined1 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x10) = uVar7;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
      *(undefined8 *)(lVar2 + 0x30) = 0;
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
              goto LAB_04c50d04;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c50d04:
        (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
        plVar6 = *(long **)(unaff_x19 + 0x50);
        lVar2 = thunk_FUN_02cea894(*unaff_x23);
        FUN_04c2c1d8(lVar2,0);
        if (lVar2 != 0) {
          uVar7 = *(undefined8 *)PTR_DAT_065e6ac8;
          *(undefined1 *)(lVar2 + 0x20) = 0;
          *(undefined8 *)(lVar2 + 0x10) = uVar7;
          *(undefined8 *)(lVar2 + 0x18) = 0;
          *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
          *(undefined8 *)(lVar2 + 0x30) = 0;
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == *unaff_x24) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                  goto LAB_04c50da4;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 != 0);
            }
            puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c50da4:
            (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
            plVar6 = *(long **)(unaff_x19 + 0x50);
            lVar2 = thunk_FUN_02cea894(*unaff_x23);
            FUN_04c2c1d8(lVar2,0);
            if (lVar2 != 0) {
              uVar7 = *(undefined8 *)PTR_DAT_065dfac0;
              *(undefined1 *)(lVar2 + 0x20) = 0;
              *(undefined8 *)(lVar2 + 0x10) = uVar7;
              *(undefined8 *)(lVar2 + 0x18) = 0;
              *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
              *(undefined8 *)(lVar2 + 0x30) = 0;
              if (plVar6 != (long *)0x0) {
                lVar3 = *plVar6;
                uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar4 != 0) {
                  piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar5 + -2) == *unaff_x24) {
                      puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                      goto LAB_04c50e44;
                    }
                    uVar4 = uVar4 - 1;
                    piVar5 = piVar5 + 4;
                  } while (uVar4 != 0);
                }
                puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c50e44:
                (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
                plVar6 = *(long **)(unaff_x19 + 0x50);
                lVar2 = thunk_FUN_02cea894(*unaff_x23);
                FUN_04c2c1d8(lVar2,0);
                if (lVar2 != 0) {
                  uVar7 = *(undefined8 *)PTR_DAT_065e6f70;
                  *(undefined1 *)(lVar2 + 0x20) = 0;
                  *(undefined8 *)(lVar2 + 0x10) = uVar7;
                  *(undefined8 *)(lVar2 + 0x18) = 0;
                  *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
                  *(undefined8 *)(lVar2 + 0x30) = 0;
                  if (plVar6 != (long *)0x0) {
                    lVar3 = *plVar6;
                    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar4 != 0) {
                      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar5 + -2) == *unaff_x24) {
                          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                          goto LAB_04c50ee4;
                        }
                        uVar4 = uVar4 - 1;
                        piVar5 = piVar5 + 4;
                      } while (uVar4 != 0);
                    }
                    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c50ee4:
                    (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
                    plVar6 = *(long **)(unaff_x19 + 0x50);
                    lVar2 = thunk_FUN_02cea894(*unaff_x23);
                    FUN_04c2c1d8(lVar2,0);
                    if (lVar2 != 0) {
                      uVar7 = *(undefined8 *)PTR_DAT_065e6a08;
                      *(undefined1 *)(lVar2 + 0x20) = 0;
                      *(undefined8 *)(lVar2 + 0x10) = uVar7;
                      *(undefined8 *)(lVar2 + 0x18) = 0;
                      *(undefined8 *)(lVar2 + 0x28) = *unaff_x25;
                      *(undefined8 *)(lVar2 + 0x30) = 0;
                      if (plVar6 != (long *)0x0) {
                        lVar3 = *plVar6;
                        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                        if (uVar4 != 0) {
                          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar5 + -2) == *unaff_x24) {
                              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                              goto LAB_04c50f84;
                            }
                            uVar4 = uVar4 - 1;
                            piVar5 = piVar5 + 4;
                          } while (uVar4 != 0);
                        }
                        puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c50f84:
                    /* WARNING: Could not recover jumptable at 0x04c50fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)*puVar1)(plVar6,uVar7,lVar2,puVar1[1]);
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


