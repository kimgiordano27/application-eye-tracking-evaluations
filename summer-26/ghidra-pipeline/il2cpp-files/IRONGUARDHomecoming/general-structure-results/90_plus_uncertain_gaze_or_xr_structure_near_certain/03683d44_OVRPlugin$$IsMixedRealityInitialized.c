/*
FUNCTION_NAME: OVRPlugin$$IsMixedRealityInitialized
ENTRY_POINT: 03683d44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void OVRPlugin__IsMixedRealityInitialized(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  
  if ((DAT_04833e6d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_FileWebRequest__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_6__);
    DAT_04833e6d = 1;
  }
  plVar11 = *(long **)(param_1 + 0x60);
  if (plVar11 != (long *)0x0) {
                    /* try { // try from 03683d80 to 03783d87 has its CatchHandler @ 03683df4 */
    lVar3 = *plVar11;
                    /* try { // try from 03683d88 to 03783d8f has its CatchHandler @ 03683d90 */
    plVar10 = *(long **)(param_1 + 0x38);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03683c40 with catch @ 03683d90
                       catch(type#1 @ 042b3198) { ... } // from try @ 03683d88 with catch @ 03683d90
                       try { // try from 03683d90 to 03783da7 has its CatchHandler @ 03683b4c */
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 03683da8 to 03783dbf has its CatchHandler @ 03683de8 */
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_6__) {
                    /* try { // try from 03683dd4 to 03783de3 has its CatchHandler @ 03683de8 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03683dd8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 03683dc0 to 03783dd3 has its CatchHandler @ 03683b4c */
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_6__
                          ,0);
LAB_03683dd8:
    plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
    if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 03683da8 with catch @ 03683de8
                       catch() { ... } // from try @ 03683dd4 with catch @ 03683de8 */
                    /* try { // try from 03683dec to 03783def has its CatchHandler @ 03683ea4 */
      lVar3 = *plVar11;
                    /* try { // try from 03683df0 to 03783e0b has its CatchHandler @ 03683b4c */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03683bf0 with catch @ 03683df4
                       catch(type#1 @ 042b3198) { ... } // from try @ 03683d80 with catch @ 03683df4
                        */
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* try { // try from 03683e0c to 03783e23 has its CatchHandler @ 03683e94 */
          if (*(long *)(piVar7 + -2) == *(long *)Method_System_Net_FileWebRequest__ctor__) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03683e40;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01ecb238(plVar11,*(long *)Method_System_Net_FileWebRequest__ctor__,0);
LAB_03683e40:
      uVar5 = (*(code *)*puVar2)(plVar11,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        puVar4 = (undefined4 *)(param_1 + 0x50);
        puVar6 = (undefined4 *)(param_1 + 0x54);
        puVar8 = (undefined4 *)(param_1 + 0x58);
        puVar9 = (undefined4 *)(param_1 + 0x5c);
      }
      else {
        puVar4 = (undefined4 *)(param_1 + 0x40);
        puVar6 = (undefined4 *)(param_1 + 0x44);
        puVar8 = (undefined4 *)(param_1 + 0x48);
        puVar9 = (undefined4 *)(param_1 + 0x4c);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x2a8))
                  (*puVar4,*puVar6,*puVar8,*puVar9,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar3 = FUN_040703d4(*(long *)(param_1 + 0x20),0);
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (iVar1 = FUN_0407eaa0(*(long *)(param_1 + 0x20),0), lVar3 != 0)) {
            FUN_04073314(lVar3,0 < iVar1,0);
            if ((*(long *)(param_1 + 0x28) != 0) &&
               (lVar3 = FUN_040703d4(*(long *)(param_1 + 0x28),0), lVar3 != 0)) {
              FUN_04073314(lVar3,*(char *)(param_1 + 0x68) == '\0',0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


