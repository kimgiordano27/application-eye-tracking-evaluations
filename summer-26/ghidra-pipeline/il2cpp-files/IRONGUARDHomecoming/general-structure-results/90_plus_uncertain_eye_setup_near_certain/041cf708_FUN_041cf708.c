/*
FUNCTION_NAME: FUN_041cf708
ENTRY_POINT: 041cf708
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x041cfd7c) */
/* WARNING: Removing unreachable block (ram,0x041cff00) */

void FUN_041cf708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  
  uVar23 = param_3;
  if ((DAT_04840e65 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__)
    ;
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<ISerializationDepender>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<int>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Weapon>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<CompilerGeneratedAttribute>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Any<FieldInfo>__);
    DAT_04840e65 = 1;
  }
  if (*(long *)(param_5 + 0x98) == 0) {
    return;
  }
  FUN_041cbd38(param_1,param_2,param_5);
  *(int *)(param_5 + 0x88) = (int)param_1;
  *(int *)(param_5 + 0x8c) = (int)param_2;
  *(int *)(param_5 + 0x90) = (int)param_3;
  lVar9 = FUN_041caff0(param_5);
  if ((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0x440), plVar10 != (long *)0x0)) {
    uVar11 = (**(code **)(*plVar10 + 0x768))(plVar10,*(undefined8 *)(*plVar10 + 0x770));
    fVar21 = *(float *)(param_5 + 0x8c);
    FUN_0414e40c(*(undefined4 *)(param_5 + 0x88),uVar11,0);
    plVar10 = *(long **)(param_5 + 0x98);
    if ((plVar10 != (long *)0x0) &&
       (lVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
       lVar9 != 0)) {
      uVar20 = FUN_042252a8(lVar9,0);
      uVar11 = param_4;
      lVar9 = FUN_041caff0(param_5);
      fVar22 = (float)uVar11;
      if (((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0x440), plVar10 != (long *)0x0)) &&
         (lVar9 = (**(code **)(*plVar10 + 0x768))(plVar10,*(undefined8 *)(*plVar10 + 0x770)),
         lVar9 != 0)) {
        FUN_042252a8(lVar9,0);
        fVar21 = fVar21 - *(float *)(param_5 + 0x84);
        fVar22 = fVar22 - *(float *)(param_5 + 0x80);
        if (fVar21 <= fVar22) {
          fVar22 = fVar21;
        }
        if (fVar21 < 0.0) {
          fVar22 = 0.0;
        }
        lVar9 = FUN_041caff0(param_5);
        if (((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0x440), plVar10 != (long *)0x0)) &&
           ((lVar9 = (**(code **)(*plVar10 + 0x768))(plVar10,*(undefined8 *)(*plVar10 + 0x770)),
            lVar9 != 0 && (plVar10 = (long *)FUN_042198ec(lVar9,0), plVar10 != (long *)0x0)))) {
          lVar9 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)Method_UnityEngine_Component_GetComponentInChildren<Weapon>__) {
                puVar12 = (undefined8 *)(lVar9 + (long)(*piVar18 + 0x1f) * 0x10 + 0x138);
                goto LAB_041cf920;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_01ecb238(plVar10,*(long *)
                                          Method_UnityEngine_Component_GetComponentInChildren<Weapon>__
                                 ,0x1f);
LAB_041cf920:
          fVar21 = (float)(*(code *)*puVar12)(plVar10,puVar12[1]);
          *(undefined4 *)(param_5 + 0x7c) = 0xffffffff;
          lVar9 = FUN_041caff0(param_5);
          if ((lVar9 != 0) && (plVar10 = (long *)FUN_04133c3c(lVar9,0), plVar10 != (long *)0x0)) {
            lVar9 = *plVar10;
            uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) ==
                    *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_041cf9a8;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)
                      FUN_01ecb238(plVar10,*(long *)
                                            Method_System_Linq_Enumerable_Any<ISerializationDepender>__
                                   ,0);
LAB_041cf9a8:
            plVar10 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
            puVar6 = Method_System_Linq_Enumerable_Any<int>__;
            puVar5 = Method_System_Linq_Enumerable_Any<FieldInfo>__;
            puVar4 = Method_System_Linq_Enumerable_Any<CompilerGeneratedAttribute>__;
            puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WindmillBladesController>__
            ;
            puVar2 = Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__;
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
LAB_041cf9f0:
            lVar9 = *plVar10;
            uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_041cfa3c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_041cfa3c:
            uVar17 = (*(code *)*puVar12)(plVar10,puVar12[1]);
            if ((uVar17 & 1) != 0) goto code_r0x041cfa4c;
            goto LAB_041cfd04;
          }
        }
      }
    }
  }
  goto LAB_041cfee4;
code_r0x041cfa4c:
  lVar9 = *plVar10;
  uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
        puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_041cfa98;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar12 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar6,0);
LAB_041cfa98:
  plVar13 = (long *)(*(code *)*puVar12)(plVar10,puVar12[1]);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (-1 < (int)plVar13[4]) {
    lVar9 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar14 = (long *)FUN_04220be0(lVar9,0);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar14;
    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar18 + 0x11) * 0x10 + 0x138);
          goto LAB_041cfb28;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar3,0x11);
LAB_041cfb28:
    uVar11 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    uVar15 = FUN_02766f28(1,*(undefined8 *)puVar5);
    uVar17 = FUN_02766e2c(uVar11,uVar15,*(undefined8 *)puVar4);
    if (((uVar17 & 1) == 0) || ((char)plVar13[5] == '\x01')) {
      if (*(long *)(param_5 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = plVar13[4];
      if ((int)lVar9 == *(int *)(*(long *)(param_5 + 0x98) + 0x20)) {
        lVar16 = FUN_041caff0(param_5);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar14 = (long *)UnityEngine_UIElements_VisualElement_CustomStyleAccess__TryGetValue
                                    (lVar16,0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar16 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_041cfbe8;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar2,1);
LAB_041cfbe8:
        iVar7 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        if ((int)lVar9 < iVar7 + -1) {
          lVar9 = FUN_041caff0(param_5);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar14 = (long *)FUN_04133cc4(lVar9,0);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar19 = (float)(**(code **)(*plVar14 + 0x1f8))
                                    (plVar14,(int)plVar13[4] + 1,*(undefined8 *)(*plVar14 + 0x200));
          if (fVar22 <= fVar21 + fVar19 * 0.5) {
            *(int *)(param_5 + 0x7c) = (int)plVar13[4];
          }
          goto LAB_041cf9f0;
        }
      }
      lVar9 = FUN_041caff0(param_5);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar14 = (long *)FUN_04133cc4(lVar9,0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      fVar19 = (float)(**(code **)(*plVar14 + 0x1f8))
                                (plVar14,(int)plVar13[4],*(undefined8 *)(*plVar14 + 0x200));
      plVar14 = (long *)FUN_041caff0(param_5);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar17 = (**(code **)(*plVar14 + 0x7b8))(plVar14,*(undefined8 *)(*plVar14 + 0x7c0));
      if ((((uVar17 & 1) == 0) || ((int)plVar13[4] != 0)) && (fVar22 <= fVar21 + fVar19 * 0.5)) {
        if (*(int *)(param_5 + 0x7c) == -1) {
          *(int *)(param_5 + 0x7c) = (int)plVar13[4];
        }
        plVar14 = (long *)(param_5 + 0xa0);
        if ((long *)*plVar14 != plVar13) {
          FUN_041cf3bc(0,param_5);
          FUN_041cf3bc(*(undefined4 *)(param_5 + 0x80),param_5,plVar13);
          *plVar14 = (long)plVar13;
          thunk_FUN_01f51358(plVar14,plVar13);
        }
LAB_041cfd04:
        if (plVar10 == (long *)0x0) goto LAB_041cfd70;
        lVar9 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar17 == 0) goto LAB_041cfd48;
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_041cfd30;
      }
      fVar21 = fVar21 + fVar19;
    }
  }
  goto LAB_041cf9f0;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_041cfd30:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_041cfd64;
    }
  }
LAB_041cfd48:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_041cfd64:
  (*(code *)*puVar12)(plVar10,puVar12[1]);
LAB_041cfd70:
  if (*(int *)(param_5 + 0x7c) == -1) {
    lVar9 = FUN_041caff0(param_5);
    if ((lVar9 == 0) ||
       (plVar10 = (long *)UnityEngine_UIElements_VisualElement_CustomStyleAccess__TryGetValue
                                    (lVar9,0), plVar10 == (long *)0x0)) goto LAB_041cfee4;
    lVar9 = *plVar10;
    uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__) {
          puVar12 = (undefined8 *)(lVar9 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_041cfe2c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar10,*(long *)
                                    Method_System_Collections_CollectionBase_System_Collections_IList_set_Item__
                           ,1);
LAB_041cfe2c:
    uVar8 = (*(code *)*puVar12)(plVar10,puVar12[1]);
    *(undefined4 *)(param_5 + 0x7c) = uVar8;
    puVar12 = (undefined8 *)(param_5 + 0xa0);
    FUN_041cf3bc(0,param_5,*puVar12);
    *puVar12 = 0;
    thunk_FUN_01f51358(puVar12,0);
  }
  plVar10 = *(long **)(param_5 + 0x98);
  if ((plVar10 != (long *)0x0) &&
     (lVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)), lVar9 != 0
     )) {
    FUN_04225340(uVar20,fVar22,uVar23,param_4,lVar9,0);
    plVar10 = *(long **)(param_5 + 0x98);
    if ((plVar10 != (long *)0x0) &&
       (lVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
       lVar9 != 0)) {
      FUN_0422f6fc(lVar9,0);
      return;
    }
  }
LAB_041cfee4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


