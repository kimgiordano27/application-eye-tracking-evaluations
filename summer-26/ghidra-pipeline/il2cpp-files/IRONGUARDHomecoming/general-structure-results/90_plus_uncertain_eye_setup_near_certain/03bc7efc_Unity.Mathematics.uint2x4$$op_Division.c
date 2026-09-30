/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Division
ENTRY_POINT: 03bc7efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc80d8) */
/* WARNING: Removing unreachable block (ram,0x03bc80f4) */

void Unity_Mathematics_uint2x4__op_Division(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  thunk_FUN_01efb3a4(StringLiteral_13393);
  *(undefined1 *)(unaff_x20 + 0x8f3) = 1;
  *(undefined1 *)(unaff_x19 + 0x95) = 0;
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x21;
  }
  iVar2 = FUN_02274e50(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8));
  puVar1 = StringLiteral_13477;
  if (iVar2 != -1) {
    lVar3 = *unaff_x21;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x21;
    }
    FUN_02273090(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),*(long *)(lVar3 + 0xb8),iVar2,
                 *(undefined8 *)puVar1);
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x21;
  }
  piVar6 = *(int **)(lVar3 + 0xb8);
  if (*piVar6 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x21;
      piVar6 = *(int **)(lVar3 + 0xb8);
    }
    if (*(long *)(piVar6 + 4) != 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        piVar6 = *(int **)(*unaff_x21 + 0xb8);
      }
      FUN_03bc81a4(*(undefined8 *)(piVar6 + 4));
    }
  }
  FUN_03bc3960();
  FUN_03bc7e48();
  if (DAT_0483998c == '\0') {
    thunk_FUN_01efb3a4(StringLiteral_13425);
    DAT_0483998c = '\x01';
  }
  if (**(long **)(*(long *)StringLiteral_13425 + 0xb8) != 0) {
    FUN_03bc8258();
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)FUN_03b2468c(0);
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    FUN_03b208bc(*(long *)(unaff_x19 + 0x88),0);
  }
  *(undefined1 *)(unaff_x19 + 0x94) = 0;
  FUN_03bc6bd8();
  FUN_03bc2bc0();
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03bc80c0;
        }
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03bc80c0:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  *(undefined4 *)(unaff_x19 + 0x90) = 0xffffffff;
  return;
}


