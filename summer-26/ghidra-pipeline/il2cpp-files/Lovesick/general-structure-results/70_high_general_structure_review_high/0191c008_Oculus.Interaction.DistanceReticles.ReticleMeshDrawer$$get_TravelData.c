/*
FUNCTION_NAME: Oculus.Interaction.DistanceReticles.ReticleMeshDrawer$$get_TravelData
ENTRY_POINT: 0191c008
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0191c428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Oculus_Interaction_DistanceReticles_ReticleMeshDrawer__get_TravelData
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long *unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  
  if ((((param_5 & 1) == 0) && (*(char *)(unaff_x21 + 0x18) != '\0')) &&
     (uVar5 = FUN_02689fe0(), (uVar5 & 1) != 0)) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = FUN_02689fe0();
    if ((uVar5 & 1) != 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_0268b4e0(uVar7,0,0);
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(unaff_x21 + 0x58) = 0x3ff;
        iVar3 = FUN_018ee384();
        iVar9 = *(int *)(unaff_x21 + 0x58);
        iVar4 = 0;
        if (iVar9 != 0) {
          iVar4 = iVar3 / iVar9;
        }
        *(int *)(unaff_x21 + 0x5c) = iVar4 + 1;
        iVar4 = FUN_018ee384();
        in_stack_00000108 = _UNK_0293f878;
        in_stack_00000100 = _DAT_0293f870;
        if (iVar4 <= iVar9) {
          iVar9 = iVar4;
        }
        *(int *)(unaff_x21 + 0x58) = iVar9;
        puVar2 = Method_System_Collections_Generic_List<InstanceHandle>__ctor__;
        puVar1 = 
        Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
        ;
        in_stack_000000f8 = _UNK_029449b8;
        in_stack_000000f0 = _DAT_029449b0;
        in_stack_000000e8 = _UNK_029449d8;
        in_stack_000000e0 = _DAT_029449d0;
        iVar9 = 0;
        while (iVar9 < *(int *)(unaff_x21 + 0x5c)) {
          lVar8 = *(long *)(unaff_x21 + 0x40);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *(long *)Method_Newtonsoft_Json_Schema_JsonSchemaBuilder_ProcessEnum__;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          uVar5 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
          if ((uVar5 & 1) == 0) {
            *(undefined4 *)(lVar8 + 0x18) = 0;
          }
          else {
            iVar4 = *(int *)(lVar8 + 0x18);
            *(undefined4 *)(lVar8 + 0x18) = 0;
            if (0 < iVar4) {
              FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar4,0);
            }
          }
          lVar8 = *(long *)(unaff_x21 + 0x48);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *(long *)Method_System_Security_Cryptography_AesManaged_CreateEncryptor__;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          uVar5 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 200));
          if ((uVar5 & 1) == 0) {
            *(undefined4 *)(lVar8 + 0x18) = 0;
          }
          else {
            iVar4 = *(int *)(lVar8 + 0x18);
            *(undefined4 *)(lVar8 + 0x18) = 0;
            if (0 < iVar4) {
              FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar4,0);
            }
          }
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<int>__ctor__
                                    );
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0267ba9c(lVar8,0);
          *(long *)(unaff_x21 + 0x50) = lVar8;
          iVar4 = *(int *)(unaff_x21 + 0x58) * (iVar9 + 1);
          if (*(int *)(unaff_x20 + 0x58) <= iVar4) {
            iVar4 = *(int *)(unaff_x20 + 0x58);
          }
          iVar3 = *(int *)(unaff_x21 + 0x58) * iVar9;
          if (iVar3 < iVar4) {
            lVar8 = (long)iVar3;
            do {
              if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x18) <= (uint)lVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              FUN_018f0d38();
              lVar6 = *(long *)(unaff_x21 + 0x40);
              uVar10 = FUN_018f0ae4();
              uVar7 = param_2;
              uVar12 = param_3;
              uVar11 = FUN_018f0bcc();
              FUN_02693870(&stack0x00000060,uVar10,param_2,param_3,uVar11,uVar7,uVar12,param_4,0);
              in_stack_000000b8 = in_stack_00000078;
              in_stack_000000b0 = in_stack_00000070;
              in_stack_000000c8 = in_stack_00000088;
              in_stack_000000c0 = in_stack_00000080;
              in_stack_000000a8 = in_stack_00000068;
              in_stack_000000a0 = in_stack_00000060;
              in_stack_000000d8 = in_stack_00000098;
              in_stack_000000d0 = in_stack_00000090;
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              in_stack_00000038 = in_stack_00000078;
              in_stack_00000030 = in_stack_00000070;
              in_stack_00000048 = in_stack_00000088;
              in_stack_00000040 = in_stack_00000080;
              in_stack_00000028 = in_stack_00000068;
              in_stack_00000020 = in_stack_00000060;
              in_stack_00000058 = in_stack_00000098;
              in_stack_00000050 = in_stack_00000090;
              param_2 = in_stack_00000070;
              param_3 = in_stack_00000060;
              param_4 = in_stack_00000090;
              FUN_00bbe95c(lVar6,&stack0x00000020,*(undefined8 *)puVar2);
              lVar6 = *(long *)(unaff_x21 + 0x48);
              FUN_018f1074();
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bcd1a4(lVar6,*(undefined8 *)puVar1);
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar4);
          }
          lVar8 = *(long *)(unaff_x21 + 0x48);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (0 < *(int *)(lVar8 + 0x18)) {
            if (*(long *)(unaff_x21 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0267c374(*(long *)(unaff_x21 + 0x50),
                         *(undefined8 *)CollisionSound_<SoundPlayBuffer>d__14_TypeInfo,lVar8,0);
          }
          uVar7 = *(undefined8 *)(unaff_x21 + 0x20);
          uVar12 = *(undefined8 *)(unaff_x21 + 0x28);
          uVar10 = *(undefined8 *)(unaff_x21 + 0x40);
          uVar11 = *(undefined8 *)(unaff_x21 + 0x50);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_get_Item__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02677f34(uVar7,0,uVar12,uVar10,uVar11,0);
          iVar9 = iVar9 + 1;
        }
      }
    }
  }
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar5 = FUN_017bc96c();
  if ((uVar5 & 1) != 0) {
    FUN_0265dab4();
  }
  return;
}


