/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$set_ShouldToggleGlobalMeshCollision
ENTRY_POINT: 07719a44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__set_ShouldToggleGlobalMeshCollision(long param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000058;
  
  while (dVar2 = in_stack_00000020, param_1 != 0) {
    FUN_087daba0(param_1,0);
    in_stack_00000020 = (double)FUN_07a54e9c();
    dVar1 = in_stack_00000040;
    in_stack_00000020 = dVar2 + in_stack_00000020;
    if (*(long *)(unaff_x22 + 0xc0) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0xc0),0);
    in_stack_00000040 = (double)FUN_07a54e9c();
    dVar2 = in_stack_00000038;
    in_stack_00000040 = dVar1 + in_stack_00000040;
    if (*(long *)(unaff_x22 + 200) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 200),0);
    in_stack_00000038 = (double)FUN_07a54e9c();
    dVar1 = in_stack_00000030;
    in_stack_00000038 = dVar2 + in_stack_00000038;
    if (*(long *)(unaff_x22 + 0xd0) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0xd0),0);
    in_stack_00000030 = (double)FUN_07a54e9c();
    dVar2 = in_stack_00000028;
    in_stack_00000030 = dVar1 + in_stack_00000030;
    if (*(long *)(unaff_x22 + 0xd8) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0xd8),0);
    in_stack_00000028 = (double)FUN_07a54e9c();
    dVar1 = in_stack_00000018;
    in_stack_00000028 = dVar2 + in_stack_00000028;
    if (*(long *)(unaff_x22 + 0xe0) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0xe0),0);
    in_stack_00000018 = (double)FUN_07a54e9c();
    dVar2 = in_stack_00000010;
    in_stack_00000018 = dVar1 + in_stack_00000018;
    if (*(long *)(unaff_x22 + 0xe8) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0xe8),0);
    in_stack_00000010 = (double)FUN_07a54e9c();
    dVar1 = in_stack_00000008;
    in_stack_00000010 = dVar2 + in_stack_00000010;
    if (*(long *)(unaff_x22 + 0xf0) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0xf0),0);
    in_stack_00000008 = (double)FUN_07a54e9c();
    in_stack_00000008 = dVar1 + in_stack_00000008;
    unaff_w20 = unaff_w20 + 1;
    if ((*(long *)(unaff_x19 + 0x60) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x60) + 0x98), lVar4 == 0)) break;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      plVar5 = (long *)thunk_FUN_0448520c(*unaff_x29);
      FUN_078c1634(plVar5,0);
      if ((*(long *)(unaff_x19 + 0x60) != 0) &&
         (plVar6 = (long *)FUN_07715da0(), plVar6 != (long *)0x0)) {
        lVar4 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 == 0) goto LAB_07719c08;
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_07719bf0;
      }
      break;
    }
    lVar4 = FUN_05badb74(lVar4,unaff_w20,*unaff_x28);
    dVar2 = in_stack_00000058;
    if (((lVar4 == 0) || (unaff_x22 = *(long *)(lVar4 + 0x10), unaff_x22 == 0)) ||
       (*(long *)(unaff_x22 + 0x90) == 0)) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0x90),0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x21);
    }
    in_stack_00000058 = (double)FUN_07a54e9c();
    dVar1 = in_stack_00000048;
    in_stack_00000058 = dVar2 + in_stack_00000058;
    if (*(long *)(unaff_x22 + 0x98) == 0) break;
    FUN_087daba0(*(long *)(unaff_x22 + 0x98),0);
    in_stack_00000048 = (double)FUN_07a54e9c();
    in_stack_00000048 = dVar1 + in_stack_00000048;
    param_1 = *(long *)(unaff_x22 + 0xa0);
  }
  goto LAB_07719f04;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_07719bf0:
    if (*(long *)(piVar10 + -2) == *unaff_x27) {
      puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0x2c) * 0x10 + 0x138);
      goto LAB_07719c28;
    }
  }
LAB_07719c08:
  puVar7 = (undefined8 *)FUN_044822ac(plVar6,*unaff_x27,0x2c);
LAB_07719c28:
  iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
  if (iVar3 != 1) {
    unaff_x24 = unaff_x26;
  }
  uVar8 = FUN_078a7764(*unaff_x25,*unaff_x24,0);
  if (plVar5 != (long *)0x0) {
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000058,0);
    uVar8 = FUN_078a7764(*unaff_x23,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000048,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b38,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000020,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ac0,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000040,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ad8,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000038,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b18,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000030,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ae8,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000028,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ac8,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    FUN_078c335c(plVar5,*(undefined8 *)PTR_DAT_09f30b40,0);
    uVar8 = FUN_07a2565c(&stack0x00000018,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b20,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000010,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b28,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = FUN_07a2565c(&stack0x00000008,0);
    uVar8 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b08,uVar8,0);
    FUN_078c335c(plVar5,uVar8,0);
    uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar8,0);
    return;
  }
LAB_07719f04:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


