/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureWidth
ENTRY_POINT: 03167f38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureWidth(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  
  thunk_FUN_01ad9084(PTR_DAT_03d807f0);
  thunk_FUN_01ad9084(PTR_DAT_03d807f8);
  thunk_FUN_01ad9084(PTR_DAT_03d80800);
  thunk_FUN_01ad9084(PTR_DAT_03d80808);
  thunk_FUN_01ad9084(PTR_DAT_03d80810);
  thunk_FUN_01ad9084(PTR_DAT_03d80818);
  thunk_FUN_01ad9084(PTR_DAT_03d80820);
                    /* try { // try from 03167f8c to 03267fcb has its CatchHandler @ 03167f8c
                       catch() { ... } // from try @ 03167f8c with catch @ 03167f8c
                       catch() { ... } // from try @ 03167ff8 with catch @ 03167f8c
                       catch() { ... } // from try @ 03168030 with catch @ 03167f8c
                       catch() { ... } // from try @ 03168078 with catch @ 03167f8c */
  *(undefined1 *)(unaff_x20 + 0x89) = 1;
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
  FUN_02fd7524();
  puVar1 = StringLiteral_3765;
                    /* try { // try from 03167fcc to 03267fdb has its CatchHandler @ 03168038 */
  if (lVar7 != 0) {
                    /* try { // try from 03167ff0 to 03267ff7 has its CatchHandler @ 03168030 */
    FUN_029bbbb8(lVar7,uVar3,*(undefined8 *)PTR_DAT_03d807d0);
                    /* try { // try from 03167ff8 to 0326802b has its CatchHandler @ 03167f8c */
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
    FUN_0251773c();
    if (lVar7 != 0) {
                    /* try { // try from 0316802c to 0326802f has its CatchHandler @ 03168034 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03167ff0 with catch @ 03168030
                       try { // try from 03168030 to 0326804f has its CatchHandler @ 03167f8c */
      FUN_029bb7e8(lVar7,uVar3,*(undefined8 *)PTR_DAT_03d807e8);
      puVar1 = PTR_DAT_03d807e0;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 0316802c with catch @ 03168034
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 03167fcc with catch @ 03168038
                        */
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
                    /* try { // try from 03168050 to 03268053 has its CatchHandler @ 03168060 */
        uVar3 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d807e0);
                    /* catch() { ... } // from try @ 03168050 with catch @ 03168060 */
        FUN_02518558();
        puVar2 = PTR_DAT_03d80800;
                    /* try { // try from 0316806c to 03268077 has its CatchHandler @ 0316808c */
        if (plVar8 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d80800) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_031680d4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)PTR_DAT_03d80800,0);
LAB_031680d4:
          (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
            uVar3 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
            FUN_02518558();
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_03168164;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_01ae9f78(plVar8,*(long *)puVar2,0);
LAB_03168164:
                    /* WARNING: Could not recover jumptable at 0x0316817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


