/*
FUNCTION_NAME: OVRPlugin$$get_occlusionMesh
ENTRY_POINT: 033bba50
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_occlusionMesh(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  uint unaff_w20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x28;
  long in_stack_00000020;
  long in_stack_00000028;
  
  FUN_01d7d918();
  FUN_01d7d918(StringLiteral_2471);
  FUN_01d7d918(StringLiteral_8763);
  FUN_01d7d918(StringLiteral_8764);
  FUN_01d7d918(StringLiteral_8765);
  FUN_01d7d918(StringLiteral_8766);
  FUN_01d7d918(StringLiteral_8767);
  FUN_01d7d918(StringLiteral_8768);
  FUN_01d7d918(StringLiteral_6209);
  FUN_01d7d918(StringLiteral_1157);
  FUN_01d7d918(StringLiteral_1291);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  *(undefined1 *)(unaff_x19 + 0xa1e) = 1;
  in_stack_00000020 = 0;
  FUN_033d1774();
  if (unaff_x23 == 0) {
    lVar13 = *(long *)StringLiteral_886;
    lVar12 = *(long *)(lVar13 + 0x38);
    if (lVar12 == 0) {
      FUN_01dde854(lVar13);
      lVar12 = *(long *)(lVar13 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01dde7f8();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01dde7f8();
    }
    unaff_x23 = **(long **)(lVar12 + 0xb8);
    in_stack_00000028 = unaff_x23;
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  }
  uVar14 = *(ulong *)(unaff_x23 + 0x18);
  if (unaff_x22 == (long *)0x0) {
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_x22 = (long *)FUN_033ad654(0);
  }
  if (((((unaff_w20 ^ 0xffffffff) & 0x14) == 0) && ((int)uVar14 == 0)) &&
     (uVar6 = FUN_033ac570(), (uVar6 & 1) != 0)) {
    uVar7 = FUN_033bc580();
  }
  else {
    lVar12 = (**(code **)(*unaff_x28 + 0x658))();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar13 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8767);
    FUN_031987ac(lVar13,*(undefined4 *)(lVar12 + 0x18),*(undefined8 *)StringLiteral_8765);
    plVar8 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291,uVar14 & 0xffffffff);
    if (0 < (int)uVar14) {
      uVar6 = 0;
      plVar15 = plVar8 + 4;
      do {
        if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(in_stack_00000028 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        lVar9 = *(long *)(in_stack_00000028 + uVar6 * 8 + 0x20);
        if (lVar9 != 0) {
          lVar9 = thunk_FUN_01dfff04(lVar9,0);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar9 != 0) &&
             (lVar10 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
            uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar7,0);
          }
          if (*(uint *)(plVar8 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          *plVar15 = lVar9;
          thunk_FUN_01e10808(plVar15,lVar9);
        }
        uVar6 = uVar6 + 1;
        plVar15 = plVar15 + 1;
      } while ((uVar14 & 0xffffffff) != uVar6);
    }
    puVar5 = StringLiteral_8763;
    puVar4 = StringLiteral_6209;
    puVar3 = StringLiteral_1157;
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar14 = 0;
      uVar6 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar15 = *(long **)(lVar12 + 0x20 + uVar14 * 8);
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
        uVar6 = FUN_033cae58(plVar15,unaff_w20,3,plVar8);
        if ((uVar6 & 1) != 0) {
          if (*(uint *)(lVar12 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar7 = *(undefined8 *)(lVar12 + 0x20 + uVar14 * 8);
          lVar9 = *(long *)(lVar13 + 0x10);
          lVar10 = *(long *)puVar5;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar2 = *(uint *)(lVar13 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
            thunk_FUN_01e10808();
          }
          else {
            FUN_03198f70(lVar13,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar6 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar12 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_8768,*(undefined4 *)(lVar13 + 0x18));
    FUN_03199424(lVar13,lVar12,*(undefined8 *)StringLiteral_8764);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) {
      uVar7 = thunk_FUN_01dd295c(StringLiteral_887);
      plVar8 = (long *)FUN_01d7d9bc(uVar7,1);
      lVar12 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_01de26bc(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
        uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar12;
        thunk_FUN_01e10808(plVar8 + 4,lVar12);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8771);
        uVar7 = FUN_033d6e50(uVar7,plVar8,0);
        thunk_FUN_01dd295c(StringLiteral_1159);
        uVar11 = thunk_FUN_01de27b8();
        FUN_033958dc(uVar11,uVar7,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar11,uVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    in_stack_00000020 = 0;
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    plVar8 = (long *)(**(code **)(*unaff_x22 + 0x188))
                               (unaff_x22,unaff_w20,lVar12,&stack0x00000028,0,unaff_x21,0,
                                &stack0x00000020);
    uVar14 = FUN_03308638(plVar8,0,0);
    if ((uVar14 & 1) != 0) {
      uVar7 = thunk_FUN_01dd295c(StringLiteral_887);
      plVar8 = (long *)FUN_01d7d9bc(uVar7,1);
      lVar12 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if ((lVar12 != 0) &&
         (lVar13 = thunk_FUN_01de26bc(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
        uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar12;
        thunk_FUN_01e10808(plVar8 + 4,lVar12);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8771);
        uVar7 = FUN_033d6e50(uVar7,plVar8,0);
        thunk_FUN_01dd295c(StringLiteral_1159);
        uVar11 = thunk_FUN_01de27b8();
        FUN_033958dc(uVar11,uVar7,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar11,uVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar12 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(long *)(lVar12 + 0x18) == 0) {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(long *)(in_stack_00000028 + 0x18) != 0) {
        lVar12 = thunk_FUN_01dd295c(StringLiteral_1369);
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar7 = FUN_03366174(0);
        uVar11 = thunk_FUN_01dd295c(StringLiteral_8769);
        uVar11 = FUN_033d6e4c(uVar11,0);
        lVar12 = thunk_FUN_01dd295c(StringLiteral_886);
        lVar13 = *(long *)(lVar12 + 0x38);
        if (lVar13 == 0) {
          FUN_01dde854(lVar12);
          lVar13 = *(long *)(lVar12 + 0x38);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = FUN_01dde7f8();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01dde7f8();
        }
        uVar7 = FUN_0326b4d8(uVar7,uVar11,**(undefined8 **)(lVar12 + 0xb8),0);
        thunk_FUN_01dd295c(
                          Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                          );
        uVar11 = thunk_FUN_01de27b8();
        FUN_0338ed78(uVar11,uVar7,0);
        uVar7 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar11,uVar7);
      }
      uVar7 = FUN_033bc408(unaff_x28,1,(unaff_w20 & 0x2000000) == 0);
    }
    else {
      lVar12 = *plVar8;
      bVar1 = *(byte *)(*(long *)StringLiteral_2471 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_2471)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar8);
      }
      uVar7 = (**(code **)(lVar12 + 0x3c8))
                        (plVar8,unaff_w20,unaff_x22,in_stack_00000028,unaff_x21,
                         *(undefined8 *)(lVar12 + 0x3d0));
      if (in_stack_00000020 != 0) {
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        (**(code **)(*unaff_x22 + 0x1a8))
                  (unaff_x22,&stack0x00000028,in_stack_00000020,*(undefined8 *)(*unaff_x22 + 0x1b0))
        ;
      }
    }
  }
  return uVar7;
}


