/*
FUNCTION_NAME: Photon.Voice.RawCodec.Encoder<__Il2CppFullySharedGenericType>$$EndOfStream
ENTRY_POINT: 020ae878
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020aeaa4) */

void Photon_Voice_RawCodec_Encoder<__Il2CppFullySharedGenericType>__EndOfStream
               (long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  ulong __n;
  void *unaff_x26;
  long unaff_x29;
  
  __n = (ulong)*(uint *)((*(long **)(param_1 + 0xc0))[0xd] + 0xfc);
  if ((*(byte *)(**(long **)(param_1 + 0xc0) + 0x135) & 1) == 0) {
    FUN_01a46ff8();
  }
  lVar2 = thunk_FUN_01a89e68();
  FUN_02212fcc();
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01a46ff8();
  }
  uVar4 = **(undefined8 **)(lVar3 + 0xb8);
  *(undefined1 *)(unaff_x29 + -0x14) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = uVar4;
  FUN_027e0bd8(uVar4,unaff_x29 + -0x14,0);
  cVar1 = *(char *)(param_2 + 0x1c);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cda238);
    uVar4 = FUN_027b3d94(uVar4,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cc17e0);
    uVar6 = thunk_FUN_01a89e68();
    FUN_0277b418(uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6);
  }
  plVar5 = (long *)thunk_FUN_01a59484(*(undefined8 *)(param_2 + 0x20),
                                      *(undefined8 *)
                                       (**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
  lVar3 = *plVar5;
  thunk_FUN_01a4b338();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  FUN_018820a8(lVar2,*(undefined8 *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80),lVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  thunk_FUN_01a4b338();
  FUN_018820a8(lVar2,*(long *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80) + 0x20,uVar4)
  ;
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x68) + 0x28)) {
    unaff_x26 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0),unaff_x26,__n);
  FUN_01ab69d4(lVar2,*(long *)(**(long **)(lVar7 + 0xc0) + 0x80) + 0x60,
               &stack0x00000000 + -(__n + 0xf & 0x1fffffff0),__n);
  if (lVar3 != 0) {
    thunk_FUN_01a4b338();
    FUN_018820a8(lVar3,*(long *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80) + 0x20,
                 lVar2);
  }
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  FUN_018820a8(lVar3,*(undefined8 *)(**(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80),lVar2);
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  thunk_FUN_01a4b338();
  if (*(uint *)(unaff_x22 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar5 = (long *)(unaff_x22 + (long)(int)unaff_w21 * 8 + 0x20);
  *plVar5 = lVar2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar2);
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x28),0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


