/*
FUNCTION_NAME: OVRPassthroughColorLut$$GetTextureSizeFromByteArray
ENTRY_POINT: 053b076c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void OVRPassthroughColorLut__GetTextureSizeFromByteArray(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  puVar1 = Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo;
  if ((param_1 & 1) == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9600);
    uVar5 = thunk_FUN_02f45270();
    uVar6 = thunk_FUN_02f6ef30(
                              Oculus_Platform_MessageWithNetSyncSessionsChangedNotification_TypeInfo
                              );
    FUN_0510bee0(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02f6ef30(Oculus_Platform_MessageWithOrgScopedID_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,uVar6);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Oculus_Platform_MessageWithNetSyncVoipAttenuationValueList_TypeInfo) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_053b07cc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_053b07cc:
  (*(code *)*puVar4)();
  lVar7 = *unaff_x22;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *unaff_x22;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 == 0) {
    if (in_stack_00000008._4_4_ != 0) {
      FUN_050f577c(0);
    }
    lVar7 = 0;
    in_stack_00000008._4_4_ = 0;
  }
  else {
    if (*(uint *)(lVar7 + 0x18) < in_stack_00000008._4_4_) {
      FUN_050f577c(0);
    }
    lVar7 = lVar7 + 0x20;
  }
  FUN_053b09c0(lVar7,in_stack_00000008._4_4_);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_053b0888;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_053b0888:
  uVar2 = (*(code *)*puVar4)();
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_053b08ec;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_053b08ec:
  uVar3 = (*(code *)*puVar4)();
  if ((uVar2 & (uVar3 ^ 0xffffffff) & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_053b0954;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0();
LAB_053b0954:
    (*(code *)*puVar4)();
  }
  return;
}


