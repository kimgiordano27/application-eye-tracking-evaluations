/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<ProbeBrickIndex.ReservedBrick>
ENTRY_POINT: 022d13fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<ProbeBrickIndex_ReservedBrick>
               (long *param_1)

{
  void *__src;
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x24;
  int unaff_w26;
  long *unaff_x27;
  long lVar11;
  long unaff_x29;
  
  lVar11 = *param_1;
  __cxa_end_catch();
  iVar6 = 0;
  if (unaff_x27 != (long *)0x0) goto LAB_022d1334;
  do {
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar11);
    }
    if ((iVar6 != 10) && (iVar6 != 0)) {
LAB_022d1410:
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    do {
      do {
        unaff_w26 = unaff_w26 + -1;
        if (unaff_w26 < 0) goto LAB_022d1410;
        plVar2 = (long *)FUN_030f28e4();
      } while (plVar2 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x19 + 0x130);
    } while ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19));
    lVar11 = *(long *)(unaff_x21 + 0x38);
    __src = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,__src,*(size_t *)(unaff_x29 + -0x30));
    if (*(long *)(unaff_x29 + -0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar7 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar11 + 8) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
    }
    puVar5 = *(undefined8 **)(lVar11 + 0x10);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    (*(code *)puVar5[2])
              (uVar3,puVar5,*(undefined8 *)(unaff_x29 + -0x28),unaff_x29 + -0x18,unaff_x29 + -0x10);
    unaff_x27 = *(long **)(unaff_x29 + -0x10);
    uVar3 = (**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
    if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar3,uVar3);
    }
    FUN_041d4560(unaff_x27,uVar3,0);
    plVar4 = (long *)(**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar4 + 0x198))(plVar4,unaff_x27,*(undefined8 *)(*plVar4 + 0x1a0));
    lVar11 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = FUN_041e7f94(lVar11,0);
    if (lVar11 == 0) {
      uVar9 = FUN_041d3f88(unaff_x27,0);
      lVar11 = 0;
      iVar6 = 4;
      if ((uVar9 & 1) == 0) {
        iVar6 = 10;
      }
    }
    else {
      FUN_041c5278(*(undefined8 *)(unaff_x29 + -0x38),plVar2,0);
      lVar11 = 0;
      iVar6 = 4;
    }
LAB_022d1334:
    lVar8 = *unaff_x27;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_022d1388;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(unaff_x27,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_022d1388:
    (*(code *)*puVar7)(unaff_x27,puVar7[1]);
  } while( true );
}


