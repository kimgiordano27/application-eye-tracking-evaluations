/*
FUNCTION_NAME: FUN_05d7c340
ENTRY_POINT: 05d7c340
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d7c340(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_06bc3a27 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_PanelEventHandler_OnElementBlur__);
    FUN_02f08768(Method_OVRTask_SetResult<bool>__);
    FUN_02f08768(Method_UnityEngine_UIElements_PanelEventHandler_OnPanelDestroyed__);
    DAT_06bc3a27 = 1;
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_05d7c72c;
  uVar6 = FUN_05d6d398();
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_05d7c72c;
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar4 = FUN_05d6d540();
    FUN_05cb5c84(uVar8,uVar4,2,0);
    if (*(long *)(param_2 + 0x20) == 0) goto LAB_05d7c72c;
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = FUN_05d6d5d0();
    if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9e50);
    }
    FUN_05cb163c(uVar8,*(undefined8 *)
                        Method_UnityEngine_UIElements_PanelEventHandler_OnPanelDestroyed__,uVar5 & 1
                 ,0);
  }
  puVar3 = Method_UnityEngine_UIElements_PanelEventHandler_OnElementBlur__;
  lVar9 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)Method_UnityEngine_UIElements_PanelEventHandler_OnElementBlur__;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar3;
  }
  uVar4 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar8 = FUN_05c9cd38(param_5,0);
  if (lVar9 != 0) {
    UnityEngine_TextCore_Text_SpriteAsset__get_height(lVar9,uVar4,uVar8,0);
    puVar1 = Method_OVRTask_SetResult<bool>__;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_05d7c72c;
    fVar10 = (float)*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
    thunk_FUN_060bfdac(fVar10,fVar10,0,0,*(long *)(param_2 + 0x10),
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4),0);
    lVar7 = *(long *)(param_2 + 0x10);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (lVar7 == 0) goto LAB_05d7c72c;
    uVar12 = *(undefined4 *)(param_2 + 0x30);
    uVar13 = *(undefined4 *)(param_2 + 0x34);
    uVar4 = *(undefined4 *)(param_2 + 0x2c);
    thunk_FUN_060bfdac(*(undefined4 *)(param_2 + 0x28),uVar4,uVar12,uVar13,lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xe0),0);
    puVar2 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    puVar1 = PTR_DAT_067c97a8;
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_05d7c72c;
    thunk_FUN_060bfb94(*(long *)(param_2 + 0x10),**(undefined4 **)(*(long *)puVar3 + 0xb8),
                       *(undefined4 *)(param_2 + 0x18),0);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_05db08b4(param_3,param_4,uVar8,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&local_d0,2,0);
    local_80 = local_b0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x1a0), lVar7 == 0)) goto LAB_05d7c72c;
    uVar6 = FUN_05c35d3c(lVar7,0);
    if ((uVar6 & 1) != 0) {
      if ((*(long *)(param_2 + 0x20) == 0) ||
         (lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x1a0), lVar7 == 0)) goto LAB_05d7c72c;
      uStack_98 = *(undefined8 *)(lVar7 + 0x48);
      local_a0 = *(undefined8 *)(lVar7 + 0x40);
      uStack_88 = *(undefined8 *)(lVar7 + 0x58);
      uStack_90 = *(undefined8 *)(lVar7 + 0x50);
      local_80 = *(undefined8 *)(lVar7 + 0x60);
    }
    if (param_4 == 0) goto LAB_05d7c72c;
    uStack_c8 = *(undefined8 *)(param_4 + 0x30);
    local_d0 = *(undefined8 *)(param_4 + 0x28);
    uStack_b8 = *(undefined8 *)(param_4 + 0x40);
    uStack_c0 = *(undefined8 *)(param_4 + 0x38);
    local_b0 = *(undefined8 *)(param_4 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uStack_f8 = uStack_c8;
    local_100 = local_d0;
    uStack_e8 = uStack_b8;
    uStack_f0 = uStack_c0;
    local_e0 = local_b0;
    uStack_128 = uStack_98;
    local_130 = local_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    local_110 = local_80;
    uVar6 = FUN_0610d5f4(&local_100,&local_130,0);
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_2 + 0x20) == 0) goto LAB_05d7c72c;
      uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xf0);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_060f078c(uVar8,0,0);
      if ((uVar6 & 1) == 0) goto LAB_05d7c6c4;
    }
    lVar7 = *(long *)(param_2 + 0x20);
    if ((lVar7 != 0) && (param_1 != 0)) {
      FUN_05c41104(*(undefined4 *)(lVar7 + 300),*(undefined4 *)(lVar7 + 0x130),
                   *(undefined4 *)(lVar7 + 0x134),*(undefined4 *)(lVar7 + 0x138),param_1,0);
LAB_05d7c6c4:
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05caa8c8(uVar11,uVar4,uVar12,uVar13,param_1,param_3,uVar8,1,0);
      return;
    }
  }
LAB_05d7c72c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


