/*
FUNCTION_NAME: OVRManager$$remove_TrackingAcquired
ENTRY_POINT: 033a643c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


int OVRManager__remove_TrackingAcquired(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  long unaff_x23;
  ulong unaff_x24;
  long *unaff_x26;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01dde7f8();
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_01dde7f8();
  }
  if ((ulong)(long)**(int **)(lVar10 + 0xb8) <= unaff_x24) {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar14 = *(long *)StringLiteral_8434;
    lVar10 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar10 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01dde7f8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar10 + 0xc0) + 8) + 0x135) & 1) == 0) {
      FUN_01dde7f8();
    }
    uVar11 = FUN_033dc90c();
    do {
      puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
      puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar14 = *(long *)StringLiteral_8435;
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar14 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x58);
      lVar10 = *(long *)(lVar14 + 0x20);
      in_stack_00000018 = uVar3;
      in_stack_00000020 = uVar5;
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      uVar12 = FUN_028549c8(&stack0x00000018,uVar4,uVar6,
                            *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x38));
      if ((uVar12 & 1) == 0) break;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar14 = *(long *)StringLiteral_8434;
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)(lVar14 + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8();
      }
      unaff_x23 = FUN_033dc904(unaff_x23,**(undefined4 **)(lVar10 + 0xb8),0);
      uVar12 = FUN_033dc8f8(uVar11,0);
      uVar13 = FUN_033dc8f8(unaff_x23,0);
    } while (uVar13 <= uVar12);
  }
  uVar12 = FUN_033dc8f8();
  uVar11 = FUN_033dc904(unaff_x23,4,0);
  uVar13 = FUN_033dc8f8(uVar11,0);
  if (uVar13 <= uVar12) {
    do {
      uVar12 = OVRPlugin_UnityOpenXR__OnSessionStateChange
                         (*(undefined8 *)(unaff_x20 + unaff_x23 * 2),
                          *(undefined8 *)(unaff_x19 + unaff_x23 * 2),0);
      if ((uVar12 & 1) != 0) break;
      unaff_x23 = FUN_033dc904(unaff_x23,4,0);
      uVar12 = FUN_033dc8f8();
      uVar11 = FUN_033dc904(unaff_x23,4,0);
      uVar13 = FUN_033dc8f8(uVar11,0);
    } while (uVar13 <= uVar12);
  }
  uVar12 = FUN_033dc8f8();
  uVar11 = FUN_033dc904(unaff_x23,2,0);
  uVar13 = FUN_033dc8f8(uVar11,0);
  if ((uVar13 <= uVar12) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_033dc904(unaff_x23,2,0);
  }
  uVar12 = FUN_033dc8f8(unaff_x23,0);
  uVar13 = FUN_033dc8f8();
  puVar8 = StringLiteral_1167;
  iVar9 = in_stack_00000010._4_4_;
  if (uVar12 < uVar13) {
    do {
      uVar7 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar9 = FUN_032931ec(unaff_x20 + unaff_x23 * 2,uVar7,0);
      if (iVar9 != 0) break;
      unaff_x23 = FUN_033dc904(unaff_x23,1,0);
      uVar12 = FUN_033dc8f8(unaff_x23,0);
      uVar13 = FUN_033dc8f8();
      iVar9 = in_stack_00000010._4_4_;
    } while (uVar12 < uVar13);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}


