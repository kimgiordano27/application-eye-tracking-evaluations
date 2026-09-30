/*
FUNCTION_NAME: FUN_027e9e3c
ENTRY_POINT: 027e9e3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_027e9e3c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long *param_6)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_037889d4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_8098);
    thunk_FUN_00d48444(PTR_DAT_033f2e30);
    thunk_FUN_00d48444(StringLiteral_8085);
    thunk_FUN_00d48444(Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__)
    ;
    thunk_FUN_00d48444(UnityEngine_UIElements_StyleSheets_InitialStyle_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Object,_int>__ctor__);
    thunk_FUN_00d48444(Method_UIAdjustmentBar_Increase__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_147__);
    thunk_FUN_00d48444(StringLiteral_12473);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__);
    DAT_037889d4 = 1;
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<Object,_int>__ctor__;
  local_50 = 0;
  local_48 = 0;
  if (*(long *)(param_5 + 0x10) != 0) {
    if (*(long *)(*(long *)(param_5 + 0x10) + 0x10) != 0) {
      return;
    }
    plVar13 = *(long **)(param_5 + 0x18);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Collections_Generic_Dictionary<Object,_int>__ctor__) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_027e9f70;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(plVar13,*(long *)
                                     Method_System_Collections_Generic_Dictionary<Object,_int>__ctor__
                            ,3);
LAB_027e9f70:
      uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
      puVar5 = StringLiteral_8098;
      puVar3 = Method_RhythmGameStarter_Track_<>c__DisplayClass11_0_<RecycleAllNotes>b__0__;
      if ((uVar11 & 1) == 0) {
        if (param_6 == (long *)0x0) goto LAB_027ea380;
        lVar10 = (**(code **)(*param_6 + 0x188))(param_6,*(undefined8 *)(*param_6 + 400));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        lVar8 = FUN_012c4efc(*(undefined8 *)puVar5);
        plVar13 = *(long **)(param_5 + 0x18);
        if (lVar10 == lVar8) {
          FUN_027a64dc(plVar13,0);
          plVar13 = (long *)FUN_027f2d0c(param_6,0);
          if (plVar13 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__ + 300)
            ;
            if (*(byte *)(*plVar13 + 300) < bVar1) {
              plVar13 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                     *(long *)Method_OVREnumerable<OVRSpatialAnchor>_GetEnumerator__) {
              plVar13 = (long *)0x0;
            }
            *(long **)(param_5 + 0x28) = plVar13;
            return;
          }
          *(undefined8 *)(param_5 + 0x28) = 0;
          return;
        }
      }
      else {
        plVar13 = *(long **)(param_5 + 0x18);
      }
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_027ea070;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,3);
LAB_027ea070:
        uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
        puVar5 = StringLiteral_8085;
        puVar3 = PTR_DAT_033f2e30;
        if ((uVar11 & 1) == 0) {
          if (param_6 == (long *)0x0) goto LAB_027ea380;
          lVar10 = (**(code **)(*param_6 + 0x188))(param_6,*(undefined8 *)(*param_6 + 400));
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar5);
          }
          lVar8 = FUN_012c4efc(*(undefined8 *)puVar3);
          if (lVar10 == lVar8) {
            FUN_027ab7b0(*(undefined8 *)(param_5 + 0x18),0);
            puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_147__;
            if (*(long *)(param_5 + 0x28) != 0) {
              uVar14 = FUN_0274ca20(*(long *)(param_5 + 0x28),0);
              local_50 = CONCAT44(param_2,uVar14);
              local_48 = CONCAT44(param_4,param_3);
              if (*param_6 != *(long *)puVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c(param_6);
              }
              uVar11 = FUN_02688538(*(undefined4 *)((long)param_6 + 0x94),(int)param_6[0x13],
                                    *(undefined4 *)((long)param_6 + 0x9c),&local_50,0);
              if ((uVar11 & 1) != 0) {
                plVar13 = *(long **)(param_5 + 0x18);
                *(undefined8 *)(param_5 + 0x28) = 0;
                if (plVar13 != (long *)0x0) {
                  lVar10 = *plVar13;
                  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
                        goto LAB_027ea1a0;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,7);
LAB_027ea1a0:
                  (*(code *)*puVar7)(plVar13,puVar7[1]);
                  if (*(long *)(param_5 + 0x10) != 0) {
                    plVar13 = *(long **)(param_5 + 0x18);
                    uVar9 = FUN_026ceaa8(*(long *)(param_5 + 0x10),0);
                    if (plVar13 != (long *)0x0) {
                      lVar10 = *plVar13;
                      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
                      if (uVar11 != 0) {
                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                            goto LAB_027ea218;
                          }
                          uVar11 = uVar11 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,10);
LAB_027ea218:
                      (*(code *)*puVar7)(plVar13,uVar9,puVar7[1]);
                      plVar13 = *(long **)(param_5 + 0x18);
                      if (plVar13 != (long *)0x0) {
                        lVar10 = *plVar13;
                        lVar8 = *(long *)(param_5 + 0x10);
                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
                        if (uVar11 != 0) {
                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) ==
                                *(long *)UnityEngine_UIElements_StyleSheets_InitialStyle_TypeInfo) {
                              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                              goto LAB_027ea288;
                            }
                            uVar11 = uVar11 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar7 = (undefined8 *)
                                 FUN_00d59724(plVar13,*(long *)
                                                  UnityEngine_UIElements_StyleSheets_InitialStyle_TypeInfo
                                              ,0);
LAB_027ea288:
                        uVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
                        if ((*(long *)(param_5 + 0x10) != 0) &&
                           (plVar13 = *(long **)(param_5 + 0x18), plVar13 != (long *)0x0)) {
                          lVar10 = *plVar13;
                          cVar2 = *(char *)(*(long *)(param_5 + 0x10) + 0x28);
                          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
                          if (uVar11 != 0) {
                            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                                puVar7 = (undefined8 *)
                                         (lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                                goto LAB_027ea2fc;
                              }
                              uVar11 = uVar11 - 1;
                              piVar12 = piVar12 + 4;
                            } while (uVar11 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar4,5);
LAB_027ea2fc:
                          uVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
                          uVar9 = FUN_026899ac(uVar9,0,1,cVar2 != '\0',uVar6 & 1,0);
                          if (lVar8 != 0) {
                            *(undefined8 *)(lVar8 + 0x10) = uVar9;
                            lVar10 = *(long *)(param_5 + 0x10);
                            if (lVar10 != 0) {
                              lVar8 = *(long *)(lVar10 + 0x10);
                              **(long **)(*(long *)StringLiteral_12473 + 0xb8) = lVar8;
                              if (lVar8 != 0) {
                                FUN_027e94b8(param_5);
                                lVar10 = *(long *)(param_5 + 0x10);
                                if (lVar10 == 0) goto LAB_027ea380;
                              }
                              FUN_026db8f0(lVar10,0);
                              FUN_027f01ec(param_6,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_027ea380;
              }
            }
          }
        }
        return;
      }
    }
  }
LAB_027ea380:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


