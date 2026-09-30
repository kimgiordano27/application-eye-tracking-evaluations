/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 0322d730
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceQueryResults(void)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  
  thunk_FUN_0159f088(PTR_DAT_06d9e040);
  *(undefined1 *)(unaff_x23 + 0xfe3) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *unaff_x22;
  }
  lVar6 = *(long *)(lVar3 + 0xb8);
  if (*(char *)(lVar6 + 0x38) == '\0') {
    cVar2 = *(char *)(lVar6 + 0x39);
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar6 = *(long *)(*unaff_x22 + 0xb8);
    }
    lVar3 = *(long *)(lVar6 + 0x10);
    if (lVar3 == 0) goto LAB_0322dac8;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_0322dacc;
    lVar6 = (long)(int)unaff_w21;
    lVar3 = lVar3 + lVar6 * 0x10;
    uVar4 = FUN_0322dad0(*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28));
    if (cVar2 == '\0') {
      if ((uVar4 & 1) != 0) {
        lVar3 = *unaff_x22;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar3 = *unaff_x22;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_0322dac8;
        if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_0322dacc;
        uVar4 = FUN_0322db94();
        if ((uVar4 & 1) != 0) {
          lVar3 = *unaff_x22;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_016466fc();
            lVar3 = *unaff_x22;
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
          if (lVar3 == 0) goto LAB_0322dac8;
          if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_0322dacc;
          FUN_0322db70(lVar3 + lVar6 * 0x10 + 0x20,*(undefined8 *)PTR_DAT_06e1e798);
        }
        lVar3 = *unaff_x22;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar3 = *unaff_x22;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_0322dac8;
        if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_0322dacc;
        FUN_0322db70(lVar3 + lVar6 * 0x10 + 0x20,*(undefined8 *)PTR_DAT_06dc34f0);
        lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_0322dac8;
        if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_0322dacc;
        lVar3 = lVar3 + lVar6 * 0x10;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
      }
    }
    else if ((uVar4 & 1) != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_0322dac8;
      uVar1 = *(uint *)(lVar3 + 0x18);
      puVar5 = (undefined8 *)PTR_DAT_06db7c80;
      goto joined_r0x0322d84c;
    }
  }
  else {
    uVar4 = FUN_0322dad0();
    if ((uVar4 & 1) != 0) {
      lVar3 = *unaff_x22;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_0322dac8;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_0322dacc;
      lVar3 = lVar3 + (long)(int)unaff_w21 * 0x10;
      puVar5 = (undefined8 *)(lVar3 + 0x20);
      *puVar5 = unaff_x20;
      *(undefined8 *)(lVar3 + 0x28) = unaff_x19;
      thunk_FUN_01656ef8(puVar5,0);
      lVar3 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_0322dac8;
      uVar1 = *(uint *)(lVar3 + 0x18);
      puVar5 = (undefined8 *)PTR_DAT_06d9e040;
joined_r0x0322d84c:
      if (uVar1 <= unaff_w21) goto LAB_0322dacc;
      FUN_0322db70(lVar3 + (long)(int)unaff_w21 * 0x10 + 0x20,*puVar5);
    }
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) goto LAB_0322dac8;
  if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_0322dacc;
  lVar3 = (long)(int)unaff_w21;
  uVar4 = FUN_0322db94();
  if ((uVar4 & 1) == 0) {
    lVar6 = *unaff_x22;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar6 = *unaff_x22;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_0322dac8;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_0322dacc;
    lVar6 = lVar6 + lVar3 * 0x10;
    uVar4 = FUN_0322dad0(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28));
    if ((uVar4 & 1) != 0) {
      lVar6 = *unaff_x22;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar6 = *unaff_x22;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_0322dac8;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_0322dacc;
      FUN_0322db70(lVar6 + lVar3 * 0x10 + 0x20,*(undefined8 *)PTR_DAT_06ddd978);
    }
    uVar4 = FUN_0322dad0();
    if ((uVar4 & 1) != 0) {
      FUN_0322db70();
      goto LAB_0322d970;
    }
  }
  else {
    uVar4 = FUN_0322dad0();
    if ((uVar4 & 1) != 0) {
LAB_0322d970:
      FUN_0322db70();
    }
  }
  lVar6 = *unaff_x22;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar6 = *unaff_x22;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 != 0) {
    if (unaff_w21 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + lVar3 * 0x10;
      puVar5 = (undefined8 *)(lVar6 + 0x20);
      *puVar5 = unaff_x20;
      *(undefined8 *)(lVar6 + 0x28) = unaff_x19;
      thunk_FUN_01656ef8(puVar5,0);
      return;
    }
LAB_0322dacc:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_0322dac8:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


