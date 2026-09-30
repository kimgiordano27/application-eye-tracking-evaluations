/*
FUNCTION_NAME: OVRManager$$add_AudioOutChanged
ENTRY_POINT: 056501e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_AudioOutChanged(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long lVar6;
  long unaff_x29;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
    FUN_02dcfd74();
  }
  if (((0 < (int)unaff_x27[1]) && (*unaff_x27 != 0)) &&
     (lVar3 = FUN_036eca00(*unaff_x27,unaff_x27[1],
                           *(undefined8 *)(*(long *)(unaff_x29 + 0x38) + 0x28)), lVar3 != 0)) {
    uVar4 = FUN_036ec914(*unaff_x27,unaff_x27[1],*(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 0x18)
                        );
    FUN_055339f0(uVar4,0);
  }
  lVar6 = *unaff_x20;
  lVar3 = *(long *)(lVar6 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar6);
    lVar3 = *(long *)(lVar6 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = System_Collections_Generic_IList<XmlNode>_TypeInfo;
                    /* try { // try from 05650290 to 0575031b has its CatchHandler @ 05650290
                       catch() { ... } // from try @ 05650290 with catch @ 05650290
                       catch() { ... } // from try @ 0565032c with catch @ 05650290
                       catch() { ... } // from try @ 056503a0 with catch @ 05650290 */
  if (((0 < (int)unaff_x26[1]) && (*unaff_x26 != 0)) &&
     (lVar3 = FUN_036eca00(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    uVar4 = FUN_036ec914(*unaff_x26,unaff_x26[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
    FUN_055339f0(uVar4,0);
  }
  lVar6 = *(long *)puVar1;
  lVar3 = *(long *)(lVar6 + 0x38);
  if (lVar3 == 0) {
    FUN_02dcfd74(lVar6);
    lVar3 = *(long *)(lVar6 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 8);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_02dcfd74(lVar3);
  }
  puVar1 = PTR_DAT_06a0f1a0;
  if (((0 < (int)unaff_x24[1]) && (*unaff_x24 != 0)) &&
     (lVar3 = FUN_036ec9f4(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar3 + 0x38) + 0x28)),
     lVar3 != 0)) {
    FUN_036ec908(*unaff_x24,unaff_x24[1],*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x18));
  }
  puVar2 = System_Buffers_IMemoryOwner<IntPtr>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_056503d0(unaff_w23,unaff_w22,unaff_w21,in_stack_00000018._4_4_);
  uVar5 = FUN_055efebc(uVar4,*(undefined8 *)puVar2,0,0);
  if ((uVar5 & 1) == 0) {
    unaff_x19[8] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
  }
  else {
    memcpy(unaff_x19,&stack0x00000020,0x48);
  }
  return;
}


