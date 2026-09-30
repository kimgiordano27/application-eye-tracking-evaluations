/*
FUNCTION_NAME: OVRPlugin$$set_DebugRecenterCount
ENTRY_POINT: 076d2dfc
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_DebugRecenterCount(float param_1,float param_2)

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
  long *unaff_x20;
  long *plVar9;
  int iVar10;
  long *unaff_x22;
  long *plVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  if (**(float **)(*unaff_x20 + 0xb8) < ABS(param_2 - param_1)) {
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_076d2fd0;
    FUN_08548810(*(long *)(unaff_x19 + 0x28),0);
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_076d2fd0;
    FUN_08548998(*(undefined4 *)(unaff_x19 + 0x50),*(long *)(unaff_x19 + 0x28),0);
  }
  plVar9 = *(long **)(unaff_x19 + 0x68);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076d2e8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar9,*unaff_x22,0);
LAB_076d2e8c:
    iVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    puVar2 = PTR_DAT_08fadf20;
    puVar1 = PTR_DAT_08f6a1b8;
    if (0 < iVar3) {
      iVar10 = 0;
      do {
        plVar9 = *(long **)(unaff_x19 + 0x68);
        if (plVar9 == (long *)0x0) goto LAB_076d2fd0;
        lVar6 = *plVar9;
        plVar11 = *(long **)(unaff_x19 + 0x58);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076d2f10;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)puVar2,0);
LAB_076d2f10:
        uVar4 = (*(code *)*puVar5)(plVar9,iVar10,puVar5[1]);
        if (plVar11 == (long *)0x0) goto LAB_076d2fd0;
        lVar6 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
              goto LAB_076d2f78;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar1,9);
LAB_076d2f78:
        uVar7 = (*(code *)*puVar5)(plVar11,uVar4);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_076d2fd0;
          FUN_085495f0(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                       *(long *)(unaff_x19 + 0x28),iVar10,0);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar3);
    }
    return;
  }
LAB_076d2fd0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


