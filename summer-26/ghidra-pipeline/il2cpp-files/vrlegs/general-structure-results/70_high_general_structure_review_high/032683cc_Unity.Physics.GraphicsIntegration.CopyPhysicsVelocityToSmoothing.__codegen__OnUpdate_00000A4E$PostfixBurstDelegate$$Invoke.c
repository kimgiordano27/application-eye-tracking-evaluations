/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.CopyPhysicsVelocityToSmoothing.__codegen__OnUpdate_00000A4E$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 032683cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnUpdate_00000A4E_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar15;
  ulong uVar16;
  long in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long *in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  do {
    unaff_w23 = unaff_w23 + 1;
    lVar11 = *unaff_x22;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x27) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03268214;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec();
LAB_03268214:
    iVar6 = (*(code *)*puVar7)();
    if (iVar6 <= unaff_w23) {
      lVar11 = *unaff_x26;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar11);
        lVar11 = *unaff_x26;
      }
      puVar1 = System_BitConverter_TypeInfo;
      lVar10 = *(long *)System_BitConverter_TypeInfo;
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar10 = *(long *)puVar1;
      }
      lVar14 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar14 == 0) {
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar10 = *(long *)puVar1;
        }
        uVar9 = **(undefined8 **)(lVar10 + 0xb8);
        lVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                                     _Common_Gameplay_Support_Scripts_InteractiveItem_BioCompass_TypeInfo
                                   );
        FUN_0217c478(lVar14,uVar9,*(undefined8 *)System_Collections_BitArray_TypeInfo,0);
        plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar8 = lVar14;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar14);
      }
      if (lVar11 != 0) {
        FUN_02219514(lVar11,lVar14,*(undefined8 *)RootMotion_BipedReferences_TypeInfo);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (in_stack_00000008 != 0) {
          FUN_02216540(in_stack_00000008,*(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x18),
                       *(undefined8 *)RootMotion_FinalIK_BipedIKSolvers_TypeInfo);
          return;
        }
      }
LAB_032684f0:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar11 = *unaff_x22;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x28) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03268274;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec();
LAB_03268274:
    plVar8 = (long *)(*(code *)*puVar7)();
    if (plVar8 == (long *)0x0) goto LAB_032684f0;
    iVar6 = FUN_037b5130(plVar8,0);
    if (iVar6 != -1) {
      uVar9 = FUN_037b4844(plVar8,0);
      in_stack_00000040 = unaff_x20[2];
      in_stack_00000038 = unaff_x20[1];
      in_stack_00000030 = (long *)*unaff_x20;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x26);
      }
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000040;
      uVar12 = FUN_032684f4(uVar9,&stack0x00000050,&stack0x00000070,(long)&stack0x00000068 + 4);
      if ((uVar12 & 1) != 0) {
        lVar11 = (**(code **)(*unaff_x21 + 600))();
        uVar5 = in_stack_00000078;
        uVar4 = uStack0000000000000074;
        uVar3 = uStack0000000000000070;
        if (lVar11 == 0) goto LAB_032684f0;
        uVar16 = (ulong)uStack0000000000000074;
        uVar15 = FUN_03675b48(uStack0000000000000070,uVar16,in_stack_00000078,lVar11,0);
        uVar9 = (**(code **)(*unaff_x21 + 600))();
        uVar12 = (**(code **)(*plVar8 + 0x418))
                           (uVar15,uVar16,plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x420));
        if ((uVar12 & 1) != 0) {
          lVar11 = *unaff_x26;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar11 = *unaff_x26;
          }
          uVar2 = in_stack_00000068._4_4_;
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
          *unaff_x19 = 0;
          unaff_x19[1] = 0;
          unaff_x19[2] = 0;
          in_stack_00000030 = plVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000030,plVar8)
          ;
          in_stack_00000038 = CONCAT44(uVar4,uVar3);
          in_stack_00000040 = CONCAT44((int)uVar15,uVar5);
          uStack0000000000000048 = (undefined4)uVar16;
          uStack000000000000004c = uVar2;
          if (lVar11 == 0) goto LAB_032684f0;
          in_stack_00000028 = CONCAT44(uVar2,uStack0000000000000048);
          in_stack_00000018 = in_stack_00000038;
          in_stack_00000010 = in_stack_00000030;
          in_stack_00000020 = in_stack_00000040;
          FUN_01b5f01c(lVar11,&stack0x00000010,*unaff_x29);
        }
      }
    }
  } while( true );
}


