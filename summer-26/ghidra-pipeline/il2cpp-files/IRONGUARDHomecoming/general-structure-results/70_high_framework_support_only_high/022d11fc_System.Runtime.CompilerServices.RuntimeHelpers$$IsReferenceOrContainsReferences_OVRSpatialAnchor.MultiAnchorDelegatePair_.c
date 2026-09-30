/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRSpatialAnchor.MultiAnchorDelegatePair>
ENTRY_POINT: 022d11fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d1448) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRSpatialAnchor_MultiAnchorDelegatePair>
               (long param_1)

{
  void *__src;
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long in_x9;
  ulong uVar6;
  ulong in_x10;
  int *piVar7;
  uint in_w11;
  long *unaff_x19;
  void *unaff_x21;
  long lVar8;
  undefined8 *unaff_x24;
  int unaff_w26;
  long unaff_x27;
  long *plVar9;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    if (((uint)in_x10 <= in_w11) && (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1)
       ) {
      lVar8 = *(long *)(unaff_x27 + 0x38);
      __src = unaff_x21;
      if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
        __src = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x24,__src,*(size_t *)(unaff_x29 + -0x30));
      if (*(long *)(unaff_x29 + -0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      puVar5 = unaff_x24;
      if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x24;
      }
      puVar3 = *(undefined8 **)(lVar8 + 0x10);
      uVar1 = *puVar3;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
      (*(code *)puVar3[2])
                (uVar1,puVar3,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18,unaff_x29 + -0x10
                );
      plVar9 = *(long **)(unaff_x29 + -0x10);
      uVar1 = (**(code **)(*unaff_x28 + 0x398))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x3a0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar1,uVar1);
      }
      FUN_041d4560(plVar9,uVar1,0);
      plVar2 = (long *)(**(code **)(*unaff_x28 + 0x398))
                                 (unaff_x28,*(undefined8 *)(*unaff_x28 + 0x3a0));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar2 + 0x198))(plVar2,plVar9,*(undefined8 *)(*plVar2 + 0x1a0));
      lVar8 = (**(code **)(*unaff_x28 + 0x278))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x280));
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = FUN_041e7f94(lVar8,0);
      if (lVar8 == 0) {
        uVar6 = FUN_041d3f88(plVar9,0);
        iVar4 = 4;
        if ((uVar6 & 1) == 0) {
          iVar4 = 10;
        }
      }
      else {
        FUN_041c5278(*(undefined8 *)(unaff_x29 + -0x38),unaff_x28,0);
        iVar4 = 4;
      }
      lVar8 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_022d1388;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_022d1388:
      (*(code *)*puVar5)(plVar9,puVar5[1]);
      if ((iVar4 != 10) && (iVar4 != 0)) {
LAB_022d1410:
        if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    do {
      unaff_w26 = unaff_w26 + -1;
      if (unaff_w26 < 0) goto LAB_022d1410;
      unaff_x28 = (long *)FUN_030f28e4();
    } while (unaff_x28 == (long *)0x0);
    in_x9 = *unaff_x28;
    param_1 = *unaff_x19;
    in_w11 = (uint)*(byte *)(in_x9 + 0x130);
    in_x10 = (ulong)*(byte *)(param_1 + 0x130);
  } while( true );
}


