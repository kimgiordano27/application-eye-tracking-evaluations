/*
FUNCTION_NAME: Fusion.NetworkString<__Il2CppFullySharedGenericStructType>$$op_Equality
ENTRY_POINT: 0213a348
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Fusion_NetworkString<__Il2CppFullySharedGenericStructType>__op_Equality(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long unaff_x20;
  ulong __n;
  void *unaff_x22;
  undefined8 *__dest;
  long unaff_x24;
  void *__s;
  long *plVar4;
  long lVar5;
  long *unaff_x28;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(param_1 + 0xfc);
  uVar3 = __n + 0xf & 0x1fffffff0;
  __dest = (undefined8 *)(&stack0x00000000 + -uVar3);
  __s = (void *)((long)__dest - uVar3);
  memset(__s,0,__n);
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined1 *)(unaff_x29 + -0x1c) = 0;
  plVar4 = (long *)(unaff_x24 + 0x10);
  lVar5 = *plVar4;
  pvVar1 = unaff_x22;
  if (-1 < *(int *)(*(long *)(*unaff_x28 + 0x30) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(__dest,pvVar1,__n);
  if (lVar5 != 0) {
    do {
      puVar2 = __dest;
      if (-1 < *(int *)(*(long *)(*unaff_x28 + 0x30) + 0x28)) {
        puVar2 = (undefined8 *)*__dest;
      }
      uVar3 = FUN_02139a8c(lVar5,puVar2,__s,*(undefined8 *)(*unaff_x28 + 0x38));
      if ((uVar3 & 1) != 0) {
        memcpy(__dest,__s,__n);
        memcpy(*(void **)(unaff_x29 + -0x48),__dest,__n);
        if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      *(long *)(unaff_x29 + -0x18) = unaff_x24;
      *(undefined1 *)(unaff_x29 + -0x1c) = 0;
      *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
      FUN_027e0bd8();
      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = FUN_02139510(*plVar4,*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
      thunk_FUN_01a4b338(0);
      *plVar4 = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar4,lVar5);
      if (*(char *)(unaff_x29 + -0x1c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x18),0);
      }
      lVar5 = *plVar4;
      unaff_x28 = (long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      pvVar1 = unaff_x22;
      if (-1 < *(int *)(*(long *)(*unaff_x28 + 0x30) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x10);
      }
      memcpy(__dest,pvVar1,__n);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


