/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04648ca8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04648f20) */

void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *plVar7;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x04648ca8:
  puVar4 = (undefined8 *)(param_1 + 0x138);
  while (uVar2 = (*(code *)*puVar4)(), (uVar2 & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
    }
    lVar5 = *unaff_x24;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_04648d30;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    lVar3 = FUN_0377596c();
LAB_04648d30:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_w27 == 0) {
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      FUN_0373b540();
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      puVar4 = (undefined8 *)thunk_FUN_03799158();
      plVar7 = (long *)*puVar4;
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar1 = unaff_w27 - 1;
      if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20),
             unaff_x22,unaff_x21);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03775678();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03775678();
      }
      if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      FUN_0373b4c8(lVar3,(long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20)
      ;
    }
    unaff_w27 = unaff_w27 + 1;
    param_1 = *unaff_x24;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          param_1 = param_1 + (long)*piVar6 * 0x10;
          goto code_r0x04648ca8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
  }
  if (unaff_x24 != (long *)0x0) {
    lVar3 = *unaff_x24;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04648ec8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_04648ec8:
    (*(code *)*puVar4)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


