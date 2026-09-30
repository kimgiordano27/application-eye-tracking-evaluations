/*
FUNCTION_NAME: Unity.VisualScripting.LateUpdate$$get_hookName
ENTRY_POINT: 03a2c374
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_LateUpdate__get_hookName(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x19;
  long lVar5;
  undefined8 *unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  uVar2 = thunk_FUN_01de27b8(*unaff_x21);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar2,*unaff_x29);
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*unaff_x28);
  FUN_03a29794();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*unaff_x27);
  FUN_03a29b3c();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*unaff_x26);
  FUN_03a2a2f8();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x20);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*unaff_x25);
  FUN_03a2b2c0();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*unaff_x24);
  FUN_03a29570();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x30);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04237518);
  FUN_03a2a9a0();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04237510);
  FUN_03a2a6bc();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x40);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  uVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04237508);
  FUN_03a2a654();
  puVar3 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x48);
  *puVar3 = uVar2;
  thunk_FUN_01e10808(puVar3,uVar2);
  if (DAT_044ab069 == '\0') {
    FUN_01d7d918(StringLiteral_1268);
    DAT_044ab069 = '\x01';
  }
  lVar4 = *unaff_x19;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar4 = *unaff_x19;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (DAT_044ab06a == '\0') {
    FUN_01d7d918();
    lVar4 = *unaff_x19;
    DAT_044ab06a = '\x01';
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar4 = *unaff_x19;
  }
  puVar1 = PTR_DAT_04237520;
  if (lVar5 != 0) {
    FUN_02f17d24(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                 *(undefined8 *)PTR_DAT_04237520);
    if (DAT_044ab069 == '\0') {
      FUN_01d7d918(StringLiteral_1268);
      DAT_044ab069 = '\x01';
    }
    lVar4 = *unaff_x19;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar4 = *unaff_x19;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (DAT_044ab06b == '\0') {
      FUN_01d7d918();
      lVar4 = *unaff_x19;
      DAT_044ab06b = '\x01';
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar4 = *unaff_x19;
    }
    if (lVar5 != 0) {
      FUN_02f17d24(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),*(undefined8 *)puVar1);
      if (DAT_044ab069 == '\0') {
        FUN_01d7d918(StringLiteral_1268);
        DAT_044ab069 = '\x01';
      }
      lVar4 = *unaff_x19;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar4 = *unaff_x19;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (DAT_044ab06c == '\0') {
        FUN_01d7d918();
        lVar4 = *unaff_x19;
        DAT_044ab06c = '\x01';
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar4 = *unaff_x19;
      }
      if (lVar5 != 0) {
        FUN_02f17d24(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20),*(undefined8 *)puVar1);
        if (DAT_044ab069 == '\0') {
          FUN_01d7d918(StringLiteral_1268);
          DAT_044ab069 = '\x01';
        }
        lVar4 = *unaff_x19;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar4 = *unaff_x19;
        }
        lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
        if (DAT_044ab06d == '\0') {
          FUN_01d7d918();
          lVar4 = *unaff_x19;
          DAT_044ab06d = '\x01';
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar4 = *unaff_x19;
        }
        if (lVar5 != 0) {
          FUN_02f17d24(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),*(undefined8 *)puVar1);
          if (DAT_044ab069 == '\0') {
            FUN_01d7d918(StringLiteral_1268);
            DAT_044ab069 = '\x01';
          }
          lVar4 = *unaff_x19;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar4 = *unaff_x19;
          }
          lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
          if (DAT_044ab06e == '\0') {
            FUN_01d7d918();
            lVar4 = *unaff_x19;
            DAT_044ab06e = '\x01';
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar4 = *unaff_x19;
          }
          if (lVar5 != 0) {
            FUN_02f17d24(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30),*(undefined8 *)puVar1
                        );
            if (DAT_044ab069 == '\0') {
              FUN_01d7d918(StringLiteral_1268);
              DAT_044ab069 = '\x01';
            }
            lVar4 = *unaff_x19;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar4 = *unaff_x19;
            }
            lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
            if (DAT_044ab06f == '\0') {
              FUN_01d7d918();
              lVar4 = *unaff_x19;
              DAT_044ab06f = '\x01';
            }
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar4 = *unaff_x19;
            }
            if (lVar5 != 0) {
              FUN_02f17d24(lVar5,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),
                           *(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


