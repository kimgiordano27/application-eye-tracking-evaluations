/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.CopyPhysicsVelocityToSmoothing.__codegen__OnUpdate_00000A4E$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0326832c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnUpdate_00000A4E_PostfixBurstDelegate___ctor
               (undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar11;
  long *unaff_x22;
  int unaff_w23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 unaff_s8;
  ulong unaff_d9;
  undefined4 unaff_s10;
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
    uVar5 = (**(code **)(*unaff_x21 + 600))();
    uVar6 = (**(code **)(*unaff_x24 + 0x418))
                      (param_1,param_2,unaff_x24,uVar5,*(undefined8 *)(*unaff_x24 + 0x420));
    if ((uVar6 & 1) != 0) {
      lVar7 = *unaff_x26;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar7 = *unaff_x26;
      }
      uVar2 = in_stack_00000068._4_4_;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      in_stack_00000030 = unaff_x24;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(&stack0x00000030,unaff_x24);
      in_stack_00000038 = CONCAT44((int)unaff_d9,unaff_s8);
      in_stack_00000040 = CONCAT44((int)param_1,unaff_s10);
      uStack0000000000000048 = (undefined4)param_2;
      uStack000000000000004c = uVar2;
      if (lVar7 == 0) {
LAB_032684f0:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000028 = CONCAT44(uVar2,uStack0000000000000048);
      in_stack_00000018 = in_stack_00000038;
      in_stack_00000010 = in_stack_00000030;
      in_stack_00000020 = in_stack_00000040;
      FUN_01b5f01c(lVar7,&stack0x00000010,*unaff_x29);
    }
    do {
      do {
        unaff_w23 = unaff_w23 + 1;
        lVar7 = *unaff_x22;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x27) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03268214;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec();
LAB_03268214:
        iVar3 = (*(code *)*puVar4)();
        if (iVar3 <= unaff_w23) {
          lVar7 = *unaff_x26;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar7);
            lVar7 = *unaff_x26;
          }
          puVar1 = System_BitConverter_TypeInfo;
          lVar8 = *(long *)System_BitConverter_TypeInfo;
          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar8 = *(long *)puVar1;
          }
          lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar11 == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar8 = *(long *)puVar1;
            }
            uVar5 = **(undefined8 **)(lVar8 + 0xb8);
            lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                         _Common_Gameplay_Support_Scripts_InteractiveItem_BioCompass_TypeInfo
                                       );
            FUN_0217c478(lVar11,uVar5,*(undefined8 *)System_Collections_BitArray_TypeInfo,0);
            plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar9 = lVar11;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar11);
          }
          if (lVar7 != 0) {
            FUN_02219514(lVar7,lVar11,*(undefined8 *)RootMotion_BipedReferences_TypeInfo);
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (in_stack_00000008 != 0) {
              FUN_02216540(in_stack_00000008,*(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x18),
                           *(undefined8 *)RootMotion_FinalIK_BipedIKSolvers_TypeInfo);
              return;
            }
          }
          goto LAB_032684f0;
        }
        lVar7 = *unaff_x22;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x28) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03268274;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_01a472ec();
LAB_03268274:
        unaff_x24 = (long *)(*(code *)*puVar4)();
        if (unaff_x24 == (long *)0x0) goto LAB_032684f0;
        iVar3 = FUN_037b5130(unaff_x24,0);
      } while (iVar3 == -1);
      uVar5 = FUN_037b4844(unaff_x24,0);
      in_stack_00000040 = unaff_x20[2];
      in_stack_00000038 = unaff_x20[1];
      in_stack_00000030 = (long *)*unaff_x20;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x26);
      }
      in_stack_00000058 = in_stack_00000038;
      in_stack_00000050 = in_stack_00000030;
      in_stack_00000060 = in_stack_00000040;
      uVar6 = FUN_032684f4(uVar5,&stack0x00000050,&stack0x00000070,(long)&stack0x00000068 + 4);
    } while ((uVar6 & 1) == 0);
    lVar7 = (**(code **)(*unaff_x21 + 600))();
    unaff_s10 = in_stack_00000078;
    unaff_s8 = uStack0000000000000070;
    if (lVar7 == 0) goto LAB_032684f0;
    unaff_d9 = (ulong)uStack0000000000000074;
    param_2 = unaff_d9;
    param_1 = FUN_03675b48(uStack0000000000000070,unaff_d9,in_stack_00000078,lVar7,0);
  } while( true );
}


