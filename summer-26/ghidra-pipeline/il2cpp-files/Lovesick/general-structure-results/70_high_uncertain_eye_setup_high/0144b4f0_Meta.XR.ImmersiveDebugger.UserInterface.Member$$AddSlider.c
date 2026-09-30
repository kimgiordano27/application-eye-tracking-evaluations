/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$AddSlider
ENTRY_POINT: 0144b4f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Member__AddSlider
                 (long *param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long *in_stack_00000000;
  
  while (lVar4 = FUN_026713c0(param_1,param_2,param_3,param_4,param_5,0), lVar4 != 0) {
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar11 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar11) {
LAB_0144b674:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9 = *(long **)(unaff_x21 + 0x18);
        if (plVar9 == (long *)0x0) goto LAB_0144b678;
        lVar7 = *plVar9;
        lVar1 = lVar4 + uVar11 * 0x10;
        uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar15 = *(undefined4 *)(lVar1 + 0x20);
        uVar14 = *(undefined4 *)(lVar1 + 0x24);
        uVar13 = *(undefined4 *)(lVar1 + 0x28);
        uVar12 = *(undefined4 *)(lVar1 + 0x2c);
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)System_Converter<Object,_ICylinderClipper>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0144b5a4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar9,*(long *)System_Converter<Object,_ICylinderClipper>_TypeInfo,2)
        ;
LAB_0144b5a4:
        uVar15 = (*(code *)*puVar5)(uVar15,plVar9,uVar10,puVar5[1]);
        uVar2 = *(uint *)(lVar4 + 0x18);
        uVar6 = (ulong)uVar2;
        if (uVar6 <= uVar11) goto LAB_0144b674;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar1 + 0x20) = uVar15;
        *(undefined4 *)(lVar1 + 0x24) = uVar14;
        *(undefined4 *)(lVar1 + 0x28) = uVar13;
        *(undefined4 *)(lVar1 + 0x2c) = uVar12;
      } while ((long)uVar11 < (long)(int)uVar2);
    }
    uVar14 = (**(code **)(*in_stack_00000000 + 0x188))
                       (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 400));
    FUN_02671fa4(in_stack_00000000,0,unaff_x22 & 0xffffffff,uVar14,1,lVar4,0);
    uVar2 = (int)unaff_x22 + 1;
    param_3 = (ulong)uVar2;
    iVar3 = (**(code **)(*in_stack_00000000 + 0x1a8))
                      (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x1b0));
    if (iVar3 <= (int)uVar2) {
      FUN_026723f8(in_stack_00000000,0);
      return in_stack_00000000;
    }
    param_4 = (**(code **)(*in_stack_00000000 + 0x188))
                        (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 400));
    param_4 = param_4 & 0xffffffff;
    param_5 = 1;
    param_2 = 0;
    param_1 = in_stack_00000000;
    unaff_x22 = param_3;
  }
LAB_0144b678:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


