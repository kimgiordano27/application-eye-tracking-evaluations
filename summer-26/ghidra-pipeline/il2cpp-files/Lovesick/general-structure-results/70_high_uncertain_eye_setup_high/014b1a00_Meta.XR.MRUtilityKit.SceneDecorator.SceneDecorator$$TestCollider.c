/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestCollider
ENTRY_POINT: 014b1a00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014b1b9c) */
/* WARNING: Removing unreachable block (ram,0x014b1cd8) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestCollider(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x26;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  auVar1._8_8_ = in_stack_00000008;
  auVar1._0_8_ = in_stack_00000000;
  while( true ) {
    uVar7 = FUN_0129aa60();
    if ((uVar7 & 1) == 0) {
      FUN_01299e64();
    }
    unaff_w23 = unaff_w23 + 1;
    iVar6 = (**(code **)(*unaff_x22 + 0x1f8))();
    puVar5 = Method_System_Xml_XmlSqlBinaryReader_ReadInit__;
    puVar4 = 
    Method_System_Collections_Generic_HashSet_Enumerator<ObiContactGrabber_GrabbedParticle>_Dispose__
    ;
    puVar3 = OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo;
    puVar2 = UnityEngine_UIElements_TextField_TypeInfo;
    if (iVar6 <= unaff_w23) break;
    plVar9 = (long *)(**(code **)(*unaff_x22 + 0x188))();
    if (((plVar9 == (long *)0x0) ||
        (plVar9 = (long *)(**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310)),
        plVar9 == (long *)0x0)) ||
       (plVar9 = (long *)(**(code **)(*plVar9 + 0x1a8))
                                   (plVar9,*unaff_x26,*(undefined8 *)(*plVar9 + 0x1b0)),
       plVar9 == (long *)0x0)) goto LAB_014b1cd0;
    (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
  }
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    FUN_01323390();
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000058 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000010;
    do {
      while( true ) {
        uVar7 = FUN_012b894c(&stack0x00000040,*(undefined8 *)puVar4);
        if ((uVar7 & 1) == 0) {
          FUN_012b8948(&stack0x00000040,*(undefined8 *)StringLiteral_4522);
          return;
        }
        auVar10 = FUN_00bc46fc(&stack0x00000040,*(undefined8 *)StringLiteral_4996);
        uVar7 = FUN_0129eff4();
        if ((uVar7 & 1) != 0) break;
        if (*(int *)(*(long *)PTR_DAT_033ebcc8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar9 = (long *)FUN_010ffaa8();
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000038 =
             (long *)(**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310));
        FUN_01299e64();
        (**(code **)(*unaff_x19 + 0x208))();
        auVar1 = auVar10;
      }
      if (auVar10._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(auVar10._8_8_);
      in_stack_00000030 = in_stack_00000010;
      _in_stack_00000020 = auVar1;
      while (uVar7 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar5), (uVar7 & 1) != 0) {
        uVar8 = FUN_00ac2d00(&stack0x00000020,*(undefined8 *)puVar3);
        if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar9 = (long *)(**(code **)(*in_stack_00000038 + 0x1a8))
                                   (in_stack_00000038,*(undefined8 *)puVar2,
                                    *(undefined8 *)(*in_stack_00000038 + 0x1b0));
        uVar8 = FUN_014f4cac(uVar8,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar8,uVar8);
        }
        (**(code **)(*plVar9 + 0x208))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x210));
      }
      FUN_012b8948(&stack0x00000020,
                   *(undefined8 *)
                    System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo);
    } while( true );
  }
LAB_014b1cd0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


