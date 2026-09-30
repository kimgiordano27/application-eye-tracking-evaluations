/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 033bbd08
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033bbed8) */
/* WARNING: Removing unreachable block (ram,0x033bbff8) */
/* WARNING: Removing unreachable block (ram,0x033bbedc) */

undefined8 OVRPlugin__GetNodePose(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  long in_stack_00000028;
  
  do {
    if ((*(byte *)(param_1 + 0x130) < *(byte *)(param_3 + 0x130)) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3)
       ) {
                    /* catch() { ... } // from try @ 033bbdf4 with catch @ 033bbf3c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033bbc38 with catch @ 033bbf40 */
      FUN_01d7df0c(unaff_x26);
    }
    do {
      uVar3 = FUN_033cae58(unaff_x26,unaff_w20,3);
      if ((uVar3 & 1) != 0) {
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033bbf58 to 034bbf5b has its CatchHandler @ 033bbf6c */
          FUN_01d7db70();
        }
        uVar6 = *(undefined8 *)(unaff_x28 + unaff_x27 * 8);
        lVar7 = *(long *)(unaff_x23 + 0x10);
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
          thunk_FUN_01e10808();
        }
        else {
          FUN_03198f70();
        }
      }
      unaff_x27 = unaff_x27 + 1;
      if ((long)(int)*(uint *)(unaff_x24 + 0x18) <= (long)unaff_x27) {
        if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_8768,*(undefined4 *)(unaff_x23 + 0x18));
        FUN_03199424();
                    /* try { // try from 033bbdf4 to 034bbe0f has its CatchHandler @ 033bbf3c */
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
          uVar6 = thunk_FUN_01dd295c(StringLiteral_887);
                    /* try { // try from 033bbf7c to 034bbfe3 has its CatchHandler @ 033bbff8 */
          plVar4 = (long *)FUN_01d7d9bc(uVar6,1);
          lVar7 = (**(code **)(*in_stack_00000010 + 0x2c8))
                            (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x2d0));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
            uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar6,0);
          }
          if ((int)plVar4[3] != 0) {
            plVar4[4] = lVar7;
            thunk_FUN_01e10808(plVar4 + 4,lVar7);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8771);
            uVar6 = FUN_033d6e50(uVar6,plVar4,0);
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
                    /* try { // try from 033bbe10 to 034bbe1b has its CatchHandler @ 033bbe64 */
                    /* try { // try from 033bbe1c to 034bbe2b has its CatchHandler @ 033bbe74 */
                    /* try { // try from 033bbe2c to 034bbe43 has its CatchHandler @ 033bb610 */
        plVar4 = (long *)(**(code **)(*unaff_x22 + 0x188))();
                    /* try { // try from 033bbe44 to 034bbe47 has its CatchHandler @ 033bbe60 */
                    /* try { // try from 033bbe48 to 034bbe4f has its CatchHandler @ 033bb610 */
        uVar3 = FUN_03308638(plVar4,0,0);
                    /* try { // try from 033bbe50 to 034bbe53 has its CatchHandler @ 033bbe5c */
        if ((uVar3 & 1) != 0) {
          uVar6 = thunk_FUN_01dd295c(StringLiteral_887);
          plVar4 = (long *)FUN_01d7d9bc(uVar6,1);
          lVar7 = (**(code **)(*in_stack_00000010 + 0x2c8))
                            (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x2d0));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
            uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar6,0);
          }
          if ((int)plVar4[3] != 0) {
            plVar4[4] = lVar7;
            thunk_FUN_01e10808(plVar4 + 4,lVar7);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8771);
            uVar6 = FUN_033d6e50(uVar6,plVar4,0);
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
                    /* try { // try from 033bbe54 to 034bbe93 has its CatchHandler @ 033bb610 */
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
                    /* catch() { ... } // from try @ 033bbe50 with catch @ 033bbe5c */
                    /* catch() { ... } // from try @ 033bbe44 with catch @ 033bbe60 */
                    /* catch() { ... } // from try @ 033bbe10 with catch @ 033bbe64 */
                    /* catch() { ... } // from try @ 033bb894 with catch @ 033bbe68 */
        lVar7 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
                    /* catch() { ... } // from try @ 033bb85c with catch @ 033bbe6c */
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
                    /* catch() { ... } // from try @ 033bb7fc with catch @ 033bbe70 */
                    /* catch() { ... } // from try @ 033bbe1c with catch @ 033bbe74 */
                    /* catch() { ... } // from try @ 033bb8a8 with catch @ 033bbe78 */
        if (*(long *)(lVar7 + 0x18) == 0) {
          if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if (*(long *)(in_stack_00000028 + 0x18) != 0) {
            lVar7 = thunk_FUN_01dd295c(StringLiteral_1369);
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar6 = FUN_03366174(0);
            uVar5 = thunk_FUN_01dd295c(StringLiteral_8769);
            uVar5 = FUN_033d6e4c(uVar5,0);
            lVar7 = thunk_FUN_01dd295c(StringLiteral_886);
            lVar8 = *(long *)(lVar7 + 0x38);
            if (lVar8 == 0) {
              FUN_01dde854(lVar7);
              lVar8 = *(long *)(lVar7 + 0x38);
            }
            lVar8 = *(long *)(lVar8 + 0x10);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_01dde7f8();
            }
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_01dde7f8();
            }
            uVar6 = FUN_0326b4d8(uVar6,uVar5,**(undefined8 **)(lVar7 + 0xb8),0);
            thunk_FUN_01dd295c(
                              Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                              );
            uVar5 = thunk_FUN_01de27b8();
            FUN_0338ed78(uVar5,uVar6,0);
            uVar6 = thunk_FUN_01dd295c(StringLiteral_8770);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar5,uVar6);
          }
          uVar6 = FUN_033bc408(in_stack_00000010,1,(unaff_w20 & 0x2000000) == 0);
        }
        else {
          lVar7 = *plVar4;
          bVar1 = *(byte *)(*(long *)StringLiteral_2471 + 0x130);
                    /* try { // try from 033bbe94 to 034bbe97 has its CatchHandler @ 033bbeac */
                    /* catch() { ... } // from try @ 033bbe94 with catch @ 033bbeac */
          if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)StringLiteral_2471)) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(plVar4);
          }
                    /* try { // try from 033bbebc to 034bbf33 has its CatchHandler @ 033bbff8 */
          uVar6 = (**(code **)(lVar7 + 0x3c8))(plVar4,unaff_w20);
        }
        return uVar6;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      unaff_x26 = *(long **)(unaff_x28 + unaff_x27 * 8);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
    } while (unaff_x26 == (long *)0x0);
    param_1 = *unaff_x26;
    param_3 = *unaff_x21;
  } while( true );
}


