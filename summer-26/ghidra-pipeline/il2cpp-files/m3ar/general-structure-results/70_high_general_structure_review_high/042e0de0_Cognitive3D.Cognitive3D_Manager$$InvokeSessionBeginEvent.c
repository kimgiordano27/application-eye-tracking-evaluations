/*
FUNCTION_NAME: Cognitive3D.Cognitive3D_Manager$$InvokeSessionBeginEvent
ENTRY_POINT: 042e0de0
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Cognitive3D_Cognitive3D_Manager__InvokeSessionBeginEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_DAT_08f678f0;
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  plVar9 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x20);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f678f0) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
        goto Cognitive3D_Cognitive3D_Manager__SetSessionProperties;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f678f0,10);
Cognitive3D_Cognitive3D_Manager__SetSessionProperties:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  puVar2 = PTR_DAT_08f71fe8;
  lVar6 = *(long *)PTR_DAT_08f71fe8;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar6 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar6 + 0xb8);
  lVar10 = puVar4[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar11 = *puVar4;
    lVar10 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f72000);
    FUN_053442e0(lVar10,uVar11,*(undefined8 *)PTR_DAT_08f72008,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar10;
  }
  uVar7 = FUN_04ac633c(uVar5,lVar10,*(undefined8 *)PTR_DAT_08f71ff8);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar9 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x20);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar5 = *(undefined8 *)PTR_DAT_08f6a6f0;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x26) * 0x10 + 0x138);
          goto LAB_042e0f84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)puVar1,0x26);
LAB_042e0f84:
    (*(code *)*puVar4)(plVar9,uVar5,puVar4[1]);
  }
  cVar3 = DAT_09539e13;
  *unaff_x19 = 0xfffffffe;
  if (cVar3 == '\0') {
    FUN_0403162c(PTR_DAT_08f67a78);
    DAT_09539e13 = '\x01';
  }
  plVar9 = *(long **)(unaff_x19 + 2);
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f67a78) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_042e101c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f67a78,2);
LAB_042e101c:
                    /* WARNING: Could not recover jumptable at 0x042e1038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar9,puVar4[1]);
  return;
}


