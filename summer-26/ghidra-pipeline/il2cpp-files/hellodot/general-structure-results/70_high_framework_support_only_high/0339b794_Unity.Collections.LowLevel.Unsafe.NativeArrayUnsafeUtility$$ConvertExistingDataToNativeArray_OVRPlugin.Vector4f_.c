/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4f>
ENTRY_POINT: 0339b794
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4f>
              (code *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *__s;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  size_t __n;
  size_t __n_00;
  long *plVar5;
  long *unaff_x19;
  size_t unaff_x21;
  int unaff_w22;
  int iVar6;
  void *unaff_x23;
  int iVar7;
  void *unaff_x24;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  (*param_1)(param_2,param_3,0,unaff_x29 + -0x30);
  __n = *(size_t *)(unaff_x29 + -0x90);
  memcpy(unaff_x24,unaff_x26,__n);
  plVar5 = (long *)*unaff_x19;
  lVar1 = *plVar5;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02ce0978();
    plVar5 = (long *)*unaff_x19;
  }
  lVar3 = plVar5[4];
  *(void **)(unaff_x29 + -0x30) = unaff_x24;
  *(void **)(unaff_x29 + -0x28) = unaff_x28;
  FUN_02ce855c(lVar1,lVar3,*(undefined8 *)(unaff_x29 + -0xa8),*(undefined8 *)(unaff_x29 + -0x60),
               unaff_x29 + -0x30);
  memcpy(*(void **)(unaff_x29 + -0x58),unaff_x28,unaff_x21);
  __s = *(void **)(unaff_x29 + -0x40);
  iVar7 = unaff_w22 + -1;
  iVar6 = *(int *)(unaff_x29 + -0x9c) + 1;
  __n_00 = __n;
  while( true ) {
    memset(__s,0,__n_00);
    memset(*(void **)(unaff_x29 + -0x50),0,unaff_x21);
    do {
      iVar7 = iVar7 + 1;
      puVar4 = *(undefined8 **)(*unaff_x19 + 8);
      uVar2 = *puVar4;
      *(int *)(unaff_x29 + -0x14) = iVar7;
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x38);
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
      *(void **)(unaff_x29 + -0x20) = unaff_x26;
      (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0x30);
      memcpy(*(void **)(unaff_x29 + -0x40),unaff_x26,__n);
      plVar5 = (long *)*unaff_x19;
      lVar1 = *plVar5;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02ce0978();
        plVar5 = (long *)*unaff_x19;
      }
      lVar3 = plVar5[4];
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x40);
      *(void **)(unaff_x29 + -0x28) = unaff_x28;
      FUN_02ce855c(lVar1,lVar3,*(undefined8 *)(unaff_x29 + -0x68),*(undefined8 *)(unaff_x29 + -0x60)
                   ,unaff_x29 + -0x30);
      memcpy(*(void **)(unaff_x29 + -0x50),unaff_x28,unaff_x21);
      memcpy(unaff_x27,*(void **)(unaff_x29 + -0x58),unaff_x21);
      lVar3 = *unaff_x19;
      lVar1 = *(long *)(lVar3 + 0x30);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02ce0978();
        lVar3 = *unaff_x19;
      }
      uVar2 = *(undefined8 *)(lVar3 + 0x40);
      *(void **)(unaff_x29 + -0x30) = unaff_x27;
      FUN_02ce855c(lVar1,uVar2,*(undefined8 *)(unaff_x29 + -0x70),*(undefined8 *)(unaff_x29 + -0x50)
                   ,unaff_x29 + -0x30,unaff_x29 + -0x14);
    } while (*(int *)(unaff_x29 + -0x14) < 0);
    memset(*(void **)(unaff_x29 + -0x48),0,__n);
    memset(unaff_x23,0,unaff_x21);
    do {
      iVar6 = iVar6 + -1;
      puVar4 = *(undefined8 **)(*unaff_x19 + 8);
      uVar2 = *puVar4;
      *(int *)(unaff_x29 + -0x14) = iVar6;
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x38);
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
      *(void **)(unaff_x29 + -0x20) = unaff_x26;
      (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0x30);
      memcpy(*(void **)(unaff_x29 + -0x48),unaff_x26,__n);
      plVar5 = (long *)*unaff_x19;
      lVar1 = *plVar5;
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02ce0978();
        plVar5 = (long *)*unaff_x19;
      }
      lVar3 = plVar5[4];
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x48);
      *(void **)(unaff_x29 + -0x28) = unaff_x28;
      FUN_02ce855c(lVar1,lVar3,*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x60)
                   ,unaff_x29 + -0x30);
      memcpy(unaff_x23,unaff_x28,unaff_x21);
      memcpy(unaff_x27,*(void **)(unaff_x29 + -0x58),unaff_x21);
      lVar3 = *unaff_x19;
      lVar1 = *(long *)(lVar3 + 0x30);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02ce0978();
        lVar3 = *unaff_x19;
      }
      uVar2 = *(undefined8 *)(lVar3 + 0x40);
      *(void **)(unaff_x29 + -0x30) = unaff_x27;
      FUN_02ce855c(lVar1,uVar2,*(undefined8 *)(unaff_x29 + -0x80));
    } while (0 < *(int *)(unaff_x29 + -0x14));
    if (iVar6 <= iVar7) break;
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x40),__n);
    puVar4 = *(undefined8 **)(*unaff_x19 + 0x48);
    uVar2 = *puVar4;
    *(int *)(unaff_x29 + -0x14) = iVar6;
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x38);
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
    *(void **)(unaff_x29 + -0x20) = unaff_x26;
    (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0x30);
    memcpy(*(void **)(unaff_x29 + -0x88),*(void **)(unaff_x29 + -0x48),__n);
    puVar4 = *(undefined8 **)(*unaff_x19 + 0x48);
    uVar2 = *puVar4;
    *(int *)(unaff_x29 + -0x14) = iVar7;
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x38);
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x88);
    (*(code *)puVar4[2])(uVar2,puVar4,0,unaff_x29 + -0x30);
    __s = *(void **)(unaff_x29 + -0x40);
    __n_00 = *(size_t *)(unaff_x29 + -0x90);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x98) + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


