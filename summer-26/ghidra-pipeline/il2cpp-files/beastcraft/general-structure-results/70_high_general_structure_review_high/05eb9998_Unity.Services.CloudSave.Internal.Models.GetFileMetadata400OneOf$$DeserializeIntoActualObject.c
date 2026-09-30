/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.Models.GetFileMetadata400OneOf$$DeserializeIntoActualObject
ENTRY_POINT: 05eb9998
PROGRAM: beastcraft-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


void Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf__DeserializeIntoActualObject
               (ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  byte unaff_w22;
  long *plVar12;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06ab5ed0);
    FUN_02e3ca1c(PTR_DAT_06ab5ed8);
    FUN_02e3ca1c(PTR_DAT_06ab5ee0);
    FUN_02e3ca1c(PTR_DAT_06ab5ee8);
    FUN_02e3ca1c(object___var);
    FUN_02e3ca1c(PTR_DAT_06aadae0);
    FUN_02e3ca1c(PTR_DAT_06ab0978);
    FUN_02e3ca1c(PTR_DAT_06a6f058);
    FUN_02e3ca1c(PTR_DAT_06ab5ec8);
    FUN_02e3ca1c(UnityEngine_RaycastHit___var);
    FUN_02e3ca1c(PTR_DAT_06ab60a0);
    FUN_02e3ca1c(UnityEngine_RaycastHit2D___var);
    *(undefined1 *)(unaff_x24 + 0x23b) = 1;
  }
  puVar7 = UnityEngine_RaycastHit___var;
  puVar3 = PTR_DAT_06aadae0;
  puVar2 = PTR_DAT_06a6f058;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  puVar6 = PTR_DAT_06ab5ee8;
  puVar5 = PTR_DAT_06ab5ee0;
  puVar4 = PTR_DAT_06ab5ed8;
  FUN_05eaf580();
  *(undefined4 *)(unaff_x19 + 0x10) = 0xdc;
  *(undefined8 *)(unaff_x19 + 0xe0) = unaff_x20;
  thunk_FUN_02ee2be8();
  *(undefined8 *)(unaff_x19 + 0xe8) = unaff_x21;
  thunk_FUN_02ee2be8();
  uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)puVar3);
  FUN_05dc63a8(uVar8,*(undefined8 *)puVar7,0);
  FUN_05eaf880();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  puVar2 = PTR_DAT_06ab5ed0;
  uVar8 = FUN_0629f478(0);
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  FUN_042584e8(&stack0x00000020,uVar8,*(undefined8 *)puVar6);
  FUN_0629c8b0();
  uVar8 = *(undefined8 *)puVar5;
  *(byte *)(unaff_x19 + 0x100) = unaff_w22 & 1;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  lVar9 = thunk_FUN_02e78ab8(uVar8);
  FUN_03f82dec(lVar9,*(undefined8 *)puVar4);
  plVar12 = (long *)(unaff_x19 + 0xd8);
  *plVar12 = lVar9;
  thunk_FUN_02ee2be8(plVar12,lVar9);
  lVar9 = *plVar12;
  FUN_062a3058();
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar11 = *(long *)puVar2;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0;
      }
      else {
        FUN_03f83680(lVar9,0,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      puVar2 = PTR_DAT_06ab0978;
      uVar8 = thunk_FUN_02e78ab8(*(undefined8 *)object___var);
      FUN_05648568(uVar8,0);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
      thunk_FUN_02ee2be8(unaff_x19 + 0x108,uVar8);
      uVar8 = FUN_02e3cb08(*(undefined8 *)puVar2,4);
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar8;
      thunk_FUN_02ee2be8();
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      *(undefined1 *)(unaff_x19 + 0x53) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


