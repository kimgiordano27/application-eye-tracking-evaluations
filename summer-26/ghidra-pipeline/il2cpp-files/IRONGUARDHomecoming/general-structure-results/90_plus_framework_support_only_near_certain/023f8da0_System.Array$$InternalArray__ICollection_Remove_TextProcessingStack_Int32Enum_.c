/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<TextProcessingStack<Int32Enum>>
ENTRY_POINT: 023f8da0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x023f8fbc) */
/* WARNING: Removing unreachable block (ram,0x023f8fc8) */

void System_Array__InternalArray__ICollection_Remove<TextProcessingStack<Int32Enum>>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  void *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar8;
  undefined8 *unaff_x23;
  size_t unaff_x24;
  long unaff_x26;
  long unaff_x29;
  
  puVar1 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_ResetModified__);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_029dad5c(plVar2,*(undefined8 *)
                       Method_System_Configuration_ConfigurationElement_get_Properties__);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
        goto LAB_023f8e50;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_023f8e50:
  (*(code *)*puVar3)();
  plVar8 = *(long **)(unaff_x22 + 0x38);
  if (-1 < *(int *)(*plVar8 + 0x28)) {
    unaff_x20 = (void *)(unaff_x29 + -0x20);
  }
  memcpy(unaff_x23,unaff_x20,unaff_x24);
  puVar3 = (undefined8 *)plVar8[1];
  uVar4 = *puVar3;
  if (-1 < *(int *)(*plVar8 + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
  *(long **)(unaff_x29 + -0x10) = unaff_x21;
  (*(code *)puVar3[2])(uVar4,puVar3,0,unaff_x29 + -0x18);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023f8f0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023f8f0c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  plVar2 = *(long **)(unaff_x29 + -0x28);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f8f7c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f8f7c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


