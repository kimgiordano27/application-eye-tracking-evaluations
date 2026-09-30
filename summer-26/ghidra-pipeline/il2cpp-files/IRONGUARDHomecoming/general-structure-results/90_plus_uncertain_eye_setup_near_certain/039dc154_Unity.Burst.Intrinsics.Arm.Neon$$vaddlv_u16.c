/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddlv_u16
ENTRY_POINT: 039dc154
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039dc46c) */

long * Unity_Burst_Intrinsics_Arm_Neon__vaddlv_u16(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  code *in_x9;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  int iVar8;
  int iVar9;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  while( true ) {
    uVar1 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x3a0));
    if ((uVar1 & 1) != 0) {
      uVar2 = (**(code **)(*unaff_x19 + 0x458))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x460));
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x27);
      }
      uVar1 = FUN_039da930(uVar2);
      if ((uVar1 & 1) != 0) {
        return unaff_x19;
      }
    }
    if (unaff_x20 == 0) break;
    uVar1 = FUN_03583944();
    if ((uVar1 & 1) != 0) {
      plVar3 = (long *)System_Console__SetupStreams(unaff_x19,0);
      if ((plVar3 == (long *)0x0) ||
         (plVar3 = (long *)(**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0)),
         plVar3 == (long *)0x0)) break;
      lVar6 = *plVar3;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar1 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_5819) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8;
          }
          uVar1 = uVar1 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar6 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x29) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_039dc294;
            }
            uVar1 = uVar1 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x29,0);
LAB_039dc294:
        uVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar1 & 1) == 0) {
          iVar9 = 5;
          iVar8 = 5;
          goto joined_r0x039dc360;
        }
        lVar6 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_039dc2f0;
            }
            uVar1 = uVar1 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x24,0);
LAB_039dc2f0:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_039dc05c();
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar1 = FUN_03583338(plVar5,0,0);
      } while ((uVar1 & 1) == 0);
      iVar9 = 8;
      iVar8 = 8;
      unaff_x28 = plVar5;
joined_r0x039dc360:
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_039dc3b8;
            }
            uVar1 = uVar1 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_039dc3b8:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
        iVar8 = iVar9;
      }
      if ((iVar8 != 5) && (iVar8 != 0)) {
        return unaff_x28;
      }
    }
    param_2 = (long *)(**(code **)(*unaff_x19 + 0x888))
                                (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x890));
    if (param_2 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar2 = *(undefined8 *)Method_System_Convert_ToUInt64__;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_03579868(uVar2,0);
    uVar1 = FUN_03583338(param_2,uVar2,0);
    if ((uVar1 & 1) == 0) {
      return (long *)0x0;
    }
    param_1 = *param_2;
    in_x9 = *(code **)(param_1 + 0x398);
    unaff_x19 = param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


