/*
FUNCTION_NAME: UnityEngine.Rendering.CoreUnsafeUtils.DefaultKeyGetter<Hash128>$$Get
ENTRY_POINT: 0297cdcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0297cfcc) */

void UnityEngine_Rendering_CoreUnsafeUtils_DefaultKeyGetter<Hash128>__Get(void)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  long *plVar8;
  void *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  lVar5 = *unaff_x26;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x25;
  (**(code **)(*(long *)(lVar5 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0x10) == '\0') {
    memcpy(unaff_x20,unaff_x24,unaff_x22);
    pvVar1 = (void *)thunk_FUN_01ee7388();
    memcpy(unaff_x23,pvVar1,unaff_x22);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar4 = *(undefined8 **)(lVar5 + 0x50);
    uVar2 = *puVar4;
    puVar3 = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
      unaff_x23 = (undefined8 *)*unaff_x23;
      puVar3 = (undefined8 *)*unaff_x20;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
    (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0x20,unaff_x29 + -0x10);
    plVar8 = *(long **)(unaff_x29 + -0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar8);
    pvVar1 = (void *)thunk_FUN_01ee7388();
    memcpy(unaff_x20,pvVar1,unaff_x22);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    lVar5 = *unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x20;
    (**(code **)(*(long *)(lVar5 + 0x840) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x840) + 8));
    (**(code **)(*unaff_x19 + 0x198))();
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0297cf84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0297cf84:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


