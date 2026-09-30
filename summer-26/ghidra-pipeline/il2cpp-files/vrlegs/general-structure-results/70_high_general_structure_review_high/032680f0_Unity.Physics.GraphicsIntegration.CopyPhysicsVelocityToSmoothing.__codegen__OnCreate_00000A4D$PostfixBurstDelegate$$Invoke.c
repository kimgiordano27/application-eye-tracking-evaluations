/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.CopyPhysicsVelocityToSmoothing.__codegen__OnCreate_00000A4D$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 032680f0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnCreate_00000A4D_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 in_w8;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar17;
  int iVar18;
  long unaff_x23;
  undefined8 uVar19;
  ulong uVar20;
  long in_stack_00000008;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  ulong in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  ulong in_stack_00000058;
  long in_stack_00000060;
  undefined4 uStack000000000000006c;
  ulong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  *(undefined1 *)(unaff_x23 + 0x89d) = in_w8;
  puVar3 = UnityEngine_Rendering_BatchPackedCullingViewID_TypeInfo;
  uStack0000000000000078 = 0;
  uStack0000000000000070 = 0;
  uStack000000000000006c = 0;
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar8 = (long *)FUN_037b9110();
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar14);
    lVar14 = *(long *)puVar3;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
  if (lVar14 != 0) {
    lVar15 = *(long *)Beautify_Universal_BeautifySettings_TypeInfo;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    uVar9 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
    if ((uVar9 & 1) == 0) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
    }
    else {
      iVar18 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      if (0 < iVar18) {
        FUN_02793a34(*(undefined8 *)(lVar14 + 0x10),0,iVar18,0);
      }
    }
    puVar4 = RootMotion_BipedNaming_TypeInfo;
    puVar2 = PTR_DAT_03d06258;
    puVar1 = PTR_DAT_03d06250;
    if (plVar8 != (long *)0x0) {
      iVar18 = 0;
      do {
        lVar14 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03268214;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar1,0);
LAB_03268214:
        iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
        if (iVar7 <= iVar18) {
          lVar14 = *(long *)puVar3;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar14);
            lVar14 = *(long *)puVar3;
          }
          puVar1 = System_BitConverter_TypeInfo;
          lVar15 = *(long *)System_BitConverter_TypeInfo;
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar15 = *(long *)puVar1;
          }
          lVar17 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
          if (lVar17 == 0) {
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar15 = *(long *)puVar1;
            }
            uVar12 = **(undefined8 **)(lVar15 + 0xb8);
            lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                         _Common_Gameplay_Support_Scripts_InteractiveItem_BioCompass_TypeInfo
                                       );
            FUN_0217c478(lVar17,uVar12,*(undefined8 *)System_Collections_BitArray_TypeInfo,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar8 = lVar17;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar17);
          }
          if (lVar14 != 0) {
            FUN_02219514(lVar14,lVar17,*(undefined8 *)RootMotion_BipedReferences_TypeInfo);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (in_stack_00000008 != 0) {
              FUN_02216540(in_stack_00000008,
                           *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                           *(undefined8 *)RootMotion_FinalIK_BipedIKSolvers_TypeInfo);
              return;
            }
          }
          break;
        }
        lVar14 = *plVar8;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03268274;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_03268274:
        plVar11 = (long *)(*(code *)*puVar10)(plVar8,iVar18,puVar10[1]);
        if (plVar11 == (long *)0x0) break;
        iVar7 = FUN_037b5130(plVar11,0);
        if (iVar7 != -1) {
          uVar12 = FUN_037b4844(plVar11,0);
          in_stack_00000040 = unaff_x20[2];
          in_stack_00000038 = unaff_x20[1];
          in_stack_00000030 = (long *)*unaff_x20;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar3);
          }
          in_stack_00000058 = in_stack_00000038;
          in_stack_00000050 = in_stack_00000030;
          in_stack_00000060 = in_stack_00000040;
          uVar9 = FUN_032684f4(uVar12,&stack0x00000050,&stack0x00000070,&stack0x0000006c);
          if ((uVar9 & 1) != 0) {
            lVar14 = (**(code **)(*unaff_x21 + 600))();
            uVar6 = uStack0000000000000078;
            uVar9 = uStack0000000000000070;
            if (lVar14 == 0) break;
            uVar20 = uStack0000000000000070 >> 0x20;
            uVar19 = FUN_03675b48(uStack0000000000000070 & 0xffffffff,uVar20,uStack0000000000000078,
                                  lVar14,0);
            uVar12 = (**(code **)(*unaff_x21 + 600))();
            uVar13 = (**(code **)(*plVar11 + 0x418))
                               (uVar19,uVar20,plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x420));
            if ((uVar13 & 1) != 0) {
              lVar14 = *(long *)puVar3;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *(long *)puVar3;
              }
              uVar5 = uStack000000000000006c;
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              in_stack_00000030 = plVar11;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (&stack0x00000030,plVar11);
              in_stack_00000038 = uVar9;
              in_stack_00000040 = CONCAT44((int)uVar19,uVar6);
              in_stack_00000048 = CONCAT44(uVar5,(int)uVar20);
              if (lVar14 == 0) break;
              in_stack_00000010 = in_stack_00000030;
              in_stack_00000020 = in_stack_00000040;
              in_stack_00000018 = in_stack_00000038;
              in_stack_00000028 = in_stack_00000048;
              FUN_01b5f01c(lVar14,&stack0x00000010,*(undefined8 *)puVar4);
            }
          }
        }
        iVar18 = iVar18 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


