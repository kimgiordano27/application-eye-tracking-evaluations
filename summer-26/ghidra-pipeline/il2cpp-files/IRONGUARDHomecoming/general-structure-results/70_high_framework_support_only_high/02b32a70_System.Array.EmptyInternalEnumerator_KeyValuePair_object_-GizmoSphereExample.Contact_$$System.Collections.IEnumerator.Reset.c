/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<object,-GizmoSphereExample.Contact>>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02b32a70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02b32b90) */

void System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  
code_r0x02b32a70:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    (*(code *)*puVar1)();
    FUN_02b33b18();
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__get_Current
          ;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__get_Current:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) {
        return;
      }
      lVar2 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_02b32b2c;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) goto code_r0x02b32a70;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != lVar2) {
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
      if (uVar4 == 0) goto code_r0x02b32a70;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto FUN_02b32b48;
    }
  }
LAB_02b32b2c:
  puVar1 = (undefined8 *)FUN_01ecb238();
FUN_02b32b48:
  (*(code *)*puVar1)();
  return;
}


