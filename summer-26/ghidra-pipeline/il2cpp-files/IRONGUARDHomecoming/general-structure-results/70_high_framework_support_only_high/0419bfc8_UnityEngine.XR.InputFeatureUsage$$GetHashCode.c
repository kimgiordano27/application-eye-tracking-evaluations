/*
FUNCTION_NAME: UnityEngine.XR.InputFeatureUsage$$GetHashCode
ENTRY_POINT: 0419bfc8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419c2fc) */

void UnityEngine_XR_InputFeatureUsage__GetHashCode(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  int unaff_w19;
  long unaff_x20;
  long lVar10;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long *plVar11;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_0419bfec;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0419bfec:
  (*(code *)*puVar1)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(unaff_x23);
  }
  if ((unaff_w19 != 10) && (unaff_w19 != 0)) {
    return;
  }
  if (unaff_x25 != 0) {
    lVar10 = *(long *)(unaff_x25 + 0xb8);
    uVar2 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    if (lVar10 != 0) {
      uVar6 = 1;
      if ((unaff_x24 & 1) == 0) {
        uVar6 = 2;
      }
      FUN_041d286c(lVar10,*(undefined8 *)PTR_DAT_0458e098,uVar2,uVar6,0);
      if (*(long *)(unaff_x25 + 0xb8) != 0) {
        FUN_041d29a4(*(long *)(unaff_x25 + 0xb8),0,0);
        if (*(long *)(unaff_x20 + 0x420) != 0) {
          plVar3 = (long *)FUN_041a9ce0(*(long *)(unaff_x20 + 0x420),0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar10 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x29) {
                  puVar1 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0419c0e4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x29,0);
LAB_0419c0e4:
            uVar8 = (*(code *)*puVar1)(plVar3,puVar1[1]);
            if ((uVar8 & 1) == 0) {
              if (plVar3 == (long *)0x0) goto LAB_0419c2f0;
              lVar10 = *plVar3;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 == 0) goto LAB_0419c2c8;
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_0419c2b0;
            }
            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e088);
            FUN_035ac8e8(lVar10,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            *(long *)(lVar10 + 0x18) = unaff_x20;
            thunk_FUN_01f51358();
            lVar7 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x28) {
                  puVar1 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0419c170;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x28,0);
LAB_0419c170:
            lVar7 = (*(code *)*puVar1)(plVar3,puVar1[1]);
            plVar11 = (long *)(lVar10 + 0x10);
            *plVar11 = lVar7;
            thunk_FUN_01f51358(plVar11);
            if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar2 = *(undefined8 *)(*plVar11 + 0x18);
            uVar8 = FUN_0340eec4(uVar2,0);
            if ((uVar8 & 1) != 0) {
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar2 = *(undefined8 *)(*plVar11 + 0x10);
            }
            uVar8 = FUN_0340eec4(uVar2,0);
            if ((uVar8 & 1) != 0) {
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              in_stack_00000000._4_4_ = FUN_041a76f4(*plVar11,0);
              uVar2 = FUN_035683d0((long)&stack0x00000000 + 4,0);
              uVar2 = FUN_03405678(*(undefined8 *)PTR_DAT_0458e090,uVar2,0);
            }
            lVar7 = *(long *)(unaff_x25 + 0xb8);
            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e058);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar4,lVar10,*(undefined8 *)PTR_DAT_0458e078,0);
            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458e060);
            FUN_02e6c510(uVar5,lVar10,*(undefined8 *)PTR_DAT_0458e080,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_041d2768(lVar7,uVar2,uVar4,uVar5,0,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0419c2b0:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0419c2e4;
    }
  }
LAB_0419c2c8:
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0419c2e4:
  (*(code *)*puVar1)(plVar3,puVar1[1]);
LAB_0419c2f0:
  lVar10 = *(long *)(unaff_x20 + 0x438);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40));
  }
  return;
}


