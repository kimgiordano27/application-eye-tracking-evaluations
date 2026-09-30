/*
FUNCTION_NAME: UnityEngine.XR.XRNodeState$$TryGet
ENTRY_POINT: 0419bdac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0419c004) */
/* WARNING: Removing unreachable block (ram,0x0419c2fc) */
/* WARNING: Removing unreachable block (ram,0x0419c360) */

void UnityEngine_XR_XRNodeState__TryGet
               (undefined8 param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5
               )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x20;
  byte unaff_w24;
  long unaff_x25;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  plVar8 = (long *)FUN_041a7930(param_1,0);
  if (plVar8 != (long *)0x0) {
    lVar15 = *plVar8;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0419be14;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
LAB_0419be14:
    puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = 0;
    do {
      lVar16 = *plVar8;
      lVar13 = *(long *)puVar2;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0419be98;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,0);
LAB_0419be98:
      uVar17 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar17 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_0419bff8;
        lVar15 = *plVar8;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 == 0) goto LAB_0419bfd0;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_0419bfb8;
      }
      lVar16 = *plVar8;
      lVar13 = *(long *)puVar4;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar13) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0419bef4;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,0);
LAB_0419bef4:
      lVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (*(long *)(unaff_x20 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((unaff_w24 & *(int *)(*(long *)(unaff_x20 + 0x420) + 0x2c) == 1) != 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(char *)(lVar13 + 0x60) != '\0') {
          unaff_w24 = 0;
        }
      }
      if (lVar15 == 0) {
        if (*(long *)(unaff_x20 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar17 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                           (*(long *)(unaff_x20 + 0x400),lVar13,&stack0x00000008,
                            *(undefined8 *)puVar3);
        lVar15 = 0;
        if ((uVar17 & 1) != 0) {
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar20 = (float)FUN_042252a8(*(long *)(in_stack_00000008 + 0x10),0);
          if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar22 = *(float *)(unaff_x25 + 0x90);
          fVar21 = *(float *)(unaff_x25 + 0x94);
          param_4 = fVar20 + param_4;
          bVar5 = false;
          if ((param_3 <= fVar21) && (bVar5 = false, !NAN(fVar22) && !NAN(param_4))) {
            bVar5 = fVar22 < param_4;
          }
          bVar6 = true;
          bVar7 = false;
          if (bVar5) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar22) && !NAN(fVar20)) {
              bVar6 = fVar22 < fVar20;
              bVar7 = false;
            }
          }
          bVar5 = false;
          if ((bVar6 == bVar7) && (bVar5 = false, !NAN(fVar21) && !NAN(param_3 + param_5))) {
            bVar5 = fVar21 < param_3 + param_5;
          }
          lVar15 = lVar13;
          if (!bVar5) {
            lVar15 = 0;
          }
        }
      }
    } while( true );
  }
  goto LAB_0419c35c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar18 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419c2e4:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0419c2f0:
  lVar15 = *(long *)(unaff_x20 + 0x438);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40));
  }
  return;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_0419bfb8:
    if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_0419bfec:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0419bff8:
  if (unaff_x25 != 0) {
    lVar15 = *(long *)(unaff_x25 + 0xb8);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar15 != 0) {
      uVar14 = 1;
      if ((unaff_w24 & 1) == 0) {
        uVar14 = 2;
      }
      FUN_041d286c(lVar15,*(undefined8 *)PTR_DAT_0458e098,uVar10,uVar14,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar8 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar13 = *plVar8;
            lVar15 = *(long *)puVar2;
            uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar15) {
                  puVar9 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar15,0);
LAB_0419c0e4:
            uVar17 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            if ((uVar17 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_0419c2f0;
              lVar15 = *plVar8;
              uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar17 == 0) goto LAB_0419c2c8;
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar15 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar15,0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar15 + 0x18) = unaff_x20;
            thunk_FUN_01f51358();
            lVar16 = *plVar8;
            lVar13 = *(long *)puVar4;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar13) {
                  puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar13,0);
LAB_0419c170:
            lVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
            plVar19 = (long *)(lVar15 + 0x10);
            *plVar19 = lVar13;
            thunk_FUN_01f51358(plVar19);
            if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar10 = *(undefined8 *)(*plVar19 + 0x18);
            uVar17 = FUN_0340eec4(uVar10,0);
            if ((uVar17 & 1) != 0) {
              if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar10 = *(undefined8 *)(*plVar19 + 0x10);
            }
            uVar17 = FUN_0340eec4(uVar10,0);
            if ((uVar17 & 1) != 0) {
              if (*plVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000000._4_4_ = FUN_041a76f4(*plVar19,0);
              uVar10 = FUN_035683d0((long)&stack0x00000000 + 4,0);
              uVar10 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar10,0);
            }
            lVar13 = *(long *)(unaff_x25 + 0xb8);
            uVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar11,lVar15,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar12,lVar15,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar13,uVar10,uVar11,uVar12,0,0);
          } while( true );
        }
      }
    }
  }
LAB_0419c35c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


