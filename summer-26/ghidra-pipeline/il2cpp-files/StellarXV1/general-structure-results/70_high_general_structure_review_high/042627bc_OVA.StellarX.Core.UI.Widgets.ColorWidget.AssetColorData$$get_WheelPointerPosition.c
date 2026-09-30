/*
FUNCTION_NAME: OVA.StellarX.Core.UI.Widgets.ColorWidget.AssetColorData$$get_WheelPointerPosition
ENTRY_POINT: 042627bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVA_StellarX_Core_UI_Widgets_ColorWidget_AssetColorData__get_WheelPointerPosition
               (undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000030;
  
FUN_042627d0:
  do {
    (*(code *)*param_1)();
    do {
      uVar2 = FUN_05386bd4(&stack0x00000020,*unaff_x24);
      uVar1 = in_stack_00000030;
      if ((uVar2 & 1) == 0) {
        System_Collections_Generic_EqualityComparer<IndirectBufferContext>__System_Collections_IEqualityComparer_Equals
                  (&stack0x00000020,*unaff_x23);
        return;
      }
      if (*(long *)(unaff_x20 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar2 = FUN_04288ecc(*(long *)(unaff_x20 + 0x78),in_stack_00000030,0);
    } while ((uVar2 & 1) != 0);
    if (*(long *)(unaff_x20 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_04288de8(*(long *)(unaff_x20 + 0x78),uVar1,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 5) * 0x10 + 0x138);
          goto FUN_042627d0;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    param_1 = (undefined8 *)FUN_040b1e00();
  } while( true );
}


