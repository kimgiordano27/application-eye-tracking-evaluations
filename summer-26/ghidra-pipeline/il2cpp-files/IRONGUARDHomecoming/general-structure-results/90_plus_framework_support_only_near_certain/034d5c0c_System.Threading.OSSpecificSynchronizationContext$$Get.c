/*
FUNCTION_NAME: System.Threading.OSSpecificSynchronizationContext$$Get
ENTRY_POINT: 034d5c0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 164
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034d5e7c) */
/* WARNING: Removing unreachable block (ram,0x034d5e8c) */

void System_Threading_OSSpecificSynchronizationContext__Get(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  undefined4 uVar10;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x2a8));
                    /* try { // try from 034d5c14 to 035d5c1b has its CatchHandler @ 034d7800 */
  *(undefined1 *)(unaff_x19 + 0xd54) = 1;
  if (DAT_048317e1 == '\0') {
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
    DAT_048317e1 = '\x01';
  }
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar10 = 0;
  }
  else {
                    /* try { // try from 034d5c30 to 035d5c37 has its CatchHandler @ 034d7804 */
    uVar2 = FUN_0340ce04();
    uVar10 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  in_stack_00000018 = 0;
  uVar3 = FUN_034d63fc(uVar2,uVar10,0x4000,&stack0x00000018);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 034d5c74 to 035d5c9b has its CatchHandler @ 034d5e78 */
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_034d51f0();
    unaff_x21 = System_Threading_OSSpecificSynchronizationContext__Post();
  }
  uVar3 = FUN_034d5a50();
  puVar1 = Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__;
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                       );
                    /* try { // try from 034d5cd0 to 035d5cfb has its CatchHandler @ 034d5e74 */
    FUN_034dead8();
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    uVar10 = 1;
    if ((unaff_x22 & 1) != 0) {
      uVar10 = 2;
    }
    FUN_034dead8(plVar5,unaff_x21,uVar10,3,0,0x1000,0,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 034d5d3c to 035d5d43 has its CatchHandler @ 034d5e6c */
    uVar6 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
                    /* try { // try from 034d5d54 to 035d5d5b has its CatchHandler @ 034d5e64 */
                    /* try { // try from 034d5d5c to 035d5d67 has its CatchHandler @ 034d5e68 */
    if (*(int *)(*(long *)Method_System_Threading_ExecutionContext_Run__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_033f144c(uVar2,uVar6,0);
    FUN_033f0c20(uVar2,0,0,0,0);
    lVar8 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034d5de8;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_034d5de8:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_034d5e54;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_034d5e54:
      (*(code *)*puVar7)(plVar4,puVar7[1]);
    }
  }
  return;
}


