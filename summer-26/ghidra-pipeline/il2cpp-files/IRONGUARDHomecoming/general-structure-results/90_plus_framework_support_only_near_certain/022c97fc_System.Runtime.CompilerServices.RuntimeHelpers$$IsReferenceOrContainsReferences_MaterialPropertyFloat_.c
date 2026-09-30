/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<MaterialPropertyFloat>
ENTRY_POINT: 022c97fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022c9970) */

uint System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<MaterialPropertyFloat>
               (code *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    (*param_1)(param_2);
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x28) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar2[2])(uVar1);
    if (*(char *)(unaff_x29 + -0xc) == '\0') break;
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022c9778;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_022c9778:
    unaff_w26 = (*(code *)*puVar5)();
    if ((unaff_w26 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar3 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar3 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_022c97f0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_022c97f0:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    param_2 = *(undefined8 *)(*(long *)(lVar4 + 8) + 8);
    param_1 = *(code **)(*(long *)(lVar4 + 8) + 0x10);
  }
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022c98cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_022c98cc:
    (*(code *)*puVar5)();
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (unaff_w26 ^ 1) & 1;
}


