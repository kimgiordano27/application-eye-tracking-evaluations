/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 03b5eb88
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b5ed0c) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ulong param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  while ((param_5 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    uVar8 = param_2;
    uVar9 = param_3;
    uVar10 = param_4;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02ce0978(lVar2);
      uVar8 = param_2;
      uVar9 = param_3;
      uVar10 = param_4;
    }
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03b5ebf4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b5ebf4:
    uVar7 = (*(code *)*puVar1)();
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    param_2 = uVar8;
    param_3 = uVar9;
    param_4 = uVar10;
    if (uVar4 == *(uint *)(lVar2 + 0x18)) {
      FUN_03b5d3f0();
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      lVar2 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar2 = lVar2 + (long)(int)uVar4 * 0x10;
    *(undefined4 *)(lVar2 + 0x20) = uVar7;
    *(int *)(lVar2 + 0x24) = (int)uVar8;
    *(int *)(lVar2 + 0x28) = (int)uVar9;
    *(int *)(lVar2 + 0x2c) = (int)uVar10;
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03b5eb7c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b5eb7c:
    param_5 = (*(code *)*puVar1)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03b5ecd0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b5ecd0:
    (*(code *)*puVar1)();
  }
  return;
}


