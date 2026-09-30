/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_added_t$$Dispose
ENTRY_POINT: 084d3cd4
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


void Unity_Services_Vivox_vx_evt_session_added_t__Dispose(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x22;
  
                    /* try { // try from 084d3cdc to 085d3ce3 has its CatchHandler @ 084d3e80 */
  FUN_054c0f50();
                    /* try { // try from 084d3cf0 to 085d3d0f has its CatchHandler @ 084d3e94 */
  puVar3 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
  *puVar3 = param_1;
  thunk_FUN_03d1023c(puVar3,param_1);
  uVar4 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetAttribute<object>();
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar6);
                    /* try { // try from 084d3d28 to 085d3d2b has its CatchHandler @ 084d3e90 */
    lVar6 = *unaff_x22;
  }
  puVar2 = PTR_DAT_092808b0;
  puVar1 = PTR_DAT_092808a0;
                    /* try { // try from 084d3d2c to 085d3d2f has its CatchHandler @ 084d3eb4 */
                    /* try { // try from 084d3d38 to 085d3d3b has its CatchHandler @ 084d3e88 */
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x60);
                    /* try { // try from 084d3d3c to 085d3d3f has its CatchHandler @ 084d3ec8 */
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar6);
      lVar6 = *unaff_x22;
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092808c8);
    FUN_054bec28(lVar7,uVar8,*(undefined8 *)PTR_DAT_092808f8,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *plVar5 = lVar7;
    thunk_FUN_03d1023c(plVar5,lVar7);
  }
  uVar4 = FUN_04f133b8(uVar4,lVar7,*(undefined8 *)puVar1);
  uVar4 = FUN_04f22458(uVar4,*(undefined8 *)puVar2);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar6);
    lVar6 = *unaff_x22;
  }
  puVar1 = PTR_DAT_09280898;
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x68);
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar6);
      lVar6 = *unaff_x22;
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092808d8);
    FUN_054be464(lVar7,uVar8,*(undefined8 *)PTR_DAT_09280900,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x68);
    *plVar5 = lVar7;
    thunk_FUN_03d1023c(plVar5,lVar7);
  }
  uVar4 = FUN_04f0c650(uVar4,lVar7,*(undefined8 *)puVar1);
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar6);
    lVar6 = *unaff_x22;
  }
  puVar1 = PTR_DAT_092808a8;
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x70);
  if (lVar7 == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar6);
      lVar6 = *unaff_x22;
    }
    uVar8 = **(undefined8 **)(lVar6 + 0xb8);
    lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_092808e0);
    FUN_054bf3fc(lVar7,uVar8,*(undefined8 *)PTR_DAT_09280908,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x70);
    *plVar5 = lVar7;
    thunk_FUN_03d1023c(plVar5,lVar7);
  }
  uVar4 = FUN_04f1e940(uVar4,lVar7,*(undefined8 *)puVar1);
  FUN_04f22458(uVar4,*(undefined8 *)puVar2);
  return;
}


