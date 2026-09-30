/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 0515f1f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0515f414) */

long OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
    if (in_x9 != 0) {
                    /* try { // try from 0515f1f8 to 0525f223 has its CatchHandler @ 0515f404 */
      piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == param_3) {
                    /* try { // try from 0515f228 to 0525f233 has its CatchHandler @ 0515f3fc */
          puVar4 = (undefined8 *)(param_1 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0515f234;
        }
        in_x9 = in_x9 - 1;
        piVar11 = piVar11 + 4;
      } while (in_x9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f234:
                    /* try { // try from 0515f234 to 0525f3df has its CatchHandler @ 0515f024 */
    uVar5 = (*(code *)*puVar4)();
    puVar3 = PTR_DAT_0675f3d0;
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_02d9d438();
      if (plVar6 == (long *)0x0) goto LAB_0515f3e4;
      lVar8 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 == 0) goto LAB_0515f3bc;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0515f294;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f294:
    plVar6 = (long *)(*(code *)*puVar4)();
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
    }
    lVar8 = *unaff_x19;
    uVar7 = FUN_0515f4e8();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar10 = *unaff_x24;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(lVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0515f3d8;
    }
  }
LAB_0515f3bc:
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar3,0);
LAB_0515f3d8:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
LAB_0515f3e4:
  return *unaff_x19;
}


