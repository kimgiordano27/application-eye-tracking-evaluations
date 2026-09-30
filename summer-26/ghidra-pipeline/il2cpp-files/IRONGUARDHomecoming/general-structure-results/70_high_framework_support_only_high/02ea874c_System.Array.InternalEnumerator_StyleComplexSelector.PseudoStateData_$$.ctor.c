/*
FUNCTION_NAME: System.Array.InternalEnumerator<StyleComplexSelector.PseudoStateData>$$.ctor
ENTRY_POINT: 02ea874c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea8a9c) */
/* WARNING: Removing unreachable block (ram,0x02ea8b4c) */

void System_Array_InternalEnumerator<StyleComplexSelector_PseudoStateData>___ctor(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  undefined4 unaff_w25;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  puVar2 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  uVar4 = FUN_01f08890(*(undefined8 *)
                        Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__,
                       unaff_w25);
  lVar5 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_039dcb58(lVar5,uVar4,unaff_w25,0);
  uVar4 = FUN_01f08890(*(undefined8 *)puVar2,unaff_w25);
  lVar6 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_039dcb58(lVar6,uVar4,unaff_w25,0);
  if (unaff_x23 != (long *)0x0) {
    lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *unaff_x23;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02ea88c0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_02ea88c0:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar8 = (long *)(*(code *)*puVar7)();
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto 
            System_Array_InternalEnumerator<StylePropertyAnimationSystem_ElementPropertyPair>__MoveNext
            ;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
System_Array_InternalEnumerator<StylePropertyAnimationSystem_ElementPropertyPair>__MoveNext:
      uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_02ea8a90;
        lVar6 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 == 0) goto LAB_02ea8a68;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_02ea8a50;
      }
      lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02ea89a8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,lVar10,0);
LAB_02ea89a8:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
      *(undefined4 *)(unaff_x29 + -0xc) = 0;
      uVar12 = System_Array_InternalEnumerator<StyleSheet_ImportStruct>__System_Collections_IEnumerator_Reset
                         ();
      iVar1 = *(int *)(unaff_x29 + -0xc);
      if ((uVar12 & 1) == 0) {
        if (iVar1 < (int)unaff_x21) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar6,iVar1,0);
          if ((uVar12 & 1) == 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_039dcb94(lVar5,iVar1,0);
          }
        }
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_039dcb94(lVar6,iVar1,0);
      }
    } while( true );
  }
LAB_02ea8b38:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_02ea8a50:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02ea8a84;
    }
  }
LAB_02ea8a68:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_02ea8a84:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_02ea8a90:
  if (0 < (int)unaff_x21) {
    if (lVar5 == 0) goto LAB_02ea8b38;
    uVar12 = 0;
    do {
      uVar9 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32(lVar5,uVar12 & 0xffffffff,0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02ea8b38;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        FUN_02ea4f4c();
      }
      uVar12 = uVar12 + 1;
    } while (unaff_x21 != uVar12);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


