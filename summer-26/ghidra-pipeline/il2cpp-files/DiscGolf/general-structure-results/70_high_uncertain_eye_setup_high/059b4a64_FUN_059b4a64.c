/*
FUNCTION_NAME: FUN_059b4a64
ENTRY_POINT: 059b4a64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059b4dcc) */
/* WARNING: Removing unreachable block (ram,0x059b4e20) */

undefined8 FUN_059b4a64(undefined8 param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined8 uVar13;
  long *local_48;
  
  puVar3 = PTR_DAT_06a0db88;
  puVar2 = PTR_DAT_069fc2d0;
                    /* try { // try from 059b4a6c to 05ab4a73 has its CatchHandler @ 059b4ca8 */
  if ((DAT_06dc1501 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_82_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db88);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a18c18);
    FUN_02d965b8(PTR_DAT_06a18c20);
                    /* try { // try from 059b4adc to 05ab4aef has its CatchHandler @ 059b4bc0 */
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(PTR_DAT_069ff7d8);
                    /* try { // try from 059b4afc to 05ab4b07 has its CatchHandler @ 059b4bb0 */
    FUN_02d965b8(PTR_DAT_069fb9e8);
    FUN_02d965b8(PTR_DAT_069fc2d0);
    DAT_06dc1501 = 1;
  }
                    /* try { // try from 059b4b14 to 05ab4b27 has its CatchHandler @ 059b4bb4 */
  lVar6 = *(long *)puVar3;
  uVar13 = *(undefined8 *)puVar2;
  local_48 = (long *)0x0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 059b4b2c to 05ab4b33 has its CatchHandler @ 059b4bbc */
    thunk_FUN_02df485c();
    lVar6 = *(long *)puVar3;
  }
                    /* try { // try from 059b4b38 to 05ab4b47 has its CatchHandler @ 059b4bb8 */
  if (**(long **)(lVar6 + 0xb8) != 0) {
                    /* try { // try from 059b4b48 to 05ab4bab has its CatchHandler @ 059b4968 */
    uVar7 = FUN_04e95158(**(long **)(lVar6 + 0xb8),param_1,&local_48,
                         *(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo);
    if ((uVar7 & 1) != 0) {
      if (local_48 == (long *)0x0) goto LAB_059b4e1c;
      if ((char)local_48[2] != '\0') {
        uVar13 = (**(code **)(*local_48 + 0x178))(local_48,*(undefined8 *)(*local_48 + 0x180));
      }
    }
    plVar8 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
    FUN_05377f4c(plVar8,0);
    if (param_2 != (long *)0x0) {
      lVar6 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 059b4bac to 05ab4baf has its CatchHandler @ 059b4cb4 */
                    /* catch() { ... } // from try @ 059b4afc with catch @ 059b4bb0
                       try { // try from 059b4bb0 to 05ab4beb has its CatchHandler @ 059b4968 */
      if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 059b4b14 with catch @ 059b4bb4 */
                    /* catch() { ... } // from try @ 059b4b38 with catch @ 059b4bb8 */
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 059b4b2c with catch @ 059b4bbc */
                    /* catch() { ... } // from try @ 059b4adc with catch @ 059b4bc0 */
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a18c18) {
                    /* try { // try from 059b4bec to 05ab4bef has its CatchHandler @ 059b4c84 */
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_059b4bf0;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02dd004c(param_2,*(long *)PTR_DAT_06a18c18,0);
LAB_059b4bf0:
                    /* try { // try from 059b4bf0 to 05ab4c13 has its CatchHandler @ 059b4968 */
      puVar5 = PTR_DAT_06a18c20;
      puVar4 = PTR_DAT_069fbff8;
      puVar3 = PTR_DAT_069fbff0;
      puVar2 = PTR_DAT_069fb9e8;
                    /* try { // try from 059b4c14 to 05ab4c17 has its CatchHandler @ 059b4c98 */
      plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
      bVar1 = true;
      do {
                    /* try { // try from 059b4c34 to 05ab4c37 has its CatchHandler @ 059b4c78 */
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* try { // try from 059b4c50 to 05ab4c53 has its CatchHandler @ 059b4c74 */
                    /* try { // try from 059b4c54 to 05ab4c63 has its CatchHandler @ 059b4968 */
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                    /* catch() { ... } // from try @ 059b4c34 with catch @ 059b4c78 */
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_059b4c84;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
                    /* try { // try from 059b4c64 to 05ab4c73 has its CatchHandler @ 059b4c98 */
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar4,0);
                    /* catch() { ... } // from try @ 059b4c50 with catch @ 059b4c74 */
LAB_059b4c84:
                    /* catch() { ... } // from try @ 059b4bec with catch @ 059b4c84 */
                    /* try { // try from 059b4c8c to 05ab4ca3 has its CatchHandler @ 059b4cf0 */
        uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_059b4dc0;
          lVar6 = *plVar10;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_059b4d98;
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_059b4d80;
        }
                    /* catch() { ... } // from try @ 059b4c14 with catch @ 059b4c98
                       catch() { ... } // from try @ 059b4c64 with catch @ 059b4c98 */
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar10;
                    /* try { // try from 059b4ca4 to 05ab4cd3 has its CatchHandler @ 059b4968 */
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch() { ... } // from try @ 059b4a6c with catch @ 059b4ca8 */
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 059b4bac with catch @ 059b4cb4 */
            if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                    /* catch() { ... } // from try @ 059b4cd4 with catch @ 059b4cdc */
                    /* try { // try from 059b4ce0 to 05ab4ce7 has its CatchHandler @ 059b4cf0 */
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_059b4ce8;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
                    /* try { // try from 059b4cd4 to 05ab4cd7 has its CatchHandler @ 059b4cdc */
        puVar9 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar5,0);
LAB_059b4ce8:
                    /* try { // try from 059b4ce8 to 05ab4cf3 has its CatchHandler @ 059b4968 */
                    /* catch() { ... } // from try @ 059b4c8c with catch @ 059b4cf0
                       catch() { ... } // from try @ 059b4ce0 with catch @ 059b4cf0 */
        uVar11 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if (bVar1) {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        else {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_053798ac(plVar8,uVar13,0);
          uVar7 = FUN_0536ba54(uVar13,*(undefined8 *)puVar2,0);
          if ((uVar7 & 1) != 0) {
            FUN_053798ac(plVar8,*(undefined8 *)puVar2,0);
          }
        }
        FUN_053798ac(plVar8,uVar11,0);
        bVar1 = false;
      } while( true );
    }
  }
LAB_059b4e1c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
LAB_059b4d80:
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_059b4db4;
    }
  }
LAB_059b4d98:
  puVar9 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar3,0);
LAB_059b4db4:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_059b4dc0:
  if (bVar1) {
    uVar13 = 0;
  }
  else {
    if (plVar8 == (long *)0x0) goto LAB_059b4e1c;
    uVar13 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
  }
  return uVar13;
}


