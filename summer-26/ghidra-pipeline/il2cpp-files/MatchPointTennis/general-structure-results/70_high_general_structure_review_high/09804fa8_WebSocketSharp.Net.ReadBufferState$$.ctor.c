/*
FUNCTION_NAME: WebSocketSharp.Net.ReadBufferState$$.ctor
ENTRY_POINT: 09804fa8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void WebSocketSharp_Net_ReadBufferState___ctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 unaff_w20;
  long unaff_x21;
  long lVar7;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_044a54b4();
  uVar2 = UnityEngine_UI_Slider__OnEnable(unaff_w20,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_09805154;
    uVar3 = FUN_096879c0(*(long *)(unaff_x21 + 0x20),0);
    puVar1 = UnityEngine_SerializeField_var;
    if (*(int *)(*(long *)UnityEngine_SerializeField_var + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)UnityEngine_SerializeField_var);
    }
    FUN_097fa3ec(uVar3);
    if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_09805154;
    uVar3 = FUN_096879c0(*(long *)(unaff_x21 + 0x20),0);
    uVar2 = FUN_097da1e8(uVar3,0);
    if ((uVar2 & 1) == 0) {
LAB_0980509c:
      lVar7 = *(long *)(unaff_x21 + 0x20);
    }
    else {
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_09805154;
      uVar2 = FUN_09692894(*(long *)(unaff_x21 + 0x20),0);
      if ((uVar2 & 1) == 0) goto LAB_0980509c;
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_09805154;
      uVar3 = FUN_096879c0(*(long *)(unaff_x21 + 0x20),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar1);
      }
      uVar2 = FUN_097fa6d8(uVar3,unaff_w20,&stack0x00000008);
      lVar7 = *(long *)(unaff_x21 + 0x20);
      if ((uVar2 & 1) != 0) {
        if (lVar7 == 0) goto LAB_09805154;
        uVar3 = FUN_096879c0(lVar7,0);
        uVar2 = FUN_097e5780(lVar7,unaff_w20,uVar3);
        if ((uVar2 & 1) != 0) {
          return;
        }
        goto LAB_09805120;
      }
    }
    if ((lVar7 == 0) || (plVar4 = (long *)FUN_0968c264(lVar7,0), plVar4 == (long *)0x0))
    goto LAB_09805154;
    lVar7 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f2ac38) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar6 + 0x12) * 0x10 + 0x138);
          goto LAB_09805110;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f2ac38,0x12);
LAB_09805110:
    (*(code *)*puVar5)(plVar4,unaff_w20,puVar5[1]);
  }
LAB_09805120:
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    uVar3 = FUN_096879c0(*(long *)(unaff_x21 + 0x20),0);
    FUN_097e1be4(uVar3,unaff_w20);
    return;
  }
LAB_09805154:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


