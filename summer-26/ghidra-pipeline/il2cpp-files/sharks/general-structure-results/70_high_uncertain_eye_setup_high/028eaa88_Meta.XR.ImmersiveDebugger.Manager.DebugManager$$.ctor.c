/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager$$.ctor
ENTRY_POINT: 028eaa88
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x028eae0c) */
/* WARNING: Removing unreachable block (ram,0x028eaf28) */

void Meta_XR_ImmersiveDebugger_Manager_DebugManager___ctor(void)

{
  size_t __n;
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  void *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  int unaff_w24;
  size_t unaff_x25;
  undefined8 unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  lVar2 = FUN_0185daa4();
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x1f0);
  *(undefined8 *)(unaff_x29 + -0x20) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x27;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
  (**(code **)(lVar2 + 0x10))();
  if (*(char *)(unaff_x29 + -0xc) != '\0') {
    uVar8 = *unaff_x23;
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x23[1];
    *(undefined8 *)(unaff_x29 + -0x20) = uVar8;
    uVar8 = thunk_FUN_01851c08(PTR_DAT_037f9268);
    uVar8 = thunk_FUN_018617ec(uVar8,unaff_x29 + -0x20);
    uVar6 = thunk_FUN_01851c08(PTR_DAT_037fb678);
    uVar8 = FUN_02a473b8(uVar6,uVar8,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar6 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar6,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar6,*(undefined8 *)(unaff_x29 + -0x68));
  }
  uVar8 = *unaff_x23;
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x23[1];
  *(undefined8 *)(unaff_x29 + -0x40) = uVar8;
  lVar2 = *unaff_x22;
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if (unaff_w24 == 0) {
    lVar4 = lVar2;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0185daa4();
      lVar2 = *unaff_x22;
      uVar1 = *(ushort *)(lVar2 + 0x135);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x210);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = (*pcVar7)(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x210));
    lVar4 = *unaff_x22;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *unaff_x22;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar5 = *unaff_x22;
    uVar8 = *unaff_x23;
    uVar6 = unaff_x23[1];
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar3 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0185daa4();
      lVar5 = *unaff_x22;
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x218);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0185daa4();
    }
    lVar3 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x218);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar6;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
    *(long *)(unaff_x29 + -0x28) = lVar2;
    (**(code **)(lVar3 + 0x10))(uVar9,lVar3,lVar4,unaff_x29 + -0x30,lVar2);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar3 = *unaff_x22;
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar4 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0185daa4();
      lVar3 = *unaff_x22;
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x220);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x220);
    *(void **)(unaff_x29 + -0x30) = unaff_x21;
    (**(code **)(lVar4 + 0x10))(uVar8,lVar4,lVar2,unaff_x29 + -0x30);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *unaff_x22;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar3 = *unaff_x22;
    uVar8 = *unaff_x23;
    uVar6 = unaff_x23[1];
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar4 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0185daa4();
      lVar3 = *unaff_x22;
      uVar1 = *(ushort *)(lVar3 + 0x135);
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x1f8);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x1f8);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar6;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
                    /* try { // try from 028eabbc to 029eac07 has its CatchHandler @ 028eabbc
                       catch() { ... } // from try @ 028eabbc with catch @ 028eabbc
                       catch() { ... } // from try @ 028eac6c with catch @ 028eabbc
                       catch() { ... } // from try @ 028eac9c with catch @ 028eabbc
                       catch() { ... } // from try @ 028ead1c with catch @ 028eabbc */
    (**(code **)(lVar4 + 0x10))(uVar9,lVar4,lVar2,unaff_x29 + -0x30,unaff_x29 + -0xc);
    memcpy(*(void **)(unaff_x29 + -0x58),unaff_x28,unaff_x25);
    memset(unaff_x21,0,*(size_t *)(unaff_x29 + -0x48));
    lVar2 = *unaff_x22;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x140) + 0x28) < 0) {
      memcpy(*(void **)(unaff_x29 + -0x60),*(void **)(unaff_x29 + -0x58),unaff_x25);
    }
    else {
                    /* try { // try from 028eac08 to 029eac6b has its CatchHandler @ 028eac6c */
      *(undefined8 *)(unaff_x29 + -0x60) = **(undefined8 **)(unaff_x29 + -0x58);
    }
    if ((*(byte *)(*unaff_x22 + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_01d37e40();
  }
  memcpy(*(void **)(unaff_x29 + -0x50),unaff_x21,*(size_t *)(unaff_x29 + -0x48));
  lVar2 = *unaff_x22;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  lVar2 = thunk_FUN_0181d094(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar2 = *unaff_x22;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0185daa4();
  }
  FUN_028eb990(unaff_x29 + -0x40,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x228));
  __n = *(size_t *)(unaff_x29 + -0x48);
  memcpy(unaff_x21,*(void **)(unaff_x29 + -0x50),__n);
  memcpy(*(void **)(unaff_x29 + -0x78),unaff_x21,__n);
  if (*(long *)(*(long *)(unaff_x29 + -0x70) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


