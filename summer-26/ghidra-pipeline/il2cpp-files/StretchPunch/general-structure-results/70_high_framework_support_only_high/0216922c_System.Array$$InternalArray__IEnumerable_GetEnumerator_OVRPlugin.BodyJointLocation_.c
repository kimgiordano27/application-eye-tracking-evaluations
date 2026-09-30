/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 0216922c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_BodyJointLocation>
               (long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  long unaff_x29;
  
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
      goto LAB_0216926c;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_01dde8fc();
LAB_0216926c:
  iVar3 = (*(code *)*puVar5)();
  lVar6 = **(long **)(unaff_x20 + 0x38);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01dde7f8(lVar6);
  }
  lVar7 = *unaff_x19;
  uVar1 = *(ushort *)(lVar7 + 0x12e);
  uVar9 = (ulong)uVar1;
  if (iVar3 == 0) {
    if (uVar1 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          lVar6 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02169350;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar6 = FUN_01dde8fc();
LAB_02169350:
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
    (**(code **)(*(long *)(lVar6 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 8) + 8));
    uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18);
  }
  else {
    if (uVar1 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0216931c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc();
LAB_0216931c:
    uVar4 = (*(code *)*puVar5)();
    puVar2 = StringLiteral_1734;
    *(undefined4 *)(unaff_x29 + -0x10) = uVar4;
    uVar8 = *(undefined8 *)puVar2;
  }
  uVar8 = thunk_FUN_01de23e8(uVar8);
  FUN_0326c6f8(*(undefined8 *)StringLiteral_1001,uVar8,0);
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


