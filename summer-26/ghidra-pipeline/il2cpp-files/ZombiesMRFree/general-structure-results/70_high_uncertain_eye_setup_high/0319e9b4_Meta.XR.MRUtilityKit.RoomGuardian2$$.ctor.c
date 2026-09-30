/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.RoomGuardian2$$.ctor
ENTRY_POINT: 0319e9b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_RoomGuardian2___ctor(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  uVar2 = FUN_06937c40(*(undefined8 *)PTR_DAT_06f71d48,**(undefined8 **)(param_2 + 0xb8),0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0319ebfc;
                    /* catch() { ... } // from try @ 0319ea28 with catch @ 0319e9ec */
    FUN_03177dbc(*(long *)(unaff_x19 + 0x28),6,0);
  }
  uVar2 = FUN_0319ecd0();
  if ((uVar2 & 1) != 0) {
    lVar5 = *unaff_x21;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_02feb320(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    uVar2 = FUN_06937c40(*(undefined8 *)PTR_DAT_06f71d38,**(undefined8 **)(lVar4 + 0xb8),0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0319ebfc;
      FUN_03177dbc(*(long *)(unaff_x19 + 0x28),5,0);
    }
  }
  puVar1 = PTR_DAT_06f71d40;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    uVar3 = FUN_068fc8bc(*(long *)(unaff_x19 + 0x30),0);
    uVar3 = FUN_059687dc(*(undefined8 *)puVar1,uVar3,0);
    lVar5 = *unaff_x21;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_02feb320(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    uVar2 = FUN_06937c40(uVar3,**(undefined8 **)(lVar4 + 0xb8),0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0319ebfc;
      FUN_03177f2c(*(long *)(unaff_x19 + 0x28),0);
    }
    FUN_069393ec(0);
    FUN_06938e64(0);
    return;
  }
LAB_0319ebfc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


