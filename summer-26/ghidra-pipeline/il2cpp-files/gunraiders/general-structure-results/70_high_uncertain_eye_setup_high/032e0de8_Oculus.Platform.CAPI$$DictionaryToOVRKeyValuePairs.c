/*
FUNCTION_NAME: Oculus.Platform.CAPI$$DictionaryToOVRKeyValuePairs
ENTRY_POINT: 032e0de8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x032e0ecc) */
/* WARNING: Removing unreachable block (ram,0x032e0ed0) */
/* WARNING: Removing unreachable block (ram,0x032e0ed8) */
/* WARNING: Removing unreachable block (ram,0x032e0eec) */
/* WARNING: Removing unreachable block (ram,0x032e0ef4) */
/* WARNING: Removing unreachable block (ram,0x032e0efc) */
/* WARNING: Removing unreachable block (ram,0x032e0f00) */
/* WARNING: Removing unreachable block (ram,0x032e0f9c) */
/* WARNING: Removing unreachable block (ram,0x032e0f7c) */

void Oculus_Platform_CAPI__DictionaryToOVRKeyValuePairs(void)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint unaff_w19;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  FUN_032e10b0();
  if (in_stack_00000008._4_4_ == unaff_w21) {
    thunk_FUN_01c273e8(PTR_DAT_0423a628);
    uVar3 = thunk_FUN_01c496e0();
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_Remove__;
  }
  else {
    if (unaff_w21 <= in_stack_00000008._4_4_) {
LAB_032e0f24:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    sVar2 = *(short *)(unaff_x23 + (long)(int)in_stack_00000008._4_4_ * 2);
    if (sVar2 == 0x2b) {
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    else if (sVar2 == 0x2d) {
      if (unaff_w22 != 10) {
        thunk_FUN_01c273e8(PTR_DAT_04231770);
        uVar3 = thunk_FUN_01c496e0();
        uVar5 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_TryGetValue__
                                  );
        FUN_032467a0(uVar3,uVar5,0);
        goto LAB_032e1050;
      }
      if ((unaff_w19 >> 9 & 1) != 0) {
        thunk_FUN_01c273e8(System_Resources_IResourceGroveler_TypeInfo);
        uVar3 = thunk_FUN_01c496e0();
        uVar5 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_get_Count__
                                  );
        FUN_032e0994(uVar3,uVar5);
        goto LAB_032e1050;
      }
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    if (((unaff_w24 == 0x10) || (unaff_w24 == -1)) &&
       (uVar1 = in_stack_00000008._4_4_ + 1, (int)uVar1 < (int)unaff_w21)) {
      if (unaff_w21 <= in_stack_00000008._4_4_) goto LAB_032e0f24;
      if (*(short *)(unaff_x23 + (long)(int)in_stack_00000008._4_4_ * 2) == 0x30) {
        if (unaff_w21 <= uVar1) goto LAB_032e0f24;
        if ((*(ushort *)(unaff_x23 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          unaff_w22 = 0x10;
        }
      }
    }
    FUN_032e117c(unaff_w22);
    thunk_FUN_01c273e8(PTR_DAT_0423a628);
    uVar3 = thunk_FUN_01c496e0();
    puVar4 = 
    Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>__ctor__;
  }
  uVar5 = thunk_FUN_01c273e8(puVar4);
  FUN_032baa68(uVar3,uVar5,0);
LAB_032e1050:
  uVar5 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<OVRSpace,_OVRPlugin_SpaceQueryResult>_set_Item__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar5);
}


