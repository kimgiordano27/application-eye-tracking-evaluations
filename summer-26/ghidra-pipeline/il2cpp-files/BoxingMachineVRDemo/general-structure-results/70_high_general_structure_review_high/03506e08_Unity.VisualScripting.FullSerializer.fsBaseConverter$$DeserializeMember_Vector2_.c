/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Vector2>
ENTRY_POINT: 03506e08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


bool Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Vector2>(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar5;
  
  if (in_w8 == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar1 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xb) == '\0') {
    *unaff_x19 = 0;
    thunk_FUN_02dd37b4();
    return false;
  }
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  lVar1 = *(long *)(lVar5 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar1 = *(long *)(lVar5 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02d9a2e0();
  }
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) == '\0') {
LAB_03506ef4:
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x58);
    lVar1 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar1 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02d9a2e0();
    }
    if (**(char **)(lVar1 + 0xb8) == '\0') {
      if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x38) + 0x135) & 1) == 0) {
        FUN_02d9a2e0();
      }
      uVar4 = thunk_FUN_02d709fc();
      if (*(int *)(*(long *)PTR_DAT_06768be8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06768be8);
      }
      lVar1 = FUN_060f9da8(uVar4,0);
      goto LAB_03507018;
    }
  }
  else {
    plVar2 = (long *)FUN_033174a4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x21,unaff_x21[1],0,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) == 0) goto LAB_03506ef4;
  }
  if (*(int *)(*(long *)PTR_DAT_06768be8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar1 = FUN_03502cf0(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x48));
LAB_03507018:
  *unaff_x19 = lVar1;
  thunk_FUN_02dd37b4();
  return *unaff_x19 != 0;
}


