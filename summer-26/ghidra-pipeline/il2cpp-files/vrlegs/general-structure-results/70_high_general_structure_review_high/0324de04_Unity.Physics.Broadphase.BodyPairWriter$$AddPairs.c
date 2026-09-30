/*
FUNCTION_NAME: Unity.Physics.Broadphase.BodyPairWriter$$AddPairs
ENTRY_POINT: 0324de04
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_5;strong_file_logging_hits_3
*/


void Unity_Physics_Broadphase_BodyPairWriter__AddPairs
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long unaff_x19;
  ulong unaff_x20;
  int *unaff_x22;
  int iVar8;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int unaff_w28;
  undefined8 *unaff_x29;
  uint in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    uVar4 = FUN_032917d8(param_1,param_2,param_3,param_4,0);
    if ((uVar4 & 1) == 0) {
      FUN_021f44ec();
      uVar5 = FUN_03291a94(in_stack_00000040,in_stack_00000048,0);
      uVar4 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                        (unaff_x27,uVar5,0x3b,0);
      if ((uVar4 & 1) != 0) goto LAB_0324de48;
    }
    else {
LAB_0324de48:
      if (*(long *)(unaff_x19 + 0x48) == 0) {
Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000040 = unaff_x25;
      in_stack_00000048 = unaff_x26;
      FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*unaff_x29);
    }
    unaff_w28 = unaff_w28 + 1;
    param_1 = unaff_x25;
    param_2 = unaff_x26;
    if (*unaff_x22 <= unaff_w28) {
      do {
        while( true ) {
          puVar3 = Mono_CSharp_ATypeNameExpression_TypeInfo;
          puVar2 = Mono_CSharp_Linq_AQueryClause_TypeInfo;
          unaff_x20 = unaff_x20 + 1;
          if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x20) {
            if ((unaff_x23 & 1) == 0) {
              FUN_0324e7f4();
            }
            else if (0 < *unaff_x22) {
              iVar8 = 0;
              do {
                FUN_021f44ec();
                FUN_0324e7f4();
                iVar8 = iVar8 + 1;
              } while (iVar8 < *unaff_x22);
            }
            uVar7 = 2;
            if ((in_stack_00000008 & 1) == 0) {
              uVar7 = 0;
            }
            uVar5 = FUN_03291784(&stack0x00000020,0);
            in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uVar7);
            FUN_01f57ee8(unaff_x19 + 0x220,uVar5,&stack0x00000040,*(undefined8 *)puVar3,0,
                         *(undefined8 *)puVar2);
            return;
          }
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          if (*(long *)(unaff_x19 + 0x48) == 0)
          goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
          lVar1 = unaff_x24 + unaff_x20 * 0x10;
          param_1 = *(undefined8 *)(lVar1 + 0x20);
          param_2 = *(undefined8 *)(lVar1 + 0x28);
          in_stack_00000030 = param_1;
          in_stack_00000038 = param_2;
          FUN_0219b634(*(long *)(unaff_x19 + 0x48),&stack0x00000030,&stack0x00000040,
                       *(undefined8 *)System_Linq_Expressions_Interpreter_Instruction_______TypeInfo
                      );
          uVar5 = in_stack_00000048;
          if ((unaff_x23 & 1) != 0) break;
          uVar6 = FUN_03291a94(in_stack_00000020,in_stack_00000028,0);
          uVar4 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                            (uVar5,uVar6,0x3b,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x48) == 0)
            goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
            in_stack_00000040 = param_1;
            in_stack_00000048 = param_2;
            FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*unaff_x29);
          }
        }
      } while (*unaff_x22 < 1);
      unaff_w28 = 0;
      unaff_x27 = in_stack_00000048;
    }
    FUN_021f44ec();
    param_3 = in_stack_00000040;
    param_4 = in_stack_00000048;
    unaff_x25 = param_1;
    unaff_x26 = param_2;
  } while( true );
}


