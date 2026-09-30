/*
FUNCTION_NAME: FUN_016d497c
ENTRY_POINT: 016d497c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_016d497c(long *param_1)

{
  ushort uVar1;
  undefined1 auVar2 [12];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_2d0 [520];
  long local_c8;
  undefined8 local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  uint *puStack_98;
  long local_90;
  undefined8 local_88;
  uint *puStack_80;
  undefined8 local_78;
  uint local_6c;
  long local_68;
  
  puVar7 = StringLiteral_7738;
  local_c8 = tpidr_el0;
  local_68 = *(long *)(local_c8 + 0x28);
  if ((DAT_03778762 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_596);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<JSONNode>_Clear__);
    thunk_FUN_00d48444(
                      Method_MotelSand_<FanBrokenVibration>d__24_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_System_RuntimeType_ThrowIfTypeNeverValidGenericArgument__);
    thunk_FUN_00d48444(StringLiteral_7738);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<object>_Add__);
    thunk_FUN_00d48444(Method_RCG_Lovesick_ControllerMapping_TempoReleased__);
    DAT_03778762 = 1;
  }
  puVar6 = Method_RCG_Lovesick_ControllerMapping_TempoReleased__;
  puVar5 = Method_System_Collections_Generic_List<JSONNode>_Clear__;
  puVar4 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar3 = PTR_DAT_033f3600;
  local_a0 = 0;
  puStack_98 = (uint *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = 0;
  memset(auStack_2d0,0,0x200);
  local_88 = 0;
  puStack_80 = (uint *)0x0;
  FUN_00bd59c0(&local_88,auStack_2d0,0x200,*(undefined8 *)puVar7);
  plStack_b8 = &local_90;
  local_c0 = 0;
  puStack_98 = puStack_80;
  local_a0 = local_88;
  uVar8 = 0;
  while( true ) {
    uVar13 = uVar8;
    auVar17._8_8_ = (ulong)puStack_98 & 0xffffffff;
    auVar17._0_8_ = local_a0;
    auVar2 = auVar17._0_12_;
    if (uVar13 == (uint)puStack_98) {
      uVar8 = uVar13 << 1;
      if (0x7fffffc7 < uVar8) {
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_017724a8(0x7fffffc7,uVar13 + 1,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar15 = *(long *)puVar4;
      lVar10 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar10 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        lVar10 = FUN_00d5941c();
      }
      plVar11 = (long *)**(long **)(lVar10 + 0xb8);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = (**(code **)(*plVar11 + 0x178))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x180));
      auVar17 = FUN_013aeef8(lVar10,*(undefined8 *)puVar6);
      FUN_013ae66c(&local_a0,auVar17._0_8_,auVar17._8_8_,*(undefined8 *)StringLiteral_596);
      if (local_90 != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar16 = *(long *)puVar4;
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        plVar11 = (long *)**(long **)(lVar15 + 0xb8);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar11 + 0x188))(plVar11,local_90,0,*(undefined8 *)(*plVar11 + 400));
      }
      local_90 = lVar10;
      auVar17 = FUN_013aeef8(lVar10,*(undefined8 *)puVar6);
      auVar2 = auVar17._0_12_;
      puStack_98 = auVar17._8_8_;
    }
    local_a0 = auVar2._0_8_;
    lVar10 = *(long *)puVar5;
    if (auVar2._8_4_ < uVar13) {
      FUN_01792d54(0);
    }
    uVar12 = local_a0;
    lVar16 = *(long *)(lVar10 + 0x20);
    uVar1 = *(ushort *)(lVar16 + 0x132);
    lVar15 = lVar16;
    if ((uVar1 & 1) == 0) {
      lVar15 = FUN_00d5941c();
      lVar16 = *(long *)(lVar10 + 0x20);
      uVar1 = *(ushort *)(lVar16 + 0x132);
    }
    uVar14 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
    if ((uVar1 & 1) == 0) {
      lVar16 = FUN_00d5941c();
    }
    lVar15 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
    local_88 = uVar12;
    puStack_80 = &local_6c;
    local_6c = uVar13;
    (**(code **)(lVar15 + 0x10))(uVar14,lVar15,0,&local_88,&local_78);
    uVar12 = local_78;
    iVar9 = (uint)puStack_98;
    if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    if (param_1 == (long *)0x0) break;
    iVar9 = (**(code **)(*param_1 + 0x348))
                      (param_1,uVar12,iVar9 - uVar13,*(undefined8 *)(*param_1 + 0x350));
    uVar8 = iVar9 + uVar13;
    if (iVar9 == 0) {
      lVar10 = *(long *)
                Method_MotelSand_<FanBrokenVibration>d__24_System_Collections_IEnumerator_Reset__;
      if ((uint)puStack_98 < uVar13) {
        FUN_01792d54(0);
      }
      uVar12 = local_a0;
      lVar16 = *(long *)(lVar10 + 0x20);
      uVar1 = *(ushort *)(lVar16 + 0x132);
      lVar15 = lVar16;
      if ((uVar1 & 1) == 0) {
        lVar15 = FUN_00d5941c();
        lVar16 = *(long *)(lVar10 + 0x20);
        uVar1 = *(ushort *)(lVar16 + 0x132);
      }
      uVar14 = **(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar16 = FUN_00d5941c();
      }
      lVar15 = *(long *)(*(long *)(lVar16 + 0xc0) + 0x40);
      puStack_80 = &local_6c;
      local_6c = 0;
      local_88 = uVar12;
      (**(code **)(lVar15 + 0x10))(uVar14,lVar15,0,&local_88,&local_78);
      if ((*(byte *)(*(long *)(lVar10 + 0x20) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      uStack_a8 = (ulong)uVar13;
      local_b0 = local_78;
      uVar12 = FUN_00bdeeb0(&local_b0,
                            *(undefined8 *)
                             Method_System_RuntimeType_ThrowIfTypeNeverValidGenericArgument__);
      FUN_00bdf068(&local_c0);
      if (*(long *)(local_c8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar12;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


