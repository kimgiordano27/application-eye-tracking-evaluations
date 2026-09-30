/*
FUNCTION_NAME: UnityEngine.Cursor$$get_lockState
ENTRY_POINT: 067e5d80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


uint UnityEngine_Cursor__get_lockState(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint uVar16;
  undefined4 unaff_w23;
  int iVar17;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  while( true ) {
    FUN_0534bad0(param_1,unaff_w23,unaff_x24,*unaff_x27);
    lVar9 = *(long *)(unaff_x20 + 0x1e0);
    if (lVar9 == 0) break;
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *unaff_x25;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar16 = *(uint *)(lVar9 + 0x18);
    if (uVar16 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar16 + 1;
      *(undefined4 *)(lVar13 + (long)(int)uVar16 * 4 + 0x20) = unaff_w23;
    }
    else {
      FUN_044b6b8c(lVar9,unaff_w23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(unaff_x20 + 0x1d8);
    if (lVar9 == 0) break;
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *unaff_x25;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar16 = *(uint *)(lVar9 + 0x18);
    if (uVar16 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar16 + 1;
      *(undefined4 *)(lVar13 + (long)(int)uVar16 * 4 + 0x20) = unaff_w23;
    }
    else {
      FUN_044b6b8c(lVar9,unaff_w23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x21 = unaff_x21 + 1;
    if (in_stack_00000018 == 0) break;
    if ((int)*(uint *)(in_stack_00000018 + 0x18) <= (int)(uint)unaff_x21) {
LAB_067e5e50:
      lVar9 = *(long *)(unaff_x20 + 0x1e8);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x18) = 0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        puVar7 = Mono_Net_Security_AsyncHandshakeRequest_TypeInfo;
        puVar6 = System_Security_Cryptography_AsymmetricAlgorithm_TypeInfo;
        puVar5 = System_Reflection_Assembly_TypeInfo;
        puVar4 = System_Runtime_Serialization_AsmxGuidDataContract_TypeInfo;
        puVar3 = Oculus_Interaction_ArcTubeVisual_TypeInfo;
        lVar9 = *(long *)(unaff_x20 + 0x1f8);
        if (lVar9 != 0) {
          iVar17 = 0;
          goto LAB_067e5e98;
        }
      }
      break;
    }
    if (*(uint *)(in_stack_00000018 + 0x18) <= (uint)unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    unaff_x24 = *(long *)(in_stack_00000018 + unaff_x21 * 8 + 0x20);
    if (unaff_x24 == 0) goto LAB_067e5e50;
    unaff_w23 = FUN_0699a8d0(unaff_x24,0);
    FUN_0699a934(unaff_x24,*(undefined4 *)(unaff_x20 + 0xe0),0);
    lVar9 = *(long *)(unaff_x20 + 0xb0);
    if (lVar9 == 0) break;
    lVar13 = *(long *)(lVar9 + 0x10);
    lVar14 = *unaff_x26;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar16 = *(uint *)(lVar9 + 0x18);
    if (uVar16 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar16 + 1;
      plVar12 = (long *)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
      *plVar12 = unaff_x24;
      thunk_FUN_03048534(plVar12,unaff_x24);
    }
    else {
      FUN_044302e8(lVar9,unaff_x24,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = *(long *)(unaff_x20 + 0xb8);
    if (param_1 == 0) break;
  }
  goto thunk_FUN_02fe94e8;
LAB_067e5e98:
  if (iVar17 < *(int *)(lVar9 + 0x18)) {
    lVar9 = FUN_04430018(lVar9,iVar17,*(undefined8 *)puVar5);
    if ((lVar9 == 0) || (*(long *)(unaff_x20 + 0xb8) == 0)) goto thunk_FUN_02fe94e8;
    uVar10 = FUN_0534d580(*(long *)(unaff_x20 + 0xb8),*(undefined4 *)(lVar9 + 0x28),&stack0x00000010
                          ,*(undefined8 *)puVar6);
    if ((uVar10 & 1) == 0) {
      lVar13 = *(long *)(unaff_x20 + 0x1e8);
      if (lVar13 == 0) goto thunk_FUN_02fe94e8;
      uVar1 = *(undefined4 *)(lVar9 + 0x28);
      lVar9 = *(long *)(lVar13 + 0x10);
      lVar14 = *unaff_x25;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar9 == 0) goto thunk_FUN_02fe94e8;
      uVar16 = *(uint *)(lVar13 + 0x18);
      if (uVar16 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar16 + 1;
        *(undefined4 *)(lVar9 + (long)(int)uVar16 * 4 + 0x20) = uVar1;
      }
      else {
        FUN_044b6b8c(lVar13,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    else {
      *(undefined8 *)(lVar9 + 0x20) = in_stack_00000010;
      thunk_FUN_03048534();
      *(long *)(lVar9 + 0x18) = unaff_x20;
      thunk_FUN_03048534();
      lVar13 = *(long *)(unaff_x20 + 0xc0);
      if (lVar13 == 0) goto thunk_FUN_02fe94e8;
      lVar14 = *(long *)(lVar13 + 0x10);
      lVar15 = *(long *)puVar3;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar14 == 0) goto thunk_FUN_02fe94e8;
      uVar16 = *(uint *)(lVar13 + 0x18);
      if (uVar16 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar16 + 1;
        plVar12 = (long *)(lVar14 + (long)(int)uVar16 * 8 + 0x20);
        *plVar12 = lVar9;
        thunk_FUN_03048534(plVar12,lVar9);
      }
      else {
        FUN_044302e8(lVar13,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if (*(long *)(unaff_x20 + 200) == 0) goto thunk_FUN_02fe94e8;
      FUN_0534bad0(*(long *)(unaff_x20 + 200),*(undefined4 *)(lVar9 + 0x14),lVar9,
                   *(undefined8 *)puVar4);
      if (*(long *)(unaff_x20 + 0x1f8) == 0) goto thunk_FUN_02fe94e8;
      FUN_044319c0(*(long *)(unaff_x20 + 0x1f8),iVar17,*(undefined8 *)puVar7);
      iVar17 = iVar17 + -1;
    }
    lVar9 = *(long *)(unaff_x20 + 0x1f8);
    iVar17 = iVar17 + 1;
    if (lVar9 == 0) goto thunk_FUN_02fe94e8;
    goto LAB_067e5e98;
  }
  bVar8 = *(char *)(unaff_x20 + 0xe4) != '\0';
  if ((unaff_w22 & 1) == 0 && bVar8) {
    do {
      uVar10 = UnityEngine_Logger__Log();
    } while ((uVar10 & 1) == 0);
    uVar16 = 1;
  }
  else {
    uVar16 = unaff_w22 | bVar8;
  }
  if ((in_stack_00000008 & 1) != 0) {
    FUN_067e4ec4();
  }
  lVar9 = *(long *)(unaff_x20 + 0x1f8);
  if (lVar9 == 0) goto thunk_FUN_02fe94e8;
  iVar17 = 0;
  while (iVar17 < *(int *)(lVar9 + 0x18)) {
    lVar9 = FUN_04430018(lVar9,iVar17,*(undefined8 *)puVar5);
    if ((lVar9 == 0) || (lVar13 = *(long *)(unaff_x20 + 0x208), lVar13 == 0))
    goto thunk_FUN_02fe94e8;
    uVar1 = *(undefined4 *)(lVar9 + 0x14);
    lVar9 = *(long *)(lVar13 + 0x10);
    lVar14 = *unaff_x25;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar9 == 0) goto thunk_FUN_02fe94e8;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_044b6b8c(lVar13,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(unaff_x20 + 0x1f8);
    iVar17 = iVar17 + 1;
    if (lVar9 == 0) goto thunk_FUN_02fe94e8;
  }
  *unaff_x19 = 0;
  thunk_FUN_03048534();
  lVar9 = *(long *)(unaff_x20 + 0x208);
  if (lVar9 != 0) {
    if (0 < *(int *)(lVar9 + 0x18)) {
      uVar11 = FUN_044b8548(lVar9,*(undefined8 *)PTR_DAT_06f8d850);
      *unaff_x19 = uVar11;
      thunk_FUN_03048534();
    }
    return uVar16 & (in_stack_00000008._4_4_ ^ 1) & 1;
  }
thunk_FUN_02fe94e8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


