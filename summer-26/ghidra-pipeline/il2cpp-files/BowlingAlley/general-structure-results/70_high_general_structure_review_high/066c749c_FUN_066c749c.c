/*
FUNCTION_NAME: FUN_066c749c
ENTRY_POINT: 066c749c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_066c749c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_076e031d & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_TryGetValue__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_set_Item__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Request>__ctor__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Request>_TryGetValue__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_GetEnumerator__)
    ;
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_set_Item__);
    DAT_076e031d = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_88 = param_4[3];
  local_90 = param_4[2];
  uStack_78 = param_4[5];
  uStack_80 = param_4[4];
  uStack_98 = param_4[1];
  local_a0 = *param_4;
  FUN_066c6400(param_1,param_2,param_3,&local_a0);
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar4 = FUN_051a8054(*(long *)(param_1 + 0x48),param_2,param_3,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_TryGetValue__
                          ),
     puVar3 = 
     Method_System_Collections_Generic_Dictionary<VectorImage,_VectorImageRenderInfo>_set_Item__,
     puVar2 = Method_System_Collections_Generic_Dictionary<ulong,_Request>_TryGetValue__,
     puVar1 = Method_System_Collections_Generic_Dictionary<ulong,_Request>__ctor__, lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  FUN_041e3694(&local_b8,lVar4,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<ulong,_Vector3>_set_Item__);
  uStack_68 = uStack_b0;
  local_70 = local_b8;
  local_60 = local_a8;
  while( true ) {
    uVar5 = FUN_052d44b4(&local_70,*(undefined8 *)puVar2);
    if ((uVar5 & 1) == 0) {
      FUN_052d44b0(&local_70,*(undefined8 *)puVar1);
      return;
    }
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = FUN_050f8a90(*(long *)(param_1 + 0x50),*(undefined8 *)(local_60 + 0x10),
                         *(undefined8 *)puVar3);
    if (lVar4 == 0) break;
    uStack_d8 = param_4[3];
    local_e0 = param_4[2];
    uStack_c8 = param_4[5];
    uStack_d0 = param_4[4];
    uStack_e8 = param_4[1];
    local_f0 = *param_4;
    FUN_066c7c44(param_1,param_2,param_3,*(undefined8 *)(lVar4 + 0x18),param_5,&local_f0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


