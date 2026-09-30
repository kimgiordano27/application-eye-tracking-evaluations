/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_added_t$$Dispose
ENTRY_POINT: 084d3d40
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_evt_session_added_t__Dispose(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar8;
  
                    /* try { // try from 084d3d40 to 085d3d43 has its CatchHandler @ 084d3ea0 */
  puVar8 = *(undefined8 **)(unaff_x23 + 0x8b0);
                    /* try { // try from 084d3d44 to 085d3d47 has its CatchHandler @ 084d3ed0 */
  if (unaff_x20 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 084d3d50 to 085d3d53 has its CatchHandler @ 084d3e78 */
                    /* try { // try from 084d3d54 to 085d3d9b has its CatchHandler @ 084d3e8c */
      thunk_FUN_03db619c(param_1);
      param_1 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(param_1 + 0xb8);
    uVar2 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092808c8);
    FUN_054bec28(uVar2,uVar7,*(undefined8 *)PTR_DAT_092808f8,0);
    puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *puVar3 = uVar2;
                    /* try { // try from 084d3da0 to 085d3da3 has its CatchHandler @ 084d3e84 */
    thunk_FUN_03d1023c(puVar3,uVar2);
  }
                    /* try { // try from 084d3da4 to 085d3dff has its CatchHandler @ 084d3e7c */
  uVar2 = FUN_04f133b8();
  uVar2 = FUN_04f22458(uVar2,*puVar8);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar5);
    lVar5 = *unaff_x22;
  }
  puVar1 = PTR_DAT_09280898;
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x68);
  if (lVar6 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar5);
      lVar5 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
                    /* try { // try from 084d3e14 to 085d3e3b has its CatchHandler @ 084d3e8c */
    lVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092808d8);
    FUN_054be464(lVar6,uVar7,*(undefined8 *)PTR_DAT_09280900,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
    *plVar4 = lVar6;
    thunk_FUN_03d1023c(plVar4,lVar6);
  }
                    /* try { // try from 084d3e50 to 085d3e77 has its CatchHandler @ 084d3e7c */
  uVar2 = FUN_04f0c650(uVar2,lVar6,*(undefined8 *)puVar1);
  lVar5 = *unaff_x22;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar5);
    lVar5 = *unaff_x22;
  }
  puVar1 = PTR_DAT_092808a8;
                    /* catch() { ... } // from try @ 084d3d50 with catch @ 084d3e78
                       try { // try from 084d3e78 to 085d3eeb has its CatchHandler @ 084d3aa0 */
                    /* catch() { ... } // from try @ 084d3da4 with catch @ 084d3e7c
                       catch() { ... } // from try @ 084d3e50 with catch @ 084d3e7c */
  lVar6 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x70);
                    /* catch() { ... } // from try @ 084d3cdc with catch @ 084d3e80 */
                    /* catch() { ... } // from try @ 084d3da0 with catch @ 084d3e84 */
  if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 084d3d38 with catch @ 084d3e88 */
                    /* catch() { ... } // from try @ 084d3d54 with catch @ 084d3e8c
                       catch() { ... } // from try @ 084d3e14 with catch @ 084d3e8c */
    if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 084d3d28 with catch @ 084d3e90 */
      thunk_FUN_03db619c(lVar5);
      lVar5 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(lVar5 + 0xb8);
    lVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092808e0);
    FUN_054bf3fc(lVar6,uVar7,*(undefined8 *)PTR_DAT_09280908,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *plVar4 = lVar6;
    thunk_FUN_03d1023c(plVar4,lVar6);
  }
  uVar2 = FUN_04f1e940(uVar2,lVar6,*(undefined8 *)puVar1);
  FUN_04f22458(uVar2,*puVar8);
  return;
}


