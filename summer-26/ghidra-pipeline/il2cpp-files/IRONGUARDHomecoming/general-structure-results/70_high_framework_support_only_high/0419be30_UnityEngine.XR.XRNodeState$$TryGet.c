/*
FUNCTION_NAME: UnityEngine.XR.XRNodeState$$TryGet
ENTRY_POINT: 0419be30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419c004) */
/* WARNING: Removing unreachable block (ram,0x0419c2fc) */
/* WARNING: Removing unreachable block (ram,0x0419c360) */

void UnityEngine_XR_XRNodeState__TryGet
               (code *param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x20;
  byte unaff_w24;
  long unaff_x25;
  long *plVar15;
  long *unaff_x26;
  long *unaff_x28;
  long *unaff_x29;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  plVar5 = (long *)(*param_1)();
  puVar1 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = 0;
  do {
    lVar11 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x29) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0419be98;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x29,0);
LAB_0419be98:
    uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_0419bff8;
      lVar12 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_0419bfd0;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0419bef4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x28,0);
LAB_0419bef4:
    lVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (*(long *)(unaff_x20 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((unaff_w24 & *(int *)(*(long *)(unaff_x20 + 0x420) + 0x2c) == 1) != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(char *)(lVar11 + 0x60) != '\0') {
        unaff_w24 = 0;
      }
    }
    if (lVar12 == 0) {
      if (*(long *)(unaff_x20 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar13 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(unaff_x20 + 0x400),lVar11,&stack0x00000008,*(undefined8 *)puVar1
                         );
      lVar12 = 0;
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar16 = (float)FUN_042252a8(*(long *)(in_stack_00000008 + 0x10),0);
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar18 = *(float *)(unaff_x25 + 0x90);
        fVar17 = *(float *)(unaff_x25 + 0x94);
        param_4 = fVar16 + param_4;
        bVar2 = false;
        if ((param_3 <= fVar17) && (bVar2 = false, !NAN(fVar18) && !NAN(param_4))) {
          bVar2 = fVar18 < param_4;
        }
        bVar3 = true;
        bVar4 = false;
        if (bVar2) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(fVar18) && !NAN(fVar16)) {
            bVar3 = fVar18 < fVar16;
            bVar4 = false;
          }
        }
        bVar2 = false;
        if ((bVar3 == bVar4) && (bVar2 = false, !NAN(fVar17) && !NAN(param_3 + param_5))) {
          bVar2 = fVar17 < param_3 + param_5;
        }
        lVar12 = lVar11;
        if (!bVar2) {
          lVar12 = 0;
        }
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == *unaff_x26) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x26,0);
LAB_0419bfec:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0419bff8:
  if (unaff_x25 != 0) {
    lVar12 = *(long *)(unaff_x25 + 0xb8);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar12 != 0) {
      uVar10 = 1;
      if ((unaff_w24 & 1) == 0) {
        uVar10 = 2;
      }
      FUN_041d286c(lVar12,*(undefined8 *)PTR_DAT_0458e098,uVar7,uVar10,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar5 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar12 = *plVar5;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *unaff_x29) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x29,0);
LAB_0419c0e4:
            uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if ((uVar13 & 1) == 0) {
              if (plVar5 == (long *)0x0) goto LAB_0419c2f0;
              lVar12 = *plVar5;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar13 == 0) goto LAB_0419c2c8;
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar12,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar12 + 0x18) = unaff_x20;
            thunk_FUN_01f51358();
            lVar11 = *plVar5;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *unaff_x28) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x28,0);
LAB_0419c170:
            lVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            plVar15 = (long *)(lVar12 + 0x10);
            *plVar15 = lVar11;
            thunk_FUN_01f51358(plVar15);
            if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = *(undefined8 *)(*plVar15 + 0x18);
            uVar13 = FUN_0340eec4(uVar7,0);
            if ((uVar13 & 1) != 0) {
              if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar7 = *(undefined8 *)(*plVar15 + 0x10);
            }
            uVar13 = FUN_0340eec4(uVar7,0);
            if ((uVar13 & 1) != 0) {
              if (*plVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000000._4_4_ = FUN_041a76f4(*plVar15,0);
              uVar7 = FUN_035683d0((long)&stack0x00000000 + 4,0);
              uVar7 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar7,0);
            }
            lVar11 = *(long *)(unaff_x25 + 0xb8);
            uVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar8,lVar12,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar9,lVar12,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar11,uVar7,uVar8,uVar9,0,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419c2e4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0419c2f0:
  lVar12 = *(long *)(unaff_x20 + 0x438);
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40));
  }
  return;
}


