/*
FUNCTION_NAME: OVRPlugin.OVRP_1_52_0$$.cctor
ENTRY_POINT: 0290b338
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_52_0___cctor(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_016466fc(*unaff_x23);
  }
  plVar2 = (long *)FUN_031c8668(uVar10,0);
  if (param_1 != (long *)0x0) {
                    /* try { // try from 0290b370 to 02a0b37f has its CatchHandler @ 0290b380 */
                    /* catch() { ... } // from try @ 0290b2fc with catch @ 0290b380
                       catch() { ... } // from try @ 0290b370 with catch @ 0290b380 */
                    /* try { // try from 0290b384 to 02a0b387 has its CatchHandler @ 0290b390 */
    uVar3 = (**(code **)(*param_1 + 0x298))(param_1,plVar2,*(undefined8 *)(*param_1 + 0x2a0));
                    /* try { // try from 0290b388 to 02a0b393 has its CatchHandler @ 0290b218 */
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_0290b5dc;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0290b384 with catch @ 0290b390
                        */
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,param_1,*(undefined8 *)(*plVar2 + 0x2a0));
      if ((uVar3 & 1) == 0) {
        FUN_031dbd4c(0);
      }
    }
    plVar2 = (long *)thunk_FUN_015d0480();
    if (plVar2 == (long *)0x0) {
      FUN_031dbd4c();
    }
    plVar8 = *(long **)(unaff_x21 + 0x10);
    if (plVar8 != (long *)0x0) {
      lVar5 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_015c2790(lVar5);
      }
      lVar6 = *plVar8;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0290b47c;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80(plVar8,lVar5,0);
LAB_0290b47c:
      iVar1 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          plVar8 = *(long **)(unaff_x21 + 0x10);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
            lVar5 = FUN_015c2790(lVar5);
          }
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0290b508;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_015c2a80(plVar8,lVar5,0);
LAB_0290b508:
          (*(code *)*puVar4)(plVar8,iVar9,puVar4[1]);
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) &
              1) == 0) {
            FUN_015c2790();
          }
          lVar5 = thunk_FUN_015d01b0();
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
            uVar10 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar10,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar5;
          thunk_FUN_01656ef8(plVar2 + (long)(int)unaff_w19 + 4,lVar5);
          iVar9 = iVar9 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar9 != iVar1);
      }
      return;
    }
  }
LAB_0290b5dc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


