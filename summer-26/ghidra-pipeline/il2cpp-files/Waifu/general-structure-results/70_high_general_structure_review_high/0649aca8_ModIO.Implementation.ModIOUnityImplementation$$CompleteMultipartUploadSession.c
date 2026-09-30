/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation$$CompleteMultipartUploadSession
ENTRY_POINT: 0649aca8
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void ModIO_Implementation_ModIOUnityImplementation__CompleteMultipartUploadSession(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  undefined1 unaff_w23;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ceed0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083fcb00,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084391c8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084391a8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0844ba28,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843d7d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08446cb0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08439cb0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x2a8) = unaff_w23;
  lVar6 = *(long *)(unaff_x19 + 0x40);
  if (*(int *)(DAT_083ceed0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (lVar6 != unaff_x21) {
switchD_0649ae48_default:
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  lVar6 = FUN_05300068(DAT_083fcb00);
  if ((lVar6 == 0) || (uVar1 = FUN_064aab18(), lVar7 == 0)) goto LAB_0649b158;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar7,uVar1 & 1);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if (lVar6 == 0) goto LAB_0649b158;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar6,0);
  lVar6 = *(long *)(unaff_x19 + 0x38);
  if (lVar6 == 0) goto LAB_0649b158;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar6,0);
  lVar6 = DAT_08401310;
  switch(unaff_w20) {
  case 0:
    uVar4 = *(undefined8 *)(unaff_x19 + 0x330);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    lVar7 = *(long *)(DAT_08401310 + 0x38);
    if (lVar7 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar6 + 0xb8);
    uVar2 = DAT_0843d7d0;
    break;
  case 1:
  case 10:
    uVar4 = *(undefined8 *)(unaff_x19 + 0x330);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    lVar7 = *(long *)(DAT_08401310 + 0x38);
    if (lVar7 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar6 + 0xb8);
    uVar2 = DAT_08446cb0;
    break;
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xb:
    uVar4 = *(undefined8 *)(unaff_x19 + 0x330);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    lVar7 = *(long *)(DAT_08401310 + 0x38);
    if (lVar7 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    FUN_064c7a44(uVar4,DAT_08439cb0,uVar5,**(undefined8 **)(lVar6 + 0xb8),0);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      FUN_07aef55c(0,*(long *)(unaff_x19 + 0x28),0);
      return;
    }
    goto LAB_0649b158;
  case 3:
    uVar4 = *(undefined8 *)(unaff_x19 + 0x330);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    lVar7 = *(long *)(DAT_08401310 + 0x38);
    if (lVar7 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar6 + 0xb8);
    uVar2 = DAT_084391c8;
    goto LAB_0649b108;
  case 4:
    uVar4 = *(undefined8 *)(unaff_x19 + 0x330);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    lVar7 = *(long *)(DAT_08401310 + 0x38);
    if (lVar7 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar6 + 0xb8);
    uVar2 = DAT_084391a8;
    break;
  case 9:
    uVar4 = *(undefined8 *)(unaff_x19 + 0x330);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    lVar7 = *(long *)(DAT_08401310 + 0x38);
    if (lVar7 == 0) {
      FUN_0338f674(DAT_08401310);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0338f618();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0338f618();
    }
    puVar3 = *(undefined8 **)(lVar6 + 0xb8);
    uVar2 = DAT_0844ba28;
LAB_0649b108:
    FUN_064c7a44(uVar4,uVar2,uVar5,*puVar3,0);
    goto LAB_0649b11c;
  default:
    goto switchD_0649ae48_default;
  }
  FUN_064c7a44(uVar4,uVar2,uVar5,*puVar3,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_07aef55c(0x3f800000,*(long *)(unaff_x19 + 0x28),0);
LAB_0649b11c:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if (lVar6 != 0) {
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0649b154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_086ef278)(lVar6,1);
      return;
    }
  }
LAB_0649b158:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


