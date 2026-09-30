/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 063ad348
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceCreate(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x20;
  long *unaff_x24;
  
  puVar3 = (undefined8 *)FUN_0377596c();
  iVar2 = (*(code *)*puVar3)();
  puVar1 = PTR_DAT_07db2190;
  if (iVar2 == 9) {
    thunk_FUN_037a15ac(PTR_DAT_07d88078);
    FUN_031ae340();
    uVar5 = FUN_061d52c8(0);
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6f10);
    FUN_063349e4(uVar7,uVar5);
    uVar5 = FUN_062d5fcc();
    uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6f18);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar7);
  }
                    /* catch() { ... } // from try @ 063ad384 with catch @ 063ad37c
                       catch() { ... } // from try @ 063ad3c0 with catch @ 063ad37c
                       catch() { ... } // from try @ 063ad3f8 with catch @ 063ad37c */
                    /* try { // try from 063ad380 to 064ad383 has its CatchHandler @ 063ad390 */
                    /* try { // try from 063ad384 to 064ad3bb has its CatchHandler @ 063ad37c */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063ad380 with catch @ 063ad390
                        */
  if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_06a0d350();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar1);
  }
                    /* try { // try from 063ad3bc to 064ad3bf has its CatchHandler @ 063ad3f0 */
                    /* try { // try from 063ad3c0 to 064ad3df has its CatchHandler @ 063ad37c */
  FUN_063ab8e0();
  uVar4 = FUN_063349dc();
  if ((uVar4 & 1) == 0) {
    if (unaff_x24 != (long *)0x0) {
      (**(code **)(*unaff_x24 + 0x238))();
      if (unaff_x20 != (long *)0x0) {
        lVar8 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
              puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
              goto FUN_063ad4c8;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c();
FUN_063ad4c8:
        uVar5 = (*(code *)*puVar3)();
        goto LAB_063ad4e0;
      }
    }
  }
  else if (unaff_x20 != (long *)0x0) {
                    /* try { // try from 063ad3e0 to 064ad3ef has its CatchHandler @ 063ad3f0 */
    lVar8 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* catch() { ... } // from try @ 063ad3bc with catch @ 063ad3f0
                       catch() { ... } // from try @ 063ad3e0 with catch @ 063ad3f0 */
    if (uVar4 != 0) {
                    /* try { // try from 063ad3f4 to 064ad3f7 has its CatchHandler @ 063ad400 */
                    /* try { // try from 063ad3f8 to 064ad403 has its CatchHandler @ 063ad37c */
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063ad3f4 with catch @ 063ad400
                        */
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 10) * 0x10 + 0x138);
          goto LAB_063ad4a0;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_063ad4a0:
    uVar5 = (*(code *)*puVar3)();
LAB_063ad4e0:
    puVar1 = PTR_DAT_07db6d50;
    lVar8 = thunk_FUN_037787d0();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    lVar8 = *(long *)puVar1;
    plVar6 = (long *)thunk_FUN_037787d0();
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    lVar9 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063ad564;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar6,lVar8,0);
LAB_063ad564:
                    /* WARNING: Could not recover jumptable at 0x063ad584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar6,uVar5,puVar3[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


