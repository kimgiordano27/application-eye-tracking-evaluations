/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$RaycastAll
ENTRY_POINT: 04c54820
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__RaycastAll(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
                    /* try { // try from 04c54844 to 04d5484f has its CatchHandler @ 04c542d4 */
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 5) * 0x10 + 0x138);
      goto LAB_04c54848;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04c54848:
                    /* try { // try from 04c54850 to 04d54857 has its CatchHandler @ 04c54858 */
                    /* catch() { ... } // from try @ 04c5481c with catch @ 04c54858
                       catch() { ... } // from try @ 04c54850 with catch @ 04c54858 */
  (*(code *)*puVar2)();
  plVar7 = *(long **)(unaff_x19 + 0x50);
  lVar3 = thunk_FUN_02cea894(*unaff_x23);
  FUN_04c2c1d8(lVar3,0);
  if (lVar3 != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_065e6f18;
    *(undefined1 *)(lVar3 + 0x20) = 1;
    *(undefined8 *)(lVar3 + 0x10) = uVar8;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x28) = *unaff_x25;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_04c548ec;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c548ec:
      (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
      plVar7 = *(long **)(unaff_x19 + 0x50);
      lVar3 = thunk_FUN_02cea894(*unaff_x23);
      FUN_04c2c1d8(lVar3,0);
      if (lVar3 != 0) {
        uVar8 = *(undefined8 *)PTR_DAT_065e6f08;
        *(undefined1 *)(lVar3 + 0x20) = 1;
        *(undefined8 *)(lVar3 + 0x10) = uVar8;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x28) = *unaff_x25;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                goto LAB_04c54990;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54990:
          (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
          plVar7 = *(long **)(unaff_x19 + 0x50);
          lVar3 = thunk_FUN_02cea894(*unaff_x23);
          FUN_04c2c1d8(lVar3,0);
          puVar1 = PTR_DAT_065e0200;
          if (lVar3 != 0) {
            uVar8 = *(undefined8 *)PTR_DAT_065e6f40;
            *(undefined1 *)(lVar3 + 0x20) = 0;
            *(undefined8 *)(lVar3 + 0x10) = uVar8;
            *(undefined8 *)(lVar3 + 0x18) = 0;
            *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
            *(undefined8 *)(lVar3 + 0x30) = 0;
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *unaff_x24) {
                    puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                    goto LAB_04c54a38;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54a38:
              (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
              plVar7 = *(long **)(unaff_x19 + 0x50);
              lVar3 = thunk_FUN_02cea894(*unaff_x23);
              FUN_04c2c1d8(lVar3,0);
              if (lVar3 != 0) {
                uVar8 = *(undefined8 *)PTR_DAT_065e6f00;
                *(undefined1 *)(lVar3 + 0x20) = 0;
                *(undefined8 *)(lVar3 + 0x10) = uVar8;
                *(undefined8 *)(lVar3 + 0x18) = 0;
                *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                *(undefined8 *)(lVar3 + 0x30) = 0;
                if (plVar7 != (long *)0x0) {
                  lVar4 = *plVar7;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *unaff_x24) {
                        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                        goto LAB_04c54ad8;
                      }
                      uVar5 = uVar5 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54ad8:
                  (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                  plVar7 = *(long **)(unaff_x19 + 0x50);
                  lVar3 = thunk_FUN_02cea894(*unaff_x23);
                  FUN_04c2c1d8(lVar3,0);
                  if (lVar3 != 0) {
                    uVar8 = *(undefined8 *)PTR_DAT_065e6ef8;
                    *(undefined1 *)(lVar3 + 0x20) = 0;
                    *(undefined8 *)(lVar3 + 0x10) = uVar8;
                    *(undefined8 *)(lVar3 + 0x18) = 0;
                    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                    *(undefined8 *)(lVar3 + 0x30) = 0;
                    if (plVar7 != (long *)0x0) {
                      lVar4 = *plVar7;
                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar5 != 0) {
                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                    /* try { // try from 04c54b48 to 04d54d03 has its CatchHandler @ 04c54b48
                       catch() { ... } // from try @ 04c54b48 with catch @ 04c54b48
                       catch() { ... } // from try @ 04c54d88 with catch @ 04c54b48
                       catch() { ... } // from try @ 04c54f7c with catch @ 04c54b48
                       catch() { ... } // from try @ 04c55014 with catch @ 04c54b48
                       catch() { ... } // from try @ 04c550c8 with catch @ 04c54b48
                       catch() { ... } // from try @ 04c550d8 with catch @ 04c54b48
                       catch() { ... } // from try @ 04c55184 with catch @ 04c54b48
                       catch() { ... } // from try @ 04c5523c with catch @ 04c54b48 */
                          if (*(long *)(piVar6 + -2) == *unaff_x24) {
                            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                            goto LAB_04c54b78;
                          }
                          uVar5 = uVar5 - 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar5 != 0);
                      }
                      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54b78:
                      (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                      plVar7 = *(long **)(unaff_x19 + 0x50);
                      lVar3 = thunk_FUN_02cea894(*unaff_x23);
                      FUN_04c2c1d8(lVar3,0);
                      if (lVar3 != 0) {
                        uVar8 = *(undefined8 *)PTR_DAT_065e6f50;
                        *(undefined1 *)(lVar3 + 0x20) = 0;
                        *(undefined8 *)(lVar3 + 0x10) = uVar8;
                        *(undefined8 *)(lVar3 + 0x18) = 0;
                        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                        *(undefined8 *)(lVar3 + 0x30) = 0;
                        if (plVar7 != (long *)0x0) {
                          lVar4 = *plVar7;
                          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar5 != 0) {
                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                                goto LAB_04c54c18;
                              }
                              uVar5 = uVar5 - 1;
                              piVar6 = piVar6 + 4;
                            } while (uVar5 != 0);
                          }
                          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54c18:
                          (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                          plVar7 = *(long **)(unaff_x19 + 0x50);
                          lVar3 = thunk_FUN_02cea894(*unaff_x23);
                          FUN_04c2c1d8(lVar3,0);
                          if (lVar3 != 0) {
                            uVar8 = *(undefined8 *)PTR_DAT_065e6ac0;
                            *(undefined1 *)(lVar3 + 0x20) = 0;
                            *(undefined8 *)(lVar3 + 0x10) = uVar8;
                            *(undefined8 *)(lVar3 + 0x18) = 0;
                            *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                            *(undefined8 *)(lVar3 + 0x30) = 0;
                            if (plVar7 != (long *)0x0) {
                              lVar4 = *plVar7;
                              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                              if (uVar5 != 0) {
                                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                    puVar2 = (undefined8 *)
                                             (lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                                    goto LAB_04c54cb8;
                                  }
                                  uVar5 = uVar5 - 1;
                                  piVar6 = piVar6 + 4;
                                } while (uVar5 != 0);
                              }
                              puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54cb8:
                              (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                              plVar7 = *(long **)(unaff_x19 + 0x50);
                              lVar3 = thunk_FUN_02cea894(*unaff_x23);
                              FUN_04c2c1d8(lVar3,0);
                              if (lVar3 != 0) {
                                uVar8 = *(undefined8 *)PTR_DAT_065e6ac8;
                                *(undefined1 *)(lVar3 + 0x20) = 0;
                                *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                *(undefined8 *)(lVar3 + 0x18) = 0;
                                *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                                *(undefined8 *)(lVar3 + 0x30) = 0;
                                if (plVar7 != (long *)0x0) {
                                  lVar4 = *plVar7;
                                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                  if (uVar5 != 0) {
                                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                        puVar2 = (undefined8 *)
                                                 (lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                                        goto LAB_04c54d58;
                                      }
                                      uVar5 = uVar5 - 1;
                                      piVar6 = piVar6 + 4;
                                    } while (uVar5 != 0);
                                  }
                                  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54d58:
                                  (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                                  plVar7 = *(long **)(unaff_x19 + 0x50);
                                  lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                  FUN_04c2c1d8(lVar3,0);
                                  if (lVar3 != 0) {
                                    uVar8 = *(undefined8 *)PTR_DAT_065e6f60;
                                    *(undefined1 *)(lVar3 + 0x20) = 0;
                                    *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                    *(undefined8 *)(lVar3 + 0x18) = 0;
                                    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                                    *(undefined8 *)(lVar3 + 0x30) = 0;
                                    if (plVar7 != (long *)0x0) {
                                      lVar4 = *plVar7;
                                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                      if (uVar5 != 0) {
                                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                            puVar2 = (undefined8 *)
                                                     (lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                                            goto LAB_04c54df8;
                                          }
                                          uVar5 = uVar5 - 1;
                                          piVar6 = piVar6 + 4;
                                        } while (uVar5 != 0);
                                      }
                                      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54df8:
                                      (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                                      plVar7 = *(long **)(unaff_x19 + 0x50);
                                      lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                      FUN_04c2c1d8(lVar3,0);
                                      if (lVar3 != 0) {
                                        uVar8 = *(undefined8 *)PTR_DAT_065e6f38;
                                        *(undefined1 *)(lVar3 + 0x20) = 0;
                                        *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                        *(undefined8 *)(lVar3 + 0x18) = 0;
                                        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                                        *(undefined8 *)(lVar3 + 0x30) = 0;
                                        if (plVar7 != (long *)0x0) {
                                          lVar4 = *plVar7;
                                          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                          if (uVar5 != 0) {
                                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                                puVar2 = (undefined8 *)
                                                         (lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138
                                                         );
                                                goto LAB_04c54e98;
                                              }
                                              uVar5 = uVar5 - 1;
                                              piVar6 = piVar6 + 4;
                                            } while (uVar5 != 0);
                                          }
                                          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54e98:
                                          (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                                          plVar7 = *(long **)(unaff_x19 + 0x50);
                                          lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                          FUN_04c2c1d8(lVar3,0);
                                          if (lVar3 != 0) {
                                            uVar8 = *(undefined8 *)PTR_DAT_065e6ca8;
                                            *(undefined1 *)(lVar3 + 0x20) = 0;
                                            *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                            *(undefined8 *)(lVar3 + 0x18) = 0;
                                            *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
                                            *(undefined8 *)(lVar3 + 0x30) = 0;
                                            if (plVar7 != (long *)0x0) {
                                              lVar4 = *plVar7;
                                              uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                              if (uVar5 != 0) {
                                                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                                    puVar2 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 5) * 0x10 +
                                                             0x138);
                                                    goto LAB_04c54f38;
                                                  }
                                                  uVar5 = uVar5 - 1;
                                                  piVar6 = piVar6 + 4;
                                                } while (uVar5 != 0);
                                              }
                                              puVar2 = (undefined8 *)
                                                       FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54f38:
                                              (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                                              plVar7 = *(long **)(unaff_x19 + 0x50);
                                              lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                              FUN_04c2c1d8(lVar3,0);
                                              if (lVar3 != 0) {
                                                uVar8 = *(undefined8 *)PTR_DAT_065e6cb0;
                                                *(undefined1 *)(lVar3 + 0x20) = 0;
                                                *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                                *(undefined8 *)(lVar3 + 0x18) = 0;
                                                *(undefined8 *)(lVar3 + 0x28) =
                                                     *(undefined8 *)puVar1;
                                                *(undefined8 *)(lVar3 + 0x30) = 0;
                                                if (plVar7 != (long *)0x0) {
                                                  lVar4 = *plVar7;
                                                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                  if (uVar5 != 0) {
                                                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                                        puVar2 = (undefined8 *)
                                                                 (lVar4 + (long)(*piVar6 + 5) * 0x10
                                                                 + 0x138);
                                                        goto LAB_04c54fd8;
                                                      }
                                                      uVar5 = uVar5 - 1;
                                                      piVar6 = piVar6 + 4;
                                                    } while (uVar5 != 0);
                                                  }
                                                  puVar2 = (undefined8 *)
                                                           FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c54fd8:
                                                  (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                                                  plVar7 = *(long **)(unaff_x19 + 0x50);
                                                  lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                                  FUN_04c2c1d8(lVar3,0);
                                                  if (lVar3 != 0) {
                                                    uVar8 = *(undefined8 *)PTR_DAT_065e7008;
                                                    *(undefined1 *)(lVar3 + 0x20) = 0;
                                                    *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                                    *(undefined8 *)(lVar3 + 0x18) = 0;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)puVar1;
                                                    *(undefined8 *)(lVar3 + 0x30) = 0;
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar4 = *plVar7;
                                                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                      if (uVar5 != 0) {
                                                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8
                                                                        );
                                                        do {
                                                          if (*(long *)(piVar6 + -2) == *unaff_x24)
                                                          {
                                                            puVar2 = (undefined8 *)
                                                                     (lVar4 + (long)(*piVar6 + 5) *
                                                                              0x10 + 0x138);
                                                            goto LAB_04c55078;
                                                          }
                                                          uVar5 = uVar5 - 1;
                                                          piVar6 = piVar6 + 4;
                                                        } while (uVar5 != 0);
                                                      }
                                                      puVar2 = (undefined8 *)
                                                               FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c55078:
                                                      (*(code *)*puVar2)(plVar7,uVar8,lVar3,
                                                                         puVar2[1]);
                                                      plVar7 = *(long **)(unaff_x19 + 0x50);
                                                      lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                                      FUN_04c2c1d8(lVar3,0);
                                                      if (lVar3 != 0) {
                                                        uVar8 = *(undefined8 *)PTR_DAT_065dfac0;
                                                        *(undefined1 *)(lVar3 + 0x20) = 0;
                                                        *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                                        *(undefined8 *)(lVar3 + 0x18) = 0;
                                                        *(undefined8 *)(lVar3 + 0x28) =
                                                             *(undefined8 *)puVar1;
                                                        *(undefined8 *)(lVar3 + 0x30) = 0;
                                                        if (plVar7 != (long *)0x0) {
                                                          lVar4 = *plVar7;
                                                          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                          if (uVar5 != 0) {
                                                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0)
                                                                            + 8);
                                                            do {
                                                              if (*(long *)(piVar6 + -2) ==
                                                                  *unaff_x24) {
                                                                puVar2 = (undefined8 *)
                                                                         (lVar4 + (long)(*piVar6 + 5
                                                                                        ) * 0x10 +
                                                                         0x138);
                                                                goto LAB_04c55118;
                                                              }
                                                              uVar5 = uVar5 - 1;
                                                              piVar6 = piVar6 + 4;
                                                            } while (uVar5 != 0);
                                                          }
                                                          puVar2 = (undefined8 *)
                                                                   FUN_02ce0a7c(plVar7,*unaff_x24,5)
                                                          ;
LAB_04c55118:
                                                          (*(code *)*puVar2)(plVar7,uVar8,lVar3,
                                                                             puVar2[1]);
                                                          plVar7 = *(long **)(unaff_x19 + 0x50);
                                                          lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                                          FUN_04c2c1d8(lVar3,0);
                                                          if (lVar3 != 0) {
                                                            uVar8 = *(undefined8 *)PTR_DAT_065e7010;
                                                            *(undefined1 *)(lVar3 + 0x20) = 0;
                                                            *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                                            *(undefined8 *)(lVar3 + 0x18) = 0;
                                                            *(undefined8 *)(lVar3 + 0x28) =
                                                                 *(undefined8 *)puVar1;
                                                            *(undefined8 *)(lVar3 + 0x30) = 0;
                                                            if (plVar7 != (long *)0x0) {
                                                              lVar4 = *plVar7;
                                                              uVar5 = (ulong)*(ushort *)
                                                                              (lVar4 + 0x12e);
                                                              if (uVar5 != 0) {
                                                                piVar6 = (int *)(*(long *)(lVar4 + 
                                                  0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) == *unaff_x24) {
                                                      puVar2 = (undefined8 *)
                                                               (lVar4 + (long)(*piVar6 + 5) * 0x10 +
                                                               0x138);
                                                      goto LAB_04c551b8;
                                                    }
                                                    uVar5 = uVar5 - 1;
                                                    piVar6 = piVar6 + 4;
                                                  } while (uVar5 != 0);
                                                  }
                                                  puVar2 = (undefined8 *)
                                                           FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c551b8:
                                                  (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
                                                  plVar7 = *(long **)(unaff_x19 + 0x50);
                                                  lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                                  FUN_04c2c1d8(lVar3,0);
                                                  if (lVar3 != 0) {
                                                    uVar8 = *(undefined8 *)PTR_DAT_065e6f48;
                                                    *(undefined1 *)(lVar3 + 0x20) = 0;
                                                    *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                                    *(undefined8 *)(lVar3 + 0x18) = 0;
                                                    *(undefined8 *)(lVar3 + 0x28) =
                                                         *(undefined8 *)puVar1;
                                                    *(undefined8 *)(lVar3 + 0x30) = 0;
                                                    if (plVar7 != (long *)0x0) {
                                                      lVar4 = *plVar7;
                                                      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                      if (uVar5 != 0) {
                                                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8
                                                                        );
                                                        do {
                                                          if (*(long *)(piVar6 + -2) == *unaff_x24)
                                                          {
                                                            puVar2 = (undefined8 *)
                                                                     (lVar4 + (long)(*piVar6 + 5) *
                                                                              0x10 + 0x138);
                                                            goto LAB_04c55258;
                                                          }
                                                          uVar5 = uVar5 - 1;
                                                          piVar6 = piVar6 + 4;
                                                        } while (uVar5 != 0);
                                                      }
                                                      puVar2 = (undefined8 *)
                                                               FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c55258:
                                                      (*(code *)*puVar2)(plVar7,uVar8,lVar3,
                                                                         puVar2[1]);
                                                      plVar7 = *(long **)(unaff_x19 + 0x50);
                                                      lVar3 = thunk_FUN_02cea894(*unaff_x23);
                                                      FUN_04c2c1d8(lVar3,0);
                                                      if (lVar3 != 0) {
                                                        uVar8 = *(undefined8 *)PTR_DAT_065e6a08;
                                                        *(undefined1 *)(lVar3 + 0x20) = 0;
                                                        *(undefined8 *)(lVar3 + 0x10) = uVar8;
                                                        *(undefined8 *)(lVar3 + 0x18) = 0;
                                                        *(undefined8 *)(lVar3 + 0x28) =
                                                             *(undefined8 *)puVar1;
                                                        *(undefined8 *)(lVar3 + 0x30) = 0;
                                                        if (plVar7 != (long *)0x0) {
                                                          lVar4 = *plVar7;
                                                          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                                                          if (uVar5 != 0) {
                                                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0)
                                                                            + 8);
                                                            do {
                                                              if (*(long *)(piVar6 + -2) ==
                                                                  *unaff_x24) {
                                                                puVar2 = (undefined8 *)
                                                                         (lVar4 + (long)(*piVar6 + 5
                                                                                        ) * 0x10 +
                                                                         0x138);
                                                                goto LAB_04c552f8;
                                                              }
                                                              uVar5 = uVar5 - 1;
                                                              piVar6 = piVar6 + 4;
                                                            } while (uVar5 != 0);
                                                          }
                                                          puVar2 = (undefined8 *)
                                                                   FUN_02ce0a7c(plVar7,*unaff_x24,5)
                                                          ;
LAB_04c552f8:
                    /* WARNING: Could not recover jumptable at 0x04c55318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                          (*(code *)*puVar2)(plVar7,uVar8,lVar3,
                                                                             puVar2[1]);
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


