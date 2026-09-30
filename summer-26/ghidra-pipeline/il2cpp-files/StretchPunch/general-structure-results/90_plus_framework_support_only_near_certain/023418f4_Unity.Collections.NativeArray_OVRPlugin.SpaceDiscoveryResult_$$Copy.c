/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 023418f4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02341a54) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(long param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar7 [16];
  
LAB_023418f8:
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_1) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02341940;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02341940:
  auVar7 = (*(code *)*puVar1)();
  lVar3 = *(long *)(unaff_x21 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar4 = *(uint *)(unaff_x21 + 0x18);
  if (uVar4 == *(uint *)(lVar3 + 0x18)) {
    FUN_02340208();
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  else {
    *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  pauVar2 = (undefined1 (*) [16])(lVar3 + (long)(int)uVar4 * 0x10 + 0x20);
  *pauVar2 = auVar7;
  thunk_FUN_01e10808(pauVar2,0);
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023418c8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_023418c8:
  uVar5 = (*(code *)*puVar1)();
  if ((uVar5 & 1) != 0) {
    param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_01dde7f8(param_1);
    }
    goto LAB_023418f8;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02341a1c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02341a1c:
    (*(code *)*puVar1)();
  }
  return;
}


