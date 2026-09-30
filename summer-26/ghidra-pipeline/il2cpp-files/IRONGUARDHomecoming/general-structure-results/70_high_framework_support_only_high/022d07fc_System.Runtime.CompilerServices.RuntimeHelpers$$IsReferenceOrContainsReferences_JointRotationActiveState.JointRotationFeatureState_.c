/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<JointRotationActiveState.JointRotationFeatureState>
ENTRY_POINT: 022d07fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022d0908) */

void System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<JointRotationActiveState_JointRotationFeatureState>
               (long *param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long unaff_x21;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x27;
  
code_r0x022d07fc:
  uVar5 = FUN_041d3f88(param_1,param_2);
  iVar7 = 4;
  if ((uVar5 & 1) == 0) {
    iVar7 = 10;
  }
  do {
    lVar8 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_022d0868;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(unaff_x25,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_022d0868:
    (*(code *)*puVar6)(unaff_x25,puVar6[1]);
    if ((iVar7 != 10) && (iVar7 != 0)) {
      return;
    }
    do {
      do {
        unaff_w24 = unaff_w24 + -1;
        if (unaff_w24 < 0) {
          return;
        }
        plVar2 = (long *)FUN_030f28e4();
      } while (plVar2 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
    } while ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27));
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = (long *)(**(code **)(unaff_x21 + 0x18))(*(undefined8 *)(unaff_x21 + 0x40));
    uVar3 = (**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar3,uVar3);
    }
    FUN_041d4560(param_1,uVar3,0);
    plVar4 = (long *)(**(code **)(*plVar2 + 0x398))(plVar2,*(undefined8 *)(*plVar2 + 0x3a0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar4 + 0x198))(plVar4,param_1,*(undefined8 *)(*plVar4 + 0x1a0));
    lVar8 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = FUN_041e7f94(lVar8,0);
    unaff_x25 = param_1;
    if (lVar8 == 0) break;
    FUN_041c5278();
    iVar7 = 4;
  } while( true );
  param_2 = 0;
  goto code_r0x022d07fc;
}


