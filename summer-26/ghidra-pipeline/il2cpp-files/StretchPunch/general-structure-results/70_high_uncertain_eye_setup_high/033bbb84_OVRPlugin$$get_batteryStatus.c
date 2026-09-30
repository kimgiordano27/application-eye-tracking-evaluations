/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 033bbb84
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

undefined8 OVRPlugin__get_batteryStatus(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool in_ZR;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint unaff_w20;
  long *unaff_x22;
  uint unaff_w26;
  long *plVar15;
  long *unaff_x28;
  long in_stack_00000028;
  
  if (((in_ZR) && (unaff_w26 == 0)) && (uVar6 = FUN_033ac570(), (uVar6 & 1) != 0)) {
                    /* try { // try from 033bbba4 to 034bbbcb has its CatchHandler @ 033bbf38 */
    uVar7 = FUN_033bc580();
  }
  else {
    lVar8 = (**(code **)(*unaff_x28 + 0x658))();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8767);
    FUN_031987ac(lVar9,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)StringLiteral_8765);
    plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,unaff_w26);
    if (0 < (int)unaff_w26) {
      uVar6 = 0;
      plVar15 = plVar10 + 4;
      do {
        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(in_stack_00000028 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar11 = *(long *)(in_stack_00000028 + uVar6 * 8 + 0x20);
        if (lVar11 != 0) {
          lVar11 = thunk_FUN_01dfff04(lVar11,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar12 == 0)) {
            uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar7,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          *plVar15 = lVar11;
          thunk_FUN_01e10808(plVar15,lVar11);
        }
        uVar6 = uVar6 + 1;
        plVar15 = plVar15 + 1;
      } while (unaff_w26 != uVar6);
    }
    puVar5 = StringLiteral_8763;
    puVar4 = StringLiteral_6209;
    puVar3 = StringLiteral_1157;
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar6 = 0;
      uVar14 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar15 = *(long **)(lVar8 + 0x20 + uVar6 * 8);
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
        uVar14 = FUN_033cae58(plVar15,unaff_w20,3,plVar10);
        if ((uVar14 & 1) != 0) {
          if (*(uint *)(lVar8 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar7 = *(undefined8 *)(lVar8 + 0x20 + uVar6 * 8);
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar12 = *(long *)puVar5;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
            thunk_FUN_01e10808();
          }
          else {
            FUN_03198f70(lVar9,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_8768,*(undefined4 *)(lVar9 + 0x18));
    FUN_03199424(lVar9,lVar8,*(undefined8 *)StringLiteral_8764);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
      uVar7 = thunk_FUN_01dd295c(StringLiteral_887);
      plVar10 = (long *)FUN_01d7d9bc(uVar7,1);
      lVar8 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
        uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar10[4] = lVar8;
      thunk_FUN_01e10808(plVar10 + 4,lVar8);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8771);
      uVar7 = FUN_033d6e50(uVar7,plVar10,0);
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar13 = thunk_FUN_01de27b8();
      FUN_033958dc(uVar13,uVar7,0);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,uVar7);
    }
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    plVar10 = (long *)(**(code **)(*unaff_x22 + 0x188))();
    uVar6 = FUN_03308638(plVar10,0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = thunk_FUN_01dd295c(StringLiteral_887);
      plVar10 = (long *)FUN_01d7d9bc(uVar7,1);
      lVar8 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
        uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,0);
      }
      if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar10[4] = lVar8;
      thunk_FUN_01e10808(plVar10 + 4,lVar8);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8771);
      uVar7 = FUN_033d6e50(uVar7,plVar10,0);
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar13 = thunk_FUN_01de27b8();
      FUN_033958dc(uVar13,uVar7,0);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,uVar7);
    }
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar8 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0));
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(long *)(lVar8 + 0x18) == 0) {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(long *)(in_stack_00000028 + 0x18) != 0) {
        lVar8 = thunk_FUN_01dd295c(StringLiteral_1369);
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar7 = FUN_03366174(0);
        uVar13 = thunk_FUN_01dd295c(StringLiteral_8769);
        uVar13 = FUN_033d6e4c(uVar13,0);
        lVar8 = thunk_FUN_01dd295c(StringLiteral_886);
        lVar9 = *(long *)(lVar8 + 0x38);
        if (lVar9 == 0) {
          FUN_01dde854(lVar8);
          lVar9 = *(long *)(lVar8 + 0x38);
        }
        lVar9 = *(long *)(lVar9 + 0x10);
        if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_01dde7f8();
        }
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01dde7f8();
        }
        uVar7 = FUN_0326b4d8(uVar7,uVar13,**(undefined8 **)(lVar8 + 0xb8),0);
        thunk_FUN_01dd295c(
                          Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                          );
        uVar13 = thunk_FUN_01de27b8();
        FUN_0338ed78(uVar13,uVar7,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar13,uVar7);
      }
      uVar7 = FUN_033bc408(unaff_x28,1,(unaff_w20 & 0x2000000) == 0);
    }
    else {
      lVar8 = *plVar10;
      bVar1 = *(byte *)(*(long *)StringLiteral_2471 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_2471))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar10);
      }
      uVar7 = (**(code **)(lVar8 + 0x3c8))(plVar10,unaff_w20);
    }
  }
  return uVar7;
}


