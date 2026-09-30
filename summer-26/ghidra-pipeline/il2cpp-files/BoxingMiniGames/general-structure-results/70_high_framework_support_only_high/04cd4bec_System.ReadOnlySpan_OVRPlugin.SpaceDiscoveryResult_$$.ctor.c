/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 04cd4bec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 unaff_w19;
  undefined4 uVar6;
  long *plVar7;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x29;
  
  do {
    if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
                    /* try { // try from 04cd4bfc to 04dd4bff has its CatchHandler @ 04cd4c10 */
      param_2 = FUN_0367c9fc(param_2);
                    /* try { // try from 04cd4c00 to 04dd4c03 has its CatchHandler @ 04cd4c08 */
    }
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04cd4a90 with catch @ 04cd4c04
                       try { // try from 04cd4c04 to 04dd4c27 has its CatchHandler @ 04cd49cc */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04cd4c00 with catch @ 04cd4c08
                        */
    lVar2 = thunk_FUN_0367fd24(unaff_x21,param_2);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04cd4a5c with catch @ 04cd4c0c
                        */
    if (lVar2 != 0) {
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 04cd4bfc with catch @ 04cd4c10
                        */
      lVar2 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
                    /* try { // try from 04cd4c28 to 04dd4c3f has its CatchHandler @ 04cd4c88 */
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc(lVar2);
      }
                    /* try { // try from 04cd4c40 to 04dd4c77 has its CatchHandler @ 04cd49cc */
      uVar3 = FUN_03642af0(unaff_x21,lVar2);
      FUN_03642988(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0x20,uVar3,unaff_w19);
      uVar6 = 1;
      FUN_0315dc8c(*(undefined8 *)(unaff_x29 + -0x10),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x80),1);
LAB_04cd4cc8:
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return uVar6;
      }
      goto LAB_04cd4dc8;
    }
    puVar1 = (undefined8 *)
             thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar7 = (long *)*puVar1;
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      goto LAB_04cd4dc8;
    }
    lVar2 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto FUN_04cd4b48;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x23,0);
FUN_04cd4b48:
    uVar4 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x10));
      FUN_03159758(*(undefined8 *)(unaff_x29 + -0x10),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) +
                            0x80) + 0xa0,0);
      uVar6 = 0;
      goto LAB_04cd4cc8;
    }
    puVar1 = (undefined8 *)
             thunk_FUN_036a1ed0(*(undefined8 *)(unaff_x29 + -0x10),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20)
                                                     + 0xc0) + 0x80) + 0xa0);
    plVar7 = (long *)*puVar1;
    if (plVar7 == (long *)0x0) {
      if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
LAB_04cd4dc8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar2 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(plVar7,*unaff_x23,1);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor:
    unaff_x21 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    param_2 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x20) + 0xc0) + 0x10);
  } while( true );
}


