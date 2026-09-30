/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02223308
PROGRAM: sharks-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02223420) */

void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_02223278;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_0185dba8();
LAB_02223278:
      (*(code *)*puVar1)();
      FUN_02224208();
      lVar2 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_022232c4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0185dba8();
LAB_022232c4:
      uVar3 = (*(code *)*puVar1)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) {
          return;
        }
        lVar2 = *unaff_x21;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_022233c0;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_022233a8;
      }
      param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_0185daa4(param_3);
      }
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_022233a8:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_037f3288) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_022233dc;
    }
  }
LAB_022233c0:
  puVar1 = (undefined8 *)FUN_0185dba8();
LAB_022233dc:
  (*(code *)*puVar1)();
  return;
}


