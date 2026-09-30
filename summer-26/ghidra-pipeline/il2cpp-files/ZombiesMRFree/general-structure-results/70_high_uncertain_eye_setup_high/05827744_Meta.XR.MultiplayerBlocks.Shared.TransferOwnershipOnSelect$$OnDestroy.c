/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnDestroy
ENTRY_POINT: 05827744
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnDestroy(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w26;
  int unaff_w27;
  int unaff_w28;
  long in_stack_00000008;
  
  while ((in_stack_00000008 != 0 && (lVar3 = *(long *)(in_stack_00000008 + 0x38), lVar3 != 0))) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar2 + 1;
      plVar5 = (long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      *plVar5 = unaff_x24;
      thunk_FUN_03048534(plVar5,unaff_x24);
    }
    else {
      FUN_044302e8(lVar3,unaff_x24,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
    }
    while( true ) {
      lVar3 = *(long *)(unaff_x20 + 0x18);
      if (lVar3 == 0) goto LAB_05827934;
      uVar2 = unaff_w28 + unaff_w26 * *(int *)(unaff_x20 + 0x10);
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (unaff_x24 == 0) goto LAB_05827934;
      plVar5 = (long *)(unaff_x24 + 0x18);
      *plVar5 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
      thunk_FUN_03048534(plVar5);
      if (*plVar5 == 0) goto LAB_05827934;
      *(undefined8 *)(unaff_x24 + 0x20) = *(undefined8 *)(*plVar5 + 0x20);
      thunk_FUN_03048534((undefined8 *)(unaff_x24 + 0x20));
      if (*(long *)(unaff_x24 + 0x18) == 0) goto LAB_05827934;
      plVar5 = (long *)(*(long *)(unaff_x24 + 0x18) + 0x20);
      *plVar5 = unaff_x24;
      thunk_FUN_03048534(plVar5,unaff_x24);
      if (*(long *)(unaff_x24 + 0x20) != 0) {
        plVar5 = (long *)(*(long *)(unaff_x24 + 0x20) + 0x18);
        *plVar5 = unaff_x24;
        thunk_FUN_03048534(plVar5,unaff_x24);
      }
      unaff_w23 = unaff_w23 + 1;
      unaff_w28 = unaff_w28 + 1;
      while (unaff_w21 < unaff_w28) {
        unaff_w26 = unaff_w26 + 1;
        unaff_w28 = unaff_w22;
        if (unaff_w27 < unaff_w26) {
          if ((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x38) == 0))
          goto LAB_05827934;
          iVar1 = *(int *)(*(long *)(in_stack_00000008 + 0x38) + 0x18);
          goto joined_r0x0582786c;
        }
      }
      if ((in_stack_00000008 == 0) || (lVar3 = *(long *)(in_stack_00000008 + 0x38), lVar3 == 0))
      goto LAB_05827934;
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      if (*(int *)(lVar3 + 0x18) <= unaff_w23) break;
      unaff_x24 = FUN_04430018(lVar3,unaff_w23,*(undefined8 *)(lVar4 + 0x98));
    }
    lVar3 = *(long *)(unaff_x20 + 0x30);
    if (lVar3 == 0) break;
    if (*(int *)(lVar3 + 0x18) < 1) {
      if ((*(byte *)(*(long *)(lVar4 + 0x48) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      unaff_x24 = thunk_FUN_0301080c();
      FUN_041427c8(unaff_x24,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    }
    else {
      unaff_x24 = FUN_04bb5e58(lVar3,*(undefined8 *)(lVar4 + 0xb0));
    }
    if (unaff_x24 == 0) break;
    *(long *)(unaff_x24 + 0x10) = in_stack_00000008;
    thunk_FUN_03048534();
  }
LAB_05827934:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
joined_r0x0582786c:
  iVar1 = iVar1 + -1;
  if (iVar1 < unaff_w23) {
    return;
  }
  if (((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x38) == 0)) ||
     (lVar3 = FUN_04430018(*(long *)(in_stack_00000008 + 0x38),iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98)),
     lVar3 == 0)) goto LAB_05827934;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  thunk_FUN_03048534((undefined8 *)(lVar3 + 0x10),0);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  thunk_FUN_03048534((undefined8 *)(lVar3 + 0x20),0);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  thunk_FUN_03048534((undefined8 *)(lVar3 + 0x18),0);
  if ((in_stack_00000008 == 0) || (*(long *)(in_stack_00000008 + 0x38) == 0)) goto LAB_05827934;
  FUN_044319c0(*(long *)(in_stack_00000008 + 0x38),iVar1,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0));
  if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_05827934;
  FUN_04bb5f48(*(long *)(unaff_x20 + 0x30),lVar3,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 200));
  goto joined_r0x0582786c;
}


