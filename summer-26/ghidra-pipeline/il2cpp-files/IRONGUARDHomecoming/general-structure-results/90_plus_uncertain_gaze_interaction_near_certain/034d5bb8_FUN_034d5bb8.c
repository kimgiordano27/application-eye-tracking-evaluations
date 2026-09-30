/*
FUNCTION_NAME: FUN_034d5bb8
ENTRY_POINT: 034d5bb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 233
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x034d5e7c) */
/* WARNING: Removing unreachable block (ram,0x034d5e8c) */

void FUN_034d5bb8(undefined8 param_1,long param_2,ulong param_3)

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
  undefined4 uVar10;
  undefined8 local_38;
  
  if ((DAT_04832d54 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Threading_ExecutionContext_Run__);
    DAT_04832d54 = 1;
  }
  if (DAT_048317e1 == '\0') {
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
    DAT_048317e1 = '\x01';
  }
  if (param_2 == 0) {
    uVar2 = 0;
    uVar10 = 0;
  }
  else {
    uVar2 = FUN_0340ce04(param_2,0);
    uVar10 = *(undefined4 *)(param_2 + 0x10);
  }
  local_38 = 0;
  uVar3 = FUN_034d63fc(uVar2,uVar10,0x4000,&local_38);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_034d51f0(param_1);
    param_2 = System_Threading_OSSpecificSynchronizationContext__Post(param_2,uVar2);
  }
  uVar3 = FUN_034d5a50(param_1,param_2);
  puVar1 = Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__;
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                       );
    FUN_034dead8(plVar4,param_1,3,1,1,0x1000,0,0);
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    uVar10 = 1;
    if ((param_3 & 1) != 0) {
      uVar10 = 2;
    }
    FUN_034dead8(plVar5,param_2,uVar10,3,0,0x1000,0,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = (**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
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


