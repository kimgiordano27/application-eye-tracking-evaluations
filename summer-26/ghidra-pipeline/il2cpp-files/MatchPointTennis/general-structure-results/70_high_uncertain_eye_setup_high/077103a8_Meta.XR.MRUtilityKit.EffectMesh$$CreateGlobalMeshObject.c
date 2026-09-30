/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$CreateGlobalMeshObject
ENTRY_POINT: 077103a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__CreateGlobalMeshObject(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x19;
  ulong uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  puVar3 = PTR_DAT_09f307e8;
  puVar2 = PTR_DAT_09f307a8;
  puVar1 = PTR_DAT_09f1e538;
  uVar12 = 0;
  while ((long)uVar12 < (long)*(int *)(param_1 + 0x18)) {
    if (((*(long *)(unaff_x19 + 0x40) == 0) ||
        (lVar6 = FUN_05badb74(*(long *)(unaff_x19 + 0x40),uVar12 & 0xffffffff,*(undefined8 *)puVar2)
        , lVar6 == 0)) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_07710ab0;
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(unaff_x19 + 0x48)) goto LAB_07710ab4;
    lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(unaff_x19 + 0x48) * 8 + 0x20);
    if (lVar6 == 0) goto LAB_07710ab0;
    plVar7 = (long *)FUN_0776de2c(lVar6,0);
    if (4 < *(int *)(unaff_x19 + 0x10)) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar8 = FUN_09531730(plVar7,0,0);
      if ((uVar8 & 1) != 0) {
        lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0xe);
        if (lVar9 == 0) goto LAB_07710ab0;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_09f307c0;
        thunk_FUN_044bb4b4();
        if (plVar7 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_07710ab0;
          uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        }
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x28) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x28));
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)PTR_DAT_09f307b0;
        thunk_FUN_044bb4b4();
        if (plVar7 == (long *)0x0) goto LAB_07710ab0;
        in_stack_00000058._4_4_ =
             (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        uVar10 = FUN_07a3b850((long)&stack0x00000058 + 4,0);
        if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x38) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x38),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)PTR_DAT_09f307b8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x40));
        in_stack_00000058._4_4_ =
             (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        uVar10 = FUN_07a3b850((long)&stack0x00000058 + 4,0);
        if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x48) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x48),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)PTR_DAT_09f307d8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x50));
        in_stack_00000038 = *(undefined8 *)(lVar6 + 0x48);
        in_stack_00000030 = *(undefined8 *)(lVar6 + 0x40);
        in_stack_00000048 = *(undefined8 *)(lVar6 + 0x58);
        uVar10 = *(undefined8 *)(lVar6 + 0x50);
        in_stack_00000040 = uVar10;
        uStack0000000000000028 = FUN_0775c5c0(&stack0x00000030,0);
        uStack000000000000002c = (undefined4)uVar10;
        uVar10 = FUN_0614c070(&stack0x00000028,0,0,0);
        if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x58) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x58),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)PTR_DAT_09f307d0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x60));
        in_stack_00000038 = *(undefined8 *)(lVar6 + 0x48);
        in_stack_00000030 = *(undefined8 *)(lVar6 + 0x40);
        in_stack_00000048 = *(undefined8 *)(lVar6 + 0x58);
        uVar10 = *(undefined8 *)(lVar6 + 0x50);
        in_stack_00000040 = uVar10;
        uStack0000000000000028 = FUN_0775c5e4(&stack0x00000030,0);
        uStack000000000000002c = (undefined4)uVar10;
        uVar10 = FUN_0614c070(&stack0x00000028,0,0,0);
        if (*(uint *)(lVar9 + 0x18) < 10) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x68) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x68),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 0xb) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x70) = *(undefined8 *)PTR_DAT_09f30800;
        thunk_FUN_044bb4b4();
        lVar6 = *(long *)(unaff_x19 + 0x38);
        if (lVar6 == 0) goto LAB_07710ab0;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_07710ab4;
        lVar6 = lVar6 + uVar12 * 0x10;
        in_stack_00000018 = *(undefined8 *)(lVar6 + 0x28);
        in_stack_00000010 = *(undefined8 *)(lVar6 + 0x20);
        uVar10 = FUN_094cc6fc(&stack0x00000010,0,0,0);
        if (*(uint *)(lVar9 + 0x18) < 0xc) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x78) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x78),uVar10);
        if (*(uint *)(lVar9 + 0x18) < 0xd) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x80) = *(undefined8 *)puVar3;
        thunk_FUN_044bb4b4((undefined8 *)(lVar9 + 0x80));
        uVar10 = FUN_07a3b850(unaff_x19 + 0x30,0);
        if (*(uint *)(lVar9 + 0x18) < 0xe) goto LAB_07710ab4;
        *(undefined8 *)(lVar9 + 0x88) = uVar10;
        thunk_FUN_044bb4b4();
        uVar10 = FUN_078b57fc(lVar9,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c652c(uVar10,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07710ab0;
    FUN_05badb74(*(long *)(unaff_x19 + 0x40),uVar12 & 0xffffffff,*(undefined8 *)puVar2);
    if (((*(long *)(unaff_x19 + 0x40) == 0) ||
        (lVar6 = FUN_05badb74(*(long *)(unaff_x19 + 0x40),uVar12 & 0xffffffff,*(undefined8 *)puVar2)
        , lVar6 == 0)) ||
       ((*(long *)(unaff_x19 + 0x40) == 0 ||
        ((lVar6 = FUN_05badb74(*(long *)(unaff_x19 + 0x40),uVar12 & 0xffffffff,*(undefined8 *)puVar2
                              ), lVar6 == 0 || (*(long *)(unaff_x19 + 0x38) == 0))))))
    goto LAB_07710ab0;
    if (*(uint *)(*(long *)(unaff_x19 + 0x38) + 0x18) <= uVar12) {
LAB_07710ab4:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    FUN_07710bc4();
    param_1 = *(long *)(unaff_x19 + 0x38);
    uVar12 = uVar12 + 1;
    if (param_1 == 0) goto LAB_07710ab0;
  }
  FUN_087dae58();
  FUN_087dab38();
  if (3 < *(int *)(unaff_x19 + 0x10)) {
    in_stack_00000008 = FUN_087dad08();
    uVar10 = FUN_07a3ccb4(&stack0x00000008,*(undefined8 *)PTR_DAT_09f30790,0);
    uVar10 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f307f8,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar10,0);
    if (3 < *(int *)(unaff_x19 + 0x10)) {
      plVar7 = *(long **)(unaff_x19 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_07710ab0;
      in_stack_00000058._4_4_ =
           (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      uVar10 = FUN_07a3b850((long)&stack0x00000058 + 4,0);
      plVar7 = *(long **)(unaff_x19 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_07710ab0;
      in_stack_00000058._4_4_ =
           (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      uVar11 = FUN_07a3b850((long)&stack0x00000058 + 4,0);
      uVar10 = FUN_078b56f4(*(undefined8 *)PTR_DAT_09f307e0,uVar10,*(undefined8 *)PTR_DAT_09f307c8,
                            uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
      }
      FUN_094c652c(uVar10,0);
    }
  }
  plVar7 = *(long **)(unaff_x19 + 0x20);
  if (plVar7 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    plVar7 = *(long **)(unaff_x19 + 0x20);
    if (plVar7 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      uVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e530);
      FUN_095039e0(uVar10,uVar4,uVar5,5,1,0,0);
      FUN_0771154c(*(undefined8 *)(unaff_x19 + 0x20),in_stack_00000000._4_4_ & 1,0,
                   *(undefined4 *)(unaff_x19 + 0x10),uVar10);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_094c2340(*(long *)(unaff_x19 + 0x28),0,0);
        *(undefined8 *)(unaff_x19 + 0x60) = uVar10;
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x60),uVar10);
        if (3 < *(int *)(unaff_x19 + 0x10)) {
          in_stack_00000008 = FUN_087dad08();
          uVar10 = FUN_07a3ccb4(&stack0x00000008,*(undefined8 *)PTR_DAT_09f30790,0);
          uVar10 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f307f0,uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
          }
          FUN_094c652c(uVar10,0);
        }
        return;
      }
    }
  }
LAB_07710ab0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


