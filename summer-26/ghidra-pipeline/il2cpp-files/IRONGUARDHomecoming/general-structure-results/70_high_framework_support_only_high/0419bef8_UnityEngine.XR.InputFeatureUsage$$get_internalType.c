/*
FUNCTION_NAME: UnityEngine.XR.InputFeatureUsage$$get_internalType
ENTRY_POINT: 0419bef8
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


/* WARNING: Removing unreachable block (ram,0x0419c2fc) */
/* WARNING: Removing unreachable block (ram,0x0419c360) */
/* WARNING: Removing unreachable block (ram,0x0419c004) */

void UnityEngine_XR_InputFeatureUsage__get_internalType
               (code *param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  byte unaff_w24;
  long unaff_x25;
  long *plVar14;
  long *unaff_x26;
  long *unaff_x28;
  long *unaff_x29;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    lVar5 = (*param_1)();
    if (*(long *)(unaff_x20 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((unaff_w24 & *(int *)(*(long *)(unaff_x20 + 0x420) + 0x2c) == 1) != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(char *)(lVar5 + 0x60) != '\0') {
        unaff_w24 = 0;
      }
    }
    if (unaff_x21 == 0) {
      if (*(long *)(unaff_x20 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                        (*(long *)(unaff_x20 + 0x400),lVar5,&stack0x00000008,*unaff_x19);
      unaff_x21 = 0;
      if ((uVar6 & 1) != 0) {
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar15 = (float)FUN_042252a8(*(long *)(in_stack_00000008 + 0x10),0);
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar17 = *(float *)(unaff_x25 + 0x90);
        fVar16 = *(float *)(unaff_x25 + 0x94);
        param_4 = fVar15 + param_4;
        bVar1 = false;
        if ((param_3 <= fVar16) && (bVar1 = false, !NAN(fVar17) && !NAN(param_4))) {
          bVar1 = fVar17 < param_4;
        }
        bVar2 = true;
        bVar3 = false;
        if (bVar1) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar17) && !NAN(fVar15)) {
            bVar2 = fVar17 < fVar15;
            bVar3 = false;
          }
        }
        bVar1 = false;
        if ((bVar2 == bVar3) && (bVar1 = false, !NAN(fVar16) && !NAN(param_3 + param_5))) {
          bVar1 = fVar16 < param_3 + param_5;
        }
        unaff_x21 = lVar5;
        if (!bVar1) {
          unaff_x21 = 0;
        }
      }
    }
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0419be98;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0419be98:
    uVar6 = (*(code *)*puVar4)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_0419bff8;
      lVar5 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0419bfd0;
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0419bef4;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0419bef4:
    param_1 = (code *)*puVar4;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar13 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0419bfec:
  (*(code *)*puVar4)();
LAB_0419bff8:
  if (unaff_x25 != 0) {
    lVar5 = *(long *)(unaff_x25 + 0xb8);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar5 != 0) {
      uVar11 = 1;
      if ((unaff_w24 & 1) == 0) {
        uVar11 = 2;
      }
      FUN_041d286c(lVar5,*(undefined8 *)PTR_DAT_0458e098,uVar7,uVar11,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar8 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar5 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x29) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x29,0);
LAB_0419c0e4:
            uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_0419c2f0;
              lVar5 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 == 0) goto LAB_0419c2c8;
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar5,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar5 + 0x18) = unaff_x20;
            thunk_FUN_01f51358();
            lVar12 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x28) {
                  puVar4 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x28,0);
LAB_0419c170:
            lVar12 = (*(code *)*puVar4)(plVar8,puVar4[1]);
            plVar14 = (long *)(lVar5 + 0x10);
            *plVar14 = lVar12;
            thunk_FUN_01f51358(plVar14);
            if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = *(undefined8 *)(*plVar14 + 0x18);
            uVar6 = FUN_0340eec4(uVar7,0);
            if ((uVar6 & 1) != 0) {
              if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar7 = *(undefined8 *)(*plVar14 + 0x10);
            }
            uVar6 = FUN_0340eec4(uVar7,0);
            if ((uVar6 & 1) != 0) {
              if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000000._4_4_ = FUN_041a76f4(*plVar14,0);
              uVar7 = FUN_035683d0((long)&stack0x00000000 + 4,0);
              uVar7 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar7,0);
            }
            lVar12 = *(long *)(unaff_x25 + 0xb8);
            uVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar9,lVar5,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar10,lVar5,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar12,uVar7,uVar9,uVar10,0,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419c2e4:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_0419c2f0:
  lVar5 = *(long *)(unaff_x20 + 0x438);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
  }
  return;
}


