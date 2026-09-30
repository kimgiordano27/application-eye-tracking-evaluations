/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 033bbbd4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033bbed8) */
/* WARNING: Removing unreachable block (ram,0x033bbff8) */
/* WARNING: Removing unreachable block (ram,0x033bbedc) */

undefined8 OVRPlugin__GetEyeFrustum(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *in_x9;
  ulong uVar14;
  uint unaff_w20;
  long *unaff_x22;
  uint unaff_w26;
  long *plVar15;
  long *unaff_x28;
  long in_stack_00000028;
  
  lVar6 = (*in_x9)();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8767);
                    /* try { // try from 033bbc00 to 034bbc2b has its CatchHandler @ 033bbf34 */
  FUN_031987ac(lVar7,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)StringLiteral_8765);
  plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,unaff_w26);
  if (0 < (int)unaff_w26) {
    uVar14 = 0;
    plVar15 = plVar8 + 4;
    do {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(in_stack_00000028 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar9 = *(long *)(in_stack_00000028 + uVar14 * 8 + 0x20);
      if (lVar9 != 0) {
        lVar9 = thunk_FUN_01dfff04(lVar9,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
          uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar12,0);
        }
        if (*(uint *)(plVar8 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        *plVar15 = lVar9;
        thunk_FUN_01e10808(plVar15,lVar9);
      }
      uVar14 = uVar14 + 1;
      plVar15 = plVar15 + 1;
    } while (unaff_w26 != uVar14);
  }
  puVar5 = StringLiteral_8763;
  puVar4 = StringLiteral_6209;
  puVar3 = StringLiteral_1157;
  if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
    uVar14 = 0;
    uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    do {
      if (uVar13 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar15 = *(long **)(lVar6 + 0x20 + uVar14 * 8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar15);
        }
      }
      uVar13 = FUN_033cae58(plVar15,unaff_w20,3,plVar8);
      if ((uVar13 & 1) != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar12 = *(undefined8 *)(lVar6 + 0x20 + uVar14 * 8);
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)puVar5;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
          thunk_FUN_01e10808();
        }
        else {
          FUN_03198f70(lVar7,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)(int)*(uint *)(lVar6 + 0x18));
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_8768,*(undefined4 *)(lVar7 + 0x18));
  FUN_03199424(lVar7,lVar6,*(undefined8 *)StringLiteral_8764);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
    uVar12 = thunk_FUN_01dd295c(StringLiteral_887);
    plVar8 = (long *)FUN_01d7d9bc(uVar12,1);
    lVar6 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
      uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar12,0);
    }
    if ((int)plVar8[3] != 0) {
      plVar8[4] = lVar6;
      thunk_FUN_01e10808(plVar8 + 4,lVar6);
      uVar12 = thunk_FUN_01dd295c(StringLiteral_8771);
      uVar12 = FUN_033d6e50(uVar12,plVar8,0);
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar11 = thunk_FUN_01de27b8();
      FUN_033958dc(uVar11,uVar12,0);
      uVar12 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar11,uVar12);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  plVar8 = (long *)(**(code **)(*unaff_x22 + 0x188))();
  uVar14 = FUN_03308638(plVar8,0,0);
  if ((uVar14 & 1) != 0) {
    uVar12 = thunk_FUN_01dd295c(StringLiteral_887);
    plVar8 = (long *)FUN_01d7d9bc(uVar12,1);
    lVar6 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
      uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar12,0);
    }
    if ((int)plVar8[3] != 0) {
      plVar8[4] = lVar6;
      thunk_FUN_01e10808(plVar8 + 4,lVar6);
      uVar12 = thunk_FUN_01dd295c(StringLiteral_8771);
      uVar12 = FUN_033d6e50(uVar12,plVar8,0);
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar11 = thunk_FUN_01de27b8();
      FUN_033958dc(uVar11,uVar12,0);
      uVar12 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar11,uVar12);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar6 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(long *)(lVar6 + 0x18) == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(long *)(in_stack_00000028 + 0x18) != 0) {
      lVar6 = thunk_FUN_01dd295c(StringLiteral_1369);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_03366174(0);
      uVar11 = thunk_FUN_01dd295c(StringLiteral_8769);
      uVar11 = FUN_033d6e4c(uVar11,0);
      lVar6 = thunk_FUN_01dd295c(StringLiteral_886);
      lVar7 = *(long *)(lVar6 + 0x38);
      if (lVar7 == 0) {
        FUN_01dde854(lVar6);
        lVar7 = *(long *)(lVar6 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8();
      }
      uVar12 = FUN_0326b4d8(uVar12,uVar11,**(undefined8 **)(lVar6 + 0xb8),0);
      thunk_FUN_01dd295c(
                        Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                        );
      uVar11 = thunk_FUN_01de27b8();
      FUN_0338ed78(uVar11,uVar12,0);
      uVar12 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar11,uVar12);
    }
    uVar12 = FUN_033bc408(unaff_x28,1,(unaff_w20 & 0x2000000) == 0);
  }
  else {
    lVar6 = *plVar8;
    bVar1 = *(byte *)(*(long *)StringLiteral_2471 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_2471)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(plVar8);
    }
    uVar12 = (**(code **)(lVar6 + 0x3c8))(plVar8,unaff_w20);
  }
  return uVar12;
}


