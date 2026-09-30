/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$.cctor
ENTRY_POINT: 04f976ac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_98_0___cctor(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x21;
  long lVar9;
  
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9745c with catch @ 04f976ac
                        */
  puVar1 = PTR_DAT_06312520;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f9756c with catch @ 04f976b0
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f975e8 with catch @ 04f976b4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f97470 with catch @ 04f976b8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f974f0 with catch @ 04f976bc
                        */
  if ((*(byte *)(unaff_x21 + 0xdfd) & 1) == 0) {
    FUN_02b3c81c(System_Comparison<Event>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<uint,_Glyph>_TypeInfo);
                    /* try { // try from 04f976d8 to 050976db has its CatchHandler @ 04f976f4 */
                    /* try { // try from 04f976dc to 050976f7 has its CatchHandler @ 04f97328 */
    FUN_02b3c81c(PTR_DAT_06312520);
    *(undefined1 *)(unaff_x21 + 0xdfd) = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x80);
                    /* catch() { ... } // from try @ 04f976d8 with catch @ 04f976f4 */
                    /* try { // try from 04f976f8 to 050976ff has its CatchHandler @ 04f97708 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
                    /* try { // try from 04f97700 to 0509770b has its CatchHandler @ 04f97328 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f976f8 with catch @ 04f97708
                        */
                    /* try { // try from 04f9770c to 050977d3 has its CatchHandler @ 04f9770c
                       catch() { ... } // from try @ 04f9770c with catch @ 04f9770c
                       catch() { ... } // from try @ 04f97850 with catch @ 04f9770c
                       catch() { ... } // from try @ 04f9788c with catch @ 04f9770c
                       catch() { ... } // from try @ 04f978bc with catch @ 04f9770c
                       catch() { ... } // from try @ 04f978e0 with catch @ 04f9770c */
  uVar2 = FUN_05c8e378(uVar7,0,0);
  puVar1 = System_Collections_Generic_Dictionary<uint,_Glyph>_TypeInfo;
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  lVar9 = *(long *)(param_1 + 0x80);
  if ((lVar9 != 0) && (plVar8 = *(long **)(param_1 + 0x88), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<uint,_Glyph>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_04f9777c;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02b7654c(plVar8,*(long *)
                                  System_Collections_Generic_Dictionary<uint,_Glyph>_TypeInfo,1);
LAB_04f9777c:
    (*(code *)*puVar3)(plVar8,lVar9 + 0x24,puVar3[1]);
    lVar9 = *(long *)(param_1 + 0x80);
    if ((lVar9 != 0) && (plVar8 = *(long **)(param_1 + 0x90), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Comparison<Event>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_04f977f4;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)System_Comparison<Event>_TypeInfo,1);
LAB_04f977f4:
      (*(code *)*puVar3)(plVar8,lVar9 + 0x18,puVar3[1]);
      uVar2 = 0;
      while (lVar9 = *(long *)(param_1 + 0xa0), lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar4 = *(long *)(param_1 + 0x80);
        if ((lVar4 == 0) || (plVar8 = *(long **)(lVar9 + uVar2 * 8 + 0x20), plVar8 == (long *)0x0))
        break;
        lVar9 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar9 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_04f97880;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_02b7654c(plVar8,*(long *)puVar1,1);
LAB_04f97880:
        (*(code *)*puVar3)(plVar8,lVar4 + 0x30,puVar3[1]);
        uVar2 = uVar2 + 1;
        if (uVar2 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


