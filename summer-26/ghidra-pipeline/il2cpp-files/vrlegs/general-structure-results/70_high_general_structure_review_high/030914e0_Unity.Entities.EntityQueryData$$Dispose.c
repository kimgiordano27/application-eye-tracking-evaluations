/*
FUNCTION_NAME: Unity.Entities.EntityQueryData$$Dispose
ENTRY_POINT: 030914e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_Entities_EntityQueryData__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000028;
  
                    /* catch() { ... } // from try @ 03091480 with catch @ 030914e0
                       catch() { ... } // from try @ 030914c4 with catch @ 030914e0 */
  FUN_02215a88();
                    /* try { // try from 030914e8 to 031914eb has its CatchHandler @ 0309150c */
                    /* try { // try from 030914ec to 03191503 has its CatchHandler @ 03091158 */
  FUN_030929e0(CONCAT44(uStack000000000000001c,uStack0000000000000018));
                    /* catch() { ... } // from try @ 03091464 with catch @ 030914f4 */
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    FUN_022195a8(*(long *)(unaff_x21 + 0x20),*unaff_x26);
    uVar3 = FUN_01f73ff4();
    puVar1 = PTR_DAT_03cc1828;
    if (*(long *)(unaff_x21 + 0x28) != 0) {
      FUN_022195a8(*(long *)(unaff_x21 + 0x28),*(undefined8 *)PTR_DAT_03cecee0);
      uVar4 = FUN_01f73ff4();
      in_stack_00000010 = 0;
      if (*(long *)(unaff_x21 + 0x40) != 0) {
        FUN_022195a8(*(long *)(unaff_x21 + 0x40),
                     *(undefined8 *)Cinemachine_CinemachineImpulseDefinition_ImpulseShapes_var);
        uStack0000000000000018 = FUN_01f73ff4();
        FUN_02241190(&stack0x00000010,&stack0x00000018,*(undefined8 *)puVar1);
      }
      puVar2 = 
      Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A30_PostfixBurstDelegate_var;
      in_stack_00000008 = 0;
      if (*(long *)(unaff_x21 + 0x48) != 0) {
        FUN_022195a8(*(long *)(unaff_x21 + 0x48),
                     *(undefined8 *)
                      Unity_Entities_ChunkIterationUtility_ToChunkIndexList_00000A30_PostfixBurstDelegate_var
                    );
        uStack0000000000000018 = FUN_01f73ff4();
        FUN_02241190(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar1);
      }
      puVar1 = Unity_Entities_ICleanupSharedComponentData_var;
      lVar5 = *(long *)(unaff_x21 + 0x30);
      if ((lVar5 != 0) && (*(long *)(unaff_x21 + 0x18) != 0)) {
        if (*(int *)(lVar5 + 0x18) == *(int *)(*(long *)(unaff_x21 + 0x18) + 0x18)) {
          FUN_022195a8(lVar5,*(undefined8 *)puVar2);
          uStack0000000000000018 = FUN_01f73ff4();
          FUN_02241190();
        }
        lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
        FUN_0306b47c(lVar5,0);
        puVar1 = System_Runtime_Remoting_Channels_IClientChannelSinkProvider_var;
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x14) = unaff_w22;
          lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
          FUN_0306b454(lVar6,0);
          puVar1 = PTR_DAT_03cce9f8;
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x10) = unaff_w23;
            *(undefined4 *)(lVar6 + 0x14) = uVar3;
            *(undefined4 *)(lVar6 + 0x1c) = uVar4;
            uStack0000000000000018 = 0xffffffff;
            FUN_022414f4(&stack0x00000010,&stack0x00000018,(long)&stack0x00000028 + 4,
                         *(undefined8 *)puVar1);
            *(undefined4 *)(lVar6 + 0x28) = in_stack_00000028._4_4_;
            uStack0000000000000018 = 0xffffffff;
            FUN_022414f4(&stack0x00000008,&stack0x00000018,(long)&stack0x00000028 + 4,
                         *(undefined8 *)puVar1);
            *(undefined4 *)(lVar6 + 0x2c) = in_stack_00000028._4_4_;
            uStack0000000000000018 = 0xffffffff;
            FUN_022414f4();
            *(undefined4 *)(lVar6 + 0x24) = in_stack_00000028._4_4_;
            *(long *)(lVar5 + 0x18) = lVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((long *)(lVar5 + 0x18),lVar6);
            *(undefined4 *)(lVar5 + 0x20) = unaff_w19;
            *(undefined4 *)(lVar5 + 0x10) = 4;
            return lVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


