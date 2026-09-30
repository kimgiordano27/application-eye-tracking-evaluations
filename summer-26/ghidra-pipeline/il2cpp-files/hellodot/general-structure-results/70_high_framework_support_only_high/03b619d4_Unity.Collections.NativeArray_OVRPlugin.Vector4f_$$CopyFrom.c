/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyFrom
ENTRY_POINT: 03b619d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b61c48) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyFrom(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar9;
  
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_1) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03b61a20;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_03b61a20:
  puVar1 = PTR_DAT_065c8a48;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_065c8d08;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03b61a94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar2,0);
LAB_03b61a94:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_03b61bec;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02ce0978(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03b61b0c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,lVar5,0);
LAB_03b61b0c:
    (*(code *)*puVar3)(&stack0x00000160,plVar4,puVar3[1]);
    memcpy(&stack0x000002c0,&stack0x00000160,0x160);
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar9 = *(uint *)(unaff_x21 + 0x18);
    if (uVar9 == *(uint *)(lVar5 + 0x18)) {
      FUN_03b5fee4();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar9 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar9 + 1;
    memcpy(&stack0x00000160,&stack0x000002c0,0x160);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    memcpy(&stack0x00000000,&stack0x00000160,0x160);
    if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    memcpy((void *)(lVar5 + (long)(int)uVar9 * 0x160 + 0x20),&stack0x00000000,0x160);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03b61c08;
    }
  }
LAB_03b61bec:
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar1,0);
LAB_03b61c08:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


