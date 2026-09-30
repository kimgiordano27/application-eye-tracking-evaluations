/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$MoveNext
ENTRY_POINT: 0442253c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0442264c) */

void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__MoveNext(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    param_1 = FUN_0322bef4(param_1);
    do {
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == param_1) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0322c1e8();
System_Array_InternalEnumerator<OVRPlugin_Vector4s>__get_Current:
      (*(code *)*puVar1)();
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_0442212c();
      lVar2 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_04422508;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_04422508:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_04422604;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_044225ec;
      }
      lVar2 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      param_1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    } while ((*(byte *)(param_1 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_044225ec:
    if (*(long *)(piVar4 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_04422620;
    }
  }
LAB_04422604:
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_04422620:
  (*(code *)*puVar1)();
  return;
}


