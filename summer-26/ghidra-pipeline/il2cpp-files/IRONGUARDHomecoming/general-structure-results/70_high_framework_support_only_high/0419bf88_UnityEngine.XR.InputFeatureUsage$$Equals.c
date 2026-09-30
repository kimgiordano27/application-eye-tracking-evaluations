/*
FUNCTION_NAME: UnityEngine.XR.InputFeatureUsage$$Equals
ENTRY_POINT: 0419bf88
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

void UnityEngine_XR_InputFeatureUsage__Equals
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  char in_NG;
  bool bVar1;
  char in_OV;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  byte unaff_w24;
  long unaff_x25;
  long *plVar12;
  long *unaff_x26;
  long *unaff_x28;
  long *unaff_x29;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  do {
    bVar1 = false;
    if ((in_NG == in_OV) && (bVar1 = false, !NAN(param_5) && !NAN(param_1))) {
      bVar1 = param_5 < param_1;
    }
    if (!bVar1) {
      unaff_x23 = 0;
    }
    do {
      do {
        lVar8 = *unaff_x22;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x29) {
              puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0419be98;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0419be98:
        uVar10 = (*(code *)*puVar2)();
        if ((uVar10 & 1) == 0) {
          if (unaff_x22 == (long *)0x0) goto LAB_0419bff8;
          lVar8 = *unaff_x22;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_0419bfd0;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_0419bfb8;
        }
        lVar8 = *unaff_x22;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x28) {
              puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0419bef4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0419bef4:
        lVar8 = (*(code *)*puVar2)();
        if (*(long *)(unaff_x20 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((unaff_w24 & *(int *)(*(long *)(unaff_x20 + 0x420) + 0x2c) == 1) != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(char *)(lVar8 + 0x60) != '\0') {
            unaff_w24 = 0;
          }
        }
      } while (unaff_x23 != 0);
      if (*(long *)(unaff_x20 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (*(long *)(unaff_x20 + 0x400),lVar8,&stack0x00000008,*unaff_x19);
      unaff_x23 = 0;
    } while ((uVar10 & 1) == 0);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(in_stack_00000008 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar13 = (float)FUN_042252a8(*(long *)(in_stack_00000008 + 0x10),0);
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar14 = *(float *)(unaff_x25 + 0x90);
    param_5 = *(float *)(unaff_x25 + 0x94);
    param_3 = fVar13 + param_3;
    bVar1 = false;
    if ((param_2 <= param_5) && (bVar1 = false, !NAN(fVar14) && !NAN(param_3))) {
      bVar1 = fVar14 < param_3;
    }
    in_NG = true;
    in_OV = '\0';
    if (bVar1) {
      in_NG = false;
      in_OV = '\x01';
      if (!NAN(fVar14) && !NAN(fVar13)) {
        in_NG = fVar14 < fVar13;
        in_OV = '\0';
      }
    }
    param_1 = param_2 + param_4;
    unaff_x23 = lVar8;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0419bfb8:
    if (*(long *)(piVar11 + -2) == *unaff_x26) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
  }
LAB_0419bfd0:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_0419bfec:
  (*(code *)*puVar2)();
LAB_0419bff8:
  if (unaff_x25 != 0) {
    lVar8 = *(long *)(unaff_x25 + 0xb8);
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar8 != 0) {
      uVar7 = 1;
      if ((unaff_w24 & 1) == 0) {
        uVar7 = 2;
      }
      FUN_041d286c(lVar8,*(undefined8 *)PTR_DAT_0458e098,uVar3,uVar7,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar4 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar8 = *plVar4;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x29) {
                  puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x29,0);
LAB_0419c0e4:
            uVar10 = (*(code *)*puVar2)(plVar4,puVar2[1]);
            if ((uVar10 & 1) == 0) {
              if (plVar4 == (long *)0x0) goto LAB_0419c2f0;
              lVar8 = *plVar4;
              uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar10 == 0) goto LAB_0419c2c8;
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar8 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar8,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar8 + 0x18) = unaff_x20;
            thunk_FUN_01f51358();
            lVar9 = *plVar4;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x28) {
                  puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar2 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x28,0);
LAB_0419c170:
            lVar9 = (*(code *)*puVar2)(plVar4,puVar2[1]);
            plVar12 = (long *)(lVar8 + 0x10);
            *plVar12 = lVar9;
            thunk_FUN_01f51358(plVar12);
            if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar3 = *(undefined8 *)(*plVar12 + 0x18);
            uVar10 = FUN_0340eec4(uVar3,0);
            if ((uVar10 & 1) != 0) {
              if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar3 = *(undefined8 *)(*plVar12 + 0x10);
            }
            uVar10 = FUN_0340eec4(uVar3,0);
            if ((uVar10 & 1) != 0) {
              if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000000._4_4_ = FUN_041a76f4(*plVar12,0);
              uVar3 = FUN_035683d0((long)&stack0x00000000 + 4,0);
              uVar3 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar3,0);
            }
            lVar9 = *(long *)(unaff_x25 + 0xb8);
            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar5,lVar8,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar6,lVar8,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar9,uVar3,uVar5,uVar6,0,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419c2e4:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
LAB_0419c2f0:
  lVar8 = *(long *)(unaff_x20 + 0x438);
  if (lVar8 != 0) {
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
  }
  return;
}


