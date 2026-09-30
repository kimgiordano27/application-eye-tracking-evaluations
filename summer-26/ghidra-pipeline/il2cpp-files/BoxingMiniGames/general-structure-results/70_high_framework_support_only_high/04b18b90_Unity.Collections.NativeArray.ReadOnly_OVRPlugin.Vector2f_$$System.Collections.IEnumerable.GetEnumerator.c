/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04b18b90
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long lVar7;
  size_t unaff_x23;
  void *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  
  plVar2 = (long *)thunk_FUN_036a1ed0(param_2,*(long *)(param_1 + 0x80) + 0xc0);
  if (*plVar2 == 0) {
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *unaff_x20;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
      (**(code **)(*(long *)(lVar5 + 0xa30) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0xa30) + 8));
      uVar4 = FUN_03642bb8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20));
      if ((uVar4 & 1) == 0) {
        plVar2 = (long *)**(undefined8 **)(*(long *)(PTR_DAT_079f4610 + 0x90) + 0xb8);
      }
      else {
        lVar5 = *unaff_x20;
        *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
        (**(code **)(*(long *)(lVar5 + 0xa30) + 0x10))
                  (*(undefined8 *)(*(long *)(lVar5 + 0xa30) + 8));
        memcpy(unaff_x24,unaff_x21,unaff_x23);
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar5 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_0367c9fc();
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        FUN_036436fc(lVar5,*(undefined8 *)(lVar7 + 0x30));
        uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
        if (*(int *)(*(long *)PTR_DAT_07a00bc8 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        plVar2 = (long *)FUN_0736c2bc(uVar3,0);
      }
LAB_04b18d10:
      if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_04b18d50;
    }
  }
  else {
    plVar2 = (long *)thunk_FUN_036a1ed0();
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *unaff_x20;
      lVar7 = *plVar2;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
      plVar2 = (long *)(**(code **)(*(long *)(lVar5 + 0xa30) + 0x10))
                                 (*(undefined8 *)(*(long *)(lVar5 + 0xa30) + 8));
      if (lVar7 != 0) {
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        puVar1 = *(undefined8 **)(lVar5 + 0x28);
        uVar3 = *puVar1;
        if (-1 < *(int *)(*(long *)(lVar5 + 0x20) + 0x28)) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        pcVar6 = (code *)puVar1[2];
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
        (*pcVar6)(uVar3,puVar1,lVar7,unaff_x29 + -0x18,unaff_x29 + -0x10);
        plVar2 = *(long **)(unaff_x29 + -0x10);
        goto LAB_04b18d10;
      }
    }
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_04b18d50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2);
}


