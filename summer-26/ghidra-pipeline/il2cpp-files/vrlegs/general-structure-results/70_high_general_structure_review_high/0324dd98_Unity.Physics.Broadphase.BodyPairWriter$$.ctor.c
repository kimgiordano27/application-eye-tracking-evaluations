/*
FUNCTION_NAME: Unity.Physics.Broadphase.BodyPairWriter$$.ctor
ENTRY_POINT: 0324dd98
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


void Unity_Physics_Broadphase_BodyPairWriter___ctor(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long unaff_x19;
  ulong unaff_x20;
  int *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  int iVar10;
  undefined8 *unaff_x29;
  uint in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while( true ) {
    if ((param_1 & 0xffffffff) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    lVar1 = unaff_x24 + unaff_x20 * 0x10;
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    in_stack_00000030 = uVar8;
    in_stack_00000038 = uVar2;
    FUN_0219b634(*(long *)(unaff_x19 + 0x48),&stack0x00000030,&stack0x00000040,
                 *(undefined8 *)System_Linq_Expressions_Interpreter_Instruction_______TypeInfo);
    uVar5 = in_stack_00000048;
    if ((unaff_x23 & 1) == 0) {
      uVar7 = FUN_03291a94(in_stack_00000020,in_stack_00000028,0);
      uVar6 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                        (uVar5,uVar7,0x3b,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x48) == 0) break;
        in_stack_00000040 = uVar8;
        in_stack_00000048 = uVar2;
        FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*unaff_x29);
      }
    }
    else if (0 < *unaff_x22) {
      iVar10 = 0;
      do {
        FUN_021f44ec();
        uVar6 = FUN_032917d8(uVar8,uVar2,in_stack_00000040,in_stack_00000048,0);
        if ((uVar6 & 1) == 0) {
          FUN_021f44ec();
          uVar7 = FUN_03291a94(in_stack_00000040,in_stack_00000048,0);
          uVar6 = UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass2_1__<CreateVolumeParameterWidget>b__2
                            (uVar5,uVar7,0x3b,0);
          if ((uVar6 & 1) != 0) goto LAB_0324de48;
        }
        else {
LAB_0324de48:
          if (*(long *)(unaff_x19 + 0x48) == 0)
          goto Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded;
          in_stack_00000040 = uVar8;
          in_stack_00000048 = uVar2;
          FUN_0219eaf8(*(long *)(unaff_x19 + 0x48),&stack0x00000040,*unaff_x29);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *unaff_x22);
    }
    puVar4 = Mono_CSharp_ATypeNameExpression_TypeInfo;
    puVar3 = Mono_CSharp_Linq_AQueryClause_TypeInfo;
    param_1 = (ulong)*(uint *)(unaff_x24 + 0x18);
    unaff_x20 = unaff_x20 + 1;
    if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x20) {
      if ((unaff_x23 & 1) == 0) {
        FUN_0324e7f4();
      }
      else if (0 < *unaff_x22) {
        iVar10 = 0;
        do {
          FUN_021f44ec();
          FUN_0324e7f4();
          iVar10 = iVar10 + 1;
        } while (iVar10 < *unaff_x22);
      }
      uVar9 = 2;
      if ((in_stack_00000008 & 1) == 0) {
        uVar9 = 0;
      }
      uVar8 = FUN_03291784(&stack0x00000020,0);
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,uVar9);
      FUN_01f57ee8(unaff_x19 + 0x220,uVar8,&stack0x00000040,*(undefined8 *)puVar4,0,
                   *(undefined8 *)puVar3);
      return;
    }
  }
Unity_Physics_Broadphase_BodyPairWriter__FlushIfNeeded:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


