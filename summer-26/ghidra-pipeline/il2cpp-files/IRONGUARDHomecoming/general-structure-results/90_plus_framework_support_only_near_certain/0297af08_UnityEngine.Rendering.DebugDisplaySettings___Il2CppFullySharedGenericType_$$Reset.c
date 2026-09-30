/*
FUNCTION_NAME: UnityEngine.Rendering.DebugDisplaySettings<__Il2CppFullySharedGenericType>$$Reset
ENTRY_POINT: 0297af08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0297b1e4) */

void UnityEngine_Rendering_DebugDisplaySettings<__Il2CppFullySharedGenericType>__Reset
               (void *param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  long lVar9;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  pvVar1 = unaff_x24;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0xc0) + 0x10) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(param_1,pvVar1,param_3);
  if (unaff_x28 == (long *)0x0) {
LAB_0297b1dc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar3 = unaff_x25;
  puVar4 = unaff_x26;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0xc0) + 0x10) + 0x28)) {
    puVar3 = (undefined8 *)*unaff_x25;
    puVar4 = (undefined8 *)*unaff_x26;
  }
  lVar6 = *unaff_x28;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
  (**(code **)(*(long *)(lVar6 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0x10) == '\0') {
    if (unaff_x19 == (long *)0x0) goto LAB_0297b1dc;
    lVar6 = FUN_04224ea4();
    lVar9 = *(long *)(unaff_x20 + 0x20);
    if (lVar6 == 0) {
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x28)) {
        unaff_x24 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x25,unaff_x24,unaff_x23);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x28)) {
        unaff_x25 = (undefined8 *)*unaff_x25;
      }
      lVar6 = *unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x25;
      (**(code **)(*(long *)(lVar6 + 0x840) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0x840) + 8));
    }
    else {
      pvVar1 = (void *)thunk_FUN_01ee7388();
      memcpy(unaff_x25,pvVar1,unaff_x23);
      memcpy(unaff_x27,unaff_x25,unaff_x23);
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
        unaff_x24 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x26,unaff_x24,unaff_x23);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
        unaff_x26 = (undefined8 *)*unaff_x26;
      }
      lVar6 = *unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
      (**(code **)(*(long *)(lVar6 + 0x840) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0x840) + 8));
      puVar3 = *(undefined8 **)(unaff_x29 + -0x38);
      memcpy(puVar3,unaff_x27,unaff_x23);
      pvVar1 = (void *)thunk_FUN_01ee7388();
      memcpy(unaff_x22,pvVar1,unaff_x23);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar4 = *(undefined8 **)(lVar6 + 0x50);
      uVar2 = *puVar4;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
        puVar3 = (undefined8 *)*puVar3;
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0x20,unaff_x29 + -0x10);
      plVar8 = *(long **)(unaff_x29 + -0x10);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar8);
      (**(code **)(*unaff_x19 + 0x198))();
      lVar6 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0297b198;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar8,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0297b198:
      (*(code *)*puVar3)(plVar8,puVar3[1]);
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


