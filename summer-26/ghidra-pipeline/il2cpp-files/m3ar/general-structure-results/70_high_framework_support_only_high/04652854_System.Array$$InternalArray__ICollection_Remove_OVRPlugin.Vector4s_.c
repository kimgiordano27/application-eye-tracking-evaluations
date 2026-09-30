/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4s>
ENTRY_POINT: 04652854
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04652a10) */

void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4s>(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *in_stack_00000028;
  
code_r0x04652854:
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while (uVar3 = (*(code *)*puVar4)(unaff_x21,puVar4[1]), puVar2 = PTR_DAT_08f65868,
        (uVar3 & 1) != 0) {
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *in_stack_00000028;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_046528c8;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x22,1);
LAB_046528c8:
    (*(code *)*puVar4)(in_stack_00000028,puVar4[1]);
    uVar5 = FUN_04608288();
    if (unaff_x19 == 0) {
LAB_046529ec:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_046529ec;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
    }
    else {
      FUN_057d53ac();
    }
    if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    param_1 = *in_stack_00000028;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000028;
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x22) goto code_r0x04652854;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000028,*unaff_x22,0);
  }
  plVar6 = (long *)thunk_FUN_0406ddbc(in_stack_00000028,*(undefined8 *)PTR_DAT_08f65868);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_046529c0;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar2,0);
LAB_046529c0:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  FUN_0464ed5c();
  return;
}


