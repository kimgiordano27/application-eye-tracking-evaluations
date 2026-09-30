/*
FUNCTION_NAME: FUN_023f9558
ENTRY_POINT: 023f9558
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 197
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x023f98b4) */
/* WARNING: Removing unreachable block (ram,0x023f98c0) */

void FUN_023f9558(long ****param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *__dest;
  ulong uVar10;
  long *local_90;
  long ***local_88;
  long *local_80;
  long *plStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar6 = *(long **)(param_6 + 0x38);
  local_88 = (long ***)param_1;
  if (plVar6 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_ResetModified__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_get_Properties__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationSection_DeserializeSection__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar6 = *(long **)(param_6 + 0x38);
    if (plVar6 == (long *)0x0) {
      FUN_01ecafa0(param_6);
      plVar6 = *(long **)(param_6 + 0x38);
    }
  }
  uVar10 = (ulong)*(uint *)(*plVar6 + 0xfc);
  __dest = (long *)((long)&local_90 - (uVar10 + 0xf & 0x1fffffff0));
  local_90 = (long *)0x0;
  plVar6 = (long *)FUN_0391ed34(&local_90,param_3,param_2,param_5,0);
  puVar2 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  plStack_78 = plVar6;
  local_70 = param_4;
  if (param_5 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Configuration_ConfigurationElement_ResetModified__)
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_029dad5c(plVar3,*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_get_Properties__);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_023f9740;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,6
                         );
LAB_023f9740:
    (*(code *)*puVar5)(plVar6,uVar4,puVar5[1]);
    plVar6 = *(long **)(param_6 + 0x38);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      param_1 = &local_88;
    }
    memcpy(__dest,param_1,uVar10);
    puVar5 = (undefined8 *)plVar6[1];
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      __dest = (long *)*__dest;
    }
    local_80 = __dest;
    (*(code *)puVar5[2])(*puVar5,puVar5,0,&local_80,param_4);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_023f9800;
          }
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_023f9800:
      (*(code *)*puVar5)(plVar3,puVar5[1]);
    }
  }
  else {
    plVar6 = *(long **)(param_6 + 0x38);
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      param_1 = &local_88;
    }
    memcpy(__dest,param_1,uVar10);
    puVar5 = (undefined8 *)plVar6[1];
    if (-1 < *(int *)(*plVar6 + 0x28)) {
      __dest = (long *)*__dest;
    }
    local_80 = __dest;
    (*(code *)puVar5[2])(*puVar5,puVar5,0,&local_80,param_4);
  }
  plVar6 = local_90;
  if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *local_90;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_023f9870;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(local_90,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f9870:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


