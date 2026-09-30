/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_0$$<ProcessType>b__1
ENTRY_POINT: 052e3110
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_0__<ProcessType>b__1
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long in_x9;
  long unaff_x19;
  int iVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
  uVar8 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_02ef1808(**(undefined8 **)(in_x9 + 0x9b8));
  FUN_044474e4(uVar1,uVar8,*(undefined8 *)PTR_DAT_06d3d9c8,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_02f411dc(puVar2,uVar1);
  if (unaff_x20 != 0) {
                    /* try { // try from 052e3164 to 053e318b has its CatchHandler @ 052e3310 */
    FUN_052440d8();
    lVar3 = *unaff_x26;
    lVar6 = *(long *)(unaff_x19 + 0x58);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *unaff_x26;
    }
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar3 = *unaff_x26;
      }
                    /* try { // try from 052e31a8 to 053e3207 has its CatchHandler @ 052e3314 */
      uVar1 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3d9b8);
      FUN_044474e4(lVar7,uVar1,*(undefined8 *)PTR_DAT_06d3d9d0,0);
      plVar4 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x10);
      *plVar4 = lVar7;
      thunk_FUN_02f411dc(plVar4,lVar7);
    }
    if (lVar6 != 0) {
      FUN_03fd2260(lVar6,lVar7,*(undefined8 *)PTR_DAT_06d3d9b0);
      lVar3 = *(long *)(unaff_x19 + 0x68);
      if (lVar3 != 0) {
        iVar5 = 0;
        do {
                    /* try { // try from 052e321c to 053e322b has its CatchHandler @ 052e330c */
          if (*(int *)(lVar3 + 0x18) <= iVar5) {
            lVar3 = *(long *)(unaff_x19 + 0x60);
            if (lVar3 != 0) {
              FUN_03b8716c(lVar3,0,*(undefined4 *)(lVar3 + 0x18));
              uVar1 = FUN_03a1cfb0(*(undefined8 *)(unaff_x19 + 0x60),*unaff_x23);
              *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
              thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x48),uVar1);
              return;
            }
            break;
          }
          FUN_03fd09cc(lVar3,iVar5,*unaff_x25);
                    /* try { // try from 052e322c to 053e32fb has its CatchHandler @ 052e3048 */
          FUN_052e34ac();
          lVar3 = *(long *)(unaff_x19 + 0x68);
          iVar5 = iVar5 + 1;
        } while (lVar3 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


