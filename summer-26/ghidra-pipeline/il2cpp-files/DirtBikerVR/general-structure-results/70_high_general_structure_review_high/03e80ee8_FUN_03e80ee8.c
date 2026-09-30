/*
FUNCTION_NAME: FUN_03e80ee8
ENTRY_POINT: 03e80ee8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void FUN_03e80ee8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_08975bbd & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08490100);
    FUN_03a8a718(PTR_DAT_0848ecc8);
    FUN_03a8a718(PTR_DAT_08486738);
    DAT_08975bbd = 1;
  }
  puVar1 = PTR_DAT_08486738;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_03e8117c;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2a8);
  if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = FUN_07c9c218(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x2a8), lVar3 == 0)) goto LAB_03e8117c;
    FUN_03fa9714(lVar3,0);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) goto LAB_03e8117c;
  if (*(char *)(lVar3 + 0xf3) == '\0') {
    uVar4 = *(undefined8 *)(lVar3 + 0x118);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar1);
    }
    uVar2 = FUN_07c9c218(uVar4,0,0);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) goto LAB_03e8117c;
    }
    else {
      if (lVar3 == 0) goto LAB_03e8117c;
      if (*(char *)(lVar3 + 0xf6) == '\0') {
        if (*(long *)(lVar3 + 0x118) == 0) goto LAB_03e8117c;
        FUN_03d6d89c(*(long *)(lVar3 + 0x118),1,1,0);
        goto LAB_03e81120;
      }
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x110);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9c218(uVar4,0,0);
    lVar3 = *(long *)(param_1 + 0x18);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) goto LAB_03e8117c;
    }
    else {
      if (lVar3 == 0) goto LAB_03e8117c;
      if (*(char *)(lVar3 + 0xf1) != '\0') {
        if (*(long *)(lVar3 + 0x110) == 0) goto LAB_03e8117c;
        System_Array__IndexOfImpl<SerializedCommand>(*(long *)(lVar3 + 0x110),0);
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar3 == 0)) goto LAB_03e8117c;
        System_Array__IndexOfImpl<Vector4>(lVar3,0);
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar3 == 0)) goto LAB_03e8117c;
        if ((*(char *)(lVar3 + 0x2a4) == '\0') || (*(char *)(lVar3 + 0x2a5) == '\0')) {
          FUN_03f28cf8(lVar3,0);
        }
        else {
          FUN_03f26eac(lVar3,0);
          if (((*(long *)(param_1 + 0x18) == 0) ||
              (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar3 == 0)) ||
             (*(long *)(lVar3 + 0x180) == 0)) goto LAB_03e8117c;
          if (0 < *(int *)(*(long *)(lVar3 + 0x180) + 0x18)) {
            FUN_03f28a48(lVar3,0);
          }
        }
        goto LAB_03e81120;
      }
    }
    if (*(char *)(lVar3 + 0xf6) != '\0') {
      if (*(long *)(lVar3 + 0x118) == 0) goto LAB_03e8117c;
      FUN_03d6e660(*(long *)(lVar3 + 0x118),0,1,0);
    }
  }
  else {
    lVar3 = FUN_0447aad0(lVar3,*(undefined8 *)PTR_DAT_08490100);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar1);
    }
    uVar2 = FUN_07c9c218(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) goto LAB_03e8117c;
      FUN_03ea0908(lVar3,0);
    }
  }
LAB_03e81120:
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2a8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9c218(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x2a8), lVar3 != 0)) {
      FUN_03fb50e8(lVar3,0);
      return;
    }
  }
LAB_03e8117c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


