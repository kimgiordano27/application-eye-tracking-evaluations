/*
FUNCTION_NAME: FUN_05dccb78
ENTRY_POINT: 05dccb78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dccb78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7,byte param_8)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  byte local_138 [4];
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined1 local_124;
  undefined2 local_123;
  undefined1 local_121;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
                    /* catch() { ... } // from try @ 05dccb70 with catch @ 05dccb8c */
                    /* try { // try from 05dccb90 to 05eccb97 has its CatchHandler @ 05dccba0 */
                    /* try { // try from 05dccb98 to 05eccba3 has its CatchHandler @ 05dcc994 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05dccb90 with catch @ 05dccba0
                        */
  if ((DAT_06bc3c41 & 1) == 0) {
    FUN_02f08768(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraphDebugParams_<GetWidgetList>b__14_1__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraphDebugParams_<GetWidgetList>b__14_10__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraphDebugParams_<GetWidgetList>b__14_11__
                );
    DAT_06bc3c41 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if ((*(long *)(param_5 + 0x138) != 0) &&
     (lVar3 = FUN_05d4c208(*(long *)(param_5 + 0x138),
                           *(undefined8 *)
                            Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__),
     puVar2 = Method_System_Data_NewDiffgramGen_GenerateColumn__, param_7 != 0)) {
    local_70 = *(undefined4 *)(param_7 + 0x128);
    uStack_98 = *(undefined8 *)(param_7 + 0x100);
    local_a0 = *(undefined8 *)(param_7 + 0xf8);
    uStack_88 = *(ulong *)(param_7 + 0x110);
    local_90 = *(undefined8 *)(param_7 + 0x108);
    uStack_78 = *(undefined8 *)(param_7 + 0x120);
    local_80 = *(undefined8 *)(param_7 + 0x118);
    FUN_060d7044(&local_a0,0,0);
    FUN_060d7060(&local_a0,0,0);
    uStack_88 = uStack_88 & 0xffffffff;
    if ((*(char *)(param_7 + 0x1e0) == '\0') || (*(int *)(param_7 + 0xe8) != 0)) {
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_05dcceac:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        FUN_05daf224(0,lVar4 + 0x20,&local_a0,1,1,1,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraphDebugParams_<GetWidgetList>b__14_11__
                     ,0);
        lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar4 != 0) {
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_05dcceac;
          FUN_05daf224(0,lVar4 + 0x28,&local_a0,1,1,1,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraphDebugParams_<GetWidgetList>b__14_10__
                       ,0);
          if (*(int *)(param_7 + 0xe8) == 0) {
            lVar4 = *(long *)puVar2;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar4 = *(long *)puVar2;
            }
            *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x18) = 0;
          }
          uVar1 = *(undefined1 *)(param_7 + 0x1e0);
          uVar5 = FUN_05dcb7f8();
          if (param_6 != 0) {
            local_138[0] = param_8 & 1;
            local_138[1] = 0;
            local_138[2] = 0;
            local_138[3] = 0;
            local_123 = 0;
            local_121 = 0;
            local_134 = param_1;
            uStack_130 = param_2;
            local_12c = param_3;
            uStack_128 = param_4;
            local_124 = uVar1;
            auVar6 = FUN_05cc63e4(param_6,uVar5,local_138,0);
            if (lVar3 != 0) {
              FUN_05d6e034(lVar3,auVar6._0_8_,auVar6._8_8_,0);
              goto LAB_05dcce84;
            }
          }
        }
      }
    }
    else {
      uStack_d8 = uStack_98;
      local_e0 = local_a0;
      uStack_c8 = uStack_88;
      uStack_d0 = local_90;
      uStack_b8 = uStack_78;
      local_c0 = local_80;
      local_b0 = local_70;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uStack_118 = uStack_d8;
      local_120 = local_e0;
      uStack_108 = uStack_c8;
      uStack_110 = uStack_d0;
      uStack_f8 = uStack_b8;
      local_100 = local_c0;
      local_f0 = local_b0;
      auVar6 = FUN_05dcba88(param_1,param_2,param_3,param_4,param_6,&local_120,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_RenderGraphModule_RenderGraphDebugParams_<GetWidgetList>b__14_1__
                            ,param_8 & 1,1,1,1);
      if (lVar3 != 0) {
        FUN_05d6e034(lVar3,auVar6._0_8_,auVar6._8_8_,0);
        *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = 0xffffffff;
LAB_05dcce84:
        *(undefined4 *)(lVar3 + 0x14) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


