/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmaxvq_s8
ENTRY_POINT: 039dc26c
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


/* WARNING: Removing unreachable block (ram,0x039dc46c) */

long * Unity_Burst_Intrinsics_Arm_Neon__vmaxvq_s8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  long *unaff_x24;
  int iVar7;
  int iVar8;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x039dc26c:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_039dc260;
LAB_039dc278:
  puVar1 = (undefined8 *)FUN_01ecb238(unaff_x21,param_3,0);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      iVar8 = 5;
      iVar7 = 5;
joined_r0x039dc360:
      if (unaff_x21 != (long *)0x0) {
        lVar4 = *unaff_x21;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_039dc3b8;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_01ecb238(unaff_x21,
                              *(long *)
                               Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_039dc3b8:
        (*(code *)*puVar1)(unaff_x21,puVar1[1]);
        iVar7 = iVar8;
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
        uVar2 = FUN_03583338(unaff_x19,uVar6,0);
        if ((uVar2 & 1) == 0) {
          return (long *)0x0;
        }
        uVar2 = (**(code **)(*unaff_x19 + 0x398))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x3a0));
        if ((uVar2 & 1) != 0) {
          uVar6 = (**(code **)(*unaff_x19 + 0x458))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x460));
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*unaff_x27);
          }
          uVar2 = FUN_039da930(uVar6);
          if ((uVar2 & 1) != 0) {
            return unaff_x19;
          }
        }
        if (unaff_x20 == 0) goto LAB_039dc468;
        uVar2 = FUN_03583944();
      } while ((uVar2 & 1) == 0);
      plVar3 = (long *)System_Console__SetupStreams(unaff_x19,0);
      if ((plVar3 == (long *)0x0) ||
         (plVar3 = (long *)(**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(*plVar3 + 0x9b0)),
         plVar3 == (long *)0x0)) {
LAB_039dc468:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_5819) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)StringLiteral_5819,0);
Unity_Burst_Intrinsics_Arm_Neon__vmaxv_s8:
      unaff_x21 = (long *)(*(code *)*puVar1)(plVar3,puVar1[1]);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      lVar4 = *unaff_x21;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_039dc2f0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x24,0);
LAB_039dc2f0:
      (*(code *)*puVar1)(unaff_x21,puVar1[1]);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar3 = (long *)FUN_039dc05c();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_03583338(plVar3,0,0);
      if ((uVar2 & 1) != 0) {
        iVar8 = 8;
        iVar7 = 8;
        unaff_x28 = plVar3;
        goto joined_r0x039dc360;
      }
    }
    param_1 = *unaff_x21;
    param_3 = *unaff_x29;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_039dc278;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_039dc260:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x039dc26c;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


