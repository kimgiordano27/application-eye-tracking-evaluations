/*
FUNCTION_NAME: System.Collections.Generic.LowLevelDictionary.DefaultComparer<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$GetHashCode
ENTRY_POINT: 0297cd18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0297cfcc) */

void System_Collections_Generic_LowLevelDictionary_DefaultComparer<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__GetHashCode
               (long param_1,undefined8 param_2)

{
  void *pvVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  pvVar1 = (void *)thunk_FUN_01ee7388(param_2,param_1 + 0x260);
  memcpy(unaff_x20,pvVar1,unaff_x22);
  memcpy(unaff_x24,unaff_x20,unaff_x22);
  FUN_0422b27c();
  plVar2 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28)
                   )();
  memcpy(unaff_x23,unaff_x24,unaff_x22);
  pvVar1 = (void *)thunk_FUN_01ee7388();
  memcpy(unaff_x25,pvVar1,unaff_x22);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar4 = unaff_x23;
  if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10) + 0x28)) {
    unaff_x25 = (undefined8 *)*unaff_x25;
    puVar4 = (undefined8 *)*unaff_x23;
  }
  lVar6 = *plVar2;
  *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
  lVar6 = *(long *)(lVar6 + 0x1c0);
  (**(code **)(lVar6 + 0x10))
            (*(undefined8 *)(lVar6 + 8),lVar6,plVar2,unaff_x29 + -0x20,unaff_x29 + -0x10);
  if (*(char *)(unaff_x29 + -0x10) == '\0') {
    memcpy(unaff_x20,unaff_x24,unaff_x22);
    pvVar1 = (void *)thunk_FUN_01ee7388();
    memcpy(unaff_x23,pvVar1,unaff_x22);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar5 = *(undefined8 **)(lVar6 + 0x50);
    uVar3 = *puVar5;
    puVar4 = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
      unaff_x23 = (undefined8 *)*unaff_x23;
      puVar4 = (undefined8 *)*unaff_x20;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x23;
    (*(code *)puVar5[2])(uVar3,puVar5,0,unaff_x29 + -0x20,unaff_x29 + -0x10);
    plVar2 = *(long **)(unaff_x29 + -0x10);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar2);
    pvVar1 = (void *)thunk_FUN_01ee7388();
    memcpy(unaff_x20,pvVar1,unaff_x22);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    lVar6 = *unaff_x19;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x20;
    (**(code **)(*(long *)(lVar6 + 0x840) + 0x10))(*(undefined8 *)(*(long *)(lVar6 + 0x840) + 8));
    (**(code **)(*unaff_x19 + 0x198))();
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0297cf84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0297cf84:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


