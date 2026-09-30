/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 063af6e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063af91c) */
/* WARNING: Removing unreachable block (ram,0x063af9ec) */

void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long in_stack_00000028;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063af638 with catch @ 063af71c
                        */
          puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063af728;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063af620 with catch @ 063af718
                       try { // try from 063af718 to 064af733 has its CatchHandler @ 063af5f0 */
LAB_063af728:
    plVar2 = (long *)(*(code *)*puVar1)();
                    /* try { // try from 063af734 to 064af74b has its CatchHandler @ 063af7a0 */
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar7 = *(long **)(unaff_x19 + 0x10);
                    /* try { // try from 063af74c to 064af78f has its CatchHandler @ 063af5f0 */
    uVar5 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4(uVar5,uVar5 & 0xffffffff);
    }
    (**(code **)(*plVar7 + 0x1d8))(plVar7,uVar5 & 0xffffffff,*(undefined8 *)(*plVar7 + 0x1e0));
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar3 = FUN_061d52c8(0);
    FUN_06260640(&stack0x00000028,uVar3,0);
                    /* try { // try from 063af790 to 064af79f has its CatchHandler @ 063af7a0 */
    FUN_0632e3c8(in_stack_00000028,0);
                    /* catch() { ... } // from try @ 063af734 with catch @ 063af7a0
                       catch() { ... } // from try @ 063af790 with catch @ 063af7a0 */
                    /* try { // try from 063af7a4 to 064af7a7 has its CatchHandler @ 063af7b0 */
                    /* try { // try from 063af7a8 to 064af7b3 has its CatchHandler @ 063af5f0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063af7a4 with catch @ 063af7b0
                        */
    FUN_063afd0c();
    FUN_063aedc8();
    in_stack_00000028 = in_stack_00000028 + 1;
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_063af6cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
FUN_063af6cc:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) break;
    param_1 = *unaff_x20;
    param_3 = *unaff_x24;
  } while( true );
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063af904;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_063af904:
    (*(code *)*puVar1)();
  }
  plVar2 = *(long **)(unaff_x19 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


