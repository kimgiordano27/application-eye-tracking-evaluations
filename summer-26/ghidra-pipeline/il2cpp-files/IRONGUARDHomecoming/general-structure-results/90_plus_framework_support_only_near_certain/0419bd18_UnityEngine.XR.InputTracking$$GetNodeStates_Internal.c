/*
FUNCTION_NAME: UnityEngine.XR.InputTracking$$GetNodeStates_Internal
ENTRY_POINT: 0419bd18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0419c004) */
/* WARNING: Removing unreachable block (ram,0x0419c2fc) */
/* WARNING: Removing unreachable block (ram,0x0419c360) */

void UnityEngine_XR_InputTracking__GetNodeStates_Internal
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

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
  ulong uVar19;
  int *piVar20;
  long unaff_x19;
  long unaff_x20;
  long unaff_x25;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uStack0000000000000004;
  long in_stack_00000008;
  
  thunk_FUN_01efb3a4(PTR_DAT_0458e068);
  thunk_FUN_01efb3a4(PTR_DAT_0458e070);
  thunk_FUN_01efb3a4(PTR_DAT_0458e078);
  thunk_FUN_01efb3a4(PTR_DAT_0458e080);
  thunk_FUN_01efb3a4(PTR_DAT_0458e088);
  thunk_FUN_01efb3a4(PTR_DAT_0458e090);
  thunk_FUN_01efb3a4(PTR_DAT_0458e098);
  *(undefined1 *)(unaff_x19 + 0xc9b) = 1;
  puVar2 = PTR_DAT_0458e050;
  in_stack_00000008 = 0;
  uStack0000000000000004 = 0;
  if (*(long *)(unaff_x20 + 0x420) != 0) {
    uVar10 = FUN_041a7930(*(long *)(unaff_x20 + 0x420),0);
    iVar9 = FUN_022f1850(uVar10,*(undefined8 *)puVar2);
    bVar1 = 0 < iVar9;
    if ((*(long *)(unaff_x20 + 0x420) != 0) &&
       (plVar11 = (long *)FUN_041a7930(*(long *)(unaff_x20 + 0x420),0), plVar11 != (long *)0x0)) {
      lVar17 = *plVar11;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_0419be14;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
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
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0419be98;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_0419be98:
        uVar19 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar19 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_0419bff8;
          lVar17 = *plVar11;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 == 0) goto LAB_0419bfd0;
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_0419bfb8;
        }
        lVar18 = *plVar11;
        lVar15 = *(long *)puVar5;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0419bef4;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_0419bef4:
        lVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if (*(long *)(unaff_x20 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((bool)(bVar1 & *(int *)(*(long *)(unaff_x20 + 0x420) + 0x2c) == 1)) {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(char *)(lVar15 + 0x60) != '\0') {
            bVar1 = false;
          }
        }
        if (lVar17 == 0) {
          if (*(long *)(unaff_x20 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar19 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                             (*(long *)(unaff_x20 + 0x400),lVar15,&stack0x00000008,
                              *(undefined8 *)puVar4);
          lVar17 = 0;
          if ((uVar19 & 1) != 0) {
            if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar22 = (float)FUN_042252a8(*(long *)(in_stack_00000008 + 0x10),0);
            if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            fVar24 = *(float *)(unaff_x25 + 0x90);
            fVar23 = *(float *)(unaff_x25 + 0x94);
            param_3 = fVar22 + param_3;
            bVar6 = false;
            if ((param_2 <= fVar23) && (bVar6 = false, !NAN(fVar24) && !NAN(param_3))) {
              bVar6 = fVar24 < param_3;
            }
            bVar7 = true;
            bVar8 = false;
            if (bVar6) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar24) && !NAN(fVar22)) {
                bVar7 = fVar24 < fVar22;
                bVar8 = false;
              }
            }
            bVar6 = false;
            if ((bVar7 == bVar8) && (bVar6 = false, !NAN(fVar23) && !NAN(param_2 + param_4))) {
              bVar6 = fVar23 < param_2 + param_4;
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
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar20 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
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
  lVar17 = *(long *)(unaff_x20 + 0x438);
  if (lVar17 != 0) {
    (**(code **)(lVar17 + 0x18))(*(undefined8 *)(lVar17 + 0x40));
  }
  return;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_0419bfb8:
    if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_0419bfec:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_0419bff8:
  if (unaff_x25 != 0) {
    lVar17 = *(long *)(unaff_x25 + 0xb8);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar17 != 0) {
      uVar16 = 1;
      if (!bVar1) {
        uVar16 = 2;
      }
      FUN_041d286c(lVar17,*(undefined8 *)PTR_DAT_0458e098,uVar10,uVar16,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar11 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar15 = *plVar11;
            lVar17 = *(long *)puVar3;
            uVar19 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar17) {
                  puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar17,0);
LAB_0419c0e4:
            uVar19 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((uVar19 & 1) == 0) {
              if (plVar11 == (long *)0x0) goto LAB_0419c2f0;
              lVar17 = *plVar11;
              uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar19 == 0) goto LAB_0419c2c8;
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar17 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar17,0);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar17 + 0x18) = unaff_x20;
            thunk_FUN_01f51358();
            lVar18 = *plVar11;
            lVar15 = *(long *)puVar5;
            uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar15) {
                  puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar19 = uVar19 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar19 != 0);
            }
            puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_0419c170:
            lVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            plVar21 = (long *)(lVar17 + 0x10);
            *plVar21 = lVar15;
            thunk_FUN_01f51358(plVar21);
            if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar10 = *(undefined8 *)(*plVar21 + 0x18);
            uVar19 = FUN_0340eec4(uVar10,0);
            if ((uVar19 & 1) != 0) {
              if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar10 = *(undefined8 *)(*plVar21 + 0x10);
            }
            uVar19 = FUN_0340eec4(uVar10,0);
            if ((uVar19 & 1) != 0) {
              if (*plVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uStack0000000000000004 = FUN_041a76f4(*plVar21,0);
              uVar10 = FUN_035683d0(&stack0x00000004,0);
              uVar10 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar10,0);
            }
            lVar15 = *(long *)(unaff_x25 + 0xb8);
            uVar13 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar13,lVar17,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar14 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar14,lVar17,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar15,uVar10,uVar13,uVar14,0,0);
          } while( true );
        }
      }
    }
  }
LAB_0419c35c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


