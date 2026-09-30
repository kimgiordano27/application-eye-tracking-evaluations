/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<OVRAnchor,-object>$$.ctor
ENTRY_POINT: 02efcee4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02efd1ac) */
/* WARNING: Removing unreachable block (ram,0x02efd2b8) */

void System_Collections_Generic_Dictionary_KeyCollection<OVRAnchor,_object>___ctor
               (void *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *__src;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar12;
  ulong uVar13;
  undefined8 *unaff_x26;
  void *unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  memset(param_1,param_2,unaff_x28);
  lVar3 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_039dcb20();
  plVar12 = *(long **)(unaff_x29 + -0x50);
  if (plVar12 != (long *)0x0) {
                    /* try { // try from 02efcf10 to 02ffcf13 has its CatchHandler @ 02efcf18 */
                    /* try { // try from 02efcf14 to 02ffcf37 has its CatchHandler @ 02efcd74 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efcf10 with catch @ 02efcf18
                        */
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efce58 with catch @ 02efcf1c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02efce44 with catch @ 02efcf20
                        */
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02efcf78;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar12,lVar7,0);
LAB_02efcf78:
    plVar12 = (long *)(*(code *)*puVar4)(plVar12,puVar4[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02efcfe4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar2,0);
LAB_02efcfe4:
      uVar10 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto LAB_02efd19c;
        lVar3 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar10 == 0) goto LAB_02efd174;
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_02efd15c;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            lVar7 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_02efd05c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar12,lVar7,0);
LAB_02efd05c:
      *(undefined8 **)(unaff_x29 + -0x30) = unaff_x22;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar12,unaff_x29 + -0x30);
      memcpy(unaff_x27,unaff_x22,unaff_x21);
      *(undefined4 *)(unaff_x29 + -0x34) = 0;
      memcpy(unaff_x26,unaff_x27,unaff_x21);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar4 = unaff_x26;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x98) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x26;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0x1e0);
      uVar5 = *puVar8;
      *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x34;
      (*(code *)puVar8[2])(uVar5);
      iVar1 = *(int *)(unaff_x29 + -0x34);
      if (*(char *)(unaff_x29 + -0xc) == '\0') {
        if (iVar1 < (int)*(undefined8 *)(unaff_x29 + -0x40)) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar10 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar3,iVar1,0);
          if ((uVar10 & 1) == 0) {
            if (*(long *)(unaff_x29 + -0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94(*(long *)(unaff_x29 + -0x48),*(undefined4 *)(unaff_x29 + -0x34),0);
          }
        }
      }
      else {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar3,iVar1,0);
      }
    } while( true );
  }
LAB_02efd2a4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_02efd15c:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02efd190;
    }
  }
LAB_02efd174:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02efd190:
  (*(code *)*puVar4)(plVar12,puVar4[1]);
LAB_02efd19c:
  lVar3 = *(long *)(unaff_x29 + -0x48);
  uVar10 = *(ulong *)(unaff_x29 + -0x40);
  if (0 < (int)uVar10) {
    if (lVar3 == 0) goto LAB_02efd2a4;
    uVar13 = 0;
    do {
      uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar3,uVar13 & 0xffffffff,0);
      if ((uVar6 & 1) != 0) {
        plVar12 = *(long **)(unaff_x20 + 0x18);
        if (plVar12 == (long *)0x0) goto LAB_02efd2a4;
        if (*(uint *)(plVar12 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        __src = (void *)thunk_FUN_01ee7388((long)plVar12 +
                                           uVar13 * *(uint *)(*plVar12 + 0x104) + 0x20,
                                           *(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20)
                                                                        + 0xc0) + 0x90) + 0x80) +
                                           0x40);
        memcpy(unaff_x22,__src,unaff_x21);
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        puVar4 = unaff_x22;
        if (-1 < *(int *)(*(long *)(lVar7 + 0x98) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x22;
        }
        puVar8 = *(undefined8 **)(lVar7 + 0x148);
        uVar5 = *puVar8;
        *(undefined8 **)(unaff_x29 + -0x30) = puVar4;
        (*(code *)puVar8[2])(uVar5);
      }
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


