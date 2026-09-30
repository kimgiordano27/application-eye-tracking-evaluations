/*
FUNCTION_NAME: UnityEngine.Rendering.CameraProperties$$GetHashCode
ENTRY_POINT: 03f8f1e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03f8f48c) */

undefined1  [16]
UnityEngine_Rendering_CameraProperties__GetHashCode(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x27;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010 [16];
  
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03f8f220;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03f8f220:
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar5;
    lVar7 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03f8f298;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_03f8f298:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)puVar2);
      if (plVar5 == (long *)0x0) goto LAB_03f8f420;
      lVar8 = *plVar5;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03f8f3f8;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    lVar7 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_03f8f2f8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,1);
LAB_03f8f2f8:
    auVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (*(long *)(unaff_x21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(0,auVar11._8_8_,auVar11._0_8_);
    }
    auVar11 = FUN_03fa041c();
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03f8a150(&stack0x00000010,auVar11._0_8_,auVar11._8_8_);
    if ((auVar11._0_8_ & 0xff) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == lVar7) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03f8f414;
    }
  }
LAB_03f8f3f8:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_03f8f414:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_03f8f420:
  uVar6 = thunk_FUN_01ecaf38();
  uVar9 = FUN_03f8f794(uVar6,uVar6);
  if ((uVar9 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_030f4404();
  }
  return in_stack_00000010;
}


