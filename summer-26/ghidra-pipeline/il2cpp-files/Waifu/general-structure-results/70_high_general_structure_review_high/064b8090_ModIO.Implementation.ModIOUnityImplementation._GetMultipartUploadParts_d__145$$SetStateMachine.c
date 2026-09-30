/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation.<GetMultipartUploadParts>d__145$$SetStateMachine
ENTRY_POINT: 064b8090
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_2
*/


void ModIO_Implementation_ModIOUnityImplementation_<GetMultipartUploadParts>d__145__SetStateMachine
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 unaff_w21;
  undefined8 uVar10;
  long *plVar11;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  
  FUN_0335b6c8(&DAT_084037e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084037e8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c8d10,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c92f8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ca458,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083fcb68,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083d2738,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084342a0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08455b88,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_084342d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x385) = unaff_w21;
  in_stack_00000110 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  lVar8 = *(long *)(unaff_x19 + 0x188);
  if (lVar8 == 0) goto LAB_064b8fb4;
  if (DAT_086ef190 == (code *)0x0) {
    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
  }
  lVar8 = (*DAT_086ef190)(lVar8);
  if (lVar8 == 0) goto LAB_064b8fb4;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar8,1);
  lVar8 = *(long *)(unaff_x19 + 0x78);
  if (lVar8 == 0) goto LAB_064b8fb4;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar8,1);
  lVar8 = DAT_08401310;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x188);
  lVar6 = *(long *)(DAT_08401310 + 0x38);
  if (lVar6 == 0) {
    FUN_0338f674(DAT_08401310);
    lVar6 = *(long *)(lVar8 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0338f618();
  }
  FUN_064c7a44(uVar9,DAT_084342d8,uVar10,**(undefined8 **)(lVar8 + 0xb8),0);
  lVar8 = *(long *)(unaff_x19 + 400);
  if (lVar8 == 0) goto LAB_064b8fb4;
  if (DAT_086ef190 == (code *)0x0) {
    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
  }
  lVar8 = (*DAT_086ef190)(lVar8);
  if (lVar8 == 0) goto LAB_064b8fb4;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar8,1);
  lVar8 = DAT_08401310;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x19 + 400);
  lVar6 = *(long *)(DAT_08401310 + 0x38);
  if (lVar6 == 0) {
    FUN_0338f674(DAT_08401310);
    lVar6 = *(long *)(lVar8 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0338f618();
  }
  FUN_064c7a44(uVar9,DAT_08455b88,uVar10,**(undefined8 **)(lVar8 + 0xb8),0);
  lVar8 = *(long *)(unaff_x19 + 0xf0);
  if (lVar8 == 0) goto LAB_064b8fb4;
  if (DAT_086ef190 == (code *)0x0) {
    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
  }
  lVar8 = (*DAT_086ef190)(lVar8);
  if (lVar8 == 0) goto LAB_064b8fb4;
  if (DAT_086ef278 == (code *)0x0) {
    DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
  (*DAT_086ef278)(lVar8,1);
  if (((*(long *)(unaff_x19 + 0xf0) == 0) ||
      (lVar8 = *(long *)(*(long *)(unaff_x19 + 0xf0) + 0x100), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
  FUN_07a2142c();
  if (*(long *)(unaff_x19 + 0xf0) == 0) goto LAB_064b8fb4;
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0xf0) + 0x100);
  uVar9 = FUN_03398a84(DAT_083d2738);
  FUN_07a222a8();
  if (lVar8 == 0) goto LAB_064b8fb4;
  FUN_07a223cc(lVar8,uVar9,0);
  if (*(int *)(DAT_083c92f8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (**(char **)(DAT_083c92f8 + 0xb8) == '\0') {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(unaff_x19 + 0xe0);
    if (lVar8 == 0) goto LAB_064b8fb4;
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar8 = (*DAT_086ef190)(lVar8);
    if (lVar8 == 0) goto LAB_064b8fb4;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar8,1);
    if (((*(long *)(unaff_x19 + 0xe0) == 0) ||
        (lVar8 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x100), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_064b8fb4;
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x100);
    uVar9 = FUN_03398a84(DAT_083d2738);
    FUN_07a222a8();
    if (lVar8 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar8,uVar9,0);
    lVar8 = FUN_05300068(DAT_083fcb68);
    if (lVar8 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar8,*(undefined8 *)(unaff_x19 + 0xe0),0,0);
    lVar8 = *(long *)(unaff_x19 + 0xe0);
  }
  if (*(int *)(DAT_083c92f8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  if (*(char *)(*(long *)(DAT_083c92f8 + 0xb8) + 1) == '\0') {
    lVar6 = lVar8;
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(unaff_x19 + 0xe8);
    if (lVar6 == 0) goto LAB_064b8fb4;
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar6 = (*DAT_086ef190)(lVar6);
    if (lVar6 == 0) goto LAB_064b8fb4;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar6,1);
    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
        (lVar6 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x100), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_064b8fb4;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x100);
    uVar9 = FUN_03398a84(DAT_083d2738);
    FUN_07a222a8();
    if (lVar6 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar6,uVar9,0);
    lVar6 = FUN_05300068(DAT_083fcb68);
    if (lVar6 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar6,*(undefined8 *)(unaff_x19 + 0xe8),0,0);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar4 = FUN_07a119fc(lVar8,0,0);
    bVar3 = (uVar4 & 1) == 0;
    lVar6 = *(long *)(unaff_x19 + 0xe8);
    if (bVar3) {
      lVar6 = lVar8;
    }
    lVar8 = 0;
    if (bVar3) {
      lVar8 = *(long *)(unaff_x19 + 0xe8);
    }
  }
  uVar9 = DAT_084342a0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  FUN_0683f31c(&stack0x000000c0,*(undefined8 *)(*(long *)(DAT_083c8d10 + 0xb8) + 0x40),0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000120 = in_stack_000000c0;
  in_stack_00000138 = in_stack_000000d8;
  in_stack_00000130 = in_stack_000000d0;
  uVar9 = FUN_0666f060(0,uVar9,&stack0x00000120);
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ca458);
  }
  FUN_079c9c0c(uVar9,0);
  lVar7 = *(long *)(DAT_083c8d10 + 0xb8);
  if (*(long *)(lVar7 + 0x40) == 0) {
    if (*(long *)(lVar7 + 0x38) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xa8);
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,1);
      if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
         (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar7 = *(long *)(*plVar11 + 0x100);
      uVar9 = FUN_03398a84(DAT_083d2738);
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar7 + 0x10) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xa0);
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,1);
      if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
         (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar7 = *(long *)(*plVar11 + 0x100);
      uVar9 = FUN_03398a84(DAT_083d2738);
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar7 + 0x18) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xb8);
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,1);
      if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
         (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar7 = *(long *)(*plVar11 + 0x100);
      uVar9 = FUN_03398a84(DAT_083d2738);
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar7 + 0x20) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xc0);
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,1);
      if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
         (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar7 = *(long *)(*plVar11 + 0x100);
      uVar9 = FUN_03398a84(DAT_083d2738);
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar7 + 0x28) != 0) {
      plVar11 = (long *)(unaff_x19 + 200);
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,1);
      if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
         (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar7 = *(long *)(*plVar11 + 0x100);
      uVar9 = FUN_03398a84(DAT_083d2738);
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar7 + 0x48) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xd0);
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,1);
      if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
         (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar7 = *(long *)(*plVar11 + 0x100);
      uVar9 = FUN_03398a84(DAT_083d2738);
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar7 + 0x30) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xd8);
      lVar7 = *plVar11;
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar7 = (*DAT_086ef190)(lVar7);
      if (lVar7 == 0) goto LAB_064b8fb4;
      if (DAT_086ef278 == (code *)0x0) {
        DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
      (*DAT_086ef278)(lVar7,1);
      if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
         (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar7 = *(long *)(*plVar11 + 0x100);
      uVar9 = FUN_03398a84(DAT_083d2738);
      goto LAB_064b8bd4;
    }
    lVar7 = 0;
  }
  else {
    plVar11 = (long *)(unaff_x19 + 0xb0);
    lVar7 = *plVar11;
    if (lVar7 == 0) goto LAB_064b8fb4;
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)(lVar7);
    if (lVar7 == 0) goto LAB_064b8fb4;
    if (DAT_086ef278 == (code *)0x0) {
      DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
    (*DAT_086ef278)(lVar7,1);
    if (((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x100), lVar7 == 0)) ||
       (*(long *)(lVar7 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*plVar11 == 0) goto LAB_064b8fb4;
    lVar7 = *(long *)(*plVar11 + 0x100);
    uVar9 = FUN_03398a84(DAT_083d2738);
LAB_064b8bd4:
    FUN_07a222a8();
    if (lVar7 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar7,uVar9,0);
    lVar7 = *plVar11;
    lVar5 = FUN_05300068(DAT_083fcb68);
    if (lVar5 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar5,*plVar11,0,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0xf0);
  in_stack_000000f8 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000f0 = 4;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a119fc(lVar7,0,0);
  in_stack_000000e0 = lVar6;
  if ((uVar4 & 1) == 0) {
    in_stack_000000e0 = lVar7;
  }
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000110 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000110 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  in_stack_000000c8 = in_stack_000000f8;
  in_stack_000000c0 = in_stack_000000f0;
  in_stack_000000d8 = in_stack_00000108;
  in_stack_000000d0 = in_stack_00000100;
  in_stack_00000110 = in_stack_000000e0;
  if (lVar5 == 0) {
LAB_064b8fb4:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  in_stack_00000098 = in_stack_000000f8;
  in_stack_00000090 = in_stack_000000f0;
  in_stack_000000a8 = in_stack_00000108;
  in_stack_000000a0 = in_stack_00000100;
  in_stack_000000b0 = in_stack_000000e0;
  in_stack_00000110 = in_stack_000000e0;
  FUN_07c8c628(lVar5,&stack0x00000090,0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a0d2c4(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    in_stack_000000f0 = 4;
    in_stack_000000d8 = *(long *)(unaff_x19 + 0xf0);
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000108 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000108 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000110 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000110 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 4;
    in_stack_000000d0 = 0;
    in_stack_000000e0 = lVar6;
    in_stack_00000108 = in_stack_000000d8;
    in_stack_00000110 = lVar6;
    if (lVar7 == 0) goto LAB_064b8fb4;
    in_stack_00000068 = 0;
    in_stack_00000060 = 4;
    in_stack_00000070 = 0;
    in_stack_00000078 = in_stack_000000d8;
    in_stack_00000080 = lVar6;
    in_stack_00000108 = in_stack_000000d8;
    FUN_07c8c628(lVar7,&stack0x00000060,0);
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a0d2c4(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    in_stack_00000110 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    in_stack_000000f0 = 4;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar4 = FUN_07a119fc(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(unaff_x19 + 0xf0);
    }
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000108 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000108 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000110 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000110 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    in_stack_000000c8 = in_stack_000000f8;
    in_stack_000000c0 = in_stack_000000f0;
    in_stack_000000d0 = in_stack_00000100;
    in_stack_000000d8 = lVar7;
    in_stack_000000e0 = lVar8;
    in_stack_00000108 = lVar7;
    in_stack_00000110 = lVar8;
    if (lVar6 == 0) goto LAB_064b8fb4;
    in_stack_00000038 = in_stack_000000f8;
    in_stack_00000030 = in_stack_000000f0;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000048 = lVar7;
    in_stack_00000050 = lVar8;
    FUN_07c8c628(lVar6,&stack0x00000030,0);
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar4 = FUN_07a0d2c4(lVar8,0,0);
  if ((uVar4 & 1) != 0) {
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    in_stack_000000f0 = 4;
    in_stack_00000110 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)&stack0x00000108 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)&stack0x00000108 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 4;
    in_stack_000000d0 = 0;
    in_stack_000000e0 = 0;
    in_stack_000000d8 = lVar6;
    in_stack_00000108 = lVar6;
    if (lVar8 == 0) goto LAB_064b8fb4;
    FUN_07c8c628(lVar8);
  }
  return;
}


