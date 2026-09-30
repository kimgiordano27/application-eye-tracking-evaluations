/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking.<JoinOpenRoom>d__28$$MoveNext
ENTRY_POINT: 0647aac0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking_<JoinOpenRoom>d__28__MoveNext
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong __n;
  ulong __n_00;
  ulong __n_01;
  undefined8 *__dest;
  undefined8 *__dest_00;
  undefined8 *__dest_01;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  lVar6 = *(long *)(param_6 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x50) = param_3;
  *(undefined8 *)(unaff_x29 + -0x48) = param_4;
  *(undefined8 *)(unaff_x29 + -0x30) = param_4;
  *(undefined8 *)(unaff_x29 + -0x28) = param_3;
  lVar6 = *(long *)(lVar6 + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x40) = param_5;
  *(undefined8 *)(unaff_x29 + -0x38) = param_5;
  __n_01 = (ulong)*(uint *)(*(long *)(lVar6 + 0x80) + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar6 + 0x70) + 0xfc);
  __n_00 = (ulong)*(uint *)(*(long *)(lVar6 + 0x78) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  __dest_00 = (undefined8 *)((long)__dest - (__n_00 + 0xf & 0x1fffffff0));
  __dest_01 = (undefined8 *)((long)__dest_00 - (__n_01 + 0xf & 0x1fffffff0));
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_0647aca4:
    if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    for (lVar6 = (*(code *)**(undefined8 **)(lVar6 + 0x60))(); lVar6 != 0;
        lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x90))
                          (lVar6)) {
      puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x68);
      (*(code *)puVar3[2])(*puVar3,puVar3,lVar6,0,unaff_x29 + -0x20);
      lVar10 = *(long *)(param_6 + 0x20);
      lVar9 = *(long *)(unaff_x29 + -0x20);
      pvVar1 = *(void **)(unaff_x29 + -0x50);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x70) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(__dest,pvVar1,__n);
      pvVar1 = *(void **)(unaff_x29 + -0x48);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x78) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x30);
      }
      memcpy(__dest_00,pvVar1,__n_00);
      pvVar1 = *(void **)(unaff_x29 + -0x40);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x80) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x38);
      }
      memcpy(__dest_01,pvVar1,__n_01);
      if (lVar9 == 0) goto LAB_0647aca4;
      lVar10 = *(long *)(lVar10 + 0xc0);
      puVar3 = __dest;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x70) + 0x28)) {
        puVar3 = (undefined8 *)*__dest;
      }
      puVar8 = __dest_00;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x78) + 0x28)) {
        puVar8 = (undefined8 *)*__dest_00;
      }
      puVar5 = __dest_01;
      if (-1 < *(int *)(*(long *)(lVar10 + 0x80) + 0x28)) {
        puVar5 = (undefined8 *)*__dest_01;
      }
      puVar4 = *(undefined8 **)(lVar10 + 0x88);
      uVar2 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
      pcVar7 = (code *)puVar4[2];
      *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
      (*pcVar7)(uVar2,puVar4,lVar9,unaff_x29 + -0x20);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


