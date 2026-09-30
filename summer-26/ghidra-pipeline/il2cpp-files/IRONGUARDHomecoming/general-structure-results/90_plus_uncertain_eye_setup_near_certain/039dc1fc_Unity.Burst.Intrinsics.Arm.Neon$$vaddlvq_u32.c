/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddlvq_u32
ENTRY_POINT: 039dc1fc
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

long * Unity_Burst_Intrinsics_Arm_Neon__vaddlvq_u32(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x21;
  long *unaff_x24;
  int iVar8;
  int iVar9;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238(unaff_x21,param_3,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8:
        plVar2 = (long *)(*(code *)*puVar1)(unaff_x21,puVar1[1]);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x29) {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_039dc294;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x29,0);
LAB_039dc294:
          uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
          if ((uVar5 & 1) == 0) {
            iVar9 = 5;
            iVar8 = 5;
            goto joined_r0x039dc360;
          }
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_039dc2f0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x24,0);
LAB_039dc2f0:
          (*(code *)*puVar1)(plVar2,puVar1[1]);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          plVar3 = (long *)FUN_039dc05c();
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar5 = FUN_03583338(plVar3,0,0);
        } while ((uVar5 & 1) == 0);
        iVar9 = 8;
        iVar8 = 8;
        unaff_x28 = plVar3;
joined_r0x039dc360:
        if (plVar2 != (long *)0x0) {
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_039dc3b8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)
                   FUN_01ecb238(plVar2,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_039dc3b8:
          (*(code *)*puVar1)(plVar2,puVar1[1]);
          iVar8 = iVar9;
        }
        if ((iVar8 != 5) && (iVar8 != 0)) {
          return unaff_x28;
        }
        do {
          unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x888))
                                        (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x890));
          if (unaff_x19 == (long *)0x0) {
            return (long *)0x0;
          }
          uVar7 = *(undefined8 *)Method_System_Convert_ToUInt64__;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_03579868(uVar7,0);
          uVar5 = FUN_03583338(unaff_x19,uVar7,0);
          if ((uVar5 & 1) == 0) {
            return (long *)0x0;
          }
          uVar5 = (**(code **)(*unaff_x19 + 0x398))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3a0));
          if ((uVar5 & 1) != 0) {
            uVar7 = (**(code **)(*unaff_x19 + 0x458))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x460))
            ;
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*unaff_x27);
            }
            uVar5 = FUN_039da930(uVar7);
            if ((uVar5 & 1) != 0) {
              return unaff_x19;
            }
          }
          if (unaff_x20 == 0) goto LAB_039dc468;
          uVar5 = FUN_03583944();
        } while ((uVar5 & 1) == 0);
        plVar2 = (long *)System_Console__SetupStreams(unaff_x19,0);
        if ((plVar2 == (long *)0x0) ||
           (unaff_x21 = (long *)(**(code **)(*plVar2 + 0x9a8))
                                          (plVar2,*(undefined8 *)(*plVar2 + 0x9b0)),
           unaff_x21 == (long *)0x0)) {
LAB_039dc468:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        param_1 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        param_3 = *(long *)StringLiteral_5819;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


