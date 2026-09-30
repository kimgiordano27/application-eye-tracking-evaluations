/*
FUNCTION_NAME: System.Collections.ObjectModel.ReadOnlyCollection<Vector2>$$IndexOf
ENTRY_POINT: 0257e16c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 System_Collections_ObjectModel_ReadOnlyCollection<Vector2>__IndexOf(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long in_stack_00000020;
  long in_stack_00000028;
  
  uVar2 = (*(code *)*param_1)();
  *(undefined8 *)(in_stack_00000028 + 0x38) = uVar2;
  thunk_FUN_01f51358();
  plVar9 = *(long **)(in_stack_00000028 + 0x38);
  *(undefined4 *)(in_stack_00000028 + 0x10) = 0xfffffffd;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar9;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0257e200;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
LAB_0257e200:
    uVar7 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      FUN_0257e420();
      *(undefined8 *)(in_stack_00000028 + 0x38) = 0;
      thunk_FUN_01f51358((undefined8 *)(in_stack_00000028 + 0x38),0);
      return 0;
    }
    plVar9 = *(long **)(in_stack_00000028 + 0x38);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar9;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0257e270;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,1);
LAB_0257e270:
    lVar5 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar6 = thunk_FUN_01f116d0(lVar5,lVar6);
    if (lVar6 != 0) {
      lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar5,lVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar5,lVar6);
        }
      }
      *(long *)(in_stack_00000028 + 0x18) = lVar4;
      lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01f116d0(lVar5,lVar6);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar5,lVar6);
        }
      }
      thunk_FUN_01f51358((long *)(in_stack_00000028 + 0x18),lVar4);
      *(undefined4 *)(in_stack_00000028 + 0x10) = 1;
      return 1;
    }
    plVar9 = *(long **)(in_stack_00000028 + 0x38);
  } while( true );
}


