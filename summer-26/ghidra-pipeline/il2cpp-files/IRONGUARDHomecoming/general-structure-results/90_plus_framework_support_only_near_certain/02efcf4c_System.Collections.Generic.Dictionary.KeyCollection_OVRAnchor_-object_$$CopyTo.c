/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRAnchor,-object>$$CopyTo
ENTRY_POINT: 02efcf4c
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

void System_Collections_Generic_Dictionary_KeyCollection<OVRAnchor,_object>__CopyTo
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__src;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  ulong uVar11;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
                    /* catch() { ... } // from try @ 02efcf38 with catch @ 02efcf64 */
      puVar2 = (undefined8 *)FUN_01ecb238();
      goto LAB_02efcf78;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
                    /* try { // try from 02efcf74 to 02ffcf7b has its CatchHandler @ 02efcf90 */
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_02efcf78:
                    /* try { // try from 02efcf7c to 02ffcf87 has its CatchHandler @ 02efcd74 */
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 02efcf88 to 02ffcf8f has its CatchHandler @ 02efcf90 */
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02efcf74 with catch @ 02efcf90
                       catch(type#2 @ 00000000) { ... } // from try @ 02efcf88 with catch @ 02efcf90
                        */
  do {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02efcfe4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_02efcfe4:
    uVar9 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_02efd19c;
      lVar7 = *plVar3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_02efd174;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 02efd028 to 02ffd0cb has its CatchHandler @ 02efd028
                       catch() { ... } // from try @ 02efd028 with catch @ 02efd028
                       catch() { ... } // from try @ 02efd0e8 with catch @ 02efd028
                       catch() { ... } // from try @ 02efd11c with catch @ 02efd028
                       catch() { ... } // from try @ 02efd144 with catch @ 02efd028
                       catch() { ... } // from try @ 02efd184 with catch @ 02efd028 */
        if (*(long *)(piVar10 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02efd05c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar7 = FUN_01ecb238(plVar3,lVar7,0);
LAB_02efd05c:
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar3,unaff_x29 + -0x30);
    memcpy(unaff_x27,unaff_x22,unaff_x21);
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    memcpy(unaff_x26,unaff_x27,unaff_x21);
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar2 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x98) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x26;
    }
    puVar6 = *(undefined8 **)(lVar7 + 0x1e0);
    uVar4 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar2;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x34;
    (*(code *)puVar6[2])(uVar4);
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
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_02efd190;
    }
  }
LAB_02efd174:
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02efd190:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_02efd19c:
  lVar7 = *(long *)(unaff_x29 + -0x48);
  uVar9 = *(ulong *)(unaff_x29 + -0x40);
  if (0 < (int)uVar9) {
    if (lVar7 == 0) {
LAB_02efd2a4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = 0;
    do {
      uVar5 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar7,uVar11 & 0xffffffff,0);
      if ((uVar5 & 1) != 0) {
        plVar3 = *(long **)(unaff_x20 + 0x18);
        if (plVar3 == (long *)0x0) goto LAB_02efd2a4;
        if (*(uint *)(plVar3 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        __src = (void *)thunk_FUN_01ee7388((long)plVar3 + uVar11 * *(uint *)(*plVar3 + 0x104) + 0x20
                                           ,*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20
                                                                                   ) + 0xc0) + 0x90)
                                                     + 0x80) + 0x40);
        memcpy(unaff_x22,__src,unaff_x21);
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        puVar2 = unaff_x22;
        if (-1 < *(int *)(*(long *)(lVar8 + 0x98) + 0x28)) {
          puVar2 = (undefined8 *)*unaff_x22;
        }
        puVar6 = *(undefined8 **)(lVar8 + 0x148);
        uVar4 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x30) = puVar2;
        (*(code *)puVar6[2])(uVar4);
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


