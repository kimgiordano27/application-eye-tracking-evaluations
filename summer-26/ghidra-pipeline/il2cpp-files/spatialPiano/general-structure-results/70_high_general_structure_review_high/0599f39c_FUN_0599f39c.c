/*
FUNCTION_NAME: FUN_0599f39c
ENTRY_POINT: 0599f39c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0599f39c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_48;
  
  puVar3 = Method_System_Collections_Generic_List<UIDocument>_Insert__;
  if ((DAT_06bc1b34 & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List<UIDocument>_Insert__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_Add__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>_Add__
                );
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_GetValue__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
                );
    FUN_02f08768(
                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
                );
    FUN_02f08768(Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Sort__
                );
    FUN_02f08768(Method_System_Memory<byte>__ctor__);
    DAT_06bc1b34 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>__ctor__;
  puVar2 = PTR_DAT_067c9cb8;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  local_48 = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 4;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_059531d0(param_1,0);
  FUN_0624193c(param_1,*(undefined8 *)puVar4,0);
  FUN_0623f468(param_1,0,0);
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0623f858(lVar6,0);
  puVar4 = Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
  ;
  puVar3 = Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_Add__;
  if (lVar6 != 0) {
    FUN_0623f514(lVar6,*(undefined8 *)
                        Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_GetValue__
                 ,0);
    FUN_0623f468(lVar6,1,0);
    FUN_0624193c(lVar6,*(undefined8 *)puVar4,0);
    local_48 = *(undefined8 *)(param_1 + 0x260);
    FUN_0624b7dc(&local_48,lVar6,0);
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_0599183c(lVar7,param_2,0);
    puVar4 = Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__;
    puVar3 = 
    Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_AttachmentInfo>_Add__
    ;
    if (lVar7 != 0) {
      FUN_0623f514(lVar7,*(undefined8 *)Method_System_Buffers_MemoryPool<IntPtr>_get_Shared__,0);
      FUN_0623f468(lVar7,1,0);
      uVar8 = *(undefined8 *)puVar4;
      *(long *)(param_1 + 0x2d0) = lVar7;
      FUN_0624193c(lVar7,uVar8,0);
      local_48 = *(undefined8 *)(lVar6 + 0x260);
      FUN_0624b7dc(&local_48,*(undefined8 *)(param_1 + 0x2d0),0);
      lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_0599c694(lVar7,0);
      puVar4 = Method_System_Memory<byte>__ctor__;
      if (lVar7 != 0) {
        FUN_0623f468(lVar7,1,0);
        FUN_0624193c(lVar7,*(undefined8 *)puVar4,0);
        local_48 = *(undefined8 *)(lVar6 + 0x260);
        FUN_0624b7dc(&local_48,lVar7,0);
        lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_0623f858(lVar6,0);
        puVar5 = 
        Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
        ;
        if (lVar6 != 0) {
          FUN_0623f514(lVar6,*(undefined8 *)
                              Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutMeasureFunction>_UpdateValue__
                       ,0);
          FUN_0623f468(lVar6,1,0);
          FUN_0624193c(lVar6,*(undefined8 *)puVar5,0);
          local_48 = *(undefined8 *)(param_1 + 0x260);
          FUN_0624b7dc(&local_48,lVar6,0);
          lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_0623f858(lVar7,0);
          puVar2 = 
          Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_GetValue__
          ;
          if (lVar7 != 0) {
            FUN_0623f514(lVar7,*(undefined8 *)
                                Method_UnityEngine_UIElements_Layout_ManagedObjectStore<LayoutBaselineFunction>_GetValue__
                         ,0);
            FUN_0623f468(lVar7,1,0);
            uVar8 = *(undefined8 *)puVar2;
            *(long *)(param_1 + 0x2d8) = lVar7;
            FUN_0624193c(lVar7,uVar8,0);
            local_48 = *(undefined8 *)(lVar6 + 0x260);
            FUN_0624b7dc(&local_48,*(undefined8 *)(param_1 + 0x2d8),0);
            lVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
            FUN_0599c694(lVar7,0);
            puVar3 = 
            Method_System_Collections_Generic_List<VisualElementFocusRing_FocusRingRecord>_Sort__;
            if (lVar7 != 0) {
              FUN_0623f514(lVar7,*(undefined8 *)puVar4,0);
              FUN_0623f468(lVar7,1,0);
              uVar8 = *(undefined8 *)puVar4;
              *(long *)(param_1 + 0x2e0) = lVar7;
              FUN_0624193c(lVar7,uVar8,0);
              local_48 = *(undefined8 *)(lVar6 + 0x260);
              FUN_0624b7dc(&local_48,*(undefined8 *)(param_1 + 0x2e0),0);
              FUN_0599ea50(param_1,param_2);
              FUN_0599eb50(param_1,0);
              FUN_0599ed5c(param_1,4);
              FUN_0599ecbc(param_1,0);
              FUN_0599f09c(param_1,*(undefined8 *)puVar3);
              FUN_0599efec(param_1,1);
              FUN_0599eedc(param_1,0);
              FUN_0599f164(param_1,0);
              FUN_0599f2fc(param_1,2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


