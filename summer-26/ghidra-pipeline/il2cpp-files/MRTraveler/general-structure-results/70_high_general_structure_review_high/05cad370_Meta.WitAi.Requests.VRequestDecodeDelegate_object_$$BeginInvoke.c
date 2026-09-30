/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequestDecodeDelegate<object>$$BeginInvoke
ENTRY_POINT: 05cad370
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequestDecodeDelegate<object>__BeginInvoke(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  void *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  void *unaff_x22;
  long *plVar7;
  size_t unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244(lVar3);
  }
  lVar4 = *unaff_x25;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_05cad3e8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03cf1348();
LAB_05cad3e8:
  iVar1 = (*(code *)*puVar2)();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03cf1244();
  }
  puVar2 = (undefined8 *)thunk_FUN_03cd7b0c();
  plVar7 = (long *)*puVar2;
  memcpy(unaff_x19,unaff_x22,unaff_x24);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  if (unaff_w20 < iVar1) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    *(int *)(unaff_x29 + -0xc) = unaff_w20;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138;
          goto LAB_05cad510;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_03cf1348(plVar7,lVar3,3);
LAB_05cad510:
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x19;
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_05cad52c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_03cf1348(plVar7,lVar3,2);
LAB_05cad52c:
    *(void **)(unaff_x29 + -0x20) = unaff_x19;
  }
  lVar3 = *(long *)(lVar3 + 8);
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar7,unaff_x29 + -0x20);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


