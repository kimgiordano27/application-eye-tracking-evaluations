/*
FUNCTION_NAME: FUN_03453e94
ENTRY_POINT: 03453e94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x034540b8) */
/* WARNING: Removing unreachable block (ram,0x0345408c) */
/* WARNING: Removing unreachable block (ram,0x034540c4) */

void FUN_03453e94(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  char local_34 [4];
  
  puVar1 = Method_System_RuntimeType_IsEnumDefined__;
  if ((DAT_0483290d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_RuntimeType_IsSubclassOf__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_IsEnumDefined__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_MakeArrayType__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__);
    DAT_0483290d = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x40);
  local_34[0] = '\0';
  FUN_035ce230(uVar9,local_34,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  lVar6 = *(long *)(lVar2 + 0xb8);
  if (*(char *)(lVar6 + 0x19) == '\0') {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    if (*(char *)(lVar6 + 0x18) == '\0') {
      lVar2 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_MakeArrayType__);
      FUN_033f2c18(lVar2,0);
      uVar3 = thunk_FUN_01f29c04(0);
      plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                         );
      FUN_034cb2ec(plVar4,uVar3,0);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_RuntimeType_IsSubclassOf__);
      FUN_034541fc(uVar3,1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_033f2df8(lVar2,plVar4,uVar3,0);
      if (plVar4 != (long *)0x0) {
        lVar2 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03454074;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar4,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03454074:
        (*(code *)*puVar5)(plVar4,puVar5[1]);
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar2 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar2 + 0xb8) + 0x19) = 1;
    }
  }
  if (local_34[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar9,0);
  }
  return;
}


