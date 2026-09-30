/*
FUNCTION_NAME: System.FieldAccessException$$.ctor
ENTRY_POINT: 03453f40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034540b8) */
/* WARNING: Removing unreachable block (ram,0x0345408c) */
/* WARNING: Removing unreachable block (ram,0x034540c4) */

void System_FieldAccessException___ctor(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  
  lVar4 = *(long *)(param_1 + 0xb8);
  if (*(char *)(lVar4 + 0x19) == '\0') {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)(*unaff_x23 + 0xb8);
    }
    if (*(char *)(lVar4 + 0x18) == '\0') {
      lVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_MakeArrayType__);
      FUN_033f2c18(lVar4,0);
      uVar1 = thunk_FUN_01f29c04(0);
      plVar2 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                         );
      FUN_034cb2ec(plVar2,uVar1,0);
      uVar1 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_IsSubclassOf__);
      FUN_034541fc(uVar1,1);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_033f2df8(lVar4,plVar2,uVar1,0);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_03454074;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar2,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03454074:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
      }
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *unaff_x23;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x19) = 1;
    }
  }
  if (in_stack_00000008._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return;
}


