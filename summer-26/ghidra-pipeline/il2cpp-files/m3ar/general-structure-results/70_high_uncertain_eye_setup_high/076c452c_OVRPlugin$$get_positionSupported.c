/*
FUNCTION_NAME: OVRPlugin$$get_positionSupported
ENTRY_POINT: 076c452c
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_positionSupported(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long *plVar10;
  long unaff_x22;
  long *plVar11;
  
  plVar11 = *(long **)(unaff_x22 + 0x1b8);
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *plVar11) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 0x13) * 0x10 + 0x138);
        goto LAB_076c457c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20();
LAB_076c457c:
  uVar2 = (*(code *)*puVar3)();
  plVar10 = *(long **)(unaff_x19 + 0x28);
  if (plVar10 == (long *)0x0) {
LAB_076c4674:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = *plVar10;
  lVar4 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
        goto LAB_076c45e4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_0406ae20(plVar10,lVar4,0xd);
LAB_076c45e4:
  uVar7 = (*(code *)*puVar3)(plVar10,unaff_x19 + 0x58,puVar3[1]);
  puVar1 = PTR_DAT_08fad940;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(unaff_x19 + 0x38) == '\0') {
      iVar9 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x40) == 0) ||
           (lVar4 = FUN_076c3c38(*(long *)(unaff_x19 + 0x40),iVar9), lVar4 == 0)) goto LAB_076c4674;
        uVar5 = *(undefined8 *)puVar1;
        *(undefined4 *)(lVar4 + 0x10) = uVar2;
        FUN_05267f60(lVar4,uVar5);
        iVar9 = iVar9 + 1;
      } while (iVar9 != 5);
    }
    else {
      iVar9 = 0;
      do {
        if ((*(long *)(unaff_x19 + 0x40) == 0) ||
           (lVar4 = FUN_076c3c38(*(long *)(unaff_x19 + 0x40),iVar9), lVar4 == 0)) goto LAB_076c4674;
        iVar9 = iVar9 + 1;
        *(undefined4 *)(lVar4 + 0x10) = uVar2;
      } while (iVar9 != 5);
    }
  }
  return;
}


