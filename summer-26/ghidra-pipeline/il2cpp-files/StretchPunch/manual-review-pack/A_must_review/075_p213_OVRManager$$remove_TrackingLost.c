/*
FUNCTION_NAME: OVRManager$$remove_TrackingLost
ENTRY_POINT: 033a65f4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


int OVRManager__remove_TrackingLost(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x26;
  long lVar13;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_01dde7f8();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar9 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    unaff_x23 = FUN_033dc904(unaff_x23,**(undefined4 **)(lVar9 + 0xb8),0);
    uVar10 = FUN_033dc8f8();
    uVar11 = FUN_033dc8f8(unaff_x23,0);
    if (uVar10 < uVar11) break;
    puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
    puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
    uVar12 = *puVar1;
    uVar4 = puVar1[1];
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar13 = *(long *)StringLiteral_8435;
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    lVar13 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x58);
    lVar9 = *(long *)(lVar13 + 0x20);
    in_stack_00000018 = uVar12;
    in_stack_00000020 = uVar4;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar9 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    uVar10 = FUN_028549c8(&stack0x00000018,uVar3,uVar5,
                          *(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x38));
    if ((uVar10 & 1) == 0) break;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_x21 = *(long *)StringLiteral_8434;
    param_1 = *(long *)(unaff_x21 + 0x20);
    in_w8 = *(byte *)(param_1 + 0x135);
  }
  uVar10 = FUN_033dc8f8();
  uVar12 = FUN_033dc904(unaff_x23,4,0);
  uVar11 = FUN_033dc8f8(uVar12,0);
  if (uVar11 <= uVar10) {
    do {
      uVar10 = OVRPlugin_UnityOpenXR__OnSessionStateChange
                         (*(undefined8 *)(unaff_x20 + unaff_x23 * 2),
                          *(undefined8 *)(unaff_x19 + unaff_x23 * 2),0);
      if ((uVar10 & 1) != 0) break;
      unaff_x23 = FUN_033dc904(unaff_x23,4,0);
      uVar10 = FUN_033dc8f8();
      uVar12 = FUN_033dc904(unaff_x23,4,0);
      uVar11 = FUN_033dc8f8(uVar12,0);
    } while (uVar11 <= uVar10);
  }
  uVar10 = FUN_033dc8f8();
  uVar12 = FUN_033dc904(unaff_x23,2,0);
  uVar11 = FUN_033dc8f8(uVar12,0);
  if ((uVar11 <= uVar10) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_033dc904(unaff_x23,2,0);
  }
  uVar10 = FUN_033dc8f8(unaff_x23,0);
  uVar11 = FUN_033dc8f8();
  puVar7 = StringLiteral_1167;
  iVar8 = in_stack_00000010._4_4_;
  if (uVar10 < uVar11) {
    do {
      uVar6 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar8 = FUN_032931ec(unaff_x20 + unaff_x23 * 2,uVar6,0);
      if (iVar8 != 0) break;
      unaff_x23 = FUN_033dc904(unaff_x23,1,0);
      uVar10 = FUN_033dc8f8(unaff_x23,0);
      uVar11 = FUN_033dc8f8();
      iVar8 = in_stack_00000010._4_4_;
    } while (uVar10 < uVar11);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}


