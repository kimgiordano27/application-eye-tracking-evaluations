/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 076d86ac
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long *plVar13;
  long *unaff_x24;
  long lVar14;
  
  FUN_0403162c(*(undefined8 *)(param_4 + 0x598));
  FUN_0403162c(PTR_DAT_08f65908);
  *(undefined1 *)(unaff_x20 + 0x25f) = 1;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar6 = FUN_08589e5c(uVar12,0,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
  }
  else {
    lVar7 = FUN_04a721c4();
    *(long *)(unaff_x19 + 0x20) = lVar7;
  }
  puVar2 = PTR_DAT_08f6a1a8;
  puVar1 = PTR_DAT_08f65908;
  if ((lVar7 != 0) && (plVar13 = *(long **)(lVar7 + 0x50), plVar13 != (long *)0x0)) {
    lVar7 = *plVar13;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f6a1a8) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_076d8778;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f6a1a8,0);
LAB_076d8778:
    puVar3 = PTR_DAT_08f6a1b0;
    uVar4 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    uVar12 = FUN_040316d0(*(undefined8 *)puVar1,uVar4);
    puVar1 = PTR_DAT_08f65568;
    uVar6 = 0;
    *(undefined8 *)(unaff_x19 + 0x30) = uVar12;
    do {
      lVar7 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d8800;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar2,0);
LAB_076d8800:
      iVar5 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      if ((long)iVar5 <= (long)uVar6) {
        return;
      }
      lVar7 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076d8860;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)puVar3,0);
LAB_076d8860:
      lVar7 = (*(code *)*puVar8)(plVar13,uVar6 & 0xffffffff,puVar8[1]);
      lVar14 = *(long *)(unaff_x19 + 0x30);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_0408f364(*unaff_x24);
      }
      uVar10 = FUN_0858816c(lVar7,0,0);
      if ((uVar10 & 1) == 0) {
        if (DAT_09539c10 == '\0') {
          FUN_0403162c(puVar1);
          DAT_09539c10 = '\x01';
        }
        puVar9 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        uVar4 = *puVar9;
        param_2 = puVar9[1];
        param_3 = puVar9[2];
      }
      else {
        if (lVar7 == 0) break;
        uVar4 = FUN_08597cec(lVar7,0);
      }
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar14 = lVar14 + uVar6 * 0xc;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(lVar14 + 0x20) = uVar4;
      *(undefined4 *)(lVar14 + 0x24) = param_2;
      *(undefined4 *)(lVar14 + 0x28) = param_3;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


