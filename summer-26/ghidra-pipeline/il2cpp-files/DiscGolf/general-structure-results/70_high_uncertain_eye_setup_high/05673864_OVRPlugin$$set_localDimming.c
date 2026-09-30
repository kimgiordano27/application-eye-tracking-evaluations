/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 05673864
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_localDimming(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000048;
  
  while( true ) {
    lVar5 = *(long *)(*unaff_x29 + 0x20);
                    /* try { // try from 05673870 to 05773907 has its CatchHandler @ 056734c0 */
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar4 = 0;
    if (lVar5 == 0) break;
    lVar5 = FUN_05686734(lVar5,2,1,0);
    uVar4 = 0;
    if ((lVar5 == 0) || (uVar3 = FUN_05371c64(lVar5,0), uVar4 = uVar3, unaff_x21 == 0)) break;
    lVar5 = FUN_0536f9ec(unaff_x21,unaff_x22,uVar3,0);
    uVar4 = 0;
    if (lVar5 == 0) break;
    uVar4 = FUN_0536f9ec(lVar5,param_1,uVar3,0);
                    /* try { // try from 05673908 to 05773917 has its CatchHandler @ 05673918 */
    uVar4 = FUN_05362cb4(*(undefined8 *)System_Collections_Generic_List<MapPackUIObject>_TypeInfo,
                         uVar4,0);
                    /* catch() { ... } // from try @ 05673858 with catch @ 05673918
                       catch() { ... } // from try @ 05673908 with catch @ 05673918 */
    uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
                    /* try { // try from 0567391c to 0577391f has its CatchHandler @ 0567393c */
                    /* try { // try from 05673920 to 0577393f has its CatchHandler @ 056734c0 */
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x28);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0567391c with catch @ 0567393c
                        */
    uVar4 = OVRInput__GetUp(uVar1,uVar4,&stack0x00000010,&stack0x0000000c,0);
    iVar2 = (int)uVar4;
    while( true ) {
      if (iVar2 == 0) {
        lVar5 = *(long *)(*unaff_x29 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02dcfd18();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02dcfd18();
        }
        uVar4 = 0;
        if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) goto LAB_05673a6c;
        uVar4 = FUN_05686fc4();
        unaff_w27 = 1;
      }
      unaff_x26 = unaff_x26 + 1;
      if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x26) {
        *(byte *)(unaff_x19 + 0x22) = unaff_w27 & 1;
        if ((unaff_w27 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
          if (*(int *)(unaff_x19 + 0x1a0) == -1) {
            *(undefined4 *)(unaff_x19 + 0x1a0) = 1;
          }
        }
        if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000048) {
          return;
        }
        goto LAB_05673a9c;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_x26) {
        if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        goto LAB_05673a9c;
      }
      unaff_x21 = *(long *)(unaff_x25 + unaff_x26 * 8);
      if (*(char *)(unaff_x19 + 0x251) != '\0') break;
      uVar1 = *(undefined4 *)(unaff_x19 + 0xc0);
      uVar4 = FUN_05362cb4(*(undefined8 *)System_Collections_Generic_List<MapPackUIObject>_TypeInfo,
                           unaff_x21,0);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c(*unaff_x28);
      }
      uVar4 = FUN_0564aaa8(uVar1,uVar4,&stack0x00000010,&stack0x0000000c,0);
      iVar2 = (int)uVar4;
    }
    lVar5 = *(long *)(*unaff_x29 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar4 = 0;
    if (lVar5 == 0) break;
    lVar5 = FUN_05686734(lVar5,0,1,0);
    uVar4 = 0;
    if (lVar5 == 0) break;
    unaff_x22 = FUN_05371c64(lVar5,0);
    lVar5 = *(long *)(*unaff_x29 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02dcfd18();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar4 = 0;
    if (lVar5 == 0) break;
    lVar5 = FUN_05686734(lVar5,1,1,0);
    uVar4 = 0;
    if (lVar5 == 0) break;
    param_1 = FUN_05371c64(lVar5,0);
  }
LAB_05673a6c:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05673a9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


