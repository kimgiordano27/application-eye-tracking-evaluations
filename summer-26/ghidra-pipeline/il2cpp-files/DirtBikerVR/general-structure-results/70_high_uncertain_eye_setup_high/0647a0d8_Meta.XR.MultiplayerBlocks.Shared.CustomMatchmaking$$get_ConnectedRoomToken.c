/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking$$get_ConnectedRoomToken
ENTRY_POINT: 0647a0d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking__get_ConnectedRoomToken
               (long param_1,long param_2,void *param_3,void *param_4,long param_5)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong __n;
  ulong __n_00;
  undefined8 *__dest;
  undefined8 *__dest_00;
  long lVar8;
  long lVar9;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0xfc);
  __n_00 = (ulong)*(uint *)(*(long *)(param_1 + 0x78) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  __dest_00 = (undefined8 *)((long)__dest - (__n_00 + 0xf & 0x1fffffff0));
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_0647a248:
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    for (lVar2 = (*(code *)**(undefined8 **)(param_1 + 0x60))(); lVar2 != 0;
        lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x88))
                          (lVar2)) {
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x68);
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar2,0,unaff_x29 + -0x18);
      lVar9 = *(long *)(param_5 + 0x20);
      lVar8 = *(long *)(unaff_x29 + -0x18);
      pvVar1 = param_3;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x70) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(__dest,pvVar1,__n);
      pvVar1 = param_4;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x78) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(__dest_00,pvVar1,__n_00);
      if (lVar8 == 0) goto LAB_0647a248;
      lVar9 = *(long *)(lVar9 + 0xc0);
      puVar4 = __dest;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x70) + 0x28)) {
        puVar4 = (undefined8 *)*__dest;
      }
      puVar6 = __dest_00;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x78) + 0x28)) {
        puVar6 = (undefined8 *)*__dest_00;
      }
      puVar5 = *(undefined8 **)(lVar9 + 0x80);
      uVar3 = *puVar5;
      pcVar7 = (code *)puVar5[2];
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar6;
      (*pcVar7)(uVar3,puVar5,lVar8,unaff_x29 + -0x18);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


