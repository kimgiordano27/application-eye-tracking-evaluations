/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 037951fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  plVar9 = (long *)*param_1;
  iVar1 = *(int *)((long)param_1 + 0x1c) + 1;
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (plVar9 == (long *)0x0) {
LAB_037953d8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = *(long *)(param_2 + 0x20);
                    /* try { // try from 03795224 to 0389522b has its CatchHandler @ 03795308 */
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 03795244 to 03895247 has its CatchHandler @ 03795304 */
                    /* try { // try from 03795248 to 038952f3 has its CatchHandler @ 03794ad4 */
    lVar3 = FUN_02f41e9c(lVar3);
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto FUN_03795298;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(plVar9,lVar3,0);
FUN_03795298:
  iVar2 = (*(code *)*puVar4)(plVar9,param_1 + 2,puVar4[1]);
  plVar9 = (long *)*param_1;
  if (iVar1 < iVar2) {
    if (plVar9 == (long *)0x0) goto LAB_037953d8;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = (ulong)*(uint *)((long)param_1 + 0x1c);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0379539c;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (plVar9 == (long *)0x0) goto LAB_037953d8;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = param_1[1];
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0379539c;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_02f421d0(plVar9,lVar3,3);
  goto LAB_037953ac;
LAB_0379539c:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
LAB_037953ac:
  (*(code *)*puVar4)(plVar9,uVar6,puVar4[1]);
  return iVar1 < iVar2;
}


