/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 0877424c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long * Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize
                 (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x23;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138);
      goto LAB_08774284;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_03d8f370();
LAB_08774284:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) != 0) {
    lVar6 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 087742b4 to 0887436f has its CatchHandler @ 087742b4
                       catch() { ... } // from try @ 087742b4 with catch @ 087742b4
                       catch() { ... } // from try @ 087744c8 with catch @ 087742b4
                       catch() { ... } // from try @ 08774534 with catch @ 087742b4
                       catch() { ... } // from try @ 087745bc with catch @ 087742b4
                       catch() { ... } // from try @ 08774628 with catch @ 087742b4
                       catch() { ... } // from try @ 08774694 with catch @ 087742b4
                       catch() { ... } // from try @ 087746d4 with catch @ 087742b4 */
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_087742e0;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370();
LAB_087742e0:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 == 1) {
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
            goto LAB_08774394;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_03d8f370();
LAB_08774394:
      unaff_x19 = (long *)(*(code *)*puVar2)();
    }
    else if (1 < iVar1) {
      thunk_FUN_03d1e194(PTR_DAT_09208640);
      uVar4 = thunk_FUN_03d2ef40();
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_092890b8);
      FUN_0718715c(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03d1e194(PTR_DAT_092890c0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar4,uVar5);
    }
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar6 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_087743fc;
      }
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(unaff_x19,*unaff_x23,0xf);
LAB_087743fc:
  (*(code *)*puVar2)(unaff_x19);
  return unaff_x19;
}


