/*
FUNCTION_NAME: FUN_02392ba4
ENTRY_POINT: 02392ba4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_02392ba4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_03781e5a & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__);
    thunk_FUN_00d48444(StringLiteral_1975);
    thunk_FUN_00d48444(PTR_DAT_033f5ef0);
    thunk_FUN_00d48444(StringLiteral_10780);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<ObiRopeCursor>__);
    thunk_FUN_00d48444(UnityEngine_Rendering_HableCurve_Segment_TypeInfo);
    thunk_FUN_00d48444(Method_DG_Tweening_Tween_OnTweenCallback<int>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DebugInspector>_Remove__);
    thunk_FUN_00d48444(StringLiteral_6339);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(UnityEngine_Events_UnityAction<int>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12329);
    thunk_FUN_00d48444(StringLiteral_10534);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_lane_f64__);
    thunk_FUN_00d48444(System_Xml_Schema_LocatedActiveAxis_TypeInfo);
    DAT_03781e5a = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 != 0) {
    iVar8 = *(int *)(param_1 + 0x68);
    if (iVar8 < *(int *)(lVar5 + 0x18)) {
      *(int *)(param_1 + 0x68) = iVar8 + 1;
    }
    else {
      FUN_012a8618(lVar5,*(int *)(lVar5 + 0x18) << 1,0,
                   *(undefined8 *)Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__);
      iVar8 = *(int *)(param_1 + 0x68);
      lVar5 = *(long *)(param_1 + 0x80);
      *(int *)(param_1 + 0x68) = iVar8 + 1;
      if (lVar5 == 0) goto LAB_02393290;
    }
    lVar5 = FUN_012a8730(lVar5,iVar8,*(undefined8 *)StringLiteral_1975);
    FUN_02396af0(lVar5,param_2,0);
    *(undefined1 *)(lVar5 + 0x40) = 0;
    puVar4 = StringLiteral_6339;
    puVar3 = StringLiteral_4747;
    puVar2 = UnityEngine_Rendering_HableCurve_Segment_TypeInfo;
    puVar1 = System_Xml_Schema_LocatedActiveAxis_TypeInfo;
    if (param_2 != 0) {
      uVar10 = 0;
      do {
        lVar9 = *(long *)(param_2 + 0x60);
        if (lVar9 == 0) goto LAB_02393290;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02393294:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar11 = (long)(int)uVar10;
        lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_02393290;
        FUN_01323390(lVar9,&local_c0,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_lane_f64__);
        uStack_78 = uStack_b8;
        local_80 = local_c0;
        local_70 = local_b0;
        while (uVar6 = FUN_012b894c(&local_80,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          local_88 = FUN_00ca99bc(&local_80,*(undefined8 *)puVar4);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar6 = FUN_0239c134(*(long *)(param_1 + 0x10),&local_88,0);
          uVar7 = local_88;
          if ((uVar6 & 1) == 0) {
            lVar9 = *(long *)(lVar5 + 8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_0239b240(uVar7,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c(uVar6,uVar6 & 0xffffffff);
            }
            FUN_00ac20f0(lVar9,uVar6 & 0xffffffff,*(undefined8 *)puVar3);
            lVar9 = *(long *)(param_1 + 0x70);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
            uVar6 = FUN_0239b240(local_88,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c(uVar6,uVar6 & 0xffffffff);
            }
            FUN_00ac20f0(lVar9,uVar6 & 0xffffffff,*(undefined8 *)puVar3);
          }
        }
        FUN_012b8948(&local_80,
                     *(undefined8 *)
                      Method_UnityEngine_Component_GetComponentInChildren<ObiRopeCursor>__);
        lVar9 = *(long *)(param_2 + 0x68);
        if (lVar9 == 0) goto LAB_02393290;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02393294;
        lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_02393290;
        FUN_01323390(lVar9,&local_c0,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_lane_f64__);
        uStack_78 = uStack_b8;
        local_80 = local_c0;
        local_70 = local_b0;
        while (uVar6 = FUN_012b894c(&local_80,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          uVar7 = FUN_00ca99bc(&local_80,*(undefined8 *)puVar4);
          lVar9 = *(long *)(lVar5 + 8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_0239b240(uVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar6,uVar6 & 0xffffffff);
          }
          FUN_00ac20f0(lVar9,uVar6 & 0xffffffff,*(undefined8 *)puVar3);
          lVar9 = *(long *)(lVar5 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
          uVar6 = FUN_0239b240(uVar7,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar6,uVar6 & 0xffffffff);
          }
          FUN_00ac20f0(lVar9,uVar6 & 0xffffffff,*(undefined8 *)puVar3);
        }
        FUN_012b8948(&local_80,
                     *(undefined8 *)
                      Method_UnityEngine_Component_GetComponentInChildren<ObiRopeCursor>__);
        lVar9 = *(long *)(param_2 + 0x58);
        if (lVar9 == 0) goto LAB_02393290;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02393294;
        lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_02393290;
        FUN_01323390(lVar9,&local_c0,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_lane_f64__);
        uStack_78 = uStack_b8;
        local_80 = local_c0;
        local_70 = local_b0;
        while (uVar6 = FUN_012b894c(&local_80,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          FUN_00ca99bc(&local_80,*(undefined8 *)puVar4);
        }
        FUN_012b8948(&local_80,
                     *(undefined8 *)
                      Method_UnityEngine_Component_GetComponentInChildren<ObiRopeCursor>__);
        uVar10 = uVar10 + 1;
      } while (uVar10 != 2);
      if (*(long *)(param_2 + 0x70) != 0) {
        FUN_01323390(*(long *)(param_2 + 0x70),&local_c0,*(undefined8 *)StringLiteral_10534);
        puVar3 = Method_DG_Tweening_Tween_OnTweenCallback<int>__;
        puVar2 = Method_System_Collections_Generic_List<DebugInspector>_Remove__;
        puVar1 = UnityEngine_Events_UnityAction<int>_TypeInfo;
        uStack_98 = uStack_b8;
        local_a0 = local_c0;
        local_90 = local_b0;
        while (uVar6 = FUN_012b894c(&local_a0,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
          local_a8 = FUN_00ca9ac4(&local_a0,*(undefined8 *)puVar2);
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar6 = FUN_0239c214(*(long *)(param_1 + 0x10),&local_a8,0);
          if ((uVar6 & 1) == 0) {
            if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ca9bcc(*(long *)(param_1 + 0x28),local_a8,*(undefined8 *)puVar1);
          }
        }
        FUN_012b8948(&local_a0,*(undefined8 *)StringLiteral_10780);
        if ((*(long *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
          FUN_0239d328(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),
                       *(undefined8 *)(*(long *)(param_1 + 0x58) + 0x10),0,0);
          lVar9 = *(long *)(param_1 + 0x28);
          if (lVar9 != 0) {
            lVar11 = *(long *)StringLiteral_12329;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
            if ((uVar6 & 1) == 0) {
              *(undefined4 *)(lVar9 + 0x18) = 0;
            }
            else {
              iVar8 = *(int *)(lVar9 + 0x18);
              *(undefined4 *)(lVar9 + 0x18) = 0;
              if (0 < iVar8) {
                FUN_0179519c(*(undefined8 *)(lVar9 + 0x10),0,iVar8,0);
              }
            }
            return lVar5;
          }
        }
      }
    }
  }
LAB_02393290:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


