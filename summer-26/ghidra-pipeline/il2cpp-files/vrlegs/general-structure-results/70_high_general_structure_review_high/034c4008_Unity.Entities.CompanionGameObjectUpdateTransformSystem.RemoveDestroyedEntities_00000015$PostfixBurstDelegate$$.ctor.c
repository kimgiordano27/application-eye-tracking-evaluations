/*
FUNCTION_NAME: Unity.Entities.CompanionGameObjectUpdateTransformSystem.RemoveDestroyedEntities_00000015$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 034c4008
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_PostfixBurstDelegate___ctor
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *unaff_x22;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  
  uVar6 = thunk_FUN_01a89e68(*param_1);
  FUN_0219a4f0(uVar6,*(undefined8 *)PTR_DAT_03cbee88);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x20 + 0x10),uVar6);
  plVar11 = *(long **)(unaff_x29 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x22) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto 
        Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_BurstDirectCall__GetFunctionPointer
        ;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_01a472ec(plVar11,*unaff_x22,0);

  Unity_Entities_CompanionGameObjectUpdateTransformSystem_RemoveDestroyedEntities_00000015_BurstDirectCall__GetFunctionPointer
  :
  iVar3 = (*(code *)*puVar7)(plVar11,puVar7[1]);
  if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  if (*(int *)(*(long *)PTR_DAT_03cc03b8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar4 = FUN_0273c458((double)(float)(int)((float)iVar3 / 20.0),0);
  iVar3 = 0;
  unaff_x19[0xc] = iVar4;
  unaff_x19[0x10] = 0;
  do {
    puVar2 = UnityEngine_UIElements_BaseRuntimePanel_<>c_TypeInfo;
    puVar1 = Crosstales_BWF_BWFManager_<>c__DisplayClass41_0_TypeInfo;
    if (iVar4 <= iVar3) {
      if (*(long *)(unaff_x19 + 10) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 10) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 10,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02145584(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_01f6f9d0(*(undefined8 *)(unaff_x29 + 0x10),iVar3 * 0x14,
                         *(undefined8 *)SQLite_BaseTableQuery_Ordering_TypeInfo);
    uVar6 = FUN_01f7014c(uVar6,0x14,
                         *(undefined8 *)
                          UnityEngine_UIElements_BaseTreeViewController_<>c__DisplayClass20_0_TypeInfo
                        );
    lVar8 = *unaff_x25;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar8 = *unaff_x25;
    }
    lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
    if (lVar12 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
        lVar8 = *unaff_x25;
      }
      uVar14 = **(undefined8 **)(lVar8 + 0xb8);
      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Beautify_Universal_Beautify_BeautifyCompareStyleParameter_TypeInfo
                                 );
      FUN_021de1ac(lVar12,uVar14,
                   *(undefined8 *)
                    Beautify_Universal_Beautify_BeautifyDownsamplingModeParameter_TypeInfo,0);
      plVar11 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
      *plVar11 = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar12);
      lVar8 = *unaff_x25;
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
      lVar8 = *unaff_x25;
    }
    lVar15 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
    if (lVar15 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar8);
        lVar8 = *unaff_x25;
      }
      uVar14 = **(undefined8 **)(lVar8 + 0xb8);
      lVar15 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Beautify_Universal_Beautify_BeautifyBlinkStyleParameter_TypeInfo)
      ;
      FUN_021de1ac(lVar15,uVar14,
                   *(undefined8 *)Beautify_Universal_Beautify_BeautifyFrameStyleParameter_TypeInfo,0
                  );
      plVar11 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x20);
      *plVar11 = lVar15;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar15);
    }
    uVar6 = FUN_01f70a5c(uVar6,lVar12,lVar15,
                         *(undefined8 *)
                          UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass161_0_TypeInfo
                        );
    if (*(long *)(unaff_x29 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar11 = *(long **)(unaff_x29 + 0x20);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *plVar11;
    plVar13 = *(long **)(*(long *)(unaff_x29 + 0x18) + 0x10);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_034c449c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar11,*unaff_x28,0);
LAB_034c449c:
    uVar5 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_034c4500;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar13,*unaff_x24,1);
LAB_034c4500:
    lVar8 = (*(code *)*puVar7)(plVar13,uVar6,uVar5,puVar7[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = FUN_020a2c44(lVar8,*(undefined8 *)
                                UniHumanoid_AvatarDescription_<>c__DisplayClass14_0_TypeInfo);
    uVar9 = FUN_0209f888();
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)Crosstales_BWF_BWFManager_<>c__DisplayClass41_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(unaff_x19 + 2);
      return;
    }
    FUN_0209f8cc();
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_034da538(in_stack_00000008,&stack0x00000008,*unaff_x26);
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar8 = *(long *)(unaff_x19 + 10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar15 = *(long *)(in_stack_00000008 + 0x10);
    plVar11 = (long *)(lVar8 + 0x18);
    lVar12 = *plVar11;
    if (lVar12 == 0) {
      lVar12 = thunk_FUN_01a89e68(*(undefined8 *)Crosstales_BWF_Filter_BaseFilter_<>c_TypeInfo);
      FUN_02060754(lVar12,lVar8,
                   *(undefined8 *)Beautify_Universal_Beautify_BeautifyLayerMaskParameter_TypeInfo,0)
      ;
      *plVar11 = lVar12;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar12);
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02217608(lVar15,lVar12,
                 *(undefined8 *)
                  Beautify_Universal_Beautify_BeautifyDoFBokehCompositionParameter_TypeInfo);
    iVar4 = unaff_x19[0xc];
    iVar3 = unaff_x19[0x10] + 1;
    unaff_x19[0x10] = iVar3;
  } while( true );
}


