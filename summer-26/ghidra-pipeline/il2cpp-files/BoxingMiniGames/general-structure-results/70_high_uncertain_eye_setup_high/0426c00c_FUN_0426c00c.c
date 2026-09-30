/*
FUNCTION_NAME: FUN_0426c00c
ENTRY_POINT: 0426c00c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool FUN_0426c00c(undefined8 *param_1,long param_2)

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
                    /* try { // try from 0426c028 to 0436c057 has its CatchHandler @ 0426c9f8 */
  if (plVar9 == (long *)0x0) {
System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc();
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
                    /* try { // try from 0426c0a8 to 0436c0d7 has its CatchHandler @ 0426ca08 */
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0426c0b0;
      }
      uVar6 = uVar6 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_0367cd30(plVar9,lVar3,0);
LAB_0426c0b0:
  iVar2 = (*(code *)*puVar4)(plVar9,param_1 + 2,puVar4[1]);
  plVar9 = (long *)*param_1;
  if (iVar1 < iVar2) {
    if (plVar9 == (long *)0x0)
    goto System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current;
    lVar3 = *(long *)(param_2 + 0x20);
                    /* try { // try from 0426c0d8 to 0436c10f has its CatchHandler @ 0426be30 */
    uVar6 = (ulong)*(uint *)((long)param_1 + 0x1c);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0426c1b4;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (plVar9 == (long *)0x0)
    goto System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__get_Current;
    lVar3 = *(long *)(param_2 + 0x20);
    uVar6 = param_1[1];
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) goto LAB_0426c1b4;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_0367cd30(plVar9,lVar3,3);
  goto LAB_0426c1c4;
LAB_0426c1b4:
  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
LAB_0426c1c4:
  (*(code *)*puVar4)(plVar9,uVar6,puVar4[1]);
  return iVar1 < iVar2;
}


