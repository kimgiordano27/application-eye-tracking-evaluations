/*
FUNCTION_NAME: FUN_03986c70
ENTRY_POINT: 03986c70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_21;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x0398738c) */
/* WARNING: Removing unreachable block (ram,0x03987398) */

void FUN_03986c70(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_04838535 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_4657);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_4658);
    thunk_FUN_01efb3a4(StringLiteral_4474);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
    DAT_04838535 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_UnityEngine_Component_GetComponent<Point>__;
  uVar5 = FUN_03583338(param_1,0,0);
  if ((uVar5 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      uVar12 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      uVar9 = *(undefined8 *)puVar2;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar9 = FUN_03579868(uVar9,0);
      uVar5 = FUN_03582560(uVar12,uVar9,0);
      if ((uVar5 & 1) == 0) {
        uVar12 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (param_3 != 0) {
          plVar6 = (long *)FUN_0265d924(param_3,*(undefined8 *)StringLiteral_4658);
          puVar3 = StringLiteral_4657;
          puVar2 = StringLiteral_4474;
          puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar10 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_0398721c;
                }
                uVar5 = uVar5 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_0398721c:
            uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar6 == (long *)0x0) {
                return;
              }
              lVar10 = *plVar6;
              uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar5 == 0) goto LAB_03987328;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_03987310;
            }
            lVar10 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                  puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_03987278;
                }
                uVar5 = uVar5 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar5 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03987278:
            lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar8 = *(long **)(lVar10 + 0x20);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar9 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar5 = FUN_039da930(uVar9,uVar12,0);
            if ((uVar5 & 1) == 0) {
              uVar12 = FUN_0398e68c(0);
              uVar9 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar12,uVar9);
            }
          } while( true );
        }
      }
      else if (param_3 != 0) {
        plVar6 = (long *)FUN_0265d924(param_3,*(undefined8 *)StringLiteral_4658);
        puVar4 = StringLiteral_4657;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03987034;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03987034:
          uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar6 == (long *)0x0) {
              return;
            }
            lVar10 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 == 0) goto LAB_03987154;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_0398713c;
          }
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03987090;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_03987090:
          lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar8 = *(long **)(lVar10 + 0x20);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
          uVar9 = *(undefined8 *)puVar2;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_03579868(uVar9,0);
          uVar5 = FUN_03583338(uVar12,uVar9,0);
          if ((uVar5 & 1) != 0) {
            uVar12 = FUN_0398e68c(0);
            uVar9 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar12,uVar9);
          }
        } while( true );
      }
    }
  }
  else {
    uVar12 = *(undefined8 *)puVar2;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar12 = FUN_03579868(uVar12,0);
    uVar5 = FUN_03583338(param_1,uVar12,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      uVar12 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      puVar1 = StringLiteral_4474;
      if (*(int *)(*(long *)StringLiteral_4474 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)StringLiteral_4474);
      }
      uVar5 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16(param_1,uVar12,0);
      if ((uVar5 & 1) == 0) {
        uVar12 = FUN_0398f3b0(0);
        uVar9 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar12,uVar9);
      }
      if (param_3 != 0) {
        plVar6 = (long *)FUN_0265d924(param_3,*(undefined8 *)StringLiteral_4658);
        puVar3 = StringLiteral_4657;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03986e28;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_03986e28:
          uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar6 == (long *)0x0) {
              return;
            }
            lVar10 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar5 == 0) goto LAB_03986f38;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_03986f20;
          }
          lVar10 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_03986e84;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_03986e84:
          lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar8 = *(long **)(lVar10 + 0x20);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16(param_1,uVar12,0);
          if ((uVar5 & 1) == 0) {
            uVar12 = FUN_0398f3b0(0);
            uVar9 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar12,uVar9);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_03986f20:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03986f54;
    }
  }
LAB_03986f38:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03986f54:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_03987310:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03987344;
    }
  }
LAB_03987328:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03987344:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
LAB_0398713c:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03987170;
    }
  }
LAB_03987154:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03987170:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


