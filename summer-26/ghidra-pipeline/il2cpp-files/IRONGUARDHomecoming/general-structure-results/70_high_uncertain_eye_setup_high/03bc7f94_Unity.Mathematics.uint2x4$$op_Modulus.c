/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Modulus
ENTRY_POINT: 03bc7f94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03bc80d8) */
/* WARNING: Removing unreachable block (ram,0x03bc80f4) */

void Unity_Mathematics_uint2x4__op_Modulus(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  ulong uVar6;
  long unaff_x19;
  long *unaff_x21;
  
  lVar2 = *unaff_x21;
  piVar5 = *(int **)(lVar2 + 0xb8);
  if (*piVar5 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *unaff_x21;
      piVar5 = *(int **)(lVar2 + 0xb8);
    }
    if (*(long *)(piVar5 + 4) != 0) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        piVar5 = *(int **)(*unaff_x21 + 0xb8);
      }
      FUN_03bc81a4(*(undefined8 *)(piVar5 + 4));
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
  plVar3 = (long *)FUN_03b2468c(0);
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    FUN_03b208bc(*(long *)(unaff_x19 + 0x88),0);
  }
  *(undefined1 *)(unaff_x19 + 0x94) = 0;
  FUN_03bc6bd8();
  FUN_03bc2bc0();
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03bc80c0;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03bc80c0:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  *(undefined4 *)(unaff_x19 + 0x90) = 0xffffffff;
  return;
}


