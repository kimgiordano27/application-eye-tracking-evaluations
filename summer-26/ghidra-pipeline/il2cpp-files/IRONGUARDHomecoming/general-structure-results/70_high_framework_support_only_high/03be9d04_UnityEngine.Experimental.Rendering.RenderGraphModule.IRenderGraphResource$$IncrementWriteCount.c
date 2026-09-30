/*
FUNCTION_NAME: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource$$IncrementWriteCount
ENTRY_POINT: 03be9d04
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


/* WARNING: Removing unreachable block (ram,0x03be9f24) */

void UnityEngine_Experimental_Rendering_RenderGraphModule_IRenderGraphResource__IncrementWriteCount
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  undefined8 unaff_x21;
  int unaff_w22;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_02f368c4(param_1,*(undefined8 *)StringLiteral_13963);
  puVar4 = StringLiteral_13964;
  puVar3 = StringLiteral_13962;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03be9d8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03be9d8c:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) {
      iVar11 = 5;
      iVar10 = 5;
      goto joined_r0x03be9e6c;
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03be9de8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03be9de8:
    auVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    _in_stack_00000040 = auVar12;
    lVar7 = FUN_026d32f0(&stack0x00000040,*(undefined8 *)puVar4);
    auVar12 = _in_stack_00000040;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while (*(int *)(lVar7 + 8) != unaff_w22);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = unaff_x21;
  thunk_FUN_01f51358(&stack0x00000008);
  _in_stack_00000010 = auVar12;
  thunk_FUN_01f51358(&stack0x00000010,0);
  iVar11 = 4;
  iVar10 = 4;
  in_stack_00000020 = in_stack_00000008;
  _in_stack_00000028 = _in_stack_00000010;
joined_r0x03be9e6c:
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03be9ebc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03be9ebc:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
    iVar10 = iVar11;
  }
  if (iVar10 != 5) {
    if (iVar10 == 4) {
      *(undefined1 (*) [16])(unaff_x19 + 1) = _in_stack_00000028;
      *unaff_x19 = in_stack_00000020;
      return;
    }
    if (iVar10 != 0) {
      return;
    }
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}


