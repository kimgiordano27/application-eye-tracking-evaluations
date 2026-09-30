/*
FUNCTION_NAME: System.Net.WebConnection.<>c$$<Connect>b__16_1
ENTRY_POINT: 03986cb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x0398738c) */
/* WARNING: Removing unreachable block (ram,0x03987398) */

void System_Net_WebConnection_<>c__<Connect>b__16_1(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long *unaff_x24;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(StringLiteral_4657);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(StringLiteral_4658);
  thunk_FUN_01efb3a4(StringLiteral_4474);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Point>__);
  *(undefined1 *)(unaff_x21 + 0x535) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_UnityEngine_Component_GetComponent<Point>__;
  uVar4 = FUN_03583338();
  if ((uVar4 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      uVar11 = (**(code **)(*unaff_x20 + 0x188))();
      uVar8 = *(undefined8 *)puVar2;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x24);
      }
      uVar8 = FUN_03579868(uVar8,0);
      uVar4 = FUN_03582560(uVar11,uVar8,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = (**(code **)(*unaff_x20 + 0x188))();
        if (unaff_x19 != 0) {
          plVar5 = (long *)FUN_0265d924();
          puVar3 = StringLiteral_4657;
          puVar1 = StringLiteral_4474;
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar9 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_0398721c;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0398721c:
            uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if ((uVar4 & 1) == 0) {
              if (plVar5 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar5;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 == 0) goto LAB_03987328;
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_03987310;
            }
            lVar9 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_03987278;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03987278:
            lVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            plVar7 = *(long **)(lVar9 + 0x20);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar8 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar4 = FUN_039da930(uVar8,uVar11,0);
            if ((uVar4 & 1) == 0) {
              uVar11 = FUN_0398e68c(0);
              uVar8 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar11,uVar8);
            }
          } while( true );
        }
      }
      else if (unaff_x19 != 0) {
        plVar5 = (long *)FUN_0265d924();
        puVar3 = StringLiteral_4657;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03987034;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03987034:
          uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar4 & 1) == 0) {
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar9 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 == 0) goto LAB_03987154;
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_0398713c;
          }
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03987090;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03987090:
          lVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar7 = *(long **)(lVar9 + 0x20);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
          uVar8 = *(undefined8 *)puVar2;
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar8 = FUN_03579868(uVar8,0);
          uVar4 = FUN_03583338(uVar11,uVar8,0);
          if ((uVar4 & 1) != 0) {
            uVar11 = FUN_0398e68c(0);
            uVar8 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,uVar8);
          }
        } while( true );
      }
    }
  }
  else {
    uVar11 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar11,0);
    uVar4 = FUN_03583338();
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
      (**(code **)(*unaff_x20 + 0x188))();
      puVar2 = StringLiteral_4474;
      if (*(int *)(*(long *)StringLiteral_4474 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)StringLiteral_4474);
      }
      uVar4 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16();
      if ((uVar4 & 1) == 0) {
        uVar11 = FUN_0398f3b0(0);
        uVar8 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar11,uVar8);
      }
      if (unaff_x19 != 0) {
        plVar5 = (long *)FUN_0265d924();
        puVar3 = StringLiteral_4657;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03986e28;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03986e28:
          uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar4 & 1) == 0) {
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar9 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 == 0) goto LAB_03986f38;
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_03986f20;
          }
          lVar9 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03986e84;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03986e84:
          lVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar7 = *(long **)(lVar9 + 0x20);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = Unity_Burst_Intrinsics_Arm_Neon__vqdmull_high_laneq_s16();
          if ((uVar4 & 1) == 0) {
            uVar11 = FUN_0398f3b0(0);
            uVar8 = thunk_FUN_01efb3a4(StringLiteral_4659);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,uVar8);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_03986f20:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03986f54;
    }
  }
LAB_03986f38:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03986f54:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_03987310:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03987344;
    }
  }
LAB_03987328:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03987344:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_0398713c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03987170;
    }
  }
LAB_03987154:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03987170:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


