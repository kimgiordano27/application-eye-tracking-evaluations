/*
FUNCTION_NAME: UnityEngine.XR.InputFeatureUsage$$Equals
ENTRY_POINT: 0419bf00
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

void UnityEngine_XR_InputFeatureUsage__Equals
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
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
    if (*(long *)(unaff_x20 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((unaff_w24 & *(int *)(*(long *)(unaff_x20 + 0x420) + 0x2c) == 1) != 0) {
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(char *)(param_5 + 0x60) != '\0') {
        unaff_w24 = 0;
      }
    }
    if (unaff_x21 == 0) {
      if (*(long *)(unaff_x20 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                        (*(long *)(unaff_x20 + 0x400),param_5,&stack0x00000008,*unaff_x19);
      unaff_x21 = 0;
      if ((uVar5 & 1) != 0) {
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
        param_3 = fVar15 + param_3;
        bVar1 = false;
        if ((param_2 <= fVar16) && (bVar1 = false, !NAN(fVar17) && !NAN(param_3))) {
          bVar1 = fVar17 < param_3;
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
        if ((bVar2 == bVar3) && (bVar1 = false, !NAN(fVar16) && !NAN(param_2 + param_4))) {
          bVar1 = fVar16 < param_2 + param_4;
        }
        unaff_x21 = param_5;
        if (!bVar1) {
          unaff_x21 = 0;
        }
      }
    }
    lVar11 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0419be98;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0419be98:
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_0419bff8;
      lVar11 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 == 0) goto LAB_0419bfd0;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0419bef4;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0419bef4:
    param_5 = (*(code *)*puVar4)();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar13 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0419bfec:
  (*(code *)*puVar4)();
LAB_0419bff8:
  if (unaff_x25 != 0) {
    lVar11 = *(long *)(unaff_x25 + 0xb8);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar11 != 0) {
      uVar10 = 1;
      if ((unaff_w24 & 1) == 0) {
        uVar10 = 2;
      }
      FUN_041d286c(lVar11,*(undefined8 *)PTR_DAT_0458e098,uVar6,uVar10,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar7 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar11 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x29) {
                  puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x29,0);
LAB_0419c0e4:
            uVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar7 == (long *)0x0) goto LAB_0419c2f0;
              lVar11 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar5 == 0) goto LAB_0419c2c8;
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar11,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar11 + 0x18) = unaff_x20;
            thunk_FUN_01f51358();
            lVar12 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar5 != 0) {
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *unaff_x28) {
                  puVar4 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar5 = uVar5 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x28,0);
LAB_0419c170:
            lVar12 = (*(code *)*puVar4)(plVar7,puVar4[1]);
            plVar14 = (long *)(lVar11 + 0x10);
            *plVar14 = lVar12;
            thunk_FUN_01f51358(plVar14);
            if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar6 = *(undefined8 *)(*plVar14 + 0x18);
            uVar5 = FUN_0340eec4(uVar6,0);
            if ((uVar5 & 1) != 0) {
              if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar6 = *(undefined8 *)(*plVar14 + 0x10);
            }
            uVar5 = FUN_0340eec4(uVar6,0);
            if ((uVar5 & 1) != 0) {
              if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000000._4_4_ = FUN_041a76f4(*plVar14,0);
              uVar6 = FUN_035683d0((long)&stack0x00000000 + 4,0);
              uVar6 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar6,0);
            }
            lVar12 = *(long *)(unaff_x25 + 0xb8);
            uVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar8,lVar11,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar9,lVar11,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar12,uVar6,uVar8,uVar9,0,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar13 = piVar13 + 4;
    if (uVar5 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419c2e4:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
LAB_0419c2f0:
  lVar11 = *(long *)(unaff_x20 + 0x438);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40));
  }
  return;
}


