/*
FUNCTION_NAME: System.Array.InternalEnumerator<JointRotationActiveState.JointRotationFeatureState>$$get_Current
ENTRY_POINT: 02ea06c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02ea09a8) */

long System_Array_InternalEnumerator<JointRotationActiveState_JointRotationFeatureState>__get_Current
               (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong in_x9;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  undefined8 unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_01ecaf44(param_1);
  }
  lVar4 = thunk_FUN_01f117cc(param_1);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10))();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(unaff_x29 + -0x28) = unaff_x23;
  plVar5 = (long *)FUN_033b0fc8();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02ea0760;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,0);
LAB_02ea0760:
    uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar12 & 1) == 0) {
      lVar9 = *(long *)(unaff_x29 + -0x28);
      plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar5 == (long *)0x0) goto LAB_02ea0938;
      lVar11 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_02ea0910;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar5;
    lVar9 = *(long *)puVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02ea07c0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar9,1);
LAB_02ea07c0:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
      memset(unaff_x24,0,unaff_x22);
      memcpy(unaff_x27,unaff_x24,unaff_x22);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = *(byte *)(*(long *)Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__
                     + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar7);
    }
    memset(unaff_x24,0,unaff_x22);
    memcpy(unaff_x27,unaff_x24,unaff_x22);
    lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar6 = unaff_x27;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x18) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x27;
    }
    lVar9 = thunk_FUN_01ec485c(*(undefined8 *)
                                (*plVar7 + (ulong)*(ushort *)(*(long *)(lVar9 + 0x20) + 0x50) * 0x10
                                + 0x140));
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar7,unaff_x29 + -0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar6 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x18) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x25;
    }
    puVar10 = *(undefined8 **)(lVar9 + 0x28);
    uVar8 = *puVar10;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    (*(code *)puVar10[2])(uVar8,puVar10,lVar4,unaff_x29 + -0x20,unaff_x29 + -0xc);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02ea092c;
    }
  }
LAB_02ea0910:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02ea092c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_02ea0938:
  if (*(long *)(lVar9 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


