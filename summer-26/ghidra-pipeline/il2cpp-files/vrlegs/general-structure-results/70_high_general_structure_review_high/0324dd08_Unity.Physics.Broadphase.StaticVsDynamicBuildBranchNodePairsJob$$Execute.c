/*
FUNCTION_NAME: Unity.Physics.Broadphase.StaticVsDynamicBuildBranchNodePairsJob$$Execute
ENTRY_POINT: 0324dd08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_6;strong_file_logging_hits_4
*/


void Unity_Physics_Broadphase_StaticVsDynamicBuildBranchNodePairsJob__Execute(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  long unaff_x19;
  ulong uVar12;
  int *unaff_x22;
  ulong unaff_x23;
  uint unaff_w24;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  puVar3 = int_________TypeInfo;
  if (param_1 != 0) {
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000048 = in_stack_00000028;
    FUN_0219eaf8(param_1,&stack0x00000040,*(undefined8 *)int_________TypeInfo);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      iVar6 = FUN_0219b384(*(long *)(unaff_x19 + 0x48),
                           *(undefined8 *)
                            Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_TypeInfo)
      ;
      puVar4 = Mono_Security_ASN1_TypeInfo;
      if (iVar6 < 1) {
LAB_0324dec0:
        puVar4 = Mono_CSharp_ATypeNameExpression_TypeInfo;
        puVar3 = Mono_CSharp_Linq_AQueryClause_TypeInfo;
        if ((unaff_x23 & 1) == 0) {
          FUN_0324e7f4();
        }
        else if (0 < *unaff_x22) {
          iVar6 = 0;
          do {
            FUN_021f44ec();
            FUN_0324e7f4();
            iVar6 = iVar6 + 1;
          } while (iVar6 < *unaff_x22);
        }
        uVar10 = 2;
        if ((unaff_w24 & 1) == 0) {
          uVar10 = 0;
        }
        uVar7 = FUN_03291784(&stack0x00000020,0);
        in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uVar10);
        FUN_01f57ee8(unaff_x19 + 0x220,uVar7,&stack0x00000040,*(undefined8 *)puVar4,0,
                     *(undefined8 *)puVar3);
        return;
      }
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        uVar7 = FUN_0219b394(*(long *)(unaff_x19 + 0x48),*(undefined8 *)int_______TypeInfo);
        lVar8 = FUN_01f70920(uVar7,*(undefined8 *)puVar4);
        if (lVar8 != 0) {
          if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
            uVar12 = 0;
            uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              if (*(long *)(unaff_x19 + 0x48) == 0)
              goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
              lVar1 = lVar8 + uVar12 * 0x10;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              uVar2 = *(undefined8 *)(lVar1 + 0x28);
              in_stack_00000030 = uVar7;
              in_stack_00000038 = uVar2;
              FUN_0219b634(*(long *)(unaff_x19 + 0x48),&stack0x00000030,&stack0x00000040,
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_Instruction_______TypeInfo);
              uVar5 = in_stack_00000048;
              if ((unaff_x23 & 1) == 0) {
                uVar9 = FUN_03291a94(in_stack_00000020,in_stack_00000028,0);
                uVar11 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                                   (uVar5,uVar9,0x3b,0);
                if ((uVar11 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 0x48) == 0)
                  goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
                  in_stack_00000040 = uVar7;
                  in_stack_00000048 = uVar2;
                  FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*(undefined8 *)puVar3);
                }
              }
              else if (0 < *unaff_x22) {
                iVar6 = 0;
                do {
                  FUN_021f44ec();
                  uVar11 = FUN_032917d8(uVar7,uVar2,in_stack_00000040,in_stack_00000048,0);
                  if ((uVar11 & 1) == 0) {
                    FUN_021f44ec();
                    uVar9 = FUN_03291a94(in_stack_00000040,in_stack_00000048,0);
                    uVar11 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                                       (uVar5,uVar9,0x3b,0);
                    if ((uVar11 & 1) != 0) goto LAB_0324de48;
                  }
                  else {
LAB_0324de48:
                    if (*(long *)(unaff_x19 + 0x48) == 0)
                    goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
                    in_stack_00000040 = uVar7;
                    in_stack_00000048 = uVar2;
                    FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*(undefined8 *)puVar3)
                    ;
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *unaff_x22);
              }
              uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)*(uint *)(lVar8 + 0x18));
          }
          goto LAB_0324dec0;
        }
      }
    }
  }
Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


