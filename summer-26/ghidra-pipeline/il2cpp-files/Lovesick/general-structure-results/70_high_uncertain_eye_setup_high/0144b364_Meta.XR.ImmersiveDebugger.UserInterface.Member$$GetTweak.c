/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$GetTweak
ENTRY_POINT: 0144b364
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Member__GetTweak(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long *in_stack_00000000;
  long in_stack_00000008;
  
  puVar3 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
  ;
  plVar13 = *(long **)(unaff_x21 + 0x18);
  FUN_0132138c(param_1,0,&stack0x00000008,
               *(undefined8 *)
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
              );
  if (((in_stack_00000008 != 0) && (unaff_x20 != 0)) && (plVar13 != (long *)0x0)) {
    lVar8 = *plVar13;
    uVar15 = *(undefined8 *)(in_stack_00000008 + 0x10);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)System_Converter<Object,_ICylinderClipper>_TypeInfo)
        {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_0144b3f0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)System_Converter<Object,_ICylinderClipper>_TypeInfo,1);
LAB_0144b3f0:
    (*(code *)*puVar7)(plVar13,uVar15,uVar14,puVar7[1]);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      if (*(int *)(*(long *)(unaff_x21 + 0x10) + 0x20) < 5) {
        if (in_stack_00000000 != (long *)0x0) {
LAB_0144b4b0:
          iVar4 = (**(code **)(*in_stack_00000000 + 0x1a8))
                            (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x1b0));
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              uVar5 = (**(code **)(*in_stack_00000000 + 0x188))
                                (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 400));
              lVar8 = FUN_026713c0(in_stack_00000000,0,iVar4,uVar5,1,0);
              if (lVar8 == 0) goto LAB_0144b678;
              if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
                uVar11 = 0;
                uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
                do {
                  if (uVar9 <= uVar11) {
LAB_0144b674:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  plVar13 = *(long **)(unaff_x21 + 0x18);
                  if (plVar13 == (long *)0x0) goto LAB_0144b678;
                  lVar10 = *plVar13;
                  lVar1 = lVar8 + uVar11 * 0x10;
                  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
                  uVar18 = *(undefined4 *)(lVar1 + 0x20);
                  uVar5 = *(undefined4 *)(lVar1 + 0x24);
                  uVar17 = *(undefined4 *)(lVar1 + 0x28);
                  uVar16 = *(undefined4 *)(lVar1 + 0x2c);
                  uVar9 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar9 != 0) {
                    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) ==
                          *(long *)System_Converter<Object,_ICylinderClipper>_TypeInfo) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                        goto LAB_0144b5a4;
                      }
                      uVar9 = uVar9 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar7 = (undefined8 *)
                           FUN_00d59724(plVar13,*(long *)
                                                 System_Converter<Object,_ICylinderClipper>_TypeInfo
                                        ,2);
LAB_0144b5a4:
                  uVar18 = (*(code *)*puVar7)(uVar18,plVar13,uVar14,puVar7[1]);
                  uVar2 = *(uint *)(lVar8 + 0x18);
                  uVar9 = (ulong)uVar2;
                  if (uVar9 <= uVar11) goto LAB_0144b674;
                  uVar11 = uVar11 + 1;
                  *(undefined4 *)(lVar1 + 0x20) = uVar18;
                  *(undefined4 *)(lVar1 + 0x24) = uVar5;
                  *(undefined4 *)(lVar1 + 0x28) = uVar17;
                  *(undefined4 *)(lVar1 + 0x2c) = uVar16;
                } while ((long)uVar11 < (long)(int)uVar2);
              }
              uVar5 = (**(code **)(*in_stack_00000000 + 0x188))
                                (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 400));
              FUN_02671fa4(in_stack_00000000,0,iVar4,uVar5,1,lVar8,0);
              iVar4 = iVar4 + 1;
              iVar6 = (**(code **)(*in_stack_00000000 + 0x1a8))
                                (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x1b0));
            } while (iVar4 < iVar6);
          }
          FUN_026723f8(in_stack_00000000,0);
          return in_stack_00000000;
        }
      }
      else if (in_stack_00000000 != (long *)0x0) {
        uVar14 = FUN_0268b6ac(in_stack_00000000,0);
        if (((*(long *)(unaff_x22 + 0x18) != 0) &&
            (lVar8 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x10), lVar8 != 0)) &&
           (FUN_0132138c(lVar8,0,&stack0x00000008,*(undefined8 *)puVar3), puVar3 = StringLiteral_302
           , in_stack_00000008 != 0)) {
          uVar14 = FUN_01600ba0(*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<TwoFingerDragGesture>_set_raycastMask__
                                ,uVar14,*(undefined8 *)(in_stack_00000008 + 0x10),
                                *(undefined8 *)(unaff_x21 + 0x18),0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar3);
          }
          FUN_02660dac(uVar14,0);
          goto LAB_0144b4b0;
        }
      }
    }
  }
LAB_0144b678:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


