/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_95
ENTRY_POINT: 033fea88
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033febd0) */
/* WARNING: Removing unreachable block (ram,0x033fecec) */
/* WARNING: Removing unreachable block (ram,0x033fecf8) */

undefined4 OVRPlugin_<>c__<_cctor>b__786_95(void)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined4 uVar12;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
  *(undefined1 *)(unaff_x19 + 0xc1d) = 1;
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar5 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  iVar3 = thunk_FUN_01dc9540(0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  OVRPlugin_<>c__<_cctor>b__786_54(lVar5);
  in_stack_00000008 = (long *)0x0;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fe9d8 with catch @ 033feac8
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fe9a4 with catch @ 033feacc
                        */
  uVar6 = FUN_033fd7c0(lVar5);
  puVar1 = StringLiteral_9537;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033fe9fc with catch @ 033fead0
                        */
  do {
    iVar4 = thunk_FUN_01dc9540(0);
                    /* try { // try from 033feae8 to 034feaeb has its CatchHandler @ 033feafc */
    if (0x1d < iVar4 - iVar3) {
LAB_033fec90:
      uVar12 = 1;
      goto LAB_033fecb8;
    }
    in_stack_00000000._4_1_ = '\0';
    FUN_033fe3ac(lVar5,uVar6,&stack0x00000008,(long)&stack0x00000000 + 4);
    if (in_stack_00000008 == (long *)0x0) {
      if (in_stack_00000000._4_1_ != '\0') {
        FUN_033fd850(lVar5);
      }
      return 1;
    }
    FUN_033fd850(lVar5);
    if (in_stack_00000008 == (long *)0x0) goto LAB_033fec90;
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar7 = *unaff_x25;
    }
    plVar2 = in_stack_00000008;
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 5) == '\0') {
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar9 = *in_stack_00000008;
      lVar7 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_033fec28;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01dde8fc(in_stack_00000008,lVar7,0);
LAB_033fec28:
      (*(code *)*puVar8)(plVar2,puVar8[1]);
      in_stack_00000008 = (long *)0x0;
    }
    else {
      FUN_0340037c(1,0);
      plVar2 = in_stack_00000008;
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar9 = *in_stack_00000008;
      lVar7 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_033feba0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01dde8fc(in_stack_00000008,lVar7,0);
LAB_033feba0:
      (*(code *)*puVar8)(plVar2,puVar8[1]);
      in_stack_00000008 = (long *)0x0;
      FUN_0340037c(0,0);
    }
    uVar10 = thunk_FUN_01db5314(0);
  } while ((uVar10 & 1) != 0);
  uVar12 = 0;
LAB_033fecb8:
  FUN_033fd850(lVar5);
  return uVar12;
}


