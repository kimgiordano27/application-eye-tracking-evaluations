/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 033bbc84
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033bbed8) */
/* WARNING: Removing unreachable block (ram,0x033bbff8) */
/* WARNING: Removing unreachable block (ram,0x033bbedc) */

undefined8 OVRPlugin__GetTrackerPose(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong unaff_x19;
  uint unaff_w20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *plVar10;
  long unaff_x27;
  ulong uVar11;
  long *unaff_x28;
  long in_stack_00000028;
  
  do {
    if (param_1 <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *unaff_x26 = unaff_x27;
    thunk_FUN_01e10808(unaff_x26,unaff_x27);
    puVar4 = StringLiteral_6209;
    puVar3 = StringLiteral_1157;
    do {
      unaff_x19 = unaff_x19 + 1;
      unaff_x26 = unaff_x26 + 1;
      if (unaff_x21 == unaff_x19) {
        if (0 < (int)*(ulong *)(unaff_x24 + 0x18)) {
                    /* try { // try from 033bbcbc to 034bbdf3 has its CatchHandler @ 033bb610 */
          uVar11 = 0;
          uVar7 = *(ulong *)(unaff_x24 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar10 = *(long **)(unaff_x24 + 0x20 + uVar11 * 8);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            if (plVar10 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(plVar10);
              }
            }
            uVar7 = FUN_033cae58(plVar10,unaff_w20,3);
            if ((uVar7 & 1) != 0) {
              if (*(uint *)(unaff_x24 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              uVar6 = *(undefined8 *)(unaff_x24 + 0x20 + uVar11 * 8);
              lVar8 = *(long *)(unaff_x23 + 0x10);
              *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              uVar2 = *(uint *)(unaff_x23 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
                thunk_FUN_01e10808();
              }
              else {
                FUN_03198f70();
              }
            }
            uVar7 = (ulong)*(uint *)(unaff_x24 + 0x18);
            uVar11 = uVar11 + 1;
          } while ((long)uVar11 < (long)(int)*(uint *)(unaff_x24 + 0x18));
        }
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_8768,*(undefined4 *)(unaff_x23 + 0x18));
        FUN_03199424();
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
          uVar6 = thunk_FUN_01dd295c(StringLiteral_887);
          plVar10 = (long *)FUN_01d7d9bc(uVar6,1);
          lVar8 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar6,0);
          }
          if ((int)plVar10[3] != 0) {
            plVar10[4] = lVar8;
            thunk_FUN_01e10808(plVar10 + 4,lVar8);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8771);
            uVar6 = FUN_033d6e50(uVar6,plVar10,0);
            thunk_FUN_01dd295c(StringLiteral_1159);
            uVar5 = thunk_FUN_01de27b8();
            FUN_033958dc(uVar5,uVar6,0);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar5,uVar6);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        plVar10 = (long *)(**(code **)(*unaff_x22 + 0x188))();
        uVar11 = FUN_03308638(plVar10,0,0);
        if ((uVar11 & 1) != 0) {
          uVar6 = thunk_FUN_01dd295c(StringLiteral_887);
          plVar10 = (long *)FUN_01d7d9bc(uVar6,1);
          lVar8 = (**(code **)(*unaff_x28 + 0x2c8))(unaff_x28,*(undefined8 *)(*unaff_x28 + 0x2d0));
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar6,0);
          }
          if ((int)plVar10[3] != 0) {
            plVar10[4] = lVar8;
            thunk_FUN_01e10808(plVar10 + 4,lVar8);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8771);
            uVar6 = FUN_033d6e50(uVar6,plVar10,0);
            thunk_FUN_01dd295c(StringLiteral_1159);
            uVar5 = thunk_FUN_01de27b8();
            FUN_033958dc(uVar5,uVar6,0);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar5,uVar6);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
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
            uVar6 = FUN_03366174(0);
            uVar5 = thunk_FUN_01dd295c(StringLiteral_8769);
            uVar5 = FUN_033d6e4c(uVar5,0);
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
            uVar6 = FUN_0326b4d8(uVar6,uVar5,**(undefined8 **)(lVar8 + 0xb8),0);
            thunk_FUN_01dd295c(
                              Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                              );
            uVar5 = thunk_FUN_01de27b8();
            FUN_0338ed78(uVar5,uVar6,0);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar5,uVar6);
          }
          uVar6 = FUN_033bc408(unaff_x28,1,(unaff_w20 & 0x2000000) == 0);
        }
        else {
          lVar8 = *plVar10;
          bVar1 = *(byte *)(*(long *)StringLiteral_2471 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_2471)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar10);
          }
          uVar6 = (**(code **)(lVar8 + 0x3c8))(plVar10,unaff_w20);
        }
        return uVar6;
      }
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(in_stack_00000028 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar8 = *(long *)(in_stack_00000028 + unaff_x19 * 8 + 0x20);
    } while (lVar8 == 0);
    unaff_x27 = thunk_FUN_01dfff04(lVar8,0);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((unaff_x27 != 0) &&
       (lVar8 = thunk_FUN_01de26bc(unaff_x27,*(undefined8 *)(*unaff_x25 + 0x40)), lVar8 == 0)) {
      uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar6,0);
    }
    param_1 = (ulong)*(uint *)(unaff_x25 + 3);
  } while( true );
}


