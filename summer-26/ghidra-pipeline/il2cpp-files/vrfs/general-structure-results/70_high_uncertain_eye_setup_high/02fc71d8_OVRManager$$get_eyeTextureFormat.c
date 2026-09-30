/*
FUNCTION_NAME: OVRManager$$get_eyeTextureFormat
ENTRY_POINT: 02fc71d8
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__get_eyeTextureFormat(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar10;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  char in_stack_00000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  do {
    if ((*(byte *)(param_2 + 0x132) & 1) == 0) {
      param_2 = FUN_015c2790(param_2);
    }
    lVar7 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == param_2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02fc7238;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_015c2a80();
LAB_02fc7238:
    uVar8 = (*(code *)*puVar4)();
    if ((uVar8 & 1) != 0) {
      if (in_stack_00000000 == '\x02') {
        uStack0000000000000004 = in_stack_00000008._4_4_;
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          lVar7 = FUN_015c2790();
        }
        uVar5 = thunk_FUN_015d01b0(lVar7,&stack0x00000004);
        FUN_031dbe34(uVar5,0);
      }
      else if (in_stack_00000000 == '\x01') {
        if ((uint)unaff_x22 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x26 + unaff_x22 * 0x10 + 0x2c) = unaff_w19;
          return 1;
        }
LAB_02fc74b4:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      return 0;
    }
    uVar8 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar8 <= (uint)unaff_x22) goto LAB_02fc74b4;
      uVar10 = *(uint *)(unaff_x26 + unaff_x22 * 0x10 + 0x24);
      if ((int)(uint)uVar8 <= unaff_w29) {
        FUN_031dbf48(0);
      }
      uVar8 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar8 <= uVar10) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar10 = *(uint *)(unaff_x20 + 0x20);
          if (uVar10 == (uint)uVar8) {
            (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x168) + 8))();
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
            if (lVar7 == 0) goto LAB_02fc74b8;
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_02fc74b4;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
          }
          if (unaff_x26 == 0) {
LAB_02fc74b8:
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          bVar6 = false;
        }
        else {
          uVar10 = *(uint *)(unaff_x20 + 0x24);
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          bVar6 = true;
        }
        if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
          if (bVar6) {
            *(undefined4 *)(unaff_x20 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (long)(int)uVar10 * 0x10 + 0x24);
          }
          lVar7 = unaff_x26 + (long)(int)uVar10 * 0x10;
          *(int *)(lVar7 + 0x20) = unaff_w27;
          *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
          *(undefined4 *)(lVar7 + 0x28) = in_stack_00000008._4_4_;
          *(undefined4 *)(lVar7 + 0x2c) = unaff_w19;
          *unaff_x28 = uVar10 + 1;
          return 1;
        }
        goto LAB_02fc74b4;
      }
      unaff_x22 = (long)(int)uVar10;
    } while (*(int *)(unaff_x26 + (long)(int)uVar10 * 0x10 + 0x20) != unaff_w27);
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x148);
  } while( true );
}


