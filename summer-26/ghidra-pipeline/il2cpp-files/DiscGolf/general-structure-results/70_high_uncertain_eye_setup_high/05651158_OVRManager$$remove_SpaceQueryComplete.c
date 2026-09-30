/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 05651158
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceQueryComplete(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long lVar6;
  undefined8 in_stack_00000018;
  
  lVar5 = *(long *)(unaff_x28 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74();
    lVar5 = *(long *)(unaff_x28 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  if (((0 < (int)unaff_x26[1]) && (*unaff_x26 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    uVar3 = FUN_036ec914(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 0x18)
                        );
    FUN_055339f0(uVar3,0);
  }
  lVar6 = *unaff_x20;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = System_Collections_Generic_Dictionary<string,_XmlSqlBinaryReader_NamespaceDecl>_TypeInfo;
  if (((0 < (int)unaff_x27[1]) && (*unaff_x27 != 0)) &&
     (lVar5 = FUN_036eca00(*unaff_x27,unaff_x27[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    uVar3 = FUN_036ec914(*unaff_x27,unaff_x27[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
    FUN_055339f0(uVar3,0);
  }
  lVar6 = *(long *)puVar1;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = Unity_XR_CoreUtils_Collections_HashSetList<object>_TypeInfo;
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar5 = FUN_036eca18(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    FUN_036ec930(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
  }
  lVar6 = *(long *)puVar1;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_02dcfd74(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02dcfd74(lVar5);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x23[1]) && (*unaff_x23 != 0)) &&
     (lVar5 = FUN_036eca1c(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28)),
     lVar5 != 0)) {
    FUN_036ec938(*unaff_x23,unaff_x23[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
  }
  puVar2 = System_IObserver<InputEventPtr>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_056513dc(unaff_w22,unaff_w21,in_stack_00000018._4_4_);
  uVar4 = FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)((long)unaff_x19 + 0x54) = 0;
    *(undefined8 *)((long)unaff_x19 + 0x4c) = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
    unaff_x19[9] = 0;
    unaff_x19[8] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
  }
  else {
    memcpy(unaff_x19,&stack0x00000020,0x5c);
  }
  return;
}


