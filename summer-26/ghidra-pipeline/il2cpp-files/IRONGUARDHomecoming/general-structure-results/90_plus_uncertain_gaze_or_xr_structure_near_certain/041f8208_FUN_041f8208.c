/*
FUNCTION_NAME: FUN_041f8208
ENTRY_POINT: 041f8208
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x041f8830) */
/* WARNING: Removing unreachable block (ram,0x041f8560) */
/* WARNING: Removing unreachable block (ram,0x041f86b4) */
/* WARNING: Removing unreachable block (ram,0x041f88b8) */
/* WARNING: Removing unreachable block (ram,0x041f83e4) */

void FUN_041f8208(long param_1,uint param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_048410f9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a568);
    thunk_FUN_01efb3a4(PTR_DAT_045908d0);
    thunk_FUN_01efb3a4(PTR_DAT_045908d8);
    thunk_FUN_01efb3a4(PTR_DAT_045908e0);
    thunk_FUN_01efb3a4(PTR_DAT_045908e8);
    thunk_FUN_01efb3a4(Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__);
    DAT_048410f9 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
LAB_041f88b0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_2 < *(uint *)(lVar5 + 0x18)) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) goto LAB_041f88b0;
    if (param_2 < *(uint *)(lVar6 + 0x18)) {
      lVar10 = (long)(int)param_2;
      lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
      lVar6 = *(long *)(lVar6 + lVar10 * 8 + 0x20);
      if (lVar5 == lVar6) {
        return;
      }
      if (lVar5 != 0) {
        plVar2 = (long *)FUN_025e8a98(lVar5,lVar6,param_2,*(undefined8 *)PTR_DAT_045908e0);
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0458a568) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_041f835c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_0458a568,0);
LAB_041f835c:
        (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
        if (plVar2 != (long *)0x0) {
          lVar5 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_041f83cc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ecb238(plVar2,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_041f83cc:
          (*(code *)*puVar3)(plVar2,puVar3[1]);
        }
        puVar1 = Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__;
        lVar5 = *(long *)Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
        }
        if (*(uint *)(*(long *)(lVar5 + 0xb8) + 8) == param_2) {
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 == 0) goto LAB_041f88b0;
          if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_041f88b4;
          lVar6 = *(long *)(param_1 + 0x10);
          if (lVar6 == 0) goto LAB_041f88b0;
          if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_041f88b4;
          plVar2 = (long *)FUN_025e8a98(*(undefined8 *)(lVar5 + lVar10 * 8 + 0x20),
                                        *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20),param_2,
                                        *(undefined8 *)PTR_DAT_045908d8);
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0458a568) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_041f84d8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_0458a568,0);
LAB_041f84d8:
          (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
          if (plVar2 != (long *)0x0) {
            lVar5 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_041f8548;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01ecb238(plVar2,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_041f8548:
            (*(code *)*puVar3)(plVar2,puVar3[1]);
          }
        }
      }
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_041f88b0;
      if (param_2 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
        if (lVar5 != 0) {
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar6 == 0) goto LAB_041f88b0;
          if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_041f88b4;
          plVar2 = (long *)FUN_025e8a98(lVar5,*(undefined8 *)(lVar6 + lVar10 * 8 + 0x20),param_2,
                                        *(undefined8 *)PTR_DAT_045908d0);
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0458a568) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_041f862c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_0458a568,0);
LAB_041f862c:
          (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
          if (plVar2 != (long *)0x0) {
            lVar5 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    *(long *)
                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_041f869c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_01ecb238(plVar2,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                  ,0);
LAB_041f869c:
            (*(code *)*puVar3)(plVar2,puVar3[1]);
          }
          puVar1 = Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__;
          lVar5 = *(long *)Method_System_Globalization_DateTimeFormatInfo_ValidateStyles__;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar5 = *(long *)puVar1;
          }
          if (*(uint *)(*(long *)(lVar5 + 0xb8) + 8) == param_2) {
            lVar5 = *(long *)(param_1 + 0x10);
            if (lVar5 == 0) goto LAB_041f88b0;
            if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_041f88b4;
            lVar6 = *(long *)(param_1 + 0x18);
            if (lVar6 == 0) goto LAB_041f88b0;
            if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_041f88b4;
            plVar2 = (long *)FUN_025e8a98(*(undefined8 *)(lVar5 + lVar10 * 8 + 0x20),
                                          *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20),param_2,
                                          *(undefined8 *)PTR_DAT_045908e8);
            lVar5 = *(long *)(param_1 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar5 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0458a568) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_041f87a8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_0458a568,0);
LAB_041f87a8:
            (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
            if (plVar2 != (long *)0x0) {
              lVar5 = *plVar2;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_041f8818;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)
                       FUN_01ecb238(plVar2,*(long *)
                                            Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                    ,0);
LAB_041f8818:
              (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
          }
        }
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_041f88b0;
        if (param_2 < *(uint *)(lVar5 + 0x18)) {
          plVar2 = *(long **)(param_1 + 0x18);
          if (plVar2 == (long *)0x0) goto LAB_041f88b0;
          lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
            uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,0);
          }
          if (param_2 < *(uint *)(plVar2 + 3)) {
            plVar2[lVar10 + 4] = lVar5;
            thunk_FUN_01f51358(plVar2 + lVar10 + 4,lVar5);
            return;
          }
        }
      }
    }
  }
LAB_041f88b4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


