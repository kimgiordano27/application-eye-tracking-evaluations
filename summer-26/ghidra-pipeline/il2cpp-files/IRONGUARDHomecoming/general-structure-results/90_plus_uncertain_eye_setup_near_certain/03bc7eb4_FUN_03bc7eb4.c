/*
FUNCTION_NAME: FUN_03bc7eb4
ENTRY_POINT: 03bc7eb4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03bc80d8) */
/* WARNING: Removing unreachable block (ram,0x03bc80f4) */

void FUN_03bc7eb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulong uVar8;
  
  puVar1 = StringLiteral_13393;
  if ((DAT_048398f3 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_13477);
    thunk_FUN_01efb3a4(StringLiteral_13478);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_13393);
    DAT_048398f3 = 1;
  }
  *(undefined1 *)(param_1 + 0x95) = 0;
  puVar2 = StringLiteral_13478;
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  iVar3 = FUN_02274e50(*(undefined8 *)(*(undefined4 **)(lVar4 + 0xb8) + 2),param_1,
                       **(undefined4 **)(lVar4 + 0xb8),*(undefined8 *)puVar2);
  puVar2 = StringLiteral_13477;
  if (iVar3 != -1) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    FUN_02273090(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8),*(long *)(lVar4 + 0xb8),iVar3,
                 *(undefined8 *)puVar2);
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  piVar7 = *(int **)(lVar4 + 0xb8);
  if (*piVar7 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
      piVar7 = *(int **)(lVar4 + 0xb8);
    }
    if (*(long *)(piVar7 + 4) != 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        piVar7 = *(int **)(*(long *)puVar1 + 0xb8);
      }
      FUN_03bc81a4(*(undefined8 *)(piVar7 + 4));
    }
  }
  FUN_03bc3960(param_1);
  FUN_03bc7e48(param_1);
  if (DAT_0483998c == '\0') {
    thunk_FUN_01efb3a4(StringLiteral_13425);
    DAT_0483998c = '\x01';
  }
  if (**(long **)(*(long *)StringLiteral_13425 + 0xb8) != 0) {
    FUN_03bc8258(**(long **)(*(long *)StringLiteral_13425 + 0xb8),param_1);
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)FUN_03b2468c(0);
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_03b208bc(*(long *)(param_1 + 0x88),0);
  }
  *(undefined1 *)(param_1 + 0x94) = 0;
  FUN_03bc6bd8(param_1);
  FUN_03bc2bc0(param_1);
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03bc80c0;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03bc80c0:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}


