/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04711854
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<OVRPlugin_SpaceDiscoveryResult>(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x19;
  long *unaff_x21;
  long *plVar14;
  long unaff_x23;
  undefined8 uVar15;
  long unaff_x26;
  undefined1 auVar16 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 *in_stack_00000040;
  long in_stack_00000048;
  
  auVar16 = FUN_0675ff58();
  lVar11 = auVar16._0_8_;
  lVar8 = auVar16._8_8_;
  if (unaff_x21 == (long *)0x0) goto thunk_FUN_03a8a9c0;
  uVar6 = (**(code **)(*unaff_x21 + 0x2b8))();
  if ((uVar6 & 1) != 0) {
    plVar14 = *(long **)(unaff_x23 + 0x50);
    plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x26 + 0xe0));
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    plVar9 = auVar16._0_8_;
    lVar11 = 0;
    lVar8 = auVar16._8_8_;
    if (plVar9 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar15 = (**(code **)(*plVar9 + 0x478))(plVar9,*(undefined8 *)(*plVar9 + 0x480));
    auVar16 = FUN_044c7270(uVar15,*(undefined8 *)PTR_DAT_08493040);
    lVar11 = auVar16._0_8_;
    lVar8 = auVar16._8_8_;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    if ((lVar11 != 0) &&
       (lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<SphericalHarmonicsL2>;
    if ((int)plVar7[3] == 0) goto LAB_047124b8;
    plVar9 = plVar7 + 4;
    *plVar9 = lVar11;
LAB_04711910:
    auVar16 = thunk_FUN_03afed3c(plVar9,lVar11);
    lVar11 = auVar16._0_8_;
    lVar8 = auVar16._8_8_;
    if (plVar14 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar14 + 0x418))(plVar14,plVar7,*(undefined8 *)(*plVar14 + 0x420));
      lVar11 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,0);
      lVar8 = in_stack_00000008;
      if (lVar10 != 0) {
        lVar11 = FUN_0667e088(lVar10,in_stack_00000008,lVar11,0);
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03ac4090(lVar8);
        }
        if (lVar11 != 0) {
          lVar10 = thunk_FUN_03ac73c0(lVar11,lVar8);
          if (lVar10 != 0) {
            return lVar10;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(lVar11,lVar8);
        }
        return 0;
      }
    }
    goto thunk_FUN_03a8a9c0;
  }
  uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  auVar16 = FUN_0675ff58(uVar15,0);
  plVar7 = auVar16._0_8_;
  lVar11 = 0;
  lVar8 = auVar16._8_8_;
  if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
  uVar6 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
  if ((uVar6 & 1) != 0) {
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    plVar7 = auVar16._0_8_;
    lVar11 = 0;
    lVar8 = auVar16._8_8_;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
    auVar16 = FUN_0675ff58(*(undefined8 *)PTR_DAT_08493030,0);
    lVar11 = auVar16._0_8_;
    lVar8 = auVar16._8_8_;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar6 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar11,*(undefined8 *)(*plVar7 + 0x2c0));
    if ((uVar6 & 1) != 0) {
      plVar14 = *(long **)(unaff_x23 + 0x58);
      plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,2);
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(unaff_x26 + 0xe0));
      }
      auVar16 = FUN_0675ff58(uVar15,0);
      plVar9 = auVar16._0_8_;
      lVar11 = 0;
      lVar8 = auVar16._8_8_;
      if (plVar9 == (long *)0x0) goto thunk_FUN_03a8a9c0;
      uVar15 = (**(code **)(*plVar9 + 0x478))(plVar9,*(undefined8 *)(*plVar9 + 0x480));
      auVar16 = FUN_044c7270(uVar15,*(undefined8 *)PTR_DAT_08493040);
      lVar11 = auVar16._0_8_;
      lVar8 = auVar16._8_8_;
      if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
      if ((lVar11 != 0) &&
         (lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<SphericalHarmonicsL2>:
        uVar15 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar15,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_047124b8;
      plVar7[4] = lVar11;
      thunk_FUN_03afed3c(plVar7 + 4,lVar11);
      auVar16 = FUN_0675ff58(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
      plVar9 = auVar16._0_8_;
      lVar11 = 0;
      lVar8 = auVar16._8_8_;
      if (plVar9 == (long *)0x0) goto thunk_FUN_03a8a9c0;
      uVar15 = (**(code **)(*plVar9 + 0x478))(plVar9,*(undefined8 *)(*plVar9 + 0x480));
      lVar11 = FUN_044c49b4(uVar15,1,*(undefined8 *)PTR_DAT_08493038);
      if ((lVar11 != 0) &&
         (lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<SphericalHarmonicsL2>;
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_047124b8;
      plVar9 = plVar7 + 5;
      *plVar9 = lVar11;
      goto LAB_04711910;
    }
  }
  uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  auVar16 = FUN_0675ff58(uVar15,0);
  plVar7 = auVar16._0_8_;
  lVar11 = 0;
  lVar8 = auVar16._8_8_;
  if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
  uVar6 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
  if ((uVar6 & 1) == 0) {
LAB_04711c54:
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    lVar8 = auVar16._8_8_;
    plVar7 = auVar16._0_8_;
    lVar11 = 0;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar6 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
    if ((uVar6 & 1) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      auVar16 = FUN_0675ff58(uVar15,0);
      lVar8 = auVar16._8_8_;
      plVar7 = auVar16._0_8_;
      lVar11 = 0;
      if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      auVar16 = FUN_0675ff58(*(undefined8 *)PTR_DAT_08493088,0);
      lVar8 = auVar16._8_8_;
      lVar11 = auVar16._0_8_;
      if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
      uVar6 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar11,*(undefined8 *)(*plVar7 + 0x2c0));
      if ((uVar6 & 1) != 0) {
        plVar7 = *(long **)(unaff_x23 + 0x28);
        goto FUN_04711d10;
      }
    }
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    lVar8 = auVar16._8_8_;
    plVar7 = auVar16._0_8_;
    lVar11 = 0;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar6 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
    if ((uVar6 & 1) == 0) {
LAB_04712018:
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      auVar16 = FUN_0675ff58(uVar15,0);
      lVar8 = auVar16._8_8_;
      plVar7 = auVar16._0_8_;
      lVar11 = 0;
      if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
      uVar6 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
      if ((uVar6 & 1) != 0) {
        uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        auVar16 = FUN_0675ff58(uVar15,0);
        lVar8 = auVar16._8_8_;
        plVar7 = auVar16._0_8_;
        lVar11 = 0;
        if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
        auVar16 = FUN_0675ff58(*(undefined8 *)PTR_DAT_08493090,0);
        lVar8 = auVar16._8_8_;
        lVar11 = auVar16._0_8_;
        if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
        uVar6 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar11,*(undefined8 *)(*plVar7 + 0x2c0));
        if ((uVar6 & 1) != 0) {
          uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          auVar16 = FUN_0675ff58(uVar15,0);
          lVar8 = auVar16._8_8_;
          plVar7 = auVar16._0_8_;
          lVar11 = 0;
          if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
          uVar15 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
          lVar10 = FUN_044de628(uVar15,*(undefined8 *)PTR_DAT_08493048);
          plVar7 = *(long **)(unaff_x23 + 0x38);
          auVar16 = FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,2);
          lVar8 = auVar16._8_8_;
          lVar11 = auVar16._0_8_;
          if (lVar10 == 0) goto thunk_FUN_03a8a9c0;
          if (*(int *)(lVar10 + 0x18) == 0) {
LAB_047124b8:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          if (lVar11 == 0) goto thunk_FUN_03a8a9c0;
          uVar15 = *(undefined8 *)(lVar10 + 0x20);
          FUN_0350a83c(lVar11,uVar15);
          FUN_0350a870(lVar11,0,uVar15);
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_047124b8;
          uVar15 = *(undefined8 *)(lVar10 + 0x28);
          goto LAB_04711da4;
        }
      }
      if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      lVar10 = thunk_FUN_03ac74bc();
      (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30))();
      uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar15 = FUN_0675ff58(uVar15,0);
      auVar16 = FUN_07d49c84(uVar15,0);
      lVar8 = auVar16._8_8_;
      lVar11 = 0;
      if (auVar16._0_8_ != 0) {
        in_stack_00000048 = FUN_0351a5ac(0,*(undefined8 *)PTR_DAT_08493070,auVar16._0_8_);
        puVar5 = PTR_DAT_08493028;
        puVar4 = PTR_DAT_0848d968;
        puVar3 = PTR_DAT_08488568;
        puVar2 = PTR_DAT_08486858;
        in_stack_00000040 = &stack0x00000048;
        in_stack_00000038 = 0;
        while( true ) {
          if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar6 = FUN_0351a5ac(0,*(undefined8 *)puVar3);
          if ((uVar6 & 1) == 0) {
            FUN_0350b2a4(&stack0x00000038);
            return lVar10;
          }
          if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          plVar7 = (long *)FUN_0351a5ac(0,*(undefined8 *)PTR_DAT_08493078);
          if (plVar7 == (long *)0x0) break;
          lVar11 = *plVar7;
          bVar1 = *(byte *)(*(long *)PTR_DAT_08493050 + 0x130);
          if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_08493050)) {
            bVar1 = *(byte *)(*(long *)PTR_DAT_084930a0 + 0x130);
            if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_084930a0)) break;
            in_stack_00000028 = 0;
            in_stack_00000030 = 0;
            FUN_07d36d40(&stack0x00000028,plVar7,0);
            in_stack_00000018 = in_stack_00000030;
            in_stack_00000010 = in_stack_00000028;
            lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_084930a8,&stack0x00000010);
          }
          else {
            in_stack_00000028 = 0;
            in_stack_00000030 = 0;
            FUN_07d36b44(&stack0x00000028,plVar7,0);
            in_stack_00000018 = in_stack_00000030;
            in_stack_00000010 = in_stack_00000028;
            lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)PTR_DAT_08493058,&stack0x00000010);
          }
          plVar7 = *(long **)(unaff_x23 + 0x10);
          lVar8 = FUN_03a8a804(*(undefined8 *)puVar4,2);
          uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar15 = FUN_0675ff58(uVar15,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_0350a83c(lVar8,uVar15);
          FUN_0350a870(lVar8,0,uVar15);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar15 = FUN_0351a5ac(2,*(undefined8 *)puVar5,lVar11);
          FUN_0350a83c(lVar8,uVar15);
          FUN_0350a870(lVar8,1,uVar15);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar8 = (**(code **)(*plVar7 + 0x418))(plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x420));
          lVar12 = FUN_03a8a804(*(undefined8 *)puVar2,2);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_0350a83c(lVar12,lVar11);
          FUN_0350a870(lVar12,0,lVar11);
          FUN_0350a83c(lVar12,lVar10);
          FUN_0350a870(lVar12,1,lVar10);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_0667e088(lVar8,in_stack_00000008,lVar12,0);
          unaff_x23 = in_stack_00000008;
        }
        thunk_FUN_03af1434(PTR_DAT_08486870);
        uVar15 = thunk_FUN_03ac74bc();
        FUN_06750ae8(uVar15,0);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar15);
      }
      goto thunk_FUN_03a8a9c0;
    }
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    lVar8 = auVar16._8_8_;
    plVar7 = auVar16._0_8_;
    lVar11 = 0;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
    auVar16 = FUN_0675ff58(*(undefined8 *)PTR_DAT_08493068,0);
    lVar8 = auVar16._8_8_;
    lVar11 = auVar16._0_8_;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar6 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar11,*(undefined8 *)(*plVar7 + 0x2c0));
    if ((uVar6 & 1) == 0) goto LAB_04712018;
    plVar7 = *(long **)(unaff_x23 + 0x30);
    lVar10 = FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,3);
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x26 + 0xe0));
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    lVar8 = auVar16._8_8_;
    lVar11 = auVar16._0_8_;
    if (lVar10 == 0) goto thunk_FUN_03a8a9c0;
    FUN_0350a83c(lVar10,lVar11);
    FUN_0350a870(lVar10,0,lVar11);
    auVar16 = FUN_0675ff58(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
    lVar8 = auVar16._8_8_;
    plVar14 = auVar16._0_8_;
    lVar11 = 0;
    if (plVar14 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar15 = (**(code **)(*plVar14 + 0x478))(plVar14,*(undefined8 *)(*plVar14 + 0x480));
    uVar15 = FUN_044c7270(uVar15,*(undefined8 *)PTR_DAT_08493040);
    FUN_0350a83c(lVar10,uVar15);
    FUN_0350a870(lVar10,1,uVar15);
    auVar16 = FUN_0675ff58(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
    lVar8 = auVar16._8_8_;
    plVar14 = auVar16._0_8_;
    lVar11 = 0;
    if (plVar14 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar15 = (**(code **)(*plVar14 + 0x478))(plVar14,*(undefined8 *)(*plVar14 + 0x480));
    uVar15 = FUN_044c49b4(uVar15,1,*(undefined8 *)PTR_DAT_08493038);
    FUN_0350a83c(lVar10,uVar15);
    uVar13 = 2;
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    plVar7 = auVar16._0_8_;
    lVar11 = 0;
    lVar8 = auVar16._8_8_;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
    auVar16 = FUN_0675ff58(*(undefined8 *)PTR_DAT_08493080,0);
    lVar11 = auVar16._0_8_;
    lVar8 = auVar16._8_8_;
    if (plVar7 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar6 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar11,*(undefined8 *)(*plVar7 + 0x2c0));
    if ((uVar6 & 1) == 0) goto LAB_04711c54;
    plVar7 = *(long **)(unaff_x23 + 0x20);
FUN_04711d10:
    lVar10 = FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,2);
    uVar15 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x26 + 0xe0));
    }
    auVar16 = FUN_0675ff58(uVar15,0);
    lVar11 = auVar16._0_8_;
    lVar8 = auVar16._8_8_;
    if (lVar10 == 0) goto thunk_FUN_03a8a9c0;
    FUN_0350a83c(lVar10,lVar11);
    FUN_0350a870(lVar10,0,lVar11);
    auVar16 = FUN_0675ff58(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
    plVar14 = auVar16._0_8_;
    lVar11 = 0;
    lVar8 = auVar16._8_8_;
    if (plVar14 == (long *)0x0) goto thunk_FUN_03a8a9c0;
    uVar15 = (**(code **)(*plVar14 + 0x478))(plVar14,*(undefined8 *)(*plVar14 + 0x480));
    uVar15 = FUN_044c7270(uVar15,*(undefined8 *)PTR_DAT_08493040);
    lVar11 = lVar10;
LAB_04711da4:
    FUN_0350a83c(lVar11,uVar15);
    uVar13 = 1;
    lVar10 = lVar11;
  }
  auVar16 = FUN_0350a870(lVar10,uVar13,uVar15);
  lVar11 = auVar16._0_8_;
  lVar8 = auVar16._8_8_;
  if (plVar7 != (long *)0x0) {
    lVar10 = (**(code **)(*plVar7 + 0x418))(plVar7,lVar10,*(undefined8 *)(*plVar7 + 0x420));
    lVar11 = FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,0);
    lVar8 = in_stack_00000008;
    if (lVar10 != 0) {
      uVar15 = FUN_0667e088(lVar10,in_stack_00000008,lVar11,0);
      lVar11 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03ac4090(lVar11);
      }
      lVar11 = FUN_03522eb0(uVar15,lVar11);
      return lVar11;
    }
  }
thunk_FUN_03a8a9c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0(lVar11,lVar8);
}


