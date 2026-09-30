/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnMultiplayerGetAssetUploadUrlRequestEvent
ENTRY_POINT: 05266478
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_1;telemetry_or_network_hits_4
*/


void PlayFab_Events_PlayFabEvents__remove_OnMultiplayerGetAssetUploadUrlRequestEvent(void)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar14;
  long lVar15;
  uint uVar16;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000068;
  
  FUN_02d4dc40(UnityEngine_UIElements_TypeConverterRegistry_var);
  FUN_02d4dc40(PTR_DAT_066463a0);
  *(undefined1 *)(unaff_x22 + 0x428) = 1;
  in_stack_00000068 = (long *)0x0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if (unaff_x23 == 0) {
LAB_05266628:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  lVar8 = thunk_FUN_02d8a53c();
  puVar7 = System_Collections_Generic_IDictionary<string,_JToken>_TypeInfo;
  puVar6 = Cysharp_Threading_Tasks_Triggers_AsyncTriggerHandler<Collision2D>_TypeInfo;
  puVar5 = UnityEngine_UIElements_TypeConverterRegistry_var;
  puVar4 = PTR_DAT_066462a0;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4e268();
  }
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (0 < (int)uVar1) {
    uVar16 = 0;
    do {
      if (uVar1 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      plVar14 = *(long **)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
      if (plVar14 == (long *)0x0) goto LAB_05266628;
      bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
      plVar9 = plVar14;
      if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
LAB_05266630:
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(plVar9);
      }
      plVar9 = (long *)FUN_0479a394(plVar14,1,*(undefined8 *)puVar6);
      if (plVar9 == (long *)0x0) goto LAB_05266628;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(puVar4 + 0x18) + 0x40))
      goto LAB_05266630;
      puVar10 = (undefined1 *)thunk_FUN_02d8a780();
      uVar3 = *puVar10;
      uVar11 = FUN_0479bf18(plVar14,0xd,&stack0x00000068,*(undefined8 *)puVar7);
      FUN_052666d4(&stack0x00000030,uVar11,plVar14);
      lVar15 = *(long *)(unaff_x21 + 0x10);
      if (in_stack_00000068 == (long *)0x0) {
        uVar13 = 0;
      }
      else {
        plVar9 = in_stack_00000068;
        if (*(long *)(*in_stack_00000068 + 0x40) != *(long *)(*(long *)(puVar4 + 0x48) + 0x40))
        goto LAB_05266630;
        puVar12 = (undefined4 *)thunk_FUN_02d8a780();
        uVar13 = *puVar12;
      }
      if (lVar15 == 0) goto LAB_05266628;
      FUN_0525d770(lVar15,unaff_w20,unaff_w19,uVar3,uVar13);
      uVar1 = *(uint *)(lVar8 + 0x18);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)uVar1);
  }
  return;
}


