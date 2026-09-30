/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_session_handle_get
ENTRY_POINT: 0811d600
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


bool Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_session_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e856e0);
  *(undefined1 *)(unaff_x22 + 0xcb3) = 1;
  puVar1 = PTR_DAT_08e81f68;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e81f68) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
        goto LAB_0811d674;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_0811d674:
  iVar4 = (*(code *)*puVar6)();
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_0811d6d4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_0811d6d4:
  iVar5 = (*(code *)*puVar6)();
  if (iVar5 == 0) {
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
          goto LAB_0811d740;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
LAB_0811d740:
    uVar8 = (*(code *)*puVar6)();
    if ((uVar8 & 1) == 0) {
      lVar7 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_0811d7a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_0811d7a0:
      uVar8 = (*(code *)*puVar6)();
      if ((uVar8 & 1) != 0) goto LAB_0811d7b4;
    }
  }
  else if (iVar5 != 2) goto LAB_0811d7b4;
  iVar4 = 0;
LAB_0811d7b4:
  puVar2 = PTR_DAT_08e856e0;
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto LAB_0811d80c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_03cf1348();
LAB_0811d80c:
  fVar10 = (float)(*(code *)*puVar6)();
  in_stack_00000008 = 0;
  FUN_05fd374c(&stack0x00000008,iVar4,*(undefined8 *)puVar2);
  *unaff_x19 = in_stack_00000008;
  if (iVar4 == unaff_w20) {
    if (DAT_094108d2 == '\0') {
      FUN_03c8f898(PTR_DAT_08e722b0);
      DAT_094108d2 = '\x01';
    }
    fVar12 = ABS(fVar10);
    if (ABS(fVar10) <= ABS(unaff_s8)) {
      fVar12 = ABS(unaff_s8);
    }
    fVar13 = **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) * 8.0;
    fVar11 = fVar12 * DAT_018b0840;
    if (fVar12 * DAT_018b0840 <= fVar13) {
      fVar11 = fVar13;
    }
    bVar3 = fVar11 <= ABS(unaff_s8 - fVar10);
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


