/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.StoreFieldInstruction$$Run
ENTRY_POINT: 01bc8eb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 193
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Linq_Expressions_Interpreter_StoreFieldInstruction__Run
               (ulong param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<WaitForTurn>d__5>__
                      );
    thunk_FUN_00d48444(StringLiteral_2640);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_get_Count__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SelectorMatchRecord>_Sort__);
    thunk_FUN_00d48444(PTR_DAT_033f4ee0);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxnmqd_f64__);
    thunk_FUN_00d48444(System_RuntimeArgumentHandle_var);
    thunk_FUN_00d48444(PTR_DAT_033f0aa8);
    *(undefined1 *)(unaff_x21 + 0x7b9) = 1;
  }
  lVar2 = FUN_01bc9288(param_2);
  puVar1 = 
  Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_get_Count__;
  if (param_3 != 0) {
    lVar3 = FUN_013a1dbc(param_3,*(undefined8 *)
                                  Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>_get_Count__
                        );
    if ((lVar3 != 0) && (uVar4 = FUN_01bc935c(), lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 0x10) = uVar4;
      lVar2 = FUN_01bc9288(param_2);
      lVar3 = FUN_013a1dbc(param_3,*(undefined8 *)puVar1);
      if ((lVar3 != 0) && (uVar4 = FUN_01bc93c4(), lVar2 != 0)) {
        *(undefined8 *)(lVar2 + 0x18) = uVar4;
        lVar2 = FUN_013a1dbc(param_3,*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
          lVar2 = FUN_013a1dbc(param_3,*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            lVar2 = *(long *)(lVar2 + 0x28);
            if (lVar2 == 0) {
              lVar2 = FUN_01bc9444(*(undefined1 *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x19),
                                   *(undefined1 *)(param_3 + 0x1a));
            }
            uVar4 = *(undefined8 *)(param_3 + 0x20);
            if (*(int *)(param_3 + 0x28) == 1) {
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__
                                        );
              puVar1 = OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo;
              if (lVar3 == 0) goto LAB_01bc90e4;
              FUN_01bc981c(lVar3,lVar2,uVar4);
              uVar4 = *(undefined8 *)(param_3 + 0x20);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar5 == 0) goto LAB_01bc90e4;
              FUN_01bc98c0(lVar5,lVar2,uVar4);
            }
            else {
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0aa8);
              puVar1 = System_RuntimeArgumentHandle_var;
              if (lVar3 == 0) goto LAB_01bc90e4;
              FUN_01bc9964(lVar3,lVar2,uVar4);
              uVar4 = *(undefined8 *)(param_3 + 0x20);
              lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar5 == 0) goto LAB_01bc90e4;
              FUN_01bc9a08(lVar5,lVar2,uVar4);
            }
            lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_VRequest_<WaitForTurn>d__5>__
                                      );
            puVar1 = StringLiteral_2640;
            if (lVar2 != 0) {
              System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64___ctor
                        (lVar2,lVar5);
              *(long *)(param_2 + 0x10) = lVar2;
              lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              if (lVar2 != 0) {
                FUN_01bc5cbc(lVar2,lVar3);
                *(long *)(param_2 + 0x28) = lVar2;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01bc90e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


