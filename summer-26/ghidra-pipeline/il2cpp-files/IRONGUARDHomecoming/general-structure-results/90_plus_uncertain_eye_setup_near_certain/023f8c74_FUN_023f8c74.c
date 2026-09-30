/*
FUNCTION_NAME: FUN_023f8c74
ENTRY_POINT: 023f8c74
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


/* WARNING: Removing unreachable block (ram,0x023f8fbc) */
/* WARNING: Removing unreachable block (ram,0x023f8fc8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_023f8c74(undefined8 *param_1,undefined8 param_2,undefined4 param_3,long param_4,
                 long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *aplStack_80 [4];
  long *plStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar5 = *(long **)(param_5 + 0x38);
  aplStack_80[2] = param_1;
  if (plVar5 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_ResetModified__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_get_Properties__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationSection_DeserializeSection__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar5 = *(long **)(param_5 + 0x38);
    if (plVar5 == (long *)0x0) {
      FUN_01ecafa0(param_5);
      plVar5 = *(long **)(param_5 + 0x38);
    }
  }
  uVar12 = (ulong)*(uint *)(*plVar5 + 0xfc);
  puVar11 = (undefined8 *)((long)aplStack_80 - (uVar12 + 0xf & 0x1fffffff0));
  aplStack_80[1] = (long *)0x0;
  plVar5 = (long *)FUN_0391ed34(aplStack_80 + 1,param_3,param_2,param_4,0);
  puVar2 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  plStack_60 = plVar5;
  if (param_4 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar9 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Configuration_ConfigurationElement_ResetModified__)
    ;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_029dad5c(plVar9,*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_get_Properties__);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_023f8e50;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,6
                         );
LAB_023f8e50:
    (*(code *)*puVar4)(plVar5,uVar3,puVar4[1]);
    plVar10 = *(long **)(param_5 + 0x38);
    if (-1 < *(int *)(*plVar10 + 0x28)) {
      param_1 = aplStack_80 + 2;
    }
    memcpy(puVar11,param_1,uVar12);
    puVar4 = (undefined8 *)plVar10[1];
    if (-1 < *(int *)(*plVar10 + 0x28)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    aplStack_80[3] = puVar11;
    (*(code *)puVar4[2])(*puVar4,puVar4,0,aplStack_80 + 3,plVar5);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar11 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_023f8f0c;
          }
          uVar12 = uVar12 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar12 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01ecb238(plVar9,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_023f8f0c:
      (*(code *)*puVar11)(plVar9,puVar11[1]);
    }
  }
  else {
    plVar9 = *(long **)(param_5 + 0x38);
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      param_1 = aplStack_80 + 2;
    }
    memcpy(puVar11,param_1,uVar12);
    puVar4 = (undefined8 *)plVar9[1];
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    aplStack_80[3] = puVar11;
    (*(code *)puVar4[2])(*puVar4,puVar4,0,aplStack_80 + 3,plVar5);
  }
  plVar5 = aplStack_80[1];
  if (aplStack_80[1] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *aplStack_80[1];
  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar12 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar11 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f8f7c;
      }
      uVar12 = uVar12 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar12 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_01ecb238(aplStack_80[1],
                         *(long *)
                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0
                        );
LAB_023f8f7c:
  (*(code *)*puVar11)(plVar5,puVar11[1]);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


