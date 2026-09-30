/*
FUNCTION_NAME: Unity.Physics.GraphicsIntegration.CopyPhysicsVelocityToSmoothing.__codegen__OnCreate_00000A4D$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 03268050
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Physics_GraphicsIntegration_CopyPhysicsVelocityToSmoothing___codegen__OnCreate_00000A4D_PostfixBurstDelegate___ctor
               (long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *plVar16;
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
  ulong in_stack_00000070;
  undefined4 in_stack_00000078;
  
  plVar16 = *(long **)(unaff_x19 + 0x248);
  if ((*(byte *)(unaff_x23 + 0x89d) & 1) == 0) {
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_InteractiveItem_BioCompass_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d06248);
    FUN_01ab69ac(PTR_DAT_03d06250);
    FUN_01ab69ac(PTR_DAT_03d06258);
    FUN_01ab69ac(RootMotion_FinalIK_BipedIKSolvers_TypeInfo);
    FUN_01ab69ac(RootMotion_BipedNaming_TypeInfo);
    FUN_01ab69ac(Beautify_Universal_BeautifySettings_TypeInfo);
    FUN_01ab69ac(RootMotion_BipedReferences_TypeInfo);
    FUN_01ab69ac(UnityEngine_Rendering_BatchPackedCullingViewID_TypeInfo);
    FUN_01ab69ac(System_Collections_BitArray_TypeInfo);
    FUN_01ab69ac(System_BitConverter_TypeInfo);
    *(undefined1 *)(unaff_x23 + 0x89d) = 1;
  }
  puVar3 = UnityEngine_Rendering_BatchPackedCullingViewID_TypeInfo;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack000000000000006c = 0;
  if (*(int *)(*plVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar16 = (long *)FUN_037b9110(param_2,0);
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar13);
    lVar13 = *(long *)puVar3;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
  if (lVar13 != 0) {
    lVar14 = *(long *)Beautify_Universal_BeautifySettings_TypeInfo;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar8 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
    if ((uVar8 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar18 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar18) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar18,0);
      }
    }
    puVar4 = RootMotion_BipedNaming_TypeInfo;
    puVar2 = PTR_DAT_03d06258;
    puVar1 = PTR_DAT_03d06250;
    if (plVar16 != (long *)0x0) {
      iVar18 = 0;
      do {
        lVar13 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03268214;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)puVar1,0);
LAB_03268214:
        iVar7 = (*(code *)*puVar9)(plVar16,puVar9[1]);
        if (iVar7 <= iVar18) {
          lVar13 = *(long *)puVar3;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar13);
            lVar13 = *(long *)puVar3;
          }
          puVar1 = System_BitConverter_TypeInfo;
          lVar14 = *(long *)System_BitConverter_TypeInfo;
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar1;
          }
          lVar17 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          if (lVar17 == 0) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)puVar1;
            }
            uVar11 = **(undefined8 **)(lVar14 + 0xb8);
            lVar17 = thunk_FUN_01a89e68(*(undefined8 *)
                                         _Common_Gameplay_Support_Scripts_InteractiveItem_BioCompass_TypeInfo
                                       );
            FUN_0217c478(lVar17,uVar11,*(undefined8 *)System_Collections_BitArray_TypeInfo,0);
            plVar16 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar16 = lVar17;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar16,lVar17);
          }
          if (lVar13 != 0) {
            FUN_02219514(lVar13,lVar17,*(undefined8 *)RootMotion_BipedReferences_TypeInfo);
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
        lVar13 = *plVar16;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03268274;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar16,*(long *)puVar2,0);
LAB_03268274:
        plVar10 = (long *)(*(code *)*puVar9)(plVar16,iVar18,puVar9[1]);
        if (plVar10 == (long *)0x0) break;
        iVar7 = FUN_037b5130(plVar10,0);
        if (iVar7 != -1) {
          uVar11 = FUN_037b4844(plVar10,0);
          in_stack_00000040 = param_3[2];
          in_stack_00000038 = param_3[1];
          in_stack_00000030 = (long *)*param_3;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*(long *)puVar3);
          }
          in_stack_00000058 = in_stack_00000038;
          in_stack_00000050 = in_stack_00000030;
          in_stack_00000060 = in_stack_00000040;
          uVar8 = FUN_032684f4(uVar11,&stack0x00000050,&stack0x00000070,&stack0x0000006c);
          if ((uVar8 & 1) != 0) {
            lVar13 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
            uVar6 = in_stack_00000078;
            uVar8 = in_stack_00000070;
            if (lVar13 == 0) break;
            uVar20 = in_stack_00000070 >> 0x20;
            uVar19 = FUN_03675b48(in_stack_00000070 & 0xffffffff,uVar20,in_stack_00000078,lVar13,0);
            uVar11 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
            uVar12 = (**(code **)(*plVar10 + 0x418))
                               (uVar19,uVar20,plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x420));
            if ((uVar12 & 1) != 0) {
              lVar13 = *(long *)puVar3;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar13 = *(long *)puVar3;
              }
              uVar5 = uStack000000000000006c;
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              in_stack_00000030 = plVar10;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (&stack0x00000030,plVar10);
              in_stack_00000038 = uVar8;
              in_stack_00000040 = CONCAT44((int)uVar19,uVar6);
              in_stack_00000048 = CONCAT44(uVar5,(int)uVar20);
              if (lVar13 == 0) break;
              in_stack_00000010 = in_stack_00000030;
              in_stack_00000020 = in_stack_00000040;
              in_stack_00000018 = in_stack_00000038;
              in_stack_00000028 = in_stack_00000048;
              FUN_01b5f01c(lVar13,&stack0x00000010,*(undefined8 *)puVar4);
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


