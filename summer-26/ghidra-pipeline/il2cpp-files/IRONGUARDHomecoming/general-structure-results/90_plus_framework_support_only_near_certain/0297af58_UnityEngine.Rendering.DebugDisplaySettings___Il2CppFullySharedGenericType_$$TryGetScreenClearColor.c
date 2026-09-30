/*
FUNCTION_NAME: UnityEngine.Rendering.DebugDisplaySettings<__Il2CppFullySharedGenericType>$$TryGetScreenClearColor
ENTRY_POINT: 0297af58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0297b1e4) */

void UnityEngine_Rendering_DebugDisplaySettings<__Il2CppFullySharedGenericType>__TryGetScreenClearColor
               (void)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  (**(code **)(*(long *)(in_x10 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(in_x10 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0x10) == '\0') {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = FUN_04224ea4();
    lVar8 = *(long *)(unaff_x20 + 0x20);
    if (lVar1 == 0) {
      if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x28)) {
        unaff_x24 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x25,unaff_x24,unaff_x23);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x28)) {
        unaff_x25 = (undefined8 *)*unaff_x25;
      }
      lVar1 = *unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x25;
      (**(code **)(*(long *)(lVar1 + 0x840) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 0x840) + 8));
    }
    else {
      pvVar2 = (void *)thunk_FUN_01ee7388();
      memcpy(unaff_x25,pvVar2,unaff_x23);
      memcpy(unaff_x27,unaff_x25,unaff_x23);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
        unaff_x24 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x26,unaff_x24,unaff_x23);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x10) + 0x28)) {
        unaff_x26 = (undefined8 *)*unaff_x26;
      }
      lVar1 = *unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
      (**(code **)(*(long *)(lVar1 + 0x840) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 0x840) + 8));
      puVar9 = *(undefined8 **)(unaff_x29 + -0x38);
      memcpy(puVar9,unaff_x27,unaff_x23);
      pvVar2 = (void *)thunk_FUN_01ee7388();
      memcpy(unaff_x22,pvVar2,unaff_x23);
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar4 = *(undefined8 **)(lVar1 + 0x50);
      uVar3 = *puVar4;
      if (-1 < *(int *)(*(long *)(lVar1 + 0x10) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar9;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      (*(code *)puVar4[2])(uVar3,puVar4,0,unaff_x29 + -0x20,unaff_x29 + -0x10);
      plVar7 = *(long **)(unaff_x29 + -0x10);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar7);
      (**(code **)(*unaff_x19 + 0x198))();
      lVar1 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0297b198;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0297b198:
      (*(code *)*puVar9)(plVar7,puVar9[1]);
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


