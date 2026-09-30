/*
FUNCTION_NAME: FUN_05dffeac
ENTRY_POINT: 05dffeac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dffeac(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7,long param_8,long param_9)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 05dffedc to 05efff07 has its CatchHandler @ 05e00058 */
  if ((DAT_06bc3ddc & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__);
    DAT_06bc3ddc = 1;
  }
  if (param_9 != 0) {
    uVar4 = FUN_05d6d2bc(param_9,0);
    if (*(long *)(param_9 + 0x1a0) != 0) {
      uVar6 = FUN_05c35d3c(*(long *)(param_9 + 0x1a0),0);
      if ((uVar6 & 1) == 0) {
        uVar4 = uVar4 ^ 1;
      }
      else {
        if (param_8 == 0) goto LAB_05e00178;
        param_3 = 0;
        uStack_b8 = *(undefined8 *)(param_8 + 0x30);
        local_c0 = *(undefined8 *)(param_8 + 0x28);
        uStack_a8 = *(undefined8 *)(param_8 + 0x40);
        uStack_b0 = *(undefined8 *)(param_8 + 0x38);
        local_a0 = *(undefined8 *)(param_8 + 0x48);
        local_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        FUN_0610ceb0(&local_90,&local_c0,0,0xffffffff,0xffffffff,0);
        lVar7 = *(long *)(param_9 + 0x1a0);
        if (lVar7 == 0) goto LAB_05e00178;
        uStack_118 = *(undefined8 *)(lVar7 + 0x48);
        local_120 = *(undefined8 *)(lVar7 + 0x40);
        uStack_108 = *(undefined8 *)(lVar7 + 0x58);
        uStack_110 = *(undefined8 *)(lVar7 + 0x50);
        local_100 = *(undefined8 *)(lVar7 + 0x60);
        local_d0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        FUN_0610ceb0(&local_f0,&local_120,0,0xffffffff,0xffffffff,0);
        if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack_148 = uStack_88;
        local_150 = local_90;
        uStack_138 = uStack_78;
        uStack_140 = uStack_80;
        local_130 = local_70;
        uStack_178 = uStack_e8;
        local_180 = local_f0;
        uStack_168 = uStack_d8;
        uStack_170 = uStack_e0;
        local_160 = local_d0;
        uVar9 = uStack_e0;
        uVar4 = FUN_0610d5f4(&local_150,&local_180,0);
        param_2 = (undefined4)uVar9;
      }
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_05db08b4(param_7,param_8,param_9,0);
      if ((uVar4 & 1) == 0) {
        if (param_5 == 0) goto LAB_05e00178;
      }
      else {
        if (param_5 == 0) goto LAB_05e00178;
        FUN_05c41104(*(undefined4 *)(param_9 + 300),*(undefined4 *)(param_9 + 0x130),
                     *(undefined4 *)(param_9 + 0x134),*(undefined4 *)(param_9 + 0x138),param_5,0);
      }
      FUN_05c41570(param_5,0,0);
      puVar3 = Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__;
      if (param_6 != 0) {
        uVar9 = *(undefined8 *)(param_6 + 0x48);
        cVar2 = *(char *)(param_6 + 0x45);
        if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05cb163c(uVar9,*(undefined8 *)puVar3,cVar2 != '\0',0);
        puVar3 = 
        Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
        ;
        if (param_7 != 0) {
          if ((*(long *)(param_7 + 0x18) == 0) ||
             (iVar5 = FUN_060cbf28(*(long *)(param_7 + 0x18),0), iVar5 != 1)) {
            puVar8 = (undefined4 *)(param_6 + 0x50);
          }
          else {
            puVar8 = (undefined4 *)(param_6 + 0x54);
          }
          uVar1 = *puVar8;
          uVar9 = *(undefined8 *)(param_6 + 0x48);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05caa8c8(uVar10,param_2,param_3,param_4,param_5,param_7,uVar9,uVar1,0);
          return;
        }
      }
    }
  }
LAB_05e00178:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


