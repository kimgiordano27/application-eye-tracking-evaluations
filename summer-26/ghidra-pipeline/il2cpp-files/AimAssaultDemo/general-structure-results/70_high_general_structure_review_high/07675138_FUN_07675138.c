/*
FUNCTION_NAME: FUN_07675138
ENTRY_POINT: 07675138
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07675350) */
/* WARNING: Removing unreachable block (ram,0x076752a0) */
/* WARNING: Removing unreachable block (ram,0x0767476c) */
/* WARNING: Removing unreachable block (ram,0x076753fc) */

uint FUN_07675138(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  uint uVar10;
  undefined8 *unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long *unaff_x29;
  uint uStack0000000000000008;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    uVar4 = FUN_0769d60c(unaff_x27,0);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4(uVar4,uVar4 & 0xffffffff);
    }
    System_Array_EmptyInternalEnumerator<KeyValuePair<uint,_MarkToBaseAdjustmentRecord>>__System_Collections_IEnumerator_Reset
              ();
    if (*(long *)(unaff_x21 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049d05ec(*(long *)(unaff_x21 + 0x1e0),unaff_w26,*unaff_x25);
    unaff_w26 = unaff_w26 + -1;
    while( true ) {
      lVar8 = *(long *)(unaff_x21 + 0x1e0);
      unaff_w26 = unaff_w26 + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar8 + 0x18) <= unaff_w26) {
        uVar10 = uStack0000000000000008;
        if ((_uStack0000000000000008 & 1) == 0 && *(char *)(unaff_x21 + 0x14c) != '\0') {
          do {
            uVar4 = FUN_07675698();
          } while ((uVar4 & 1) == 0);
          uVar10 = 1;
        }
        if ((_uStack0000000000000008 & 0x100000000) != 0) {
          FUN_07675b6c();
        }
        if (*(long *)(unaff_x21 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_049cf910(&stack0x00000028,*(long *)(unaff_x21 + 0x1e0),
                     *(undefined8 *)
                      Method_UnityEngine_XR_ARFoundation_VisualScripting_ARTrackableManagerListener<ARAnchorManager,_ARAnchor>__ctor__
                    );
        puVar2 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Path,_PathOptions>__ctor__;
        in_stack_00000048 = in_stack_00000030;
        in_stack_00000040 = in_stack_00000028;
        in_stack_00000050 = in_stack_00000038;
        while( true ) {
          uVar4 = FUN_05d64e98(&stack0x00000040,*(undefined8 *)puVar2);
          if ((uVar4 & 1) == 0) {
            FUN_05d64e94(&stack0x00000040,
                         *(undefined8 *)
                          Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector3,_Vector3[],_Vector3ArrayOptions>__ctor__
                        );
            *unaff_x20 = 0;
            thunk_FUN_037aeb94();
            lVar8 = *(long *)(unaff_x21 + 0x1f0);
            if (lVar8 != 0) {
              if (0 < *(int *)(lVar8 + 0x18)) {
                uVar5 = FUN_04a6900c(lVar8,*(undefined8 *)PTR_DAT_07de8d88);
                *unaff_x20 = uVar5;
                thunk_FUN_037aeb94();
              }
              if (in_stack_00000018 != 0) {
                FUN_0754d3f8(in_stack_00000018,0);
              }
              return uVar10 & (in_stack_00000020._4_4_ ^ 1) & 1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar8 = *(long *)(unaff_x21 + 0x1f0);
          uVar3 = FUN_0769d60c(in_stack_00000050,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar6 = *(long *)(lVar8 + 0x10);
          lVar9 = *unaff_x29;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar6 == 0) break;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
          }
          else {
            FUN_04a67630(lVar8,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      unaff_x27 = FUN_049cec24(lVar8,unaff_w26,*unaff_x19);
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar4 = FUN_0769f8f4(unaff_x27,0);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4(uVar4,uVar4 & 0xffffffff);
      }
      uVar4 = FUN_05bc5484();
      if ((uVar4 & 1) != 0) break;
      lVar8 = *(long *)(unaff_x21 + 0x1d0);
      uVar3 = FUN_0769f8f4(unaff_x27,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *(long *)(lVar8 + 0x10);
      lVar9 = *unaff_x29;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = *(uint *)(lVar8 + 0x18);
      if (uVar10 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar10 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar10 * 4 + 0x20) = uVar3;
      }
      else {
        FUN_04a67630(lVar8,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0769f8fc(unaff_x27,in_stack_00000058,0);
    FUN_0769f904(unaff_x27);
    lVar8 = *(long *)(unaff_x21 + 0x128);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar9 = *(long *)
             Method_UnityEngine_XR_ARFoundation_ARTrackable<XRParticipant,_ARParticipant>_get_sessionRelativeData__
    ;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar10 = *(uint *)(lVar8 + 0x18);
    if (uVar10 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar10 + 1;
      plVar7 = (long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
      *plVar7 = unaff_x27;
      thunk_FUN_037aeb94(plVar7,unaff_x27);
    }
    else {
      FUN_049ceef4(lVar8,unaff_x27,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
  } while( true );
}


