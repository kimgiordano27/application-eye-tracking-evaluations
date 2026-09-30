/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmaxvq_u16
ENTRY_POINT: 039dc42c
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


long * Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_u16(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  long lVar7;
  long *unaff_x24;
  int iVar8;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  lVar7 = *param_1;
  __cxa_end_catch();
                    /* try { // try from 039dc434 to 03adc43b has its CatchHandler @ 039dc5e4 */
  iVar8 = 0;
joined_r0x039dc360:
  do {
    if (unaff_x21 != (long *)0x0) {
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_039dc3b8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_039dc3b8:
      (*(code *)*puVar2)(unaff_x21,puVar2[1]);
    }
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar7);
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
      uVar6 = *(undefined8 *)Method_System_Convert_ToUInt64__;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_03579868(uVar6,0);
      uVar4 = FUN_03583338(unaff_x19,uVar6,0);
      if ((uVar4 & 1) == 0) {
        return (long *)0x0;
      }
      uVar4 = (**(code **)(*unaff_x19 + 0x398))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3a0));
      if ((uVar4 & 1) != 0) {
        uVar6 = (**(code **)(*unaff_x19 + 0x458))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x460));
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x27);
        }
        uVar4 = FUN_039da930(uVar6);
        if ((uVar4 & 1) != 0) {
          return unaff_x19;
        }
      }
      if (unaff_x20 == 0) goto LAB_039dc468;
      uVar4 = FUN_03583944();
    } while ((uVar4 & 1) == 0);
    plVar1 = (long *)System_Console__SetupStreams(unaff_x19,0);
    if ((plVar1 == (long *)0x0) ||
       (plVar1 = (long *)(**(code **)(*plVar1 + 0x9a8))(plVar1,*(undefined8 *)(*plVar1 + 0x9b0)),
       plVar1 == (long *)0x0)) {
LAB_039dc468:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5819) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar1,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8:
    unaff_x21 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x29) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_039dc294;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x29,0);
LAB_039dc294:
      uVar4 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if ((uVar4 & 1) == 0) {
        lVar7 = 0;
        iVar8 = 5;
        goto joined_r0x039dc360;
      }
      lVar7 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_039dc2f0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x24,0);
LAB_039dc2f0:
      (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar1 = (long *)FUN_039dc05c();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03583338(plVar1,0,0);
    } while ((uVar4 & 1) == 0);
    lVar7 = 0;
    iVar8 = 8;
    unaff_x28 = plVar1;
  } while( true );
}


