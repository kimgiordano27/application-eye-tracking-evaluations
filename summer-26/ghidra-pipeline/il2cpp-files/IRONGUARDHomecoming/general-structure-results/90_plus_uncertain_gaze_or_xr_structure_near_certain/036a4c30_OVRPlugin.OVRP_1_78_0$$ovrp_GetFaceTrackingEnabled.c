/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 036a4c30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long unaff_x19;
  ulong uVar20;
  long *plVar21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  puVar6 = 
  Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0_<BlockUntilRecvMsg>b__0__
  ;
  puVar5 = 
  Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass13_0_<Unregister>b__0__
  ;
  FUN_040732d0(param_1,param_2,0);
  lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
  FUN_030f23f0(lVar12,0x18,*(undefined8 *)puVar5);
  plVar21 = (long *)(unaff_x19 + 0x58);
  *plVar21 = lVar12;
  thunk_FUN_01f51358(plVar21,lVar12);
  puVar8 = Method_Oculus_Interaction_PhysicsGrabbable_<>c_<_ctor>b__27_0__;
  puVar7 = Method_System_IO_Path_<>c_<JoinInternal>b__57_0__;
  puVar6 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_11__;
  puVar5 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_29__;
                    /* try { // try from 036a4c78 to 037a4c87 has its CatchHandler @ 036a4da8 */
  if (*plVar21 != 0) {
                    /* try { // try from 036a4c88 to 037a4ca3 has its CatchHandler @ 036a4db8 */
                    /* try { // try from 036a4ca4 to 037a4caf has its CatchHandler @ 036a4da4 */
    uVar13 = System_Collections_Generic_List<ONSPPropagationGeometry_TerrainMaterial>__Sort
                       (*plVar21,*(undefined8 *)
                                  Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_<Register>b__0__
                       );
    *(undefined8 *)(unaff_x19 + 0x60) = uVar13;
    thunk_FUN_01f51358();
    uVar20 = 2;
    do {
      lVar12 = *(long *)puVar6;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar12 = *(long *)puVar6;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_036a4fe0;
      if (*(uint *)(lVar12 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      iVar1 = *(int *)(lVar12 + uVar20 * 4 + 0x20);
      if ((iVar1 != -1) && ((*(uint *)(unaff_x19 + 0x40) >> (ulong)((uint)uVar20 & 0x1f) & 1) != 0))
      {
        plVar21 = *(long **)(unaff_x19 + 0x28);
        if (plVar21 == (long *)0x0) goto LAB_036a4fe0;
        lVar16 = *plVar21;
        lVar12 = *(long *)puVar5;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar12) {
              puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 4) * 0x10 + 0x138);
              goto LAB_036a4d64;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar21,lVar12,4);
LAB_036a4d64:
        (*(code *)*puVar14)(&stack0x00000030,plVar21,uVar20 & 0xffffffff,0,puVar14[1]);
        uVar11 = in_stack_00000038;
        uVar10 = uStack0000000000000034;
        iVar9 = iStack0000000000000030;
        uVar17 = FUN_036a4fe8();
        if ((uVar17 & 1) == 0) {
          plVar21 = *(long **)(unaff_x19 + 0x28);
          if (plVar21 == (long *)0x0) goto LAB_036a4fe0;
          lVar16 = *plVar21;
          lVar12 = *(long *)puVar5;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar12) {
                puVar14 = (undefined8 *)(lVar16 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_036a4df0;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          puVar14 = (undefined8 *)FUN_01ecb238(plVar21,lVar12,4);
LAB_036a4df0:
          (*(code *)*puVar14)(&stack0x00000030,plVar21,iVar1,0,puVar14[1]);
          in_stack_00000010 = CONCAT44(uStack0000000000000034,iStack0000000000000030);
          uStack0000000000000064 = uStack0000000000000044;
          uStack0000000000000060 = uStack0000000000000040;
          in_stack_00000058 = in_stack_00000038;
          in_stack_00000018 = in_stack_00000038;
          uStack0000000000000024 = uStack0000000000000044;
          uStack0000000000000020 = uStack0000000000000040;
          in_stack_00000050 = in_stack_00000010;
          in_stack_00000078 = FUN_036a5088();
        }
        iStack0000000000000030 = iVar1;
        uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,&stack0x00000030);
        in_stack_00000008._4_4_ = (uint)uVar20;
        uVar15 = thunk_FUN_01f113fc(*(undefined8 *)puVar7,(long)&stack0x00000008 + 4);
        FUN_0340f2f0(*(undefined8 *)
                      Method_Scene_PlayerController_<SetTimeScaleRoutine>d__82_System_Collections_IEnumerator_Reset__
                     ,uVar13,uVar15,0);
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_036a4fe0;
        uVar13 = FUN_036a5284(*(long *)(unaff_x19 + 0x30),iVar1);
        if (in_stack_00000078 == 0) goto LAB_036a4fe0;
        fVar3 = (float)uVar13;
        if (iVar1 != 0) {
          fVar3 = 0.0;
        }
        fVar4 = -(float)uVar13;
        if (uVar20 < 0x13) {
          fVar4 = fVar3;
        }
        FUN_04070398(in_stack_00000078,0);
        uVar13 = FUN_036a52fc(iVar9,uVar10,uVar11,uVar13,fVar4);
        lVar12 = in_stack_00000078;
        uVar15 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_Path_<>c_<JoinInternal>b__56_0__
                                   );
        FUN_036a5578(uVar15,iVar1,uVar20 & 0xffffffff,lVar12,uVar13);
        lVar12 = *(long *)(unaff_x19 + 0x58);
        if (lVar12 == 0) goto LAB_036a4fe0;
        lVar16 = *(long *)(lVar12 + 0x10);
        lVar18 = *(long *)puVar8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_036a4fe0;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          puVar14 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
          *puVar14 = uVar15;
          thunk_FUN_01f51358(puVar14,uVar15);
        }
        else {
          FUN_030f2bb4(lVar12,uVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x18);
    FUN_036a55d0();
    lVar12 = *(long *)(unaff_x19 + 0x48);
    *(undefined2 *)(unaff_x19 + 0x70) = 0x100;
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
      return;
    }
  }
LAB_036a4fe0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


