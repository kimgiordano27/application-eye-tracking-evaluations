/*
FUNCTION_NAME: Unity.Entities.CompanionGameObjectUpdateTransformSystem.__codegen__OnUpdate_0000001B$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 034c45d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Entities_CompanionGameObjectUpdateTransformSystem___codegen__OnUpdate_0000001B_PostfixBurstDelegate___ctor
               (undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long unaff_x21;
  undefined8 uVar13;
  long lVar14;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  
  do {
    FUN_02217608(unaff_x20,unaff_x21,*param_1);
    iVar1 = unaff_x19[0x10] + 1;
    unaff_x19[0x10] = iVar1;
    puVar3 = UnityEngine_UIElements_BaseRuntimePanel_<>c_TypeInfo;
    puVar2 = Crosstales_BWF_BWFManager_<>c__DisplayClass41_0_TypeInfo;
    if ((int)unaff_x19[0xc] <= iVar1) {
      if (*(long *)(unaff_x19 + 10) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
        *unaff_x19 = 0xfffffffe;
        *(undefined8 *)(unaff_x19 + 10) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 10,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02145584(unaff_x19 + 2,uVar10,*(undefined8 *)puVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = FUN_01f6f9d0(*(undefined8 *)(unaff_x29 + 0x10),iVar1 * 0x14,
                          *(undefined8 *)SQLite_BaseTableQuery_Ordering_TypeInfo);
    uVar10 = FUN_01f7014c(uVar10,0x14,
                          *(undefined8 *)
                           UnityEngine_UIElements_BaseTreeViewController_<>c__DisplayClass20_0_TypeInfo
                         );
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar7 = *unaff_x25;
    }
    lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar11 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar7);
        lVar7 = *unaff_x25;
      }
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Beautify_Universal_Beautify_BeautifyCompareStyleParameter_TypeInfo
                                 );
      FUN_021de1ac(lVar11,uVar13,
                   *(undefined8 *)
                    Beautify_Universal_Beautify_BeautifyDownsamplingModeParameter_TypeInfo,0);
      plVar5 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x18);
      *plVar5 = lVar11;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar11);
      lVar7 = *unaff_x25;
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
      lVar7 = *unaff_x25;
    }
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar7);
        lVar7 = *unaff_x25;
      }
      uVar13 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                                   Beautify_Universal_Beautify_BeautifyBlinkStyleParameter_TypeInfo)
      ;
      FUN_021de1ac(lVar14,uVar13,
                   *(undefined8 *)Beautify_Universal_Beautify_BeautifyFrameStyleParameter_TypeInfo,0
                  );
      plVar5 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x20);
      *plVar5 = lVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar14);
    }
    uVar10 = FUN_01f70a5c(uVar10,lVar11,lVar14,
                          *(undefined8 *)
                           UnityEngine_UIElements_BaseVerticalCollectionView_<>c__DisplayClass161_0_TypeInfo
                         );
    if (*(long *)(unaff_x29 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar5 = *(long **)(unaff_x29 + 0x20);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *plVar5;
    plVar12 = *(long **)(*(long *)(unaff_x29 + 0x18) + 0x10);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_034c449c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar5,*unaff_x28,0);
LAB_034c449c:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar7 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_034c4500;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(plVar12,*unaff_x24,1);
LAB_034c4500:
    lVar7 = (*(code *)*puVar6)(plVar12,uVar10,uVar4,puVar6[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar10 = FUN_020a2c44(lVar7,*(undefined8 *)
                                 UniHumanoid_AvatarDescription_<>c__DisplayClass14_0_TypeInfo);
    uVar8 = FUN_0209f888();
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = uVar10;
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
    lVar7 = *(long *)(unaff_x19 + 10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x20 = *(long *)(in_stack_00000008 + 0x10);
    plVar5 = (long *)(lVar7 + 0x18);
    unaff_x21 = *plVar5;
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_01a89e68(*(undefined8 *)Crosstales_BWF_Filter_BaseFilter_<>c_TypeInfo);
      FUN_02060754(unaff_x21,lVar7,
                   *(undefined8 *)Beautify_Universal_Beautify_BeautifyLayerMaskParameter_TypeInfo,0)
      ;
      *plVar5 = unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,unaff_x21);
    }
    param_1 = (undefined8 *)
              Beautify_Universal_Beautify_BeautifyDoFBokehCompositionParameter_TypeInfo;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  } while( true );
}


