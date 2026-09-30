/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_40
ENTRY_POINT: 056aa574
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__807_40(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int in_w8;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w22;
  
  while( true ) {
    iVar5 = unaff_w22;
    if (in_NG == in_OV) {
      iVar5 = in_w8;
    }
    FUN_0550b264();
    iVar4 = iVar5 + *(int *)(unaff_x19 + 0x20);
    *(int *)(unaff_x19 + 0x20) = iVar4;
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_056aa608;
    unaff_w22 = unaff_w22 - iVar5;
    iVar5 = (int)*(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x18);
    if (iVar5 < iVar4) {
      thunk_FUN_02dfd288(PTR_DAT_069fcb10);
      uVar2 = thunk_FUN_02dd3144();
      FUN_0551fa44(uVar2,0);
      uVar3 = thunk_FUN_02dfd288(
                                Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_Type>,_Func<object,_object>>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar2,uVar3);
    }
    if (iVar4 == iVar5) {
      iVar4 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
    if (unaff_w22 < 1) break;
    in_w8 = iVar5 - iVar4;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = unaff_w22 - in_w8 < 0;
  }
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_010fd054;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = FUN_062f9f68(*(long *)(unaff_x19 + 0x10),0), lVar1 != 0)) {
    FUN_062f9128(lVar1,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_056aa608:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


