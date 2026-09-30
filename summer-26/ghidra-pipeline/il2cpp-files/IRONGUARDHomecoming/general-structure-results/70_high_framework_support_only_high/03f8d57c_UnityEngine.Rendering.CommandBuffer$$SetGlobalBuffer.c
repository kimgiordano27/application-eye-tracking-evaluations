/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetGlobalBuffer
ENTRY_POINT: 03f8d57c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f8d73c) */

undefined1  [16] UnityEngine_Rendering_CommandBuffer__SetGlobalBuffer(code *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  ulong unaff_x28;
  
  do {
    plVar3 = (long *)(*param_1)();
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_035028b4(plVar3,0);
    if ((uVar4 != 0) && ((uVar4 & unaff_x22) == uVar4)) {
      if ((unaff_x28 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03418748();
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar5,uVar5);
      }
      FUN_03418748();
      unaff_x28 = 0;
    }
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f8d518;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03f8d518:
    uVar4 = (*(code *)*puVar2)();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar4 & 1) == 0) break;
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_03f8d578;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03f8d578:
    param_1 = (code *)*puVar2;
  } while( true );
  plVar3 = (long *)thunk_FUN_01f116d0();
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f8d694;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03f8d694:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x168))();
  lVar6 = thunk_FUN_01f117cc(*unaff_x24);
  FUN_035ac8e8(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x10),uVar5);
  puVar1 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  *unaff_x19 = lVar6;
  thunk_FUN_01f51358();
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar1;
  }
  return *(undefined1 (*) [16])(*(long *)(lVar6 + 0xb8) + 8);
}


