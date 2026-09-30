/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$GetAnchorsWithLabel
ENTRY_POINT: 014b1818
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x014b1b9c) */
/* WARNING: Removing unreachable block (ram,0x014b1cd8) */

void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__GetAnchorsWithLabel(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auVar17 [16];
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
  thunk_FUN_00d48444(StringLiteral_4996);
  thunk_FUN_00d48444(System_Collections_Generic_Dictionary<Material,_List<GameObject>>_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_1612);
  thunk_FUN_00d48444(PTR_DAT_033f35b8);
  thunk_FUN_00d48444(PTR_DAT_033ebcc8);
  thunk_FUN_00d48444(Method_System_Data_RBTree_RBTreeEnumerator<int>__ctor__);
  thunk_FUN_00d48444(Oculus_Platform_Message_TypeInfo);
  thunk_FUN_00d48444(
                    Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<RenderGraph_ProfilingScopePassData>__
                    );
  thunk_FUN_00d48444(UnityEngine_UIElements_TextField_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xd40) = 1;
  in_stack_00000030 = 0;
  in_stack_00000038 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if ((unaff_x21 != 0) && (unaff_x19 != (long *)0x0)) {
    uVar9 = FUN_014f7dc0();
    if ((uVar9 & 1) == 0) {
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
                                 );
      if (lVar10 == 0) goto LAB_014b1cd0;
      FUN_014f5524(lVar10,0);
      (**(code **)(*unaff_x19 + 0x1b8))();
    }
    puVar2 = Method_System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_Add__;
    plVar11 = (long *)(**(code **)(*unaff_x19 + 0x1a8))();
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = StringLiteral_1612;
    if (lVar10 != 0) {
      FUN_01298da0(lVar10,*(undefined8 *)Obi_ObiCircleShapeTracker2D_TypeInfo);
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (((lVar12 != 0) &&
          (FUN_012dd38c(lVar12,*(undefined8 *)
                                System_Collections_Generic_Dictionary<Material,_List<GameObject>>_TypeInfo
                       ), plVar11 != (long *)0x0)) &&
         (plVar13 = (long *)(**(code **)(*plVar11 + 0x2e8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x2f0)),
         plVar13 != (long *)0x0)) {
        iVar7 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
        puVar3 = 
        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_AddRenderPass<RenderGraph_ProfilingScopePassData>__
        ;
        puVar2 = System_Func<int,_IEnumerable<Edge>>_TypeInfo;
        if (0 < iVar7) {
          iVar7 = 0;
          do {
            plVar14 = (long *)(**(code **)(*plVar13 + 0x188))
                                        (plVar13,iVar7,*(undefined8 *)(*plVar13 + 400));
            if (((plVar14 == (long *)0x0) ||
                (plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                             (plVar14,*(undefined8 *)(*plVar14 + 0x310)),
                plVar14 == (long *)0x0)) ||
               (plVar15 = (long *)(**(code **)(*plVar14 + 0x1a8))
                                            (plVar14,*(undefined8 *)puVar3,
                                             *(undefined8 *)(*plVar14 + 0x1b0)),
               plVar15 == (long *)0x0)) goto LAB_014b1cd0;
            uVar16 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
            uVar9 = FUN_0129aa60(lVar10,uVar16,*(undefined8 *)puVar2);
            if ((uVar9 & 1) == 0) {
              FUN_01299e64(lVar10,uVar16,plVar14,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_TerrainMap>_Dispose__
                          );
            }
            iVar7 = iVar7 + 1;
            iVar8 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
          } while (iVar7 < iVar8);
        }
        puVar6 = Method_System_Xml_XmlSqlBinaryReader_ReadInit__;
        puVar5 = Method_RCG_Lovesick_Locomotion_TeleportPoint_CancelTeleport__;
        puVar4 = 
        Method_System_Collections_Generic_HashSet_Enumerator<ObiContactGrabber_GrabbedParticle>_Dispose__
        ;
        puVar3 = OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo;
        puVar2 = UnityEngine_UIElements_TextField_TypeInfo;
        if (*(long *)(unaff_x21 + 0x18) != 0) {
          FUN_01323390();
          in_stack_00000048 = in_stack_00000008;
          in_stack_00000040 = in_stack_00000000;
          in_stack_00000058 = in_stack_00000018;
          in_stack_00000050 = in_stack_00000010;
          do {
            while( true ) {
              uVar9 = FUN_012b894c(&stack0x00000040,*(undefined8 *)puVar4);
              if ((uVar9 & 1) == 0) {
                FUN_012b8948(&stack0x00000040,*(undefined8 *)StringLiteral_4522);
                return;
              }
              auVar17 = FUN_00bc46fc(&stack0x00000040,*(undefined8 *)StringLiteral_4996);
              uVar9 = FUN_0129eff4(lVar10,auVar17._0_8_,&stack0x00000038,*(undefined8 *)puVar5);
              if ((uVar9 & 1) != 0) break;
              if (*(int *)(*(long *)PTR_DAT_033ebcc8 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar13 = (long *)FUN_010ffaa8();
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              in_stack_00000038 =
                   (long *)(**(code **)(*plVar13 + 0x308))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x310));
              FUN_01299e64(lVar10,auVar17._0_8_,in_stack_00000038,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_Enumerator<int,_TerrainMap>_Dispose__
                          );
              (**(code **)(*plVar11 + 0x208))
                        (plVar11,in_stack_00000038,*(undefined8 *)(*plVar11 + 0x210));
              auVar1 = auVar17;
            }
            if (auVar17._8_8_ == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01323390(auVar17._8_8_);
            in_stack_00000030 = in_stack_00000010;
            _in_stack_00000020 = auVar1;
            while (uVar9 = FUN_012b894c(&stack0x00000020,*(undefined8 *)puVar6), (uVar9 & 1) != 0) {
              uVar16 = FUN_00ac2d00(&stack0x00000020,*(undefined8 *)puVar3);
              if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              plVar13 = (long *)(**(code **)(*in_stack_00000038 + 0x1a8))
                                          (in_stack_00000038,*(undefined8 *)puVar2,
                                           *(undefined8 *)(*in_stack_00000038 + 0x1b0));
              uVar16 = FUN_014f4cac(uVar16,0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c(uVar16,uVar16);
              }
              (**(code **)(*plVar13 + 0x208))(plVar13,uVar16,*(undefined8 *)(*plVar13 + 0x210));
            }
            FUN_012b8948(&stack0x00000020,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte_TypeInfo
                        );
          } while( true );
        }
      }
    }
  }
LAB_014b1cd0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


