/*
FUNCTION_NAME: XRIF._Support.Interactable.FVRPositionalButton$$CheckHandPosition
ENTRY_POINT: 03992600
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void XRIF__Support_Interactable_FVRPositionalButton__CheckHandPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  long *unaff_x21;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a8;
  
  uVar4 = FUN_036d35a8();
  if ((uVar4 & 1) != 0) {
    unaff_x20 = FUN_01f7e2fc();
  }
  if (unaff_x20 != 0) {
    plVar10 = (long *)(unaff_x20 + 0x20);
    lVar9 = *plVar10;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    puVar1 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>_Release__;
    uVar4 = FUN_036d35a8(lVar9,0,0);
    if ((uVar4 & 1) != 0) {
      lVar9 = FUN_01fe44b4(*(undefined8 *)
                            Method_System_Collections_Generic_List<BannedSession>_FindIndex__);
      *plVar10 = lVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar9);
    }
    lVar5 = FUN_01fe44b4(*(undefined8 *)puVar1);
    puVar3 = Method_System_Collections_Generic_List<BaseInputModule>__ctor__;
    puVar2 = Method_System_Collections_Generic_List<BannedSession>_RemoveAll__;
    puVar1 = PTR_DAT_03cbe438;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
      in_stack_000000a8._4_4_ = *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x18);
      uVar6 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbeda8,(long)&stack0x000000a8 + 4);
      uVar6 = FUN_025b4d3c(*(undefined8 *)puVar3,uVar6,0);
      uVar7 = FUN_025b1328(*(undefined8 *)puVar2,uVar6,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)puVar1);
      }
      FUN_0367a6ec(uVar7,0);
      puVar2 = Method_System_Collections_Generic_List<BannedSession>_get_Item__;
      puVar1 = Method_OVRObjectPool_ListScope<bool>__ctor__;
      if (lVar5 != 0) {
        FUN_036d38d4(lVar5,uVar6,0);
        *(undefined8 *)(lVar5 + 0x18) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar5 + 0x18),uVar6);
        *(undefined4 *)(lVar5 + 0x20) = 0;
        *(undefined1 *)(lVar5 + 0x38) = 0;
        lVar8 = FUN_01ab6a94(*(undefined8 *)puVar1,1);
        in_stack_00000090 = *(undefined8 *)puVar2;
        in_stack_00000098 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000090);
        puVar3 = Method_System_Collections_Generic_List<BaseInputModule>_RemoveAt__;
        puVar2 = Method_OVRObjectPool_ListScope<bool>_Dispose__;
        puVar1 = PTR_DAT_03cbe2e0;
        in_stack_00000098 = 0x4296000000000000;
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_039928b8:
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          *(undefined8 *)(lVar8 + 0x28) = 0x4296000000000000;
          *(undefined8 *)(lVar8 + 0x20) = in_stack_00000090;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar8 + 0x20),0);
          *(long *)(lVar5 + 0x28) = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar5 + 0x28),lVar8);
          lVar8 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
          in_stack_00000060 = *(undefined8 *)puVar3;
          in_stack_00000070 = 0;
          in_stack_00000068 = 0;
          in_stack_00000080 = 0;
          in_stack_00000078 = 0;
          in_stack_00000088 = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000060);
          in_stack_00000068 = *(undefined8 *)puVar1;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((ulong)&stack0x00000060 | 8);
          uVar6 = _DAT_00d36240;
          auVar11 = NEON_fmov(0x3f800000,4);
          in_stack_00000078 = _UNK_00d36248;
          in_stack_00000070 = _DAT_00d36240;
          in_stack_00000088 = auVar11._8_8_;
          in_stack_00000080 = auVar11._0_8_;
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_039928b8;
            *(undefined8 *)(lVar8 + 0x38) = _UNK_00d36248;
            *(undefined8 *)(lVar8 + 0x30) = uVar6;
            *(undefined8 *)(lVar8 + 0x48) = in_stack_00000088;
            *(undefined8 *)(lVar8 + 0x40) = in_stack_00000080;
            *(undefined8 *)(lVar8 + 0x28) = in_stack_00000068;
            *(undefined8 *)(lVar8 + 0x20) = in_stack_00000060;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar8 + 0x20,0);
            *(long *)(lVar5 + 0x30) = lVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)(lVar5 + 0x30),lVar8);
            if (*(long *)(lVar9 + 0x18) != 0) {
              FUN_01b5f01c(*(long *)(lVar9 + 0x18),lVar5,
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<Transform>__ctor__
                          );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


