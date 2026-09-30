/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddlv_s32
ENTRY_POINT: 039dc074
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x039dc46c) */

long * Unity_Burst_Intrinsics_Arm_Neon__vaddlv_s32(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  
  if ((DAT_04838982 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_5819);
    thunk_FUN_01efb3a4(StringLiteral_5820);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(StringLiteral_4474);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04838982 = 1;
  }
  puVar4 = StringLiteral_5820;
  puVar3 = StringLiteral_4474;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 != (long *)0x0) {
    plVar14 = (long *)0x0;
    do {
      uVar11 = *(undefined8 *)Method_System_Convert_ToUInt64__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
      uVar5 = FUN_03583338(param_2,uVar11,0);
      if ((uVar5 & 1) == 0) {
        return (long *)0x0;
      }
      uVar5 = (**(code **)(*param_2 + 0x398))(param_2,*(undefined8 *)(*param_2 + 0x3a0));
      if ((uVar5 & 1) != 0) {
        uVar11 = (**(code **)(*param_2 + 0x458))(param_2,*(undefined8 *)(*param_2 + 0x460));
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar9);
        }
        uVar5 = FUN_039da930(uVar11,param_1);
        if ((uVar5 & 1) != 0) {
          return param_2;
        }
      }
      if (param_1 == 0) {
LAB_039dc468:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_03583944(param_1,0);
      if ((uVar5 & 1) != 0) {
        plVar6 = (long *)System_Console__SetupStreams(param_2,0);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x9a8))(plVar6,*(undefined8 *)(*plVar6 + 0x9b0))
           , plVar6 == (long *)0x0)) goto LAB_039dc468;
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_5819) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8:
        plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_039dc294;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_039dc294:
          uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar5 & 1) == 0) {
            iVar13 = 5;
            iVar12 = 5;
            goto joined_r0x039dc360;
          }
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_039dc2f0;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_039dc2f0:
          uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar8 = (long *)FUN_039dc05c(param_1,uVar11);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_03583338(plVar8,0,0);
        } while ((uVar5 & 1) == 0);
        iVar13 = 8;
        iVar12 = 8;
        plVar14 = plVar8;
joined_r0x039dc360:
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_039dc3b8;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01ecb238(plVar6,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_039dc3b8:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
          iVar12 = iVar13;
        }
        if ((iVar12 != 5) && (iVar12 != 0)) {
          return plVar14;
        }
      }
      param_2 = (long *)(**(code **)(*param_2 + 0x888))(param_2,*(undefined8 *)(*param_2 + 0x890));
    } while (param_2 != (long *)0x0);
  }
  return (long *)0x0;
}


