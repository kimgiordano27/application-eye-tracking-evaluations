/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 05316f40
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin__get_positionSupported(void)

{
  long lVar1;
  int iVar2;
  long *unaff_x19;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  float fVar4;
  float unaff_s8;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack000000000000001c;
  long in_stack_00000020;
  long in_stack_00000028;
  
  FUN_02f08768();
  FUN_02f08768(System_Xml_Schema_Datatype_unsignedByte_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x206) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000001c = 0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if (unaff_x20 == 0) goto LAB_053170b0;
  iVar2 = *(int *)(unaff_x20 + 0x18);
  if (iVar2 == 1) {
                    /* try { // try from 05316f74 to 05416f7b has its CatchHandler @ 053170e8 */
    lVar1 = FUN_03abf644();
    if (lVar1 == 0) goto LAB_053170b0;
                    /* try { // try from 05316f90 to 05416f9f has its CatchHandler @ 05317098 */
    if ((*(char *)(lVar1 + 0x38) == '\0') || (*(long *)(lVar1 + 0x48) == 0)) {
      iVar2 = *(int *)(unaff_x20 + 0x18);
      goto OVRPlugin__get_positionTracked;
    }
                    /* try { // try from 05316fa0 to 05416fef has its CatchHandler @ 05316ec4 */
    lVar3 = *unaff_x19;
    lVar1 = FUN_03abf644();
    if (lVar1 == 0) goto LAB_053170b0;
    if (*(char *)(lVar1 + 0x38) == '\0') {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(lVar1 + 0x48);
    }
  }
  else {
OVRPlugin__get_positionTracked:
    if (iVar2 < 2) {
      return 0;
    }
    lVar1 = FUN_060ed7ac();
    if (lVar1 == 0) goto LAB_053170b0;
    fVar4 = (float)FUN_06101d4c(lVar1,0);
    FUN_05310ba4(unaff_s8 / fVar4);
    if (in_stack_00000028 == 0) goto LAB_053170b0;
    if ((*(char *)(in_stack_00000028 + 0x38) == '\0') ||
       (lVar1 = *(long *)(in_stack_00000028 + 0x48), lVar1 == 0)) {
      if (in_stack_00000020 == 0) goto LAB_053170b0;
      if (*(char *)(in_stack_00000020 + 0x38) == '\0') {
        return 0;
      }
      lVar1 = *(long *)(in_stack_00000020 + 0x48);
      if (lVar1 == 0) {
        return 0;
      }
    }
    else {
      if (in_stack_00000020 == 0) goto LAB_053170b0;
      if ((*(char *)(in_stack_00000020 + 0x38) != '\0') &&
         (*(long *)(in_stack_00000020 + 0x48) != 0)) {
        in_stack_00000008 = *(long *)(in_stack_00000020 + 0x48);
        in_stack_00000010 = lVar1;
        OVRMixedReality___cctor(uStack000000000000001c,&stack0x00000010,&stack0x00000008);
        return 1;
      }
    }
    lVar3 = *unaff_x19;
  }
  if (lVar3 != 0) {
    FUN_05310ddc(lVar3,lVar1,0);
    return 1;
  }
LAB_053170b0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


