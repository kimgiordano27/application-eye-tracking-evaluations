/*
FUNCTION_NAME: OVRManager$$LateUpdate
ENTRY_POINT: 04f4ca34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__LateUpdate(void)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  if (in_ZR || in_NG != in_OV) {
    if (DAT_066c1d97 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d97 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)PTR_DAT_06312438 + 0xb8);
    fStack0000000000000054 = *pfVar4;
    in_stack_00000058 = pfVar4[1];
    fStack000000000000005c = pfVar4[2];
  }
  else {
    fStack0000000000000054 = unaff_s11 / unaff_s8;
    in_stack_00000058 = unaff_s9 / unaff_s8;
    fStack000000000000005c = unaff_s10 / unaff_s8;
  }
  plVar8 = *(long **)(unaff_x20 + 200);
  if (DAT_066c1d9c == '\0') {
    FUN_02b3c81c(PTR_DAT_06312c90);
    DAT_066c1d9c = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)System_Text_UTF32Encoding_var) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04f4cb18;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)System_Text_UTF32Encoding_var,1);
LAB_04f4cb18:
  uVar2 = (*(code *)*puVar3)(unaff_s8,plVar8,&stack0x00000048,&stack0x00000028,puVar3[1]);
  puVar1 = System_Collections_Generic_Dictionary<string,_PropertyMetadata>_TypeInfo;
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)System_Collections_Generic_Dictionary<string,_PropertyMetadata>_TypeInfo;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar5 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar12 = puVar3[1];
    uVar11 = *puVar3;
    uVar10 = puVar3[3];
    uVar9 = puVar3[2];
    unaff_x19[4] = puVar3[4];
    unaff_x19[1] = uVar12;
    *unaff_x19 = uVar11;
    unaff_x19[3] = uVar10;
    unaff_x19[2] = uVar9;
  }
  else {
    FUN_05c89340();
    FUN_04f4c320(uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c);
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
  }
  thunk_FUN_02bb0e9c();
  return uVar2 & 1;
}


