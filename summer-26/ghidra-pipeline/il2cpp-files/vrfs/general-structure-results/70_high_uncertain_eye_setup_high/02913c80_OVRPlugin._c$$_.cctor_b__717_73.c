/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__717_73
ENTRY_POINT: 02913c80
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_<>c__<_cctor>b__717_73(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *plVar9;
  int iVar10;
  undefined8 in_stack_00000008;
  
  thunk_FUN_016466fc();
  plVar2 = (long *)FUN_031c8668();
  if (unaff_x23 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x23 + 0x298))();
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_02913eec;
                    /* try { // try from 02913cc4 to 02a13d17 has its CatchHandler @ 02913cc4
                       catch() { ... } // from try @ 02913cc4 with catch @ 02913cc4
                       catch() { ... } // from try @ 02913d6c with catch @ 02913cc4
                       catch() { ... } // from try @ 02913da8 with catch @ 02913cc4
                       catch() { ... } // from try @ 02913dd8 with catch @ 02913cc4
                       catch() { ... } // from try @ 02913e4c with catch @ 02913cc4 */
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2);
      if ((uVar3 & 1) == 0) {
        FUN_031dbd4c(0);
      }
    }
    plVar2 = (long *)thunk_FUN_015d0480();
    if (plVar2 == (long *)0x0) {
      FUN_031dbd4c();
    }
    plVar9 = *(long **)(unaff_x21 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_015c2790(lVar6);
      }
      lVar7 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02913da4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_015c2a80(plVar9,lVar6,0);
LAB_02913da4:
      iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (0 < iVar1) {
        iVar10 = 0;
        do {
          plVar9 = *(long **)(unaff_x21 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_015c2790(lVar6);
          }
          lVar7 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto OVRPlugin_<>c__<_cctor>b__717_77;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_015c2a80(plVar9,lVar6,0);
OVRPlugin_<>c__<_cctor>b__717_77:
          in_stack_00000008._4_2_ = (*(code *)*puVar4)(plVar9,iVar10,puVar4[1]);
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
          if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
            lVar6 = FUN_015c2790();
          }
          lVar6 = thunk_FUN_015d01b0(lVar6,(long)&stack0x00000008 + 4);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
            uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
            FUN_0160ee7c(uVar5,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar6;
          thunk_FUN_01656ef8(plVar2 + (long)(int)unaff_w19 + 4,lVar6);
          iVar10 = iVar10 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar10 != iVar1);
      }
      return;
    }
  }
LAB_02913eec:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


