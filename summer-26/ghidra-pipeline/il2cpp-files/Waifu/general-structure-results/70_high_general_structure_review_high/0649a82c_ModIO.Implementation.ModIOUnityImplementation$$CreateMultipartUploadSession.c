/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation$$CreateMultipartUploadSession
ENTRY_POINT: 0649a82c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void ModIO_Implementation_ModIOUnityImplementation__CreateMultipartUploadSession(code *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined4 unaff_w20;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long unaff_x23;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    *(code **)(unaff_x22 + 0x278) = param_1;
  }
  (*param_1)();
  lVar5 = DAT_08401310;
  switch(unaff_w20) {
  case 0:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_0843d7d0;
    break;
  case 1:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_0843d7c0;
    break;
  case 2:
  case 5:
  case 8:
  case 0xb:
    lVar5 = *(long *)(unaff_x19 + 0x698);
    if (lVar5 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x23 + 400);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x23 + 400) = UNRECOVERED_JUMPTABLE;
      }
      lVar5 = (*UNRECOVERED_JUMPTABLE)(lVar5);
      if (lVar5 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x278);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE =
               (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
          *(code **)(unaff_x22 + 0x278) = UNRECOVERED_JUMPTABLE;
        }
        (*UNRECOVERED_JUMPTABLE)(lVar5,0);
        lVar5 = *(long *)(unaff_x19 + 0x6c8);
        if (lVar5 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x278);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE =
                 (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
            *(code **)(unaff_x22 + 0x278) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x0649a908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(lVar5,1);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  case 3:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_084391c8;
    break;
  case 4:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_08444578;
    break;
  case 6:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_0844b440;
    break;
  case 7:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_0844b430;
    break;
  case 9:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_0844ba28;
    break;
  case 10:
    uVar6 = *(undefined8 *)(unaff_x19 + 0x710);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x698);
    lVar2 = *(long *)(DAT_08401310 + 0x38);
    if (lVar2 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar2 = *(long *)(lVar5 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar1 = DAT_0844ba20;
    break;
  default:
    return;
  }
  FUN_064c7a44(uVar6,uVar1,uVar4,*puVar3,0);
  return;
}


