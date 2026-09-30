/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.TrackedPoseDriver$$BindPosition
ENTRY_POINT: 0315b6e8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_XR_TrackedPoseDriver__BindPosition(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x25;
  undefined8 *unaff_x28;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000258;
  
  FUN_01ab69ac(PTR_DAT_03cd7db8);
  FUN_01ab69ac(PTR_DAT_03cd7dc0);
  FUN_01ab69ac(System_Func<UserRoomTaskPostData>_TypeInfo);
  FUN_01ab69ac(System_Func<ValidateCommandEvent>_TypeInfo);
  FUN_01ab69ac(System_Func<VisualElementFocusChangeTarget>_TypeInfo);
                    /* try { // try from 0315b72c to 0325b753 has its CatchHandler @ 0315b868 */
  FUN_01ab69ac(PTR_DAT_03cbeda8);
  FUN_01ab69ac(PTR_DAT_03cbeb18);
  FUN_01ab69ac(PTR_DAT_03ce78e0);
  FUN_01ab69ac(System_Collections_Generic_IReadOnlyList<ParameterExpression>_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03ce7a20);
  *(undefined1 *)(unaff_x21 + 0xdcb) = 1;
  unaff_x28[0x35] = 0;
  unaff_x28[0x34] = 0;
  unaff_x28[0x37] = 0;
  unaff_x28[0x36] = 0;
  unaff_x28[0x31] = 0;
  unaff_x28[0x30] = 0;
  unaff_x28[0x33] = 0;
  unaff_x28[0x32] = 0;
  puVar5 = PTR_DAT_03cd7dc0;
  if (unaff_x19 != 0) {
    uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
                    /* try { // try from 0315b788 to 0325b7af has its CatchHandler @ 0315b864 */
    if (*(int *)(*(long *)PTR_DAT_03cd7db8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    puVar7 = System_Func<VisualElementFocusChangeTarget>_TypeInfo;
    puVar6 = PTR_DAT_03ce7a20;
    puVar1 = (undefined8 *)PTR_DAT_03ce78e0;
    puVar4 = PTR_DAT_03cbeb18;
                    /* try { // try from 0315b7b0 to 0325b7c7 has its CatchHandler @ 0315b86c */
                    /* try { // try from 0315b7c8 to 0325b847 has its CatchHandler @ 0315b5bc */
    uVar11 = FUN_0314f870(uVar11,unaff_x20 + 2,0);
    uVar12 = unaff_x20[0xb];
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar5);
    }
    FUN_0317a108(uVar12,uVar11,&stack0x00000210,0);
    if (*(char *)(unaff_x19 + 0x1c) != '\0') {
      puVar1 = (undefined8 *)puVar6;
    }
    FUN_031121a8(&stack0x00000130,*puVar1,0);
    uVar12 = *(undefined8 *)puVar4;
    unaff_x28[0x2d] = unaff_x28[0x15];
    unaff_x28[0x2c] = unaff_x28[0x14];
    unaff_x28[0x2f] = unaff_x28[0x17];
    unaff_x28[0x2e] = unaff_x28[0x16];
    plVar8 = (long *)FUN_01ab6a94(uVar12,6);
    uVar12 = *(undefined8 *)puVar7;
    unaff_x28[0x25] = unaff_x28[0x31];
    unaff_x28[0x24] = unaff_x28[0x30];
    unaff_x28[0x27] = unaff_x28[0x33];
    unaff_x28[0x26] = unaff_x28[0x32];
                    /* try { // try from 0315b848 to 0325b84b has its CatchHandler @ 0315b860 */
    unaff_x28[0x29] = unaff_x28[0x35];
    unaff_x28[0x28] = unaff_x28[0x34];
    unaff_x28[0x2b] = unaff_x28[0x37];
    unaff_x28[0x2a] = unaff_x28[0x36];
                    /* try { // try from 0315b84c to 0325b84f has its CatchHandler @ 0315b5bc */
    lVar9 = thunk_FUN_01a89a98(uVar12,&stack0x000001b0);
                    /* try { // try from 0315b850 to 0325b853 has its CatchHandler @ 0315b85c */
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 0315b854 to 0325b87b has its CatchHandler @ 0315b5bc */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0315b850 with catch @ 0315b85c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0315b848 with catch @ 0315b860
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0315b788 with catch @ 0315b864
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0315b72c with catch @ 0315b868
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0315b7b0 with catch @ 0315b86c
                        */
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_0315bb3c:
        uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar11,0);
      }
      puVar5 = PTR_DAT_03cbeda8;
      if ((int)plVar8[3] != 0) {
                    /* try { // try from 0315b87c to 0325b87f has its CatchHandler @ 0315b890 */
        plVar8[4] = lVar9;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar9);
        uStack000000000000000c = (undefined4)uVar11;
        lVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar5,(long)&stack0x00000008 + 4);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_0315bb3c;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 5,lVar9);
          uStack0000000000000008 = (undefined4)((ulong)uVar11 >> 0x20);
          lVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar5,&stack0x00000008);
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
          goto LAB_0315bb3c;
          puVar5 = System_Func<UserRoomTaskPostData>_TypeInfo;
          if (2 < *(uint *)(plVar8 + 3)) {
            plVar8[6] = lVar9;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 6,lVar9);
            FUN_031b46f4(&stack0x000000b0,unaff_x19 + 0x20,0);
            memcpy(&stack0x00000130,&stack0x000000b0,0x80);
            memcpy(&stack0x000000b0,&stack0x00000130,0x80);
            lVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar5,&stack0x000000b0);
            if ((lVar9 != 0) &&
               (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
            goto LAB_0315bb3c;
            puVar4 = System_Func<ValidateCommandEvent>_TypeInfo;
            if (3 < *(uint *)(plVar8 + 3)) {
              plVar8[7] = lVar9;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 7,lVar9);
              uVar11 = *(undefined8 *)puVar4;
              unaff_x28[1] = unaff_x28[0x2d];
              *unaff_x28 = unaff_x28[0x2c];
              unaff_x28[3] = unaff_x28[0x2f];
              unaff_x28[2] = unaff_x28[0x2e];
              lVar9 = thunk_FUN_01a89a98(uVar11,&stack0x00000090);
              if ((lVar9 != 0) &&
                 (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              goto LAB_0315bb3c;
              if (4 < *(uint *)(plVar8 + 3)) {
                plVar8[8] = lVar9;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 8,lVar9);
                memcpy(&stack0x00000010,unaff_x20 + 0xe,0x80);
                lVar9 = thunk_FUN_01a89a98(*(undefined8 *)puVar5,&stack0x00000010);
                if ((lVar9 != 0) &&
                   (lVar10 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)
                   ) goto LAB_0315bb3c;
                puVar5 = System_Collections_Generic_IReadOnlyList<ParameterExpression>_TypeInfo;
                if (5 < *(uint *)(plVar8 + 3)) {
                  plVar8[9] = lVar9;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar8 + 9,lVar9);
                  uVar11 = FUN_025be8f4(*(undefined8 *)puVar5,plVar8,0);
                  FUN_0311e224(uVar11,0);
                  if (DAT_0412bd96 == '\0') {
                    FUN_01ab69ac(PTR_DAT_03cd7db8);
                    FUN_01ab69ac(PTR_DAT_03cd7dc0);
                    DAT_0412bd96 = '\x01';
                  }
                  puVar5 = PTR_DAT_03cd7dc0;
                  uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
                  if (*(int *)(*(long *)PTR_DAT_03cd7db8 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar11 = FUN_0314f870(uVar11,unaff_x20 + 2,0);
                  uVar12 = *unaff_x20;
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
                  cVar3 = *(char *)(unaff_x19 + 0x1c);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01a58e78(*(long *)puVar5);
                  }
                  FUN_03177a04(uVar12,uVar11,uVar2,cVar3 != '\0',0);
                  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000258) {
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


