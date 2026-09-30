/*
FUNCTION_NAME: Unity.Entities.StructuralChange.AddComponentsEntitiesBatch_00000F87$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 030a431c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Entities_StructuralChange_AddComponentsEntitiesBatch_00000F87_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  lVar4 = thunk_FUN_01a89e68();
  FUN_027b3d9c(lVar4,0);
  plVar11 = (long *)(unaff_x19 + 0xe);
  *plVar11 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11,lVar4);
  if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(*(long *)(unaff_x19 + 0xe) + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x19 + 10) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar5 = thunk_FUN_01a89e68();
    FUN_026b3ea4(uVar5,0);
    uVar7 = thunk_FUN_01a6ca08(System_Action<FrameOut<short>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar7);
  }
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbe000);
  FUN_036a1b5c(lVar4,0);
  plVar12 = (long *)(unaff_x19 + 0x10);
  *plVar12 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12,lVar4);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036d3824(*(long *)(unaff_x19 + 0xc),0);
  uVar5 = FUN_025b1328(uVar5,*(undefined8 *)System_Action<ChangeEvent<bool>>_TypeInfo,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_036d38d4(lVar4,uVar5,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar6 = FUN_036a1c18(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar6,uVar6 & 0xffffffff);
  }
  FUN_036a1c54(lVar4,uVar6 & 0xffffffff,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036a45c0(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_036a460c(lVar4,uVar5,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036a466c(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_036a46b8(lVar4,uVar5,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036a47c4(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_036a4810(lVar4,uVar5,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036a4718(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_036a4764(lVar4,uVar5,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036aa140(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_036aa17c(lVar4,uVar5,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar5 = FUN_036a34f8(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar5,uVar5);
  }
  FUN_036a3534(lVar4,uVar5,0);
  if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x10);
  uVar6 = FUN_036a3768(*(long *)(unaff_x19 + 0xc),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c(uVar6,uVar6 & 0xffffffff);
  }
  FUN_036a37a4(lVar4,uVar6 & 0xffffffff,0);
  if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar4 = *plVar11;
  uVar5 = FUN_036aa140(*plVar12,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  puVar10 = (undefined8 *)(lVar4 + 0x10);
  *puVar10 = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10);
  iVar9 = 0;
  unaff_x19[0x12] = 0;
  do {
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar3 = FUN_036a3768(*(long *)(unaff_x19 + 0xc),0);
    puVar2 = <>f__AnonymousType7<Regex,_Match>_TypeInfo;
    puVar1 = 
    <>f__AnonymousType1<float,_float,_int,_float,_CGDataRequestRasterization_ModeEnum>_TypeInfo;
    if (iVar3 <= iVar9) {
      puVar10 = (undefined8 *)(unaff_x19 + 0x10);
      uVar5 = *puVar10;
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,0);
      *puVar10 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar10,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_02145584(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
      return;
    }
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                System_Action<AsyncOperationHandle<TextAsset>>_TypeInfo);
    FUN_027b3d9c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(unaff_x19 + 0xe);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = FUN_036a8700(*(long *)(unaff_x19 + 0xc),unaff_x19[0x12],0);
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    plVar11 = *(long **)(unaff_x19 + 10);
    uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                System_Action<AsyncLocalValueChangedArgs<CultureInfo>>_TypeInfo);
    FUN_021dd4e8(uVar5,lVar4,
                 *(undefined8 *)System_Action<AsyncOperationHandle<SceneInstance>>_TypeInfo,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *plVar11;
    lVar13 = *(long *)System_Action<AsyncOperationHandle<IList<AsyncOperationHandle>>>_TypeInfo;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_030a4724;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01a472ec(plVar11);
LAB_030a4724:
    lVar4 = thunk_FUN_01a41d84(*(undefined8 *)(lVar4 + 8),lVar13);
    lVar4 = (**(code **)(lVar4 + 8))(plVar11,uVar5,lVar4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000008 =
         FUN_020a2c44(lVar4,*(undefined8 *)System_Action<AsyncOperationHandle<GameObject>>_TypeInfo)
    ;
    uVar6 = FUN_0209f888(&stack0x00000008,
                         *(undefined8 *)
                          System_Action<AsyncOperationHandle<ContentCatalogData>>_TypeInfo);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000008;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x14,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01f07574(unaff_x19 + 2,&stack0x00000008);
      return;
    }
    FUN_0209f8cc(&stack0x00000008,&stack0x00000018,
                 *(undefined8 *)System_Action<AsyncOperationHandle<bool>>_TypeInfo);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_036a93e8(*(long *)(unaff_x19 + 0x10),in_stack_00000018,0,unaff_x19[0x12],0);
    iVar9 = unaff_x19[0x12] + 1;
    unaff_x19[0x12] = iVar9;
  } while( true );
}


