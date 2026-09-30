/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03076908
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03076abc) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
code_r0x03076908:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_030768fc;
LAB_03076914:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_02cea798();
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_03076a28;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_03076990;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_03076990:
    plVar4 = (long *)(*(code *)*puVar2)();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar4);
      }
    }
    FUN_03076c70();
    param_1 = *unaff_x19;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_03076914;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_030768fc:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x03076908;
    puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03076a44;
    }
  }
LAB_03076a28:
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar4,*unaff_x21,0);
LAB_03076a44:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


