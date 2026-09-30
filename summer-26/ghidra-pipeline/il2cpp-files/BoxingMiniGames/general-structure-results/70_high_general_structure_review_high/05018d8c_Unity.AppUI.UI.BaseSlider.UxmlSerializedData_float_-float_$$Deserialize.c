/*
FUNCTION_NAME: Unity.AppUI.UI.BaseSlider.UxmlSerializedData<float,-float>$$Deserialize
ENTRY_POINT: 05018d8c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_BaseSlider_UxmlSerializedData<float,_float>__Deserialize(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x24;
  long *unaff_x25;
  float fVar6;
  float unaff_s8;
  float fVar7;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  undefined1 auVar8 [16];
  
  plVar1 = (long *)FUN_073199bc();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    fVar7 = (float)(int)(unaff_s9 * unaff_s11) - (unaff_s12 + unaff_s10 + unaff_s8);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x4e) * 0x10 + 0x138);
          goto LAB_05018dfc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar1,*unaff_x24,0x4e);
LAB_05018dfc:
    fVar6 = (float)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (ABS(fVar6 - fVar7) <= DAT_01650d9c) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x318) != 0) {
      plVar1 = (long *)FUN_07320328(*(long *)(unaff_x19 + 0x318),0);
      fVar6 = 0.0;
      if (0.0 <= fVar7) {
        fVar6 = fVar7;
      }
      auVar8 = FUN_073408a4(fVar6,0);
      if (plVar1 != (long *)0x0) {
        lVar3 = *plVar1;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xa7) * 0x10 + 0x138);
              goto LAB_05018ec0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_0367cd30(plVar1,*unaff_x25,0xa7);
LAB_05018ec0:
                    /* WARNING: Could not recover jumptable at 0x05018eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar2)(plVar1,auVar8._0_8_,auVar8._8_8_ & 0xffffffff,puVar2[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


