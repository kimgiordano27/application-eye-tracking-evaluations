/*
FUNCTION_NAME: OVRPlugin$$GetEyeTextureSize
ENTRY_POINT: 033bbc2c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033bbed8) */
/* WARNING: Removing unreachable block (ram,0x033bbff8) */
/* WARNING: Removing unreachable block (ram,0x033bbedc) */

undefined8 OVRPlugin__GetEyeTextureSize(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint unaff_w20;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long *plVar11;
  long *unaff_x28;
  long in_stack_00000028;
  
  uVar10 = 0;
  plVar11 = unaff_x25 + 4;
  do {
                    /* try { // try from 033bbc38 to 034bbcbb has its CatchHandler @ 033bbf40 */
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(in_stack_00000028 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar5 = *(long *)(in_stack_00000028 + uVar10 * 8 + 0x20);
    if (lVar5 != 0) {
      lVar5 = thunk_FUN_01dfff04(lVar5,0);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*unaff_x25 + 0x40)), lVar6 == 0)) {
        uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar8,0);
      }
      if (*(uint *)(unaff_x25 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      *plVar11 = lVar5;
      thunk_FUN_01e10808(plVar11,lVar5);
    }
    puVar4 = StringLiteral_6209;
    puVar3 = StringLiteral_1157;
    uVar10 = uVar10 + 1;
    plVar11 = plVar11 + 1;
  } while ((unaff_x26 & 0xffffffff) != uVar10);
  if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
    uVar10 = 0;
    uVar9 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar11 = *(long **)(unaff_x24 + 0x20 + uVar10 * 8);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      if (plVar11 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar11);
        }
      }
      uVar9 = FUN_033cae58(plVar11,unaff_w20,3);
      if ((uVar9 & 1) != 0) {
        if (*(uint *)(unaff_x24 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar8 = *(undefined8 *)(unaff_x24 + 0x20 + uVar10 * 8);
        lVar5 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
          thunk_FUN_01e10808();
        }
        else {
          FUN_03198f70();
        }
      }
      uVar9 = (ulong)*(uint *)(unaff_x24 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(unaff_x24 + 0x18));
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar5 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_8768,*(undefined4 *)(unaff_x23 + 0x18));
  FUN_03199424();
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
    uVar8 = thunk_FUN_01dd295c(StringLiteral_887);
    plVar11 = (long *)FUN_01d7d9bc(uVar8,1);
    lVar5 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
      uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar8,0);
    }
    if ((int)plVar11[3] != 0) {
      plVar11[4] = lVar5;
      thunk_FUN_01e10808(plVar11 + 4,lVar5);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8771);
      uVar8 = FUN_033d6e50(uVar8,plVar11,0);
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar7 = thunk_FUN_01de27b8();
      FUN_033958dc(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  plVar11 = (long *)(**(code **)(*unaff_x22 + 0x188))();
  uVar10 = FUN_03308638(plVar11,0,0);
  if ((uVar10 & 1) != 0) {
    uVar8 = thunk_FUN_01dd295c(StringLiteral_887);
    plVar11 = (long *)FUN_01d7d9bc(uVar8,1);
    lVar5 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
      uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar8,0);
    }
    if ((int)plVar11[3] != 0) {
      plVar11[4] = lVar5;
      thunk_FUN_01e10808(plVar11 + 4,lVar5);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8771);
      uVar8 = FUN_033d6e50(uVar8,plVar11,0);
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar7 = thunk_FUN_01de27b8();
      FUN_033958dc(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar5 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(long *)(lVar5 + 0x18) == 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(long *)(in_stack_00000028 + 0x18) != 0) {
      lVar5 = thunk_FUN_01dd295c(StringLiteral_1369);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar8 = FUN_03366174(0);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8769);
      uVar7 = FUN_033d6e4c(uVar7,0);
      lVar5 = thunk_FUN_01dd295c(StringLiteral_886);
      lVar6 = *(long *)(lVar5 + 0x38);
      if (lVar6 == 0) {
        FUN_01dde854(lVar5);
        lVar6 = *(long *)(lVar5 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8();
      }
      uVar8 = FUN_0326b4d8(uVar8,uVar7,**(undefined8 **)(lVar5 + 0xb8),0);
      thunk_FUN_01dd295c(
                        Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                        );
      uVar7 = thunk_FUN_01de27b8();
      FUN_0338ed78(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar8);
    }
    uVar8 = FUN_033bc408(unaff_x28,1,(unaff_w20 & 0x2000000) == 0);
  }
  else {
    lVar5 = *plVar11;
    bVar1 = *(byte *)(*(long *)StringLiteral_2471 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_2471)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(plVar11);
    }
    uVar8 = (**(code **)(lVar5 + 0x3c8))(plVar11,unaff_w20);
  }
  return uVar8;
}


