/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 04a2e16c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry___cctor(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  ulong in_x11;
  uint unaff_w21;
  int unaff_w22;
  long unaff_x24;
  long *plVar12;
  long unaff_x25;
  uint unaff_w27;
  long unaff_x28;
  uint unaff_w29;
  long in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  do {
    plVar12 = *(long **)(unaff_x24 + 0x30);
    if (plVar12 == (long *)0x0) {
LAB_04a2e37c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
    lVar9 = unaff_x28 + (ulong)unaff_w29 * (in_x11 & 0xffffffff);
    uVar5 = *(undefined8 *)(lVar9 + 8);
    uVar6 = *(undefined8 *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02b76218(lVar7);
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04a2e1f4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_02b7654c(plVar12,lVar7,0);
LAB_04a2e1f4:
    uVar10 = (*(code *)*puVar4)(plVar12,uVar5,uVar6);
    if ((uVar10 & 1) != 0) {
      if ((int)unaff_w21 < 0) {
        uVar8 = *(uint *)(in_stack_00000028 + 0x18);
        if (uVar8 <= unaff_w27) goto LAB_04a2e33c;
        lVar7 = *(long *)(unaff_x24 + 0x10);
        if (lVar7 == 0) goto LAB_04a2e37c;
        if (*(uint *)(lVar7 + 0x18) <= (uint)in_stack_00000008) goto LAB_04a2e33c;
        *(int *)(lVar7 + in_stack_00000008 * 4 + 0x20) =
             *(int *)(unaff_x28 + (ulong)unaff_w29 * 0x18 + 4) + 1;
      }
      else {
        uVar8 = *(uint *)(in_stack_00000028 + 0x18);
        if ((uVar8 <= unaff_w27) || (uVar8 <= unaff_w21)) goto LAB_04a2e33c;
        *(undefined4 *)(unaff_x28 + (ulong)unaff_w21 * 0x18 + 4) =
             *(undefined4 *)(unaff_x28 + (ulong)unaff_w29 * 0x18 + 4);
      }
      if (unaff_w27 < uVar8) {
        iVar1 = *(int *)(unaff_x24 + 0x38);
        uVar2 = *(undefined4 *)(unaff_x24 + 0x28);
        iVar3 = *(int *)(unaff_x24 + 0x20) + -1;
        *(int *)(unaff_x24 + 0x20) = iVar3;
        *in_x10 = -1;
        *(undefined4 *)(unaff_x28 + (ulong)unaff_w29 * 0x18 + 4) = uVar2;
        *(int *)(unaff_x24 + 0x38) = iVar1 + 1;
        if (iVar3 == 0) {
          unaff_w27 = 0xffffffff;
          *(undefined4 *)(unaff_x24 + 0x24) = 0;
        }
        *(uint *)(unaff_x24 + 0x28) = unaff_w27;
        return 1;
      }
LAB_04a2e33c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    in_x11 = 0x18;
    do {
      unaff_w21 = unaff_w27;
      uVar8 = (uint)*(undefined8 *)(in_stack_00000028 + 0x18);
      if ((int)uVar8 <= unaff_w22) {
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar5 = thunk_FUN_02b79644();
        uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
        FUN_04d7b3f4(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar5,in_stack_00000020);
      }
      if (uVar8 <= unaff_w21) goto LAB_04a2e33c;
      unaff_w22 = unaff_w22 + 1;
      unaff_w29 = *(uint *)(unaff_x28 + (ulong)unaff_w29 * 0x18 + 4);
      if ((int)unaff_w29 < 0) {
        return 0;
      }
      if (uVar8 <= unaff_w29) goto LAB_04a2e33c;
      in_x10 = (int *)(unaff_x28 + (ulong)unaff_w29 * 0x18);
      unaff_x25 = in_stack_00000020;
      unaff_w27 = unaff_w29;
    } while (*in_x10 != in_stack_00000018._4_4_);
  } while( true );
}


