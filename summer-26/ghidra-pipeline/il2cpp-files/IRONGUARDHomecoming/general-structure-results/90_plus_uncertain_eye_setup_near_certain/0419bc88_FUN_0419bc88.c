/*
FUNCTION_NAME: FUN_0419bc88
ENTRY_POINT: 0419bc88
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0419c004) */
/* WARNING: Removing unreachable block (ram,0x0419c2fc) */
/* WARNING: Removing unreachable block (ram,0x0419c360) */

void FUN_0419bc88(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                 long param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_6c;
  long local_68;
  
  if ((DAT_04840c9b & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458e058);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Toggle>__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e050);
    thunk_FUN_01efb3a4(PTR_DAT_0458e060);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e068);
    thunk_FUN_01efb3a4(PTR_DAT_0458e070);
    thunk_FUN_01efb3a4(PTR_DAT_0458e078);
    thunk_FUN_01efb3a4(PTR_DAT_0458e080);
    thunk_FUN_01efb3a4(PTR_DAT_0458e088);
    thunk_FUN_01efb3a4(PTR_DAT_0458e090);
    thunk_FUN_01efb3a4(PTR_DAT_0458e098);
    DAT_04840c9b = 1;
  }
  puVar2 = PTR_DAT_0458e050;
  local_68 = 0;
  local_6c = 0;
  if (*(long *)(param_5 + 0x420) != 0) {
    uVar10 = FUN_041a7930(*(long *)(param_5 + 0x420),0);
    iVar9 = FUN_022f1850(uVar10,*(undefined8 *)puVar2);
    bVar1 = 0 < iVar9;
    if ((*(long *)(param_5 + 0x420) != 0) &&
       (plVar11 = (long *)FUN_041a7930(*(long *)(param_5 + 0x420),0), plVar11 != (long *)0x0)) {
      lVar17 = *plVar11;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0419be14;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01ecb238(plVar11,*(long *)
                                      Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                             ,0);
LAB_0419be14:
      puVar5 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar4 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar17 = 0;
      do {
        lVar18 = *plVar11;
        lVar15 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0419be98;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_0419be98:
        uVar20 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar20 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_0419bff8;
          lVar15 = *plVar11;
          uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar20 == 0) goto LAB_0419bfd0;
          piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_0419bfb8;
        }
        lVar18 = *plVar11;
        lVar15 = *(long *)puVar5;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_0419bef4;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_0419bef4:
        lVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (*(long *)(param_5 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((bool)(bVar1 & *(int *)(*(long *)(param_5 + 0x420) + 0x2c) == 1)) {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(char *)(lVar15 + 0x60) != '\0') {
            bVar1 = false;
          }
        }
        if (lVar17 == 0) {
          if (*(long *)(param_5 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar20 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                             (*(long *)(param_5 + 0x400),lVar15,&local_68,*(undefined8 *)puVar4);
          lVar17 = 0;
          if ((uVar20 & 1) != 0) {
            if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar23 = (float)FUN_042252a8(*(long *)(local_68 + 0x10),0);
            if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar25 = *(float *)(param_6 + 0x90);
            fVar24 = *(float *)(param_6 + 0x94);
            param_3 = fVar23 + param_3;
            bVar6 = false;
            if ((param_2 <= fVar24) && (bVar6 = false, !NAN(fVar25) && !NAN(param_3))) {
              bVar6 = fVar25 < param_3;
            }
            bVar7 = true;
            bVar8 = false;
            if (bVar6) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar25) && !NAN(fVar23)) {
                bVar7 = fVar25 < fVar23;
                bVar8 = false;
              }
            }
            bVar6 = false;
            if ((bVar7 == bVar8) && (bVar6 = false, !NAN(fVar24) && !NAN(param_2 + param_4))) {
              bVar6 = fVar24 < param_2 + param_4;
            }
            lVar17 = lVar15;
            if (!bVar6) {
              lVar17 = 0;
            }
          }
        }
      } while( true );
    }
  }
  goto LAB_0419c35c;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar21 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_0419c2e4:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_0419c2f0:
  lVar15 = *(long *)(param_5 + 0x438);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),param_6,lVar17,*(undefined8 *)(lVar15 + 0x28));
  }
  return;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_0419bfb8:
    if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_0419bfec:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_0419bff8:
  puVar2 = PTR_DAT_0458e070;
  if (param_6 != 0) {
    lVar15 = *(long *)(param_6 + 0xb8);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              (uVar10,param_5,*(undefined8 *)puVar2,0);
    if (lVar15 != 0) {
      uVar16 = 1;
      if (!bVar1) {
        uVar16 = 2;
      }
      FUN_041d286c(lVar15,*(undefined8 *)PTR_DAT_0458e098,uVar10,uVar16,0);
      if (*(long *)(param_6 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(param_6 + 0xb8),0,0);
        if (*(long *)(param_5 + 0x420) != 0) {
          plVar11 = (long *)FUN_041a9ce0(*(long *)(param_5 + 0x420),0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar18 = *plVar11;
            lVar15 = *(long *)puVar3;
            uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar15) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_0419c0e4:
            uVar20 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar20 & 1) == 0) {
              if (plVar11 == (long *)0x0) goto LAB_0419c2f0;
              lVar15 = *plVar11;
              uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar20 == 0) goto LAB_0419c2c8;
              piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar15 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar15,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar15 + 0x18) = param_5;
            thunk_FUN_01f51358((long *)(lVar15 + 0x18),param_5);
            lVar19 = *plVar11;
            lVar18 = *(long *)puVar5;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar18) {
                  puVar12 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar18,0);
LAB_0419c170:
            lVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            plVar22 = (long *)(lVar15 + 0x10);
            *plVar22 = lVar18;
            thunk_FUN_01f51358(plVar22);
            if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar10 = *(undefined8 *)(*plVar22 + 0x18);
            uVar20 = FUN_0340eec4(uVar10,0);
            if ((uVar20 & 1) != 0) {
              if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar10 = *(undefined8 *)(*plVar22 + 0x10);
            }
            uVar20 = FUN_0340eec4(uVar10,0);
            if ((uVar20 & 1) != 0) {
              if (*plVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              local_6c = FUN_041a76f4(*plVar22,0);
              uVar10 = FUN_035683d0(&local_6c,0);
              uVar10 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar10,0);
            }
            lVar18 = *(long *)(param_6 + 0xb8);
            uVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar13,lVar15,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar14 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar14,lVar15,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar18,uVar10,uVar13,uVar14,0,0);
          } while( true );
        }
      }
    }
  }
LAB_0419c35c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


