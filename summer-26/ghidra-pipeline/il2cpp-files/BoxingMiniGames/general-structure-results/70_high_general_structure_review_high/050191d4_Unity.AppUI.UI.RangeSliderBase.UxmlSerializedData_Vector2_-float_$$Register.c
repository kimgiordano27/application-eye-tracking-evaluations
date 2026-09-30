/*
FUNCTION_NAME: Unity.AppUI.UI.RangeSliderBase.UxmlSerializedData<Vector2,-float>$$Register
ENTRY_POINT: 050191d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05019324) */

void Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2,_float>__Register(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  plVar1 = (long *)FUN_03f0beb8(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xb8));
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))
                    (plVar1,unaff_w21 != 0,(char)unaff_x19[0x60],*(undefined8 *)(*plVar1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    lVar5 = unaff_x19[0x60];
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar1 = (long *)FUN_0538dde0(unaff_w21 != 0,(char)lVar5 != '\0',
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar1[7] = (long)unaff_x19;
    thunk_FUN_036b7ad0();
    (**(code **)(*unaff_x19 + 0xad8))();
    (**(code **)(*unaff_x19 + 0x188))();
    if (plVar1 != (long *)0x0) {
      lVar5 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_050192f8;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_0367cd30(plVar1,*(long *)PTR_DAT_079f4598,0);
LAB_050192f8:
      (*(code *)*puVar4)(plVar1,puVar4[1]);
    }
  }
  return;
}


