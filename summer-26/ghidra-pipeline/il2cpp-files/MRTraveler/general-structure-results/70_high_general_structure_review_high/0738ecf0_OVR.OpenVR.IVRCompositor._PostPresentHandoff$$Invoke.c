/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$Invoke
ENTRY_POINT: 0738ecf0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void OVR_OpenVR_IVRCompositor__PostPresentHandoff__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x19;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 in_stack_00000038;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08eb49a8);
  FUN_03c8f898(PTR_DAT_08eb49b0);
  FUN_03c8f898(PTR_DAT_08eb49b8);
  FUN_03c8f898(PTR_DAT_08eb49c0);
  FUN_03c8f898(PTR_DAT_08eb49c8);
  FUN_03c8f898(PTR_DAT_08e83618);
  FUN_03c8f898(PTR_DAT_08eb49d0);
  FUN_03c8f898(PTR_DAT_08eb49d8);
  FUN_03c8f898(PTR_DAT_08eb49e0);
  FUN_03c8f898(PTR_DAT_08eb49e8);
  FUN_03c8f898(PTR_DAT_08eb49f0);
  FUN_03c8f898(PTR_DAT_08eb49f8);
  FUN_03c8f898(PTR_DAT_08eb4a00);
  *(undefined1 *)(unaff_x20 + 0x485) = 1;
  puVar4 = PTR_DAT_08eb4a00;
  puVar3 = PTR_DAT_08eb49f8;
  puVar2 = PTR_DAT_08eb49b0;
  puVar1 = PTR_DAT_08eb49a0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000030 = 0;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_05355484(*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_08eb49e0);
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000020 = in_stack_00000000;
  in_stack_00000038 = in_stack_00000018;
  _uStack0000000000000030 = in_stack_00000010;
  while( true ) {
    uVar8 = FUN_04a064fc(&stack0x00000020,*(undefined8 *)puVar1);
    uVar7 = in_stack_00000038;
    uVar6 = _uStack0000000000000030;
    if ((uVar8 & 1) == 0) {
      FUN_04a064f8(&stack0x00000020,*(undefined8 *)PTR_DAT_08eb4998);
      return;
    }
    uVar5 = uStack0000000000000030;
    lVar9 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
    FUN_07145224(lVar9,0);
    if (lVar9 == 0) break;
    *(long *)(lVar9 + 0x18) = unaff_x19;
    thunk_FUN_03d233cc();
    FUN_07401588(uVar6 & 0xffffffff,0);
    *(undefined4 *)(lVar9 + 0x10) = uVar5;
    if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar10 = OVR_OpenVR_IVRCompositor__Submit___ctor(*(long *)(unaff_x19 + 0x40),uVar6 & 0xffffffff)
    ;
    if (lVar10 == 0) {
      uVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e83618);
      FUN_04d4c080();
      uVar12 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb49d8);
      FUN_04d54878(uVar12,lVar9,*(undefined8 *)PTR_DAT_08eb49f0,0);
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_03cd7500(lVar9);
        lVar9 = *(long *)puVar4;
      }
      lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar14 == 0) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_03cd7500(lVar9);
          lVar9 = *(long *)puVar4;
        }
        uVar15 = **(undefined8 **)(lVar9 + 0xb8);
        lVar14 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb49d0);
        FUN_04d54bfc(lVar14,uVar15,*(undefined8 *)PTR_DAT_08eb49e8,0);
        plVar13 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        *plVar13 = lVar14;
        thunk_FUN_03d233cc(plVar13,lVar14);
      }
      lVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08eb49c0);
      FUN_04cc1340(lVar10,uVar12,lVar14,uVar11,*(undefined8 *)PTR_DAT_08eb49b8);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0738e914(*(long *)(unaff_x19 + 0x40),uVar6 & 0xffffffff,lVar10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
    }
    FUN_04cc13a0(lVar10,uVar7,*(undefined8 *)puVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


