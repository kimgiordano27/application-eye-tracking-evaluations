/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmaxv_s32
ENTRY_POINT: 039dc314
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

long * Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s32(void)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  long *unaff_x24;
  int iVar7;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x039dc314:
  plVar2 = (long *)FUN_039dc05c();
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_03583338(plVar2,0,0);
  if ((uVar3 & 1) == 0) goto LAB_039dc248;
  iVar7 = 8;
  unaff_x28 = plVar2;
  do {
    if (unaff_x21 != (long *)0x0) {
      lVar4 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_039dc3b8;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_01ecb238(unaff_x21,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_039dc3b8:
      (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    }
    if ((iVar7 != 5) && (iVar7 != 0)) {
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
      uVar3 = FUN_03583338(unaff_x19,uVar6,0);
      if ((uVar3 & 1) == 0) {
        return (long *)0x0;
      }
      uVar3 = (**(code **)(*unaff_x19 + 0x398))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3a0));
      if ((uVar3 & 1) != 0) {
        uVar6 = (**(code **)(*unaff_x19 + 0x458))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x460));
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x27);
        }
        uVar3 = FUN_039da930(uVar6);
        if ((uVar3 & 1) != 0) {
          return unaff_x19;
        }
      }
      if (unaff_x20 == 0) goto LAB_039dc468;
      uVar3 = FUN_03583944();
    } while ((uVar3 & 1) == 0);
    plVar2 = (long *)System_Console__SetupStreams(unaff_x19,0);
    if ((plVar2 == (long *)0x0) ||
       (plVar2 = (long *)(**(code **)(*plVar2 + 0x9a8))(plVar2,*(undefined8 *)(*plVar2 + 0x9b0)),
       plVar2 == (long *)0x0)) {
LAB_039dc468:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5819) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8:
    unaff_x21 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_039dc248:
    lVar4 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x29) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_039dc294;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x29,0);
LAB_039dc294:
    uVar3 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar3 & 1) != 0) break;
    iVar7 = 5;
  } while( true );
  lVar4 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_039dc2f0;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x24,0);
LAB_039dc2f0:
  (*(code *)*puVar1)(unaff_x21,puVar1[1]);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  goto code_r0x039dc314;
}


