/*
FUNCTION_NAME: System.Array.InternalEnumerator<JointVelocityActiveState.JointVelocityFeatureState>$$.ctor
ENTRY_POINT: 02ea0818
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ea09a8) */

void System_Array_InternalEnumerator<JointVelocityActiveState_JointVelocityFeatureState>___ctor
               (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  undefined8 *puVar10;
  void *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    memcpy(unaff_x27,unaff_x24,unaff_x22);
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar10 = unaff_x27;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x28)) {
      puVar10 = (undefined8 *)*unaff_x27;
    }
    lVar6 = thunk_FUN_01ec485c(*(undefined8 *)
                                (*unaff_x26 +
                                 (ulong)*(ushort *)(*(long *)(lVar6 + 0x20) + 0x50) * 0x10 + 0x140))
    ;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
    (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,unaff_x26,unaff_x29 + -0x20);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar10 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x28)) {
      puVar10 = (undefined8 *)*unaff_x25;
    }
    puVar5 = *(undefined8 **)(lVar6 + 0x28);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
    (*(code *)puVar5[2])(uVar3);
    lVar6 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar10 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02ea0760;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_02ea0760:
    uVar8 = (*(code *)*puVar10)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar8 & 1) == 0) {
      lVar6 = *(long *)(unaff_x29 + -0x28);
      plVar4 = (long *)thunk_FUN_01f116d0();
      if (plVar4 == (long *)0x0) goto LAB_02ea0938;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_02ea0910;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar10 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_02ea07c0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_02ea07c0:
    unaff_x26 = (long *)(*(code *)*puVar10)();
    if (unaff_x26 == (long *)0x0) {
      memset(unaff_x24,0,unaff_x22);
      memcpy(unaff_x27,unaff_x24,unaff_x22);
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = *(byte *)(*(long *)Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__
                     + 0x130);
    if ((*(byte *)(*unaff_x26 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_Unity_VisualScripting_Dependencies_NCalc_Expression_Compile__)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(unaff_x26);
    }
    memset(unaff_x24,0,unaff_x22);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02ea092c;
    }
  }
LAB_02ea0910:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_02ea092c:
  (*(code *)*puVar10)(plVar4,puVar10[1]);
LAB_02ea0938:
  if (*(long *)(lVar6 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


