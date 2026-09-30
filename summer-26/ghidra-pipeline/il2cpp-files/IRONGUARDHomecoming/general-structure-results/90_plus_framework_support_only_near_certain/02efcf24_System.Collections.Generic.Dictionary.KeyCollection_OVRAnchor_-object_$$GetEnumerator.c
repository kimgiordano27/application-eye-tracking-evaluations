/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRAnchor,-object>$$GetEnumerator
ENTRY_POINT: 02efcf24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02efd1ac) */
/* WARNING: Removing unreachable block (ram,0x02efd2b8) */

void System_Collections_Generic_Dictionary_KeyCollection<OVRAnchor,_object>__GetEnumerator
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *__src;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  ulong uVar11;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  lVar2 = FUN_01ecaf44(param_2);
  lVar8 = *unaff_x23;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 02efcf38 to 02ffcf3b has its CatchHandler @ 02efcf64 */
  if (uVar9 != 0) {
                    /* try { // try from 02efcf3c to 02ffcf73 has its CatchHandler @ 02efcd74 */
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02efcf78;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02efcf78:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar2 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02efcfe4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_02efcfe4:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_02efd19c;
      lVar2 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar9 == 0) goto LAB_02efd174;
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar2) {
          lVar2 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02efd05c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar2 = FUN_01ecb238(plVar4,lVar2,0);
LAB_02efd05c:
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar4,unaff_x29 + -0x30);
    memcpy(unaff_x27,unaff_x22,unaff_x21);
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    memcpy(unaff_x26,unaff_x27,unaff_x21);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar3 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar2 + 0x98) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x26;
    }
    puVar7 = *(undefined8 **)(lVar2 + 0x1e0);
    uVar5 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x34;
    (*(code *)puVar7[2])(uVar5);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      if (*(int *)(unaff_x29 + -0x34) < (int)*(undefined8 *)(unaff_x29 + -0x40)) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
        if ((uVar9 & 1) == 0) {
          if (*(long *)(unaff_x29 + -0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_039dcb94(*(long *)(unaff_x29 + -0x48),*(undefined4 *)(unaff_x29 + -0x34),0);
        }
      }
    }
    else {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039dcb94();
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02efd190;
    }
  }
LAB_02efd174:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02efd190:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_02efd19c:
  lVar2 = *(long *)(unaff_x29 + -0x48);
  uVar9 = *(ulong *)(unaff_x29 + -0x40);
  if (0 < (int)uVar9) {
    if (lVar2 == 0) {
LAB_02efd2a4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = 0;
    do {
      uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar2,uVar11 & 0xffffffff,0);
      if ((uVar6 & 1) != 0) {
        plVar4 = *(long **)(unaff_x20 + 0x18);
        if (plVar4 == (long *)0x0) goto LAB_02efd2a4;
        if (*(uint *)(plVar4 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        __src = (void *)thunk_FUN_01ee7388((long)plVar4 + uVar11 * *(uint *)(*plVar4 + 0x104) + 0x20
                                           ,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0xc0) + 0x90)
                                                     + 0x80) + 0x40);
        memcpy(unaff_x22,__src,unaff_x21);
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        puVar3 = unaff_x22;
        if (-1 < *(int *)(*(long *)(lVar8 + 0x98) + 0x28)) {
          puVar3 = (undefined8 *)*unaff_x22;
        }
        puVar7 = *(undefined8 **)(lVar8 + 0x148);
        uVar5 = *puVar7;
        *(undefined8 **)(unaff_x29 + -0x30) = puVar3;
        (*(code *)puVar7[2])(uVar5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


