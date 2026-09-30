/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ValueTuple<OVRAnchor,-OVRAnchor>>
ENTRY_POINT: 023f9610
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x023f98b4) */
/* WARNING: Removing unreachable block (ram,0x023f98c0) */

void System_Array__InternalArray__ICollection_Remove<ValueTuple<OVRAnchor,_OVRAnchor>>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined4 unaff_w24;
  size_t unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
                    /* try { // try from 023f961c to 024f9643 has its CatchHandler @ 023f9658 */
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  plVar2 = (long *)FUN_0391ed34(unaff_x29 + -0x30,unaff_w24);
  puVar1 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (unaff_x19 == 0) {
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
    uVar3 = FUN_029dad5c(plVar8,*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_get_Properties__);
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
            *(long *)Method_System_Configuration_ConfigurationElement_Reset__) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_023f9740;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)Method_System_Configuration_ConfigurationElement_Reset__,6
                         );
LAB_023f9740:
    (*(code *)*puVar4)(plVar2,uVar3,puVar4[1]);
    plVar9 = *(long **)(unaff_x22 + 0x38);
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x23,unaff_x21,unaff_x25);
    puVar4 = (undefined8 *)plVar9[1];
    uVar3 = *puVar4;
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      unaff_x23 = (undefined8 *)*unaff_x23;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
    *(long **)(unaff_x29 + -0x18) = plVar2;
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
    (*(code *)puVar4[2])(uVar3,puVar4,0,unaff_x29 + -0x20);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_023f9800;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_023f9800:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
    }
  }
  else {
    plVar8 = *(long **)(unaff_x22 + 0x38);
                    /* try { // try from 023f9644 to 024f964f has its CatchHandler @ 023f92b0 */
                    /* try { // try from 023f9650 to 024f9657 has its CatchHandler @ 023f9658 */
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      unaff_x21 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x23,unaff_x21,unaff_x25);
    puVar4 = (undefined8 *)plVar8[1];
    uVar3 = *puVar4;
    if (-1 < *(int *)(*plVar8 + 0x28)) {
      unaff_x23 = (undefined8 *)*unaff_x23;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
    *(long **)(unaff_x29 + -0x18) = plVar2;
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
    (*(code *)puVar4[2])(uVar3,puVar4,0,unaff_x29 + -0x20);
  }
  plVar2 = *(long **)(unaff_x29 + -0x30);
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
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f9870;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f9870:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


