/*
FUNCTION_NAME: FUN_02065598
ENTRY_POINT: 02065598
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x020657c8) */

long * FUN_02065598(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  puVar3 = Method_System_String_LastIndexOf__;
  if ((DAT_03780bcd & 1) == 0) {
    thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__);
    thunk_FUN_00d48444(Method_System_String_LastIndexOf__);
    thunk_FUN_00d48444(System_Net_Cache_RequestCacheLevel_TypeInfo);
    DAT_03780bcd = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = System_Net_Cache_RequestCacheLevel_TypeInfo;
  uVar4 = FUN_0205558c();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02056484(param_1,0,*(undefined8 *)puVar2);
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    lVar7 = thunk_FUN_00d62348();
    if (lVar7 != 0) {
      uVar5 = thunk_FUN_00d48444(
                                UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                                );
      FUN_016ec5b8(lVar7,uVar5,0);
      uVar5 = thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_Glyph>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(lVar7,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  bVar1 = *(byte *)(*(long *)
                     Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__ + 300)
  ;
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__)) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    lVar7 = thunk_FUN_00d62348();
    if (lVar7 != 0) {
      uVar5 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<BoneCapsule>_GetEnumerator__
                                );
      uVar6 = thunk_FUN_00d48444(
                                UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                                );
      FUN_016ec624(lVar7,uVar5,uVar6,0);
      uVar5 = thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_Glyph>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(lVar7,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)((long)param_2 + 0x34) != '\0') {
    uVar5 = thunk_FUN_00d48444(Newtonsoft_Json_Converters_XmlDeclarationWrapper_TypeInfo);
    uVar6 = thunk_FUN_00d48444(StringLiteral_9346);
    uVar5 = FUN_015e14fc(uVar5,uVar6,0);
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    lVar7 = thunk_FUN_00d62348();
    if (lVar7 != 0) {
      FUN_017713a8(lVar7,uVar5,0);
      uVar5 = thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<uint,_Glyph>__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(lVar7,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_020725fc(param_2,0);
  *(undefined1 *)((long)param_2 + 0x34) = 1;
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0169fdb4(*(long *)(param_1 + 0x98),0);
  }
  plVar8 = *(long **)(param_1 + 0xc0);
  *(undefined1 *)((long)param_2 + 0x34) = 1;
  if (plVar8 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar8 + 0x248))
                (plVar8,*(undefined4 *)(param_1 + 0xe0),*(undefined8 *)(*plVar8 + 0x250));
      (**(code **)(*plVar8 + 0x228))
                (plVar8,*(undefined4 *)(param_1 + 0xe0),*(undefined8 *)(*plVar8 + 0x230));
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0205558c();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02057000(param_1,0,*(undefined8 *)puVar2);
    }
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


