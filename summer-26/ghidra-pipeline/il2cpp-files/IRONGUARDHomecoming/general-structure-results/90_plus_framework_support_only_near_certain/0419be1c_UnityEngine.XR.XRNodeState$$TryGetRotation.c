/*
FUNCTION_NAME: UnityEngine.XR.XRNodeState$$TryGetRotation
ENTRY_POINT: 0419be1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0419c004) */
/* WARNING: Removing unreachable block (ram,0x0419c2fc) */
/* WARNING: Removing unreachable block (ram,0x0419c360) */

void UnityEngine_XR_XRNodeState__TryGetRotation
               (code *param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x20;
  byte unaff_w24;
  long unaff_x25;
  long *plVar18;
  long unaff_x29;
  long *plVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar19 = *(long **)(unaff_x29 + 0xe08);
  plVar7 = (long *)(*param_1)();
  puVar2 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar15 = 0;
  do {
    lVar14 = *plVar7;
    lVar12 = *plVar19;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0419be98;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar12,0);
LAB_0419be98:
    uVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar16 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_0419bff8;
      lVar15 = *plVar7;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 == 0) goto LAB_0419bfd0;
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar7;
    lVar12 = *(long *)puVar3;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar12) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0419bef4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar12,0);
LAB_0419bef4:
    lVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (*(long *)(unaff_x20 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((unaff_w24 & *(int *)(*(long *)(unaff_x20 + 0x420) + 0x2c) == 1) != 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(char *)(lVar12 + 0x60) != '\0') {
        unaff_w24 = 0;
      }
    }
    if (lVar15 == 0) {
      if (*(long *)(unaff_x20 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(unaff_x20 + 0x400),lVar12,&stack0x00000008,*(undefined8 *)puVar2
                         );
      lVar15 = 0;
      if ((uVar16 & 1) != 0) {
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
        bVar4 = false;
        if ((param_3 <= fVar21) && (bVar4 = false, !NAN(fVar22) && !NAN(param_4))) {
          bVar4 = fVar22 < param_4;
        }
        bVar5 = true;
        bVar6 = false;
        if (bVar4) {
          bVar5 = false;
          bVar6 = true;
          if (!NAN(fVar22) && !NAN(fVar20)) {
            bVar5 = fVar22 < fVar20;
            bVar6 = false;
          }
        }
        bVar4 = false;
        if ((bVar5 == bVar6) && (bVar4 = false, !NAN(fVar21) && !NAN(param_3 + param_5))) {
          bVar4 = fVar21 < param_3 + param_5;
        }
        lVar15 = lVar12;
        if (!bVar4) {
          lVar15 = 0;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_0419bfec:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0419bff8:
  if (unaff_x25 != 0) {
    lVar15 = *(long *)(unaff_x25 + 0xb8);
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar15 != 0) {
      uVar13 = 1;
      if ((unaff_w24 & 1) == 0) {
        uVar13 = 2;
      }
      FUN_041d286c(lVar15,*(undefined8 *)PTR_DAT_0458e098,uVar9,uVar13,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar7 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar12 = *plVar7;
            lVar15 = *plVar19;
            uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar15) {
                  puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar15,0);
LAB_0419c0e4:
            uVar16 = (*(code *)*puVar8)(plVar7,puVar8[1]);
            if ((uVar16 & 1) == 0) {
              if (plVar7 == (long *)0x0) goto LAB_0419c2f0;
              lVar15 = *plVar7;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar16 == 0) goto LAB_0419c2c8;
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
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
            lVar14 = *plVar7;
            lVar12 = *(long *)puVar3;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar12) {
                  puVar8 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar12,0);
LAB_0419c170:
            lVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
            plVar18 = (long *)(lVar15 + 0x10);
            *plVar18 = lVar12;
            thunk_FUN_01f51358(plVar18);
            if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar9 = *(undefined8 *)(*plVar18 + 0x18);
            uVar16 = FUN_0340eec4(uVar9,0);
            if ((uVar16 & 1) != 0) {
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar9 = *(undefined8 *)(*plVar18 + 0x10);
            }
            uVar16 = FUN_0340eec4(uVar9,0);
            if ((uVar16 & 1) != 0) {
              if (*plVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000000._4_4_ = FUN_041a76f4(*plVar18,0);
              uVar9 = FUN_035683d0((long)&stack0x00000000 + 4,0);
              uVar9 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar9,0);
            }
            lVar12 = *(long *)(unaff_x25 + 0xb8);
            uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar10,lVar15,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar11,lVar15,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar12,uVar9,uVar10,uVar11,0,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419c2e4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0419c2f0:
  lVar15 = *(long *)(unaff_x20 + 0x438);
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))(*(undefined8 *)(lVar15 + 0x40));
  }
  return;
}


