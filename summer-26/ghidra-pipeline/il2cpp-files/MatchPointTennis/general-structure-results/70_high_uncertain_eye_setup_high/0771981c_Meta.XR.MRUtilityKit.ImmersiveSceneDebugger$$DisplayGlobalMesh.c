/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$DisplayGlobalMesh
ENTRY_POINT: 0771981c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__DisplayGlobalMesh(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
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
  
  if ((DAT_0a523142 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f30d70);
    FUN_04447ba8(PTR_DAT_09f30d78);
    FUN_04447ba8(PTR_DAT_09f30ab8);
    FUN_04447ba8(PTR_DAT_09f20ed0);
    FUN_04447ba8(PTR_DAT_09f21ad8);
    FUN_04447ba8(PTR_DAT_09f30ac0);
    FUN_04447ba8(PTR_DAT_09f30ac8);
    FUN_04447ba8(PTR_DAT_09f30ad8);
    FUN_04447ba8(PTR_DAT_09f30ae0);
    FUN_04447ba8(PTR_DAT_09f30ae8);
    FUN_04447ba8(PTR_DAT_09f30af0);
    FUN_04447ba8(PTR_DAT_09f30b08);
    FUN_04447ba8(PTR_DAT_09f30b10);
    FUN_04447ba8(PTR_DAT_09f30b18);
    FUN_04447ba8(PTR_DAT_09f30b20);
    FUN_04447ba8(PTR_DAT_09f30b28);
    FUN_04447ba8(PTR_DAT_09f30b30);
    FUN_04447ba8(PTR_DAT_09f30b38);
    FUN_04447ba8(PTR_DAT_09f30b40);
    DAT_0a523142 = 1;
  }
  puVar8 = PTR_DAT_09f30d78;
  puVar7 = PTR_DAT_09f30b30;
  puVar6 = PTR_DAT_09f30b10;
  puVar5 = PTR_DAT_09f30af0;
  puVar1 = (undefined8 *)PTR_DAT_09f30ae0;
  puVar4 = PTR_DAT_09f30ab8;
  puVar3 = PTR_DAT_09f21ad8;
  puVar2 = PTR_DAT_09f20ed0;
  in_stack_00000040 = 0.0;
  in_stack_00000030 = 0.0;
  in_stack_00000038 = 0.0;
  in_stack_00000020 = 0.0;
  in_stack_00000028 = 0.0;
  in_stack_00000010 = 0.0;
  in_stack_00000018 = 0.0;
  in_stack_00000008 = 0.0;
  in_stack_00000058 = 0.0;
  in_stack_00000048 = 0.0;
  lVar16 = *(long *)(param_1 + 0x60);
  if (lVar16 != 0) {
    iVar11 = 0;
    while (lVar16 = *(long *)(lVar16 + 0x98), lVar16 != 0) {
      if (*(int *)(lVar16 + 0x18) <= iVar11) {
        plVar12 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar2);
        FUN_078c1634(plVar12,0);
        if ((*(long *)(param_1 + 0x60) != 0) &&
           (plVar13 = (long *)FUN_07715da0(), plVar13 != (long *)0x0)) {
          lVar16 = *plVar13;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 == 0) goto LAB_07719c08;
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_07719bf0;
        }
        break;
      }
      lVar16 = FUN_05badb74(lVar16,iVar11,*(undefined8 *)puVar8);
      dVar10 = in_stack_00000058;
      if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) ||
         (*(long *)(lVar16 + 0x90) == 0)) break;
      FUN_087daba0(*(long *)(lVar16 + 0x90),0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar3);
      }
      in_stack_00000058 = (double)FUN_07a54e9c();
      dVar9 = in_stack_00000048;
      in_stack_00000058 = dVar10 + in_stack_00000058;
      if (*(long *)(lVar16 + 0x98) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0x98),0);
      in_stack_00000048 = (double)FUN_07a54e9c();
      dVar10 = in_stack_00000020;
      in_stack_00000048 = dVar9 + in_stack_00000048;
      if (*(long *)(lVar16 + 0xa0) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0xa0),0);
      in_stack_00000020 = (double)FUN_07a54e9c();
      dVar9 = in_stack_00000040;
      in_stack_00000020 = dVar10 + in_stack_00000020;
      if (*(long *)(lVar16 + 0xc0) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0xc0),0);
      in_stack_00000040 = (double)FUN_07a54e9c();
      dVar10 = in_stack_00000038;
      in_stack_00000040 = dVar9 + in_stack_00000040;
      if (*(long *)(lVar16 + 200) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 200),0);
      in_stack_00000038 = (double)FUN_07a54e9c();
      dVar9 = in_stack_00000030;
      in_stack_00000038 = dVar10 + in_stack_00000038;
      if (*(long *)(lVar16 + 0xd0) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0xd0),0);
      in_stack_00000030 = (double)FUN_07a54e9c();
      dVar10 = in_stack_00000028;
      in_stack_00000030 = dVar9 + in_stack_00000030;
      if (*(long *)(lVar16 + 0xd8) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0xd8),0);
      in_stack_00000028 = (double)FUN_07a54e9c();
      dVar9 = in_stack_00000018;
      in_stack_00000028 = dVar10 + in_stack_00000028;
      if (*(long *)(lVar16 + 0xe0) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0xe0),0);
      in_stack_00000018 = (double)FUN_07a54e9c();
      dVar10 = in_stack_00000010;
      in_stack_00000018 = dVar9 + in_stack_00000018;
      if (*(long *)(lVar16 + 0xe8) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0xe8),0);
      in_stack_00000010 = (double)FUN_07a54e9c();
      dVar9 = in_stack_00000008;
      in_stack_00000010 = dVar10 + in_stack_00000010;
      if (*(long *)(lVar16 + 0xf0) == 0) break;
      FUN_087daba0(*(long *)(lVar16 + 0xf0),0);
      in_stack_00000008 = (double)FUN_07a54e9c();
      in_stack_00000008 = dVar9 + in_stack_00000008;
      lVar16 = *(long *)(param_1 + 0x60);
      iVar11 = iVar11 + 1;
      if (lVar16 == 0) break;
    }
  }
  goto LAB_07719f04;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_07719bf0:
    if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
      puVar14 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x2c) * 0x10 + 0x138);
      goto LAB_07719c28;
    }
  }
LAB_07719c08:
  puVar14 = (undefined8 *)FUN_044822ac(plVar13,*(long *)puVar4,0x2c);
LAB_07719c28:
  iVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
  if (iVar11 != 1) {
    puVar1 = (undefined8 *)puVar6;
  }
  uVar15 = FUN_078a7764(*(undefined8 *)puVar7,*puVar1,0);
  if (plVar12 != (long *)0x0) {
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000058,0);
    uVar15 = FUN_078a7764(*(undefined8 *)puVar5,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000048,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b38,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000020,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ac0,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000040,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ad8,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000038,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b18,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000030,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ae8,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000028,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30ac8,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    FUN_078c335c(plVar12,*(undefined8 *)PTR_DAT_09f30b40,0);
    uVar15 = FUN_07a2565c(&stack0x00000018,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b20,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000010,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b28,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = FUN_07a2565c(&stack0x00000008,0);
    uVar15 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b08,uVar15,0);
    FUN_078c335c(plVar12,uVar15,0);
    uVar15 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c652c(uVar15,0);
    return;
  }
LAB_07719f04:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


