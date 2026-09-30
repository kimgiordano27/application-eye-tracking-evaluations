/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseUpAsButton$$get_hookName
ENTRY_POINT: 03a2c264
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_OnMouseUpAsButton__get_hookName(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x21;
  undefined8 *puVar7;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar8;
  long unaff_x24;
  undefined8 *puVar9;
  long unaff_x25;
  undefined8 *puVar10;
  long unaff_x26;
  undefined8 *puVar11;
  long unaff_x27;
  undefined8 *puVar12;
  long unaff_x28;
  undefined8 *puVar13;
  long unaff_x29;
  undefined8 *puVar14;
  
  puVar8 = *(undefined8 **)(unaff_x23 + 0x4c0);
  puVar5 = *(undefined8 **)(unaff_x20 + 0x4c8);
  plVar4 = *(long **)(unaff_x19 + 0x640);
  puVar7 = *(undefined8 **)(unaff_x21 + 0x4d0);
  puVar14 = *(undefined8 **)(unaff_x29 + 0x4d8);
  puVar13 = *(undefined8 **)(unaff_x28 + 0x4e0);
  puVar12 = *(undefined8 **)(unaff_x27 + 0x4e8);
  puVar11 = *(undefined8 **)(unaff_x26 + 0x4f0);
  puVar10 = *(undefined8 **)(unaff_x25 + 0x4f8);
  puVar9 = *(undefined8 **)(unaff_x24 + 0x500);
  if ((*(byte *)(unaff_x22 + 0xe93) & 1) == 0) {
    FUN_01d7d918(PTR_DAT_04237500);
    FUN_01d7d918(PTR_DAT_042374e0);
    FUN_01d7d918(StringLiteral_1268);
    FUN_01d7d918(PTR_DAT_042374e8);
    FUN_01d7d918(PTR_DAT_042374c8);
    FUN_01d7d918(PTR_DAT_042374c0);
    FUN_01d7d918(PTR_DAT_042374f0);
    FUN_01d7d918(PTR_DAT_04237508);
    FUN_01d7d918(PTR_DAT_04237510);
    FUN_01d7d918(PTR_DAT_04237518);
    FUN_01d7d918(PTR_DAT_04237520);
    FUN_01d7d918(PTR_DAT_042374d8);
    FUN_01d7d918(PTR_DAT_042374d0);
    FUN_01d7d918(PTR_DAT_042374f8);
    *(undefined1 *)(unaff_x22 + 0xe93) = 1;
  }
  uVar2 = thunk_FUN_01de27b8(*puVar8);
  FUN_02b0dedc(uVar2,*puVar5);
  **(undefined8 **)(*plVar4 + 0xb8) = uVar2;
  thunk_FUN_01e10808(*(undefined8 *)(*plVar4 + 0xb8),uVar2);
  uVar2 = thunk_FUN_01de27b8(*puVar7);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar2,*puVar14);
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 8);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*puVar13);
  FUN_03a29794();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x10);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*puVar12);
  FUN_03a29b3c();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x18);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*puVar11);
  FUN_03a2a2f8();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x20);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*puVar10);
  FUN_03a2b2c0();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x28);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*puVar9);
  FUN_03a29570();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x30);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04237518);
  FUN_03a2a9a0();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x38);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04237510);
  FUN_03a2a6bc();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x40);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  uVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04237508);
  FUN_03a2a654();
  puVar5 = (undefined8 *)(*(long *)(*plVar4 + 0xb8) + 0x48);
  *puVar5 = uVar2;
  thunk_FUN_01e10808(puVar5,uVar2);
  if (DAT_044ab069 == '\0') {
    FUN_01d7d918(StringLiteral_1268);
    DAT_044ab069 = '\x01';
  }
  lVar3 = *plVar4;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *plVar4;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (DAT_044ab06a == '\0') {
    FUN_01d7d918(plVar4);
    lVar3 = *plVar4;
    DAT_044ab06a = '\x01';
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar3 = *plVar4;
  }
  puVar1 = PTR_DAT_04237520;
  if (lVar6 != 0) {
    FUN_02f17d24(lVar6,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10),
                 *(undefined8 *)PTR_DAT_04237520);
    if (DAT_044ab069 == '\0') {
      FUN_01d7d918(StringLiteral_1268);
      DAT_044ab069 = '\x01';
    }
    lVar3 = *plVar4;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *plVar4;
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (DAT_044ab06b == '\0') {
      FUN_01d7d918(plVar4);
      lVar3 = *plVar4;
      DAT_044ab06b = '\x01';
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *plVar4;
    }
    if (lVar6 != 0) {
      FUN_02f17d24(lVar6,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18),*(undefined8 *)puVar1);
      if (DAT_044ab069 == '\0') {
        FUN_01d7d918(StringLiteral_1268);
        DAT_044ab069 = '\x01';
      }
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar3 = *plVar4;
      }
      lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (DAT_044ab06c == '\0') {
        FUN_01d7d918(plVar4);
        lVar3 = *plVar4;
        DAT_044ab06c = '\x01';
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar3 = *plVar4;
      }
      if (lVar6 != 0) {
        FUN_02f17d24(lVar6,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20),*(undefined8 *)puVar1);
        if (DAT_044ab069 == '\0') {
          FUN_01d7d918(StringLiteral_1268);
          DAT_044ab069 = '\x01';
        }
        lVar3 = *plVar4;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar3 = *plVar4;
        }
        lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
        if (DAT_044ab06d == '\0') {
          FUN_01d7d918(plVar4);
          lVar3 = *plVar4;
          DAT_044ab06d = '\x01';
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar3 = *plVar4;
        }
        if (lVar6 != 0) {
          FUN_02f17d24(lVar6,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x28),*(undefined8 *)puVar1);
          if (DAT_044ab069 == '\0') {
            FUN_01d7d918(StringLiteral_1268);
            DAT_044ab069 = '\x01';
          }
          lVar3 = *plVar4;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar3 = *plVar4;
          }
          lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (DAT_044ab06e == '\0') {
            FUN_01d7d918(plVar4);
            lVar3 = *plVar4;
            DAT_044ab06e = '\x01';
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar3 = *plVar4;
          }
          if (lVar6 != 0) {
            FUN_02f17d24(lVar6,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30),*(undefined8 *)puVar1
                        );
            if (DAT_044ab069 == '\0') {
              FUN_01d7d918(StringLiteral_1268);
              DAT_044ab069 = '\x01';
            }
            lVar3 = *plVar4;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar3 = *plVar4;
            }
            lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
            if (DAT_044ab06f == '\0') {
              FUN_01d7d918(plVar4);
              lVar3 = *plVar4;
              DAT_044ab06f = '\x01';
            }
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar3 = *plVar4;
            }
            if (lVar6 != 0) {
              FUN_02f17d24(lVar6,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38),
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


