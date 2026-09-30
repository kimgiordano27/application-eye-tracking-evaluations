/*
FUNCTION_NAME: System.FieldAccessException$$.ctor
ENTRY_POINT: 03453ee4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034540b8) */
/* WARNING: Removing unreachable block (ram,0x0345408c) */
/* WARNING: Removing unreachable block (ram,0x034540c4) */

void System_FieldAccessException___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *unaff_x23;
  char cStack000000000000000c;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__);
  *(undefined1 *)(unaff_x19 + 0x90d) = 1;
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar1 = *unaff_x23;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x40);
  cStack000000000000000c = '\0';
  FUN_035ce230(uVar8,&stack0x0000000c,0);
  lVar1 = *unaff_x23;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar1 = *unaff_x23;
  }
  lVar5 = *(long *)(lVar1 + 0xb8);
  if (*(char *)(lVar5 + 0x19) == '\0') {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)(*unaff_x23 + 0xb8);
    }
    if (*(char *)(lVar5 + 0x18) == '\0') {
      lVar1 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_MakeArrayType__);
      FUN_033f2c18(lVar1,0);
      uVar2 = thunk_FUN_01f29c04(0);
      plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                         );
      FUN_034cb2ec(plVar3,uVar2,0);
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_IsSubclassOf__);
      FUN_034541fc(uVar2,1);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_033f2df8(lVar1,plVar3,uVar2,0);
      if (plVar3 != (long *)0x0) {
        lVar1 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03454074;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ecb238(plVar3,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03454074:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      lVar1 = *unaff_x23;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar1 = *unaff_x23;
      }
      *(undefined1 *)(*(long *)(lVar1 + 0xb8) + 0x19) = 1;
    }
  }
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar8,0);
  }
  return;
}


