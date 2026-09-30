/*
FUNCTION_NAME: FUN_02064c48
ENTRY_POINT: 02064c48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02064e34) */
/* WARNING: Removing unreachable block (ram,0x02064d94) */

undefined8 FUN_02064c48(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = Method_System_String_LastIndexOf__;
  if ((DAT_03780bcb & 1) == 0) {
    thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__);
    thunk_FUN_00d48444(Method_System_String_LastIndexOf__);
    thunk_FUN_00d48444(StringLiteral_9346);
    DAT_03780bcb = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = StringLiteral_9346;
  uVar4 = FUN_0205558c();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02056484(param_1,0,*(undefined8 *)puVar3);
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    lVar7 = thunk_FUN_00d62348();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec5b8(lVar7,uVar5,0);
    uVar5 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vext_u16__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(lVar7,uVar5);
  }
  bVar1 = *(byte *)(*(long *)
                     Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__ + 300)
  ;
  if ((*(byte *)(*param_2 + 300) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__)) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    lVar7 = thunk_FUN_00d62348();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<BoneCapsule>_GetEnumerator__);
    uVar6 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec624(lVar7,uVar5,uVar6,0);
    uVar5 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vext_u16__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(lVar7,uVar5);
  }
  if (*(char *)((long)param_2 + 0x34) == '\0') {
    FUN_020725fc(param_2,0);
    *(undefined1 *)((long)param_2 + 0x34) = 1;
    if (*(long *)(param_1 + 0x98) != 0) {
      FUN_0169fdb4(*(long *)(param_1 + 0x98),0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0205558c();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02057000(param_1,0,*(undefined8 *)puVar3);
    }
    return *(undefined8 *)(param_1 + 0xd8);
  }
  uVar5 = thunk_FUN_00d48444(Newtonsoft_Json_Converters_XmlDeclarationWrapper_TypeInfo);
  uVar6 = thunk_FUN_00d48444(StringLiteral_9346);
  uVar5 = FUN_015e14fc(uVar5,uVar6,0);
  thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
  lVar7 = thunk_FUN_00d62348();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_017713a8(lVar7,uVar5,0);
  uVar5 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vext_u16__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(lVar7,uVar5);
}


