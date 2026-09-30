/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 03b5ebcc
PROGRAM: hellodot-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b5ed0c) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
code_r0x03b5ebcc:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_03b5ebc0;
LAB_03b5ebd8:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
  uVar7 = param_3;
  uVar8 = param_4;
  uVar9 = param_5;
  do {
    uVar6 = (*(code *)*puVar1)();
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar3 = *(uint *)(unaff_x21 + 0x18);
    param_3 = uVar7;
    param_4 = uVar8;
    param_5 = uVar9;
    if (uVar3 == *(uint *)(lVar2 + 0x18)) {
      FUN_03b5d3f0();
      uVar3 = *(uint *)(unaff_x21 + 0x18);
      lVar2 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar3 + 1;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    lVar2 = lVar2 + (long)(int)uVar3 * 0x10;
    *(undefined4 *)(lVar2 + 0x20) = uVar6;
    *(int *)(lVar2 + 0x24) = (int)uVar7;
    *(int *)(lVar2 + 0x28) = (int)uVar8;
    *(int *)(lVar2 + 0x2c) = (int)uVar9;
    lVar2 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03b5eb7c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b5eb7c:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_03b5ecb4;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    param_7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_7 + 0x135) & 1) == 0) {
      param_7 = FUN_02ce0978(param_7);
    }
    param_1 = *unaff_x19;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03b5ebd8;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_03b5ebc0:
    if (*(long *)(in_x10 + -2) != param_7) goto code_r0x03b5ebcc;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    uVar7 = param_3;
    uVar8 = param_4;
    uVar9 = param_5;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03b5ecd0;
    }
  }
LAB_03b5ecb4:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03b5ecd0:
  (*(code *)*puVar1)();
  return;
}


