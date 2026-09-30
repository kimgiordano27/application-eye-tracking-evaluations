/*
FUNCTION_NAME: OVRPlugin$$GetSystemKeyboardDescription
ENTRY_POINT: 07a43d68
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSystemKeyboardDescription(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  
  plVar4 = (long *)(*(code *)*param_1)();
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 07a43d8c to 07b43d93 has its CatchHandler @ 07a43ddc */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 07a43da0 to 07b43da7 has its CatchHandler @ 07a43dd8 */
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092f0600) {
                    /* try { // try from 07a43dcc to 07b43dcf has its CatchHandler @ 07a43dd4 */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07a43dd0;
        }
                    /* try { // try from 07a43da8 to 07b43dcb has its CatchHandler @ 07a43c60 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092f0600,0);
LAB_07a43dd0:
                    /* try { // try from 07a43dd0 to 07b43df7 has its CatchHandler @ 07a43c60 */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a43dcc with catch @ 07a43dd4
                        */
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a43da0 with catch @ 07a43dd8
                        */
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch(type#1 @ 08d635d8) { ... } // from try @ 07a43d8c with catch @ 07a43ddc
                        */
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 07a43df8 to 07b43dfb has its CatchHandler @ 07a43e14 */
      if (uVar8 != 0) {
                    /* try { // try from 07a43dfc to 07b43e17 has its CatchHandler @ 07a43c60 */
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092eda60) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07a43e3c;
          }
          uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 07a43df8 with catch @ 07a43e14 */
          piVar9 = piVar9 + 4;
                    /* try { // try from 07a43e18 to 07b43e1f has its CatchHandler @ 07a43e28 */
        } while (uVar8 != 0);
      }
                    /* try { // try from 07a43e20 to 07b43e2b has its CatchHandler @ 07a43c60 */
      puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092eda60,1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07a43e18 with catch @ 07a43e28
                        */
LAB_07a43e3c:
      puVar3 = PTR_DAT_092f06c8;
      puVar2 = PTR_DAT_092eda50;
      puVar1 = PTR_DAT_092eda48;
      (*(code *)*puVar5)(&stack0x00000070,plVar4,puVar5[1]);
      in_stack_00000060 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
      in_stack_00000058 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000050 = in_stack_00000070;
      while (uVar6 = FUN_0712a164(&stack0x00000050,*(undefined8 *)puVar2), uVar8 = in_stack_00000060
            , (uVar6 & 1) != 0) {
        plVar4 = *(long **)(unaff_x19 + 0x30);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_07a43ee8;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*unaff_x22,7);
LAB_07a43ee8:
        uVar6 = (*(code *)*puVar5)(plVar4,uVar8 & 0xffffffff,&stack0x00000030,puVar5[1]);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uStack0000000000000078 = in_stack_00000038;
          in_stack_00000070 = in_stack_00000030;
          uStack0000000000000084 = (undefined4)uStack0000000000000044;
          in_stack_00000088 = SUB84(uStack0000000000000044,4);
          uStack0000000000000080 = uStack0000000000000040;
          FUN_06e849ac(*(long *)(unaff_x19 + 0x40),uVar8 & 0xffffffff,&stack0x00000070,
                       *(undefined8 *)puVar3);
        }
        plVar4 = *(long **)(unaff_x19 + 0x30);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar7 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
              goto LAB_07a43f80;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*unaff_x22,8);
LAB_07a43f80:
        uVar6 = (*(code *)*puVar5)(plVar4,uVar8 & 0xffffffff,&stack0x00000010,puVar5[1]);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uStack0000000000000078 = in_stack_00000018;
          in_stack_00000070 = in_stack_00000010;
          uStack0000000000000084 = (undefined4)uStack0000000000000024;
          in_stack_00000088 = SUB84(uStack0000000000000024,4);
          uStack0000000000000080 = uStack0000000000000020;
          FUN_06e849ac(*(long *)(unaff_x19 + 0x48),uVar8 & 0xffffffff,&stack0x00000070,
                       *(undefined8 *)puVar3);
        }
      }
      FUN_0712a160(&stack0x00000050,*(undefined8 *)puVar1);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


