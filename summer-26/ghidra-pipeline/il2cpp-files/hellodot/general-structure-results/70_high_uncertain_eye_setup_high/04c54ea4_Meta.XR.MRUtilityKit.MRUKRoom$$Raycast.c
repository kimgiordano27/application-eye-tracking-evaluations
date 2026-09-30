/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 04c54ea4
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(code *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  (*param_1)();
  plVar6 = *(long **)(unaff_x19 + 0x50);
  lVar1 = thunk_FUN_02cea894(*unaff_x23);
  FUN_04c2c1d8(lVar1,0);
  if (lVar1 != 0) {
                    /* try { // try from 04c54ec8 to 04d54f27 has its CatchHandler @ 04c551ac */
    uVar7 = *(undefined8 *)PTR_DAT_065e6ca8;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
            goto LAB_04c54f38;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c54f38:
      (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
      plVar6 = *(long **)(unaff_x19 + 0x50);
      lVar1 = thunk_FUN_02cea894(*unaff_x23);
      FUN_04c2c1d8(lVar1,0);
      if (lVar1 != 0) {
        uVar7 = *(undefined8 *)PTR_DAT_065e6cb0;
        *(undefined1 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x10) = uVar7;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
        *(undefined8 *)(lVar1 + 0x30) = 0;
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                goto LAB_04c54fd8;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c54fd8:
          (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
          plVar6 = *(long **)(unaff_x19 + 0x50);
          lVar1 = thunk_FUN_02cea894(*unaff_x23);
          FUN_04c2c1d8(lVar1,0);
          if (lVar1 != 0) {
            uVar7 = *(undefined8 *)PTR_DAT_065e7008;
            *(undefined1 *)(lVar1 + 0x20) = 0;
            *(undefined8 *)(lVar1 + 0x10) = uVar7;
            *(undefined8 *)(lVar1 + 0x18) = 0;
            *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
            *(undefined8 *)(lVar1 + 0x30) = 0;
            if (plVar6 != (long *)0x0) {
              lVar3 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar4 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *unaff_x24) {
                    puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                    goto LAB_04c55078;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c55078:
              (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
              plVar6 = *(long **)(unaff_x19 + 0x50);
              lVar1 = thunk_FUN_02cea894(*unaff_x23);
              FUN_04c2c1d8(lVar1,0);
              if (lVar1 != 0) {
                uVar7 = *(undefined8 *)PTR_DAT_065dfac0;
                *(undefined1 *)(lVar1 + 0x20) = 0;
                *(undefined8 *)(lVar1 + 0x10) = uVar7;
                *(undefined8 *)(lVar1 + 0x18) = 0;
                *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
                *(undefined8 *)(lVar1 + 0x30) = 0;
                if (plVar6 != (long *)0x0) {
                  lVar3 = *plVar6;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) == *unaff_x24) {
                        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                        goto LAB_04c55118;
                      }
                      uVar4 = uVar4 - 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c55118:
                  (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
                  plVar6 = *(long **)(unaff_x19 + 0x50);
                  lVar1 = thunk_FUN_02cea894(*unaff_x23);
                  FUN_04c2c1d8(lVar1,0);
                  if (lVar1 != 0) {
                    uVar7 = *(undefined8 *)PTR_DAT_065e7010;
                    *(undefined1 *)(lVar1 + 0x20) = 0;
                    *(undefined8 *)(lVar1 + 0x10) = uVar7;
                    *(undefined8 *)(lVar1 + 0x18) = 0;
                    *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
                    *(undefined8 *)(lVar1 + 0x30) = 0;
                    if (plVar6 != (long *)0x0) {
                      lVar3 = *plVar6;
                      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                      if (uVar4 != 0) {
                        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar5 + -2) == *unaff_x24) {
                            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                            goto LAB_04c551b8;
                          }
                          uVar4 = uVar4 - 1;
                          piVar5 = piVar5 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c551b8:
                      (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
                      plVar6 = *(long **)(unaff_x19 + 0x50);
                      lVar1 = thunk_FUN_02cea894(*unaff_x23);
                      FUN_04c2c1d8(lVar1,0);
                      if (lVar1 != 0) {
                        uVar7 = *(undefined8 *)PTR_DAT_065e6f48;
                        *(undefined1 *)(lVar1 + 0x20) = 0;
                        *(undefined8 *)(lVar1 + 0x10) = uVar7;
                        *(undefined8 *)(lVar1 + 0x18) = 0;
                        *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
                        *(undefined8 *)(lVar1 + 0x30) = 0;
                        if (plVar6 != (long *)0x0) {
                          lVar3 = *plVar6;
                          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                          if (uVar4 != 0) {
                            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar5 + -2) == *unaff_x24) {
                                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                                goto LAB_04c55258;
                              }
                              uVar4 = uVar4 - 1;
                              piVar5 = piVar5 + 4;
                            } while (uVar4 != 0);
                          }
                          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c55258:
                          (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
                          plVar6 = *(long **)(unaff_x19 + 0x50);
                          lVar1 = thunk_FUN_02cea894(*unaff_x23);
                          FUN_04c2c1d8(lVar1,0);
                          if (lVar1 != 0) {
                            uVar7 = *(undefined8 *)PTR_DAT_065e6a08;
                            *(undefined1 *)(lVar1 + 0x20) = 0;
                            *(undefined8 *)(lVar1 + 0x10) = uVar7;
                            *(undefined8 *)(lVar1 + 0x18) = 0;
                            *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
                            *(undefined8 *)(lVar1 + 0x30) = 0;
                            if (plVar6 != (long *)0x0) {
                              lVar3 = *plVar6;
                              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                              if (uVar4 != 0) {
                                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar5 + -2) == *unaff_x24) {
                                    puVar2 = (undefined8 *)
                                             (lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
                                    goto LAB_04c552f8;
                                  }
                                  uVar4 = uVar4 - 1;
                                  piVar5 = piVar5 + 4;
                                } while (uVar4 != 0);
                              }
                              puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,5);
LAB_04c552f8:
                    /* WARNING: Could not recover jumptable at 0x04c55318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              (*(code *)*puVar2)(plVar6,uVar7,lVar1,puVar2[1]);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


