/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<KeyValuePair<object,-GizmoSphereExample.Contact>>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b32a5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02b32b90) */

void System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long in_x11;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02b329c8;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b329c8:
        (*(code *)*puVar1)();
        FUN_02b33b18();
        lVar2 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *unaff_x23) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
              goto 
              System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__get_Current
              ;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
System_Array_EmptyInternalEnumerator<KeyValuePair<object,_GizmoSphereExample_Contact>>__get_Current:
        uVar3 = (*(code *)*puVar1)();
        if ((uVar3 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) {
            return;
          }
          lVar2 = *unaff_x21;
          uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar3 == 0) goto LAB_02b32b2c;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_02b32b14;
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01ecaf44(param_3);
        }
        param_1 = *unaff_x21;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_02b32b14:
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto FUN_02b32b48;
    }
  }
LAB_02b32b2c:
  puVar1 = (undefined8 *)FUN_01ecb238();
FUN_02b32b48:
  (*(code *)*puVar1)();
  return;
}


