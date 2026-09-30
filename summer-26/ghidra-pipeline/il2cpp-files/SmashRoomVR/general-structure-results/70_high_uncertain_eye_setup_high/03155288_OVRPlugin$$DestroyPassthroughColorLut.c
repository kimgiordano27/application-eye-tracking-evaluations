/*
FUNCTION_NAME: OVRPlugin$$DestroyPassthroughColorLut
ENTRY_POINT: 03155288
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyPassthroughColorLut(undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  int iVar10;
  long *unaff_x22;
  long *plVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_038fcb14(param_2,*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_038fcb60(*(undefined4 *)(unaff_x19 + 0x50),*(long *)(unaff_x19 + 0x28),0);
      plVar9 = *(long **)(unaff_x19 + 0x68);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03155304;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ae9f78(plVar9,*unaff_x22,0);
LAB_03155304:
        iVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        puVar2 = PTR_DAT_03d80388;
        puVar1 = StringLiteral_13316;
        if (0 < iVar3) {
          iVar10 = 0;
          do {
            plVar9 = *(long **)(unaff_x19 + 0x68);
            if (plVar9 == (long *)0x0) goto LAB_03155448;
            lVar6 = *plVar9;
            plVar11 = *(long **)(unaff_x19 + 0x58);
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_03155388;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar2,0);
LAB_03155388:
            uVar4 = (*(code *)*puVar5)(plVar9,iVar10,puVar5[1]);
            if (plVar11 == (long *)0x0) goto LAB_03155448;
            lVar6 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
                  goto LAB_031553f0;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar1,9);
LAB_031553f0:
            uVar7 = (*(code *)*puVar5)(plVar11,uVar4);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03155448;
              FUN_038fcfa4(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                           *(long *)(unaff_x19 + 0x28),iVar10,0);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar3);
        }
        return;
      }
    }
  }
LAB_03155448:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


