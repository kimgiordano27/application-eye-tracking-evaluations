/*
FUNCTION_NAME: FUN_06b9f994
ENTRY_POINT: 06b9f994
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_06b9f994(long param_1,uint param_2,uint param_3,byte param_4)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  float fVar20;
  
  puVar3 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Justify>__ctor__
  ;
  if ((DAT_075602e9 & 1) == 0) {
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Overflow>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<OverflowClipBox>__ctor__
                );
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<SliceType>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextAnchor>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextGeneratorType>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextOverflow>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextOverflowPosition>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Visibility>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<WhiteSpace>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Wrap>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleListProperty<EasingFunction>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleListProperty<StylePropertyName>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleListProperty<TimeValue>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackground,_Background>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackgroundPosition,_BackgroundPosition>__ctor__
                );
    FUN_03188a78(PTR_DAT_070c22f8);
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_000008E6_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackgroundRepeat,_BackgroundRepeat>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackgroundSize,_BackgroundSize>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Justify>__ctor__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_get_Current__
                );
    FUN_03188a78(PTR_DAT_070f3520);
    DAT_075602e9 = 1;
  }
  lVar13 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0x74) = 1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar13 = *(long *)puVar3;
  }
  puVar15 = *(undefined8 **)(lVar13 + 0xb8);
  lVar17 = puVar15[1];
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar18 = *puVar15;
    lVar17 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)
                         Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<SliceType>__ctor__
                       );
    FUN_0570ec28(lVar17,uVar18,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackgroundRepeat,_BackgroundRepeat>__ctor__
                 ,0);
    lVar13 = *(long *)puVar3;
    *(long *)(*(long *)(lVar13 + 0xb8) + 8) = lVar17;
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar13 = *(long *)puVar3;
  }
  puVar8 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextGeneratorType>__ctor__
  ;
  puVar7 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextAnchor>__ctor__
  ;
  puVar6 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
  ;
  puVar5 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<OverflowClipBox>__ctor__
  ;
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_get_Current__;
  puVar15 = *(undefined8 **)(lVar13 + 0xb8);
  lVar16 = puVar15[2];
  if (lVar16 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar15 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar18 = *puVar15;
    lVar16 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)
                         Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Overflow>__ctor__
                       );
    FUN_05110878(lVar16,uVar18,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackgroundSize,_BackgroundSize>__ctor__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar16;
  }
  puVar3 = 
  Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_000008E6_PostfixBurstDelegate>_get_Value__
  ;
  uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar8);
  FUN_0414d030(uVar18,lVar17,lVar16,10000,*(undefined8 *)puVar7);
  uVar14 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0xa8) = uVar18;
  uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
  FUN_06ba52b0(uVar18,0);
  uVar14 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0xb0) = uVar18;
  uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
  FUN_06b9c280();
  uVar14 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar18;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
  FUN_06b7dc9c(uVar18,0,0,0,0);
  *(undefined8 *)(param_1 + 200) = uVar18;
  FUN_05971910(param_1,0);
  lVar13 = *(long *)puVar4;
  *(byte *)(param_1 + 0x10) = param_4 & 1;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar13 = *(long *)puVar4;
  }
  cVar1 = *(char *)(*(long *)(lVar13 + 0xb8) + 0xd);
  if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
  }
  puVar3 = PTR_DAT_070c22f8;
  FUN_0698f888(cVar1 == '\0',0);
  FUN_0698f888(1,0);
  lVar13 = *(long *)puVar4;
  lVar17 = *(long *)(lVar13 + 0xb8);
  iVar19 = *(int *)(lVar17 + 8);
  *(int *)(lVar17 + 8) = iVar19 + 1;
  if (iVar19 == 0) {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)(*(long *)puVar4 + 0xb8);
    }
    if ((*(char *)(lVar17 + 0xc) == '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
      if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06b7c428(1,0);
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar13 = *(long *)puVar4;
      }
      *(undefined1 *)(*(long *)(lVar13 + 0xb8) + 0xc) = 1;
    }
  }
  puVar6 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackgroundPosition,_BackgroundPosition>__ctor__
  ;
  puVar5 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleProperty<StyleBackground,_Background>__ctor__
  ;
  puVar4 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<WhiteSpace>__ctor__
  ;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  puVar11 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleListProperty<TimeValue>__ctor__
  ;
  puVar10 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleListProperty<StylePropertyName>__ctor__
  ;
  puVar9 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleListProperty<EasingFunction>__ctor__
  ;
  puVar8 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Visibility>__ctor__
  ;
  puVar7 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextOverflowPosition>__ctor__
  ;
  puVar3 = 
  Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<TextOverflow>__ctor__
  ;
  uVar12 = FUN_05930740(param_2 >> 1,0x800,0);
  *(undefined4 *)(param_1 + 0x30) = uVar12;
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  uVar18 = *(undefined8 *)puVar6;
  fVar20 = (float)param_3 / (float)param_2;
  if (fVar20 <= 2.0) {
    fVar20 = 2.0;
  }
  *(float *)(param_1 + 0x38) = fVar20;
  uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar18);
  iVar19 = 4;
  FUN_042e42dc(uVar18,4,*(undefined8 *)puVar4);
  uVar14 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar18;
  uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar14);
  FUN_042e42dc(uVar18,4,*(undefined8 *)
                         Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Wrap>__ctor__
              );
  *(undefined8 *)(param_1 + 0x48) = uVar18;
  while( true ) {
    lVar13 = *(long *)(param_1 + 0x40);
    uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar10);
    FUN_044be738(uVar18,*(undefined8 *)puVar8);
    if (lVar13 == 0) break;
    lVar17 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar3;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar17 == 0) break;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
    }
    else {
      FUN_042e4a64(lVar13,uVar18,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar13 = *(long *)(param_1 + 0x48);
    uVar18 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)puVar11);
    FUN_044c1424(uVar18,*(undefined8 *)puVar9);
    if (lVar13 == 0) break;
    lVar17 = *(long *)(lVar13 + 0x10);
    lVar16 = *(long *)puVar7;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar17 == 0) break;
    uVar2 = *(uint *)(lVar13 + 0x18);
    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar18;
    }
    else {
      FUN_042e4a64(lVar13,uVar18,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    iVar19 = iVar19 + -1;
    if (iVar19 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


