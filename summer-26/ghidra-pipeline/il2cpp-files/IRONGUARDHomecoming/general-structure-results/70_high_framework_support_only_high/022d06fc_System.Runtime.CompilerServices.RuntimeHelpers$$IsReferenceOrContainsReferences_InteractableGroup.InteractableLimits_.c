/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<InteractableGroup.InteractableLimits>
ENTRY_POINT: 022d06fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d0908) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<InteractableGroup_InteractableLimits>
               (void)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  int unaff_w24;
  long unaff_x27;
  long *plVar11;
  
  plVar11 = *(long **)(unaff_x27 + 0x8f0);
  do {
    plVar2 = (long *)FUN_030f28e4();
    if (plVar2 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar11 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *plVar11)) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar3 = (long *)(**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
        uVar4 = (**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar4,uVar4);
        }
        FUN_041d4560(plVar3,uVar4,0);
        plVar5 = (long *)(**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar5 + 0x198))(plVar5,plVar3,*(undefined8 *)(*plVar5 + 0x1a0));
        lVar6 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = FUN_041e7f94(lVar6,0);
        if (lVar6 == 0) {
          uVar9 = FUN_041d3f88(plVar3,0);
          iVar8 = 4;
          if ((uVar9 & 1) == 0) {
            iVar8 = 10;
          }
        }
        else {
          FUN_041c5278();
          iVar8 = 4;
        }
        lVar6 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_022d0868;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_022d0868:
        (*(code *)*puVar7)(plVar3,puVar7[1]);
        if ((iVar8 != 10) && (iVar8 != 0)) {
          return;
        }
      }
    }
    unaff_w24 = unaff_w24 + -1;
    if (unaff_w24 < 0) {
      return;
    }
  } while( true );
}


