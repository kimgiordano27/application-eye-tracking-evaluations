/*
FUNCTION_NAME: FUN_01fefaac
ENTRY_POINT: 01fefaac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_01fefaac(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_0378081e & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3919);
    thunk_FUN_00d48444(Method_UnityEngine_Mesh_SetUvsImpl<Vector2>__);
    thunk_FUN_00d48444(StringLiteral_5104);
    thunk_FUN_00d48444(StringLiteral_930);
    thunk_FUN_00d48444(StringLiteral_4515);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_0378081e = 1;
  }
  puVar8 = StringLiteral_5104;
  puVar7 = StringLiteral_4515;
  puVar6 = StringLiteral_3919;
  puVar5 = StringLiteral_930;
  puVar4 = Method_UnityEngine_Mesh_SetUvsImpl<Vector2>__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (param_2 == 0) {
    plVar9 = (long *)0x0;
    goto LAB_01fefcfc;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar9 = (long *)FUN_01ff5160(uVar14);
  uVar14 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar14 = FUN_01780344(uVar14,0);
  if (plVar9 == (long *)0x0) goto Unity_Burst_Intrinsics_Arm_Neon__vfmas_lane_f32;
  plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x1e0));
  if ((plVar9 != (long *)0x0) && (*plVar9 != *(long *)puVar8)) goto LAB_01feff0c;
  plVar10 = (long *)FUN_01ff6800(param_2);
  uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
  if (plVar10 == (long *)0x0) goto Unity_Burst_Intrinsics_Arm_Neon__vfmas_lane_f32;
  plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))
                              (plVar10,uVar14,*(undefined8 *)(*plVar10 + 0x1e0));
  if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)puVar8)) goto LAB_01fefedc;
  if (plVar9 == plVar10) {
LAB_01fefcfc:
    if (*(long *)(param_1 + 0x30) != 0) {
      return;
    }
    if (plVar9 == (long *)0x0) {
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar9 = (long *)FUN_01ff5160(uVar14);
      uVar14 = *(undefined8 *)puVar4;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar14 = FUN_01780344(uVar14,0);
      if (plVar9 == (long *)0x0) goto Unity_Burst_Intrinsics_Arm_Neon__vfmas_lane_f32;
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                 (plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x1e0));
      if (plVar9 != (long *)0x0) {
        if (*plVar9 != *(long *)puVar8) {
LAB_01feff0c:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar9);
        }
        goto LAB_01fefd7c;
      }
LAB_01fefe64:
      if (*(long *)(param_1 + 0x30) != 0) {
        return;
      }
    }
    else {
LAB_01fefd7c:
      uVar14 = FUN_01ff6858(param_1,plVar9[2]);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar11 = FUN_0178a8c4(uVar14,0,0);
      if ((uVar11 & 1) == 0) goto LAB_01fefe64;
      uVar15 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar9 = (long *)FUN_01780344(uVar15,0);
      if (plVar9 == (long *)0x0) {
Unity_Burst_Intrinsics_Arm_Neon__vfmas_lane_f32:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = (**(code **)(*plVar9 + 0x2c8))(plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x2d0));
      if ((uVar11 & 1) == 0) goto LAB_01fefe64;
      uVar15 = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar9 = (long *)FUN_01feec2c(uVar14,uVar15);
      if (plVar9 != (long *)0x0) {
        lVar12 = *(long *)puVar7;
        bVar1 = *(byte *)(lVar12 + 300);
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar12))
        goto LAB_01fefedc;
        *(long **)(param_1 + 0x30) = plVar9;
        if ((*(byte *)(*plVar9 + 300) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar12))
        goto LAB_01fefedc;
        goto LAB_01fefe64;
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01fedf6c();
    plVar9 = (long *)FUN_01ff5918(uVar14,*(undefined8 *)(param_1 + 0x10));
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      return;
    }
    lVar12 = *(long *)puVar7;
    bVar1 = *(byte *)(lVar12 + 300);
    if ((*(byte *)(*plVar9 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar12)) goto LAB_01fefedc;
    *(long **)(param_1 + 0x30) = plVar9;
    if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_01fefedc;
    lVar13 = *(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8);
  }
  else {
    if (plVar10 == (long *)0x0) goto Unity_Burst_Intrinsics_Arm_Neon__vfmas_lane_f32;
    uVar14 = FUN_01ff6858(param_1,plVar10[2]);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar11 = FUN_0178a8c4(uVar14,0,0);
    if ((uVar11 & 1) == 0) goto LAB_01fefcfc;
    uVar15 = *(undefined8 *)puVar5;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar10 = (long *)FUN_01780344(uVar15,0);
    if (plVar10 == (long *)0x0) goto Unity_Burst_Intrinsics_Arm_Neon__vfmas_lane_f32;
    uVar11 = (**(code **)(*plVar10 + 0x2c8))(plVar10,uVar14,*(undefined8 *)(*plVar10 + 0x2d0));
    if ((uVar11 & 1) == 0) goto LAB_01fefcfc;
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar9 = (long *)FUN_01feec2c(uVar14,uVar15);
    if (plVar9 == (long *)0x0) {
      return;
    }
    lVar12 = *(long *)puVar7;
    if (*(byte *)(*plVar9 + 300) < *(byte *)(lVar12 + 300)) goto LAB_01fefedc;
    lVar13 = *(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar12 + 300) * 8 + -8);
  }
  if (lVar13 == lVar12) {
    return;
  }
LAB_01fefedc:
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


