/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Vector2f>
ENTRY_POINT: 030769bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03076abc) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Vector2f>
               (long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  ulong in_x10;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_3) break;
    do {
      FUN_03076c70();
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03076930;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03076930:
      uVar4 = (*(code *)*puVar1)();
      if ((uVar4 & 1) == 0) {
        plVar2 = (long *)thunk_FUN_02cea798();
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar2;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_03076a28;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03076a10;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_03076990;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03076990:
      param_1 = (long *)(*(code *)*puVar1)();
    } while (param_1 == (long *)0x0);
    in_x9 = *param_1;
    param_3 = *unaff_x23;
    in_x10 = (ulong)*(byte *)(param_3 + 0x130);
  } while (*(byte *)(param_3 + 0x130) <= *(byte *)(in_x9 + 0x130));
                    /* WARNING: Subroutine does not return */
  FUN_02ce8018(param_1);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_03076a10:
    if (*(long *)(piVar5 + -2) == *unaff_x21) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03076a44;
    }
  }
LAB_03076a28:
  puVar1 = (undefined8 *)FUN_02ce0a7c(plVar2,*unaff_x21,0);
LAB_03076a44:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return;
}


