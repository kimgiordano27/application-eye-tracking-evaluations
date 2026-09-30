/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRSpatialAnchor.UnboundAnchor>
ENTRY_POINT: 022d12fc
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

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRSpatialAnchor_UnboundAnchor>
               (undefined8 param_1)

{
  void *__src;
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x24;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    FUN_041c5278(param_1,unaff_x28,0);
    iVar6 = 4;
LAB_022d1334:
    lVar7 = *unaff_x27;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022d1388;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(unaff_x27,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_022d1388:
    (*(code *)*puVar4)(unaff_x27,puVar4[1]);
    if ((iVar6 != 10) && (iVar6 != 0)) {
LAB_022d1410:
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    do {
      do {
        unaff_w26 = unaff_w26 + -1;
        if (unaff_w26 < 0) goto LAB_022d1410;
        unaff_x28 = (long *)FUN_030f28e4();
      } while (unaff_x28 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x19 + 0x130);
    } while ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19));
    lVar7 = *(long *)(unaff_x21 + 0x38);
    __src = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,__src,*(size_t *)(unaff_x29 + -0x30));
    if (*(long *)(unaff_x29 + -0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar4 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar7 + 8) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x24;
    }
    puVar5 = *(undefined8 **)(lVar7 + 0x10);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*(code *)puVar5[2])
              (uVar2,puVar5,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18,unaff_x29 + -0x10);
    unaff_x27 = *(long **)(unaff_x29 + -0x10);
    uVar2 = (**(code **)(*unaff_x28 + 0x398))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x3a0));
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar2,uVar2);
    }
    FUN_041d4560(unaff_x27,uVar2,0);
    plVar3 = (long *)(**(code **)(*unaff_x28 + 0x398))
                               (unaff_x28,*(undefined8 *)(*unaff_x28 + 0x3a0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar3 + 0x198))(plVar3,unaff_x27,*(undefined8 *)(*plVar3 + 0x1a0));
    lVar7 = (**(code **)(*unaff_x28 + 0x278))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x280));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = FUN_041e7f94(lVar7,0);
    if (lVar7 == 0) {
      uVar8 = FUN_041d3f88(unaff_x27,0);
      iVar6 = 4;
      if ((uVar8 & 1) == 0) {
        iVar6 = 10;
      }
      goto LAB_022d1334;
    }
    param_1 = *(undefined8 *)(unaff_x29 + -0x38);
  } while( true );
}


