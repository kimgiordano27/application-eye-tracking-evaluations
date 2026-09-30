/*
FUNCTION_NAME: FUN_058249c0
ENTRY_POINT: 058249c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_058249c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_28;
  
  local_50 = param_5;
  local_48 = param_6;
  uStack_40 = param_3;
  local_38 = param_4;
  if ((DAT_066d2ce4 & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_Clear__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_get_Count__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_get_Item__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_Add__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<RichTextTagParser_Tag>_get_Item__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    DAT_066d2ce4 = 1;
  }
  local_28 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(char *)(param_1 + 0x159) != '\0') {
    if (*(long *)(param_1 + 0x180) == 0) {
LAB_05824c1c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(char *)(*(long *)(param_1 + 0x180) + 0x52) != '\0') {
      if (param_2 == 0) goto LAB_05824c1c;
      FUN_032fa8b8(&local_90,param_2,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                   ,&local_28,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                   ,0x33e,*(undefined8 *)
                           Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_get_Item__
                  );
      local_70 = local_90;
      local_90 = 0;
      uStack_68 = puStack_88;
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      puStack_88 = &local_70;
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_28 + 0x18) = param_7;
      thunk_FUN_02bb0e9c((undefined8 *)(local_28 + 0x18),param_7);
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_28 + 0x10) = *(undefined8 *)(param_1 + 0x1d8);
      thunk_FUN_02bb0e9c();
      lVar3 = local_28;
      auVar7 = FUN_0588dafc(&local_70,&uStack_40,0,0);
      lVar5 = local_28;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 (*) [16])(lVar3 + 0x30) = auVar7;
      auVar7 = FUN_0588db4c(&local_70,&local_50,3,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined1 (*) [16])(lVar5 + 0x40) = auVar7;
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_28 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x40);
      thunk_FUN_02bb0e9c();
      lVar3 = local_28;
      if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar2 = FUN_05c9545c(*(long *)(local_28 + 0x28),0);
      puVar1 = Method_System_Collections_Generic_List<RichTextTagParser_Tag>_get_Item__;
      *(undefined4 *)(lVar3 + 0x20) = uVar2;
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar3 = *(long *)puVar1;
      }
      puVar4 = *(undefined8 **)(lVar3 + 0xb8);
      lVar5 = puVar4[0x21];
      if (lVar5 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar6 = *puVar4;
        lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_Clear__
                                  );
        FUN_03e029d0(lVar5,uVar6,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_Add__
                     ,0);
        lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
        *(long *)(lVar3 + 0x108) = lVar5;
        thunk_FUN_02bb0e9c(lVar3 + 0x108,lVar5);
      }
      FUN_032facec(&local_70,lVar5,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo>_get_Count__
                  );
      FUN_0588e1ac(&local_70,0);
    }
  }
  return;
}


