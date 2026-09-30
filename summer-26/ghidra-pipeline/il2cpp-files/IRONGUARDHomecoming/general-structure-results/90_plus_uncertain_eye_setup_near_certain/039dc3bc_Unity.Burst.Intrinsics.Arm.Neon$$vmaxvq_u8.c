/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmaxvq_u8
ENTRY_POINT: 039dc3bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_u8
                 (code *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x29;
  
  do {
    (*param_1)(unaff_x21,param_3);
    do {
      if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(unaff_x22);
      }
      if ((unaff_w25 != 5) && (unaff_w25 != 0)) {
        return unaff_x23;
      }
      do {
        unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x888))
                                      (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x890));
        if (unaff_x19 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = *(undefined8 *)Method_System_Convert_ToUInt64__;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_03579868(uVar6,0);
        uVar1 = FUN_03583338(unaff_x19,uVar6,0);
        if ((uVar1 & 1) == 0) {
          return (long *)0x0;
        }
        uVar1 = (**(code **)(*unaff_x19 + 0x398))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3a0));
        if ((uVar1 & 1) != 0) {
          uVar6 = (**(code **)(*unaff_x19 + 0x458))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x460));
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*unaff_x27);
          }
          uVar1 = FUN_039da930(uVar6);
          if ((uVar1 & 1) != 0) {
            return unaff_x19;
          }
        }
        if (unaff_x20 == 0) goto LAB_039dc468;
        uVar1 = FUN_03583944();
      } while ((uVar1 & 1) == 0);
      plVar2 = (long *)System_Console__SetupStreams(unaff_x19,0);
      if ((plVar2 == (long *)0x0) ||
         (plVar2 = (long *)(**(code **)(*plVar2 + 0x9a8))(plVar2,*(undefined8 *)(*plVar2 + 0x9b0)),
         plVar2 == (long *)0x0)) {
LAB_039dc468:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5819) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8:
      unaff_x21 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar4 = *unaff_x21;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x29) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_039dc294;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x29,0);
LAB_039dc294:
        uVar1 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if ((uVar1 & 1) == 0) {
          unaff_w25 = 5;
          goto joined_r0x039dc360;
        }
        lVar4 = *unaff_x21;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_039dc2f0;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x24,0);
LAB_039dc2f0:
        (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar2 = (long *)FUN_039dc05c();
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar1 = FUN_03583338(plVar2,0,0);
      } while ((uVar1 & 1) == 0);
      unaff_w25 = 8;
      unaff_x23 = plVar2;
joined_r0x039dc360:
      unaff_x22 = 0;
    } while (unaff_x21 == (long *)0x0);
    unaff_x22 = 0;
    lVar4 = *unaff_x21;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_039dc3b8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(unaff_x21,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_039dc3b8:
    param_1 = (code *)*puVar3;
    param_3 = puVar3[1];
  } while( true );
}


