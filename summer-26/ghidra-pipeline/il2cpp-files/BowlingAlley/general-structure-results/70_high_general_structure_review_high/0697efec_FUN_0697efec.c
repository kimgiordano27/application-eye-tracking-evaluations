/*
FUNCTION_NAME: FUN_0697efec
ENTRY_POINT: 0697efec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_7
*/


void FUN_0697efec(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_076e1ccb & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Sort__);
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List<UIRStylePainter_Entry>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072820c8);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0728c9b0);
    thunk_FUN_032e1da0(PTR_DAT_07283308);
    thunk_FUN_032e1da0(PTR_DAT_07285800);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                      );
    DAT_076e1ccb = 1;
  }
  if (*param_1 != 0) {
    uVar4 = FUN_069690f8(*param_1,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((*param_1 == 0) ||
       (lVar5 = FUN_06969174(*param_1,0),
       puVar1 = Method_System_Collections_Generic_List<UIRStylePainter_Entry>__ctor__, lVar5 == 0))
    goto LAB_0697f3b0;
    iVar3 = System_Array_EmptyInternalEnumerator<OVRTask_Callback<Int32Enum>>__Dispose
                      (lVar5,*(undefined8 *)
                              Method_System_Collections_Generic_List<UIRStylePainter_Entry>__ctor__)
    ;
    if (2 < iVar3) {
      return;
    }
    uVar8 = *(undefined8 *)
             Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Clear__
    ;
    uVar9 = *(undefined8 *)
             Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__
    ;
    uVar11 = *(undefined8 *)PTR_DAT_07283308;
    uVar10 = *(undefined8 *)PTR_DAT_0728c9b0;
    iVar3 = System_Array_EmptyInternalEnumerator<OVRTask_Callback<Int32Enum>>__Dispose
                      (lVar5,*(undefined8 *)puVar1);
    puVar2 = Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Sort__;
    if (((iVar3 == 2) &&
        (uVar4 = FUN_050f8d04(lVar5,uVar10,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Sort__
                             ), (uVar4 & 1) != 0)) &&
       (uVar4 = FUN_050f8d04(lVar5,uVar11,*(undefined8 *)puVar2),
       puVar2 = Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__,
       (uVar4 & 1) != 0)) {
      lVar6 = FUN_050f8a90(lVar5,uVar11,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                          );
      *param_1 = lVar6;
      thunk_FUN_0333a630(param_1,lVar6);
      puVar1 = 
      Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
      ;
      lVar6 = *param_1;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0697e5b4(lVar6);
      FUN_0697efec(param_1);
      if (*param_1 == 0) goto LAB_0697f3b0;
      lVar6 = FUN_06969174(*param_1,0);
      uVar8 = *(undefined8 *)puVar2;
      uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      uVar9 = uVar10;
    }
    else {
      iVar3 = System_Array_EmptyInternalEnumerator<OVRTask_Callback<Int32Enum>>__Dispose
                        (lVar5,*(undefined8 *)puVar1);
      puVar2 = Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Sort__;
      if (((iVar3 != 2) ||
          (uVar4 = FUN_050f8d04(lVar5,uVar9,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Sort__
                               ), (uVar4 & 1) == 0)) ||
         (uVar4 = FUN_050f8d04(lVar5,uVar11,*(undefined8 *)puVar2),
         puVar2 = Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__,
         (uVar4 & 1) == 0)) {
        iVar3 = System_Array_EmptyInternalEnumerator<OVRTask_Callback<Int32Enum>>__Dispose
                          (lVar5,*(undefined8 *)puVar1);
        if (iVar3 != 1) {
          return;
        }
        uVar4 = FUN_050f8d04(lVar5,uVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_Sort__
                            );
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_07285800 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar6 = FUN_06969dac(0);
        *param_1 = lVar6;
        thunk_FUN_0333a630(param_1,lVar6);
        if (*param_1 == 0) goto LAB_0697f3b0;
        lVar6 = FUN_06969174(*param_1,0);
        puVar1 = 
        Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
        ;
        lVar7 = *(long *)
                 Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
        ;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(lVar7);
          lVar7 = *(long *)puVar1;
        }
        uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
        uVar9 = FUN_050f8a90(lVar5,uVar8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                            );
        if (lVar6 == 0) goto LAB_0697f3b0;
        goto LAB_0697f37c;
      }
      lVar6 = FUN_050f8a90(lVar5,uVar11,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<RegexCharClass_SingleRange>_get_Count__
                          );
      *param_1 = lVar6;
      thunk_FUN_0333a630(param_1,lVar6);
      puVar1 = 
      Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
      ;
      lVar6 = *param_1;
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List<JsonSerializerInternalReader_CreatorPropertyContext>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0697e5b4(lVar6);
      FUN_0697efec(param_1);
      if (*param_1 == 0) goto LAB_0697f3b0;
      lVar6 = FUN_06969174(*param_1,0);
      uVar8 = *(undefined8 *)puVar2;
      uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    }
    uVar9 = FUN_050f8a90(lVar5,uVar9,uVar8);
    if (lVar6 != 0) {
LAB_0697f37c:
      FUN_050f8afc(lVar6,uVar11,uVar9,*(undefined8 *)PTR_DAT_072820c8);
      return;
    }
  }
LAB_0697f3b0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


