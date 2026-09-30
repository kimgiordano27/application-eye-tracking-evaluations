/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$.cctor
ENTRY_POINT: 02c50a5c
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_21_0___cctor(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  ulong uVar10;
  undefined8 in_stack_00000008;
  
  if (unaff_x19 != 0) {
    plVar6 = (long *)thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f37c0);
    System_IO_BinaryReader___ctor(plVar6,*(int *)(unaff_x19 + 0x18) * 3,0);
    puVar4 = PTR_DAT_0380cae0;
    puVar3 = PTR_DAT_037f4460;
    puVar2 = PTR_DAT_037f2c48;
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      if (plVar6 == (long *)0x0) goto LAB_02c50a94;
      uVar10 = 0;
      do {
        iVar5 = System_IO_BinaryReader__ReadDecimal(plVar6,0);
        if (0 < iVar5) {
          FUN_02a5ae94(plVar6,0x20,0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar7 = FUN_02b954e8(0);
        if (*(uint *)(unaff_x19 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x19 + 0x20 + uVar10);
        uVar8 = thunk_FUN_018617ec(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
        FUN_02a5bfa4(plVar6,uVar7,*(undefined8 *)puVar4,uVar8,0);
        uVar1 = uVar10 + 1;
      } while ((uVar10 < 0x13) && (uVar10 = uVar1, (long)uVar1 < (long)*(int *)(unaff_x19 + 0x18)));
      if ((int)uVar1 == 0x14) {
        uVar7 = thunk_FUN_01851c08(PTR_DAT_0380cab0);
        FUN_02a5a000(plVar6,uVar7,0);
      }
    }
    FUN_015d6ff8(plVar6);
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    uVar8 = thunk_FUN_01851c08(PTR_DAT_0380cae8);
    uVar7 = FUN_02a2e6b0(uVar8,uVar7,0);
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar9 = thunk_FUN_01851c08(PTR_DAT_0380caf0);
    FUN_02b3cc64(uVar8,uVar7,uVar9,0);
    uVar7 = thunk_FUN_01851c08(PTR_DAT_0380caf8);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8,uVar7);
  }
LAB_02c50a94:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


