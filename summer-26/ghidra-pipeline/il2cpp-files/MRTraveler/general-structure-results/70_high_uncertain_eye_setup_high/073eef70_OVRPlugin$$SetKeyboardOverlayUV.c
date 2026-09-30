/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 073eef70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetKeyboardOverlayUV(ulong param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x21;
  long lVar10;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e73668);
    *(undefined1 *)(unaff_x21 + 0x839) = 1;
  }
  puVar2 = PTR_DAT_08e73668;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000048 = 0;
  if (param_3 != (long *)0x0) {
    lVar6 = *param_3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08e73668) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x12) * 0x10 + 0x138);
          goto LAB_073eeffc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(param_3,*(long *)PTR_DAT_08e73668,0x12);
LAB_073eeffc:
    uVar8 = (*(code *)*puVar5)(param_3,&stack0x00000050,puVar5[1]);
    if ((uVar8 & 1) != 0) {
      lVar7 = *param_3;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
            goto LAB_073ef060;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(param_3,lVar6,0xd);
LAB_073ef060:
      uVar8 = (*(code *)*puVar5)(param_3,&stack0x00000048,puVar5[1]);
      uVar4 = uStack000000000000005c;
      uVar3 = in_stack_00000048;
      if ((uVar8 & 1) != 0) {
        uVar1 = CONCAT44(in_stack_00000068,uStack0000000000000064);
        lVar10 = *(long *)(param_2 + 0x18);
        lVar7 = *param_3;
        lVar6 = *(long *)puVar2;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_073ef0d8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03cf1348(param_3,lVar6,0);
LAB_073ef0d8:
        (*(code *)*puVar5)(param_3,puVar5[1]);
        if (lVar10 == 0) goto LAB_073ef13c;
        uStack000000000000000c = uVar4;
        uStack0000000000000014 = uVar1;
        FUN_073ef140(lVar10,uVar3);
        uVar8 = (ulong)*(uint *)(param_2 + 0x10);
        if (*(uint *)(param_2 + 0x10) == 0xffffffff) {
          uVar8 = FUN_073ee780();
          *(int *)(param_2 + 0x10) = (int)uVar8;
        }
        FUN_073ee7e8(uVar8,*(undefined8 *)(param_2 + 0x18));
      }
    }
    return;
  }
LAB_073ef13c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


