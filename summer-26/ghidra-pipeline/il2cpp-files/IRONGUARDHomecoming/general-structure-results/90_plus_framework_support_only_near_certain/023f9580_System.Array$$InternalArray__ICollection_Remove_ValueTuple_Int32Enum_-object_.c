/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ValueTuple<Int32Enum,-object>>
ENTRY_POINT: 023f9580
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 177
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x023f98b4) */
/* WARNING: Removing unreachable block (ram,0x023f98c0) */

void System_Array__InternalArray__ICollection_Remove<ValueTuple<Int32Enum,_object>>
               (undefined8 param_1,void *param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x27;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(void **)(unaff_x29 + -0x28) = param_2;
                    /* try { // try from 023f9594 to 024f9597 has its CatchHandler @ 023f95a0 */
  plVar4 = *(long **)(param_7 + 0x38);
                    /* try { // try from 023f9598 to 024f95c3 has its CatchHandler @ 023f92b0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f9594 with catch @ 023f95a0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f948c with catch @ 023f95a4
                        */
  if (plVar4 == (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f93c8 with catch @ 023f95a8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f9404 with catch @ 023f95ac
                        */
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_ResetModified__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_get_Properties__);
                    /* try { // try from 023f95c4 to 024f95c7 has its CatchHandler @ 023f95dc */
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationSection_DeserializeSection__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    plVar4 = *(long **)(param_7 + 0x38);
    if (plVar4 == (long *)0x0) {
      FUN_01ecafa0(param_7);
      plVar4 = *(long **)(param_7 + 0x38);
    }
  }
  uVar11 = (ulong)*(uint *)(*plVar4 + 0xfc);
  puVar10 = (undefined8 *)(&stack0x00000000 + -(uVar11 + 0xf & 0x1fffffff0));
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  plVar4 = (long *)FUN_0391ed34(unaff_x29 + -0x30,param_4,param_3,param_6,0);
  puVar1 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (param_6 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar8 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Configuration_ConfigurationElement_ResetModified__)
    ;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_029dad5c(plVar8,*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_get_Properties__);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_023f9740;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,6
                         );
LAB_023f9740:
    (*(code *)*puVar3)(plVar4,uVar2,puVar3[1]);
    plVar9 = *(long **)(param_7 + 0x38);
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      param_2 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(puVar10,param_2,uVar11);
    puVar3 = (undefined8 *)plVar9[1];
    uVar2 = *puVar3;
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    *(long **)(unaff_x29 + -0x18) = plVar4;
    *(undefined8 *)(unaff_x29 + -0x10) = param_5;
    (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x20,param_5);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar10 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_023f9800;
          }
          uVar11 = uVar11 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(plVar8,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_023f9800:
      (*(code *)*puVar10)(plVar8,puVar10[1]);
    }
  }
  else {
    plVar8 = *(long **)(param_7 + 0x38);
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      param_2 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(puVar10,param_2,uVar11);
    puVar3 = (undefined8 *)plVar8[1];
    uVar2 = *puVar3;
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      puVar10 = (undefined8 *)*puVar10;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    *(long **)(unaff_x29 + -0x18) = plVar4;
    *(undefined8 *)(unaff_x29 + -0x10) = param_5;
    (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x20,param_5);
  }
  plVar4 = *(long **)(unaff_x29 + -0x30);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar4;
  uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar11 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f9870;
      }
      uVar11 = uVar11 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar11 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar4,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_023f9870:
  (*(code *)*puVar10)(plVar4,puVar10[1]);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


