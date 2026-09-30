/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation.<GetMultipartUploadParts>d__146$$SetStateMachine
ENTRY_POINT: 064b8414
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_2
*/


void ModIO_Implementation_ModIOUnityImplementation_<GetMultipartUploadParts>d__146__SetStateMachine
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x19;
  long lVar9;
  long lVar10;
  long unaff_x22;
  long unaff_x23;
  long unaff_x26;
  long *plVar11;
  long unaff_x28;
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
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870();
    param_1 = *(long *)(unaff_x22 + 0x2f8);
  }
  if (**(char **)(param_1 + 0xb8) == '\0') {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0xe0);
    if (lVar9 == 0) goto LAB_064b8fb4;
    pcVar7 = *(code **)(unaff_x28 + 400);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x28 + 400) = pcVar7;
    }
    lVar9 = (*pcVar7)(lVar9);
    if (lVar9 == 0) goto LAB_064b8fb4;
    pcVar7 = *(code **)(unaff_x23 + 0x278);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x23 + 0x278) = pcVar7;
    }
    (*pcVar7)(lVar9,1);
    if (((*(long *)(unaff_x19 + 0xe0) == 0) ||
        (lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x100), lVar9 == 0)) ||
       (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_064b8fb4;
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x100);
    uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
    FUN_07a222a8();
    if (lVar9 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar9,uVar4,0);
    lVar9 = FUN_05300068(DAT_083fcb68);
    if (lVar9 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar9,*(undefined8 *)(unaff_x19 + 0xe0),0,0);
    lVar9 = *(long *)(unaff_x19 + 0xe0);
    param_1 = *(long *)(unaff_x22 + 0x2f8);
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870();
    param_1 = *(long *)(unaff_x22 + 0x2f8);
  }
  if (*(char *)(*(long *)(param_1 + 0xb8) + 1) == '\0') {
    lVar10 = lVar9;
    lVar9 = 0;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0xe8);
    if (lVar10 == 0) goto LAB_064b8fb4;
    pcVar7 = *(code **)(unaff_x28 + 400);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x28 + 400) = pcVar7;
    }
    lVar10 = (*pcVar7)(lVar10);
    if (lVar10 == 0) goto LAB_064b8fb4;
    pcVar7 = *(code **)(unaff_x23 + 0x278);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x23 + 0x278) = pcVar7;
    }
    (*pcVar7)(lVar10,1);
    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
        (lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x100), lVar10 == 0)) ||
       (*(long *)(lVar10 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_064b8fb4;
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x100);
    uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
    FUN_07a222a8();
    if (lVar10 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar10,uVar4,0);
    lVar10 = FUN_05300068(DAT_083fcb68);
    if (lVar10 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar10,*(undefined8 *)(unaff_x19 + 0xe8),0,0);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a119fc(lVar9,0,0);
    bVar3 = (uVar5 & 1) == 0;
    lVar10 = *(long *)(unaff_x19 + 0xe8);
    if (bVar3) {
      lVar10 = lVar9;
    }
    lVar9 = 0;
    if (bVar3) {
      lVar9 = *(long *)(unaff_x19 + 0xe8);
    }
  }
  uVar4 = DAT_084342a0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  FUN_0683f31c(&stack0x000000c0,*(undefined8 *)(*(long *)(DAT_083c8d10 + 0xb8) + 0x40),0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000120 = in_stack_000000c0;
  in_stack_00000138 = in_stack_000000d8;
  in_stack_00000130 = in_stack_000000d0;
  uVar4 = FUN_0666f060(0,uVar4,&stack0x00000120);
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ca458);
  }
  FUN_079c9c0c(uVar4,0);
  lVar8 = *(long *)(DAT_083c8d10 + 0xb8);
  if (*(long *)(lVar8 + 0x40) == 0) {
    if (*(long *)(lVar8 + 0x38) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xa8);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x28 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar7;
      }
      lVar8 = (*pcVar7)(lVar8);
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x23 + 0x278);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar7;
      }
      (*pcVar7)(lVar8,1);
      if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar8 = *(long *)(*plVar11 + 0x100);
      uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar8 + 0x10) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xa0);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x28 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar7;
      }
      lVar8 = (*pcVar7)(lVar8);
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x23 + 0x278);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar7;
      }
      (*pcVar7)(lVar8,1);
      if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar8 = *(long *)(*plVar11 + 0x100);
      uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar8 + 0x18) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xb8);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x28 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar7;
      }
      lVar8 = (*pcVar7)(lVar8);
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x23 + 0x278);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar7;
      }
      (*pcVar7)(lVar8,1);
      if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar8 = *(long *)(*plVar11 + 0x100);
      uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar8 + 0x20) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xc0);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x28 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar7;
      }
      lVar8 = (*pcVar7)(lVar8);
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x23 + 0x278);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar7;
      }
      (*pcVar7)(lVar8,1);
      if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar8 = *(long *)(*plVar11 + 0x100);
      uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar8 + 0x28) != 0) {
      plVar11 = (long *)(unaff_x19 + 200);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x28 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar7;
      }
      lVar8 = (*pcVar7)(lVar8);
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x23 + 0x278);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar7;
      }
      (*pcVar7)(lVar8,1);
      if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar8 = *(long *)(*plVar11 + 0x100);
      uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar8 + 0x48) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xd0);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x28 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar7;
      }
      lVar8 = (*pcVar7)(lVar8);
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x23 + 0x278);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar7;
      }
      (*pcVar7)(lVar8,1);
      if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar8 = *(long *)(*plVar11 + 0x100);
      uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar8 + 0x30) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xd8);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x28 + 400);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar7;
      }
      lVar8 = (*pcVar7)(lVar8);
      if (lVar8 == 0) goto LAB_064b8fb4;
      pcVar7 = *(code **)(unaff_x23 + 0x278);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar7;
      }
      (*pcVar7)(lVar8,1);
      if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
         (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar8 = *(long *)(*plVar11 + 0x100);
      uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    lVar8 = 0;
  }
  else {
    plVar11 = (long *)(unaff_x19 + 0xb0);
    lVar8 = *plVar11;
    if (lVar8 == 0) goto LAB_064b8fb4;
    pcVar7 = *(code **)(unaff_x28 + 400);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x28 + 400) = pcVar7;
    }
    lVar8 = (*pcVar7)(lVar8);
    if (lVar8 == 0) goto LAB_064b8fb4;
    pcVar7 = *(code **)(unaff_x23 + 0x278);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x23 + 0x278) = pcVar7;
    }
    (*pcVar7)(lVar8,1);
    if (((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x100), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*plVar11 == 0) goto LAB_064b8fb4;
    lVar8 = *(long *)(*plVar11 + 0x100);
    uVar4 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
LAB_064b8bd4:
    FUN_07a222a8();
    if (lVar8 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar8,uVar4,0);
    lVar8 = *plVar11;
    lVar6 = FUN_05300068(DAT_083fcb68);
    if (lVar6 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar6,*plVar11,0,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0xf0);
  in_stack_000000f8 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000f0 = 4;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a119fc(lVar8,0,0);
  in_stack_000000e0 = lVar10;
  if ((uVar5 & 1) == 0) {
    in_stack_000000e0 = lVar8;
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
  if (lVar6 == 0) {
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
  FUN_07c8c628(lVar6,&stack0x00000090,0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(lVar8,0,0);
  if ((uVar5 & 1) != 0) {
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
    in_stack_000000e0 = lVar10;
    in_stack_00000108 = in_stack_000000d8;
    in_stack_00000110 = lVar10;
    if (lVar8 == 0) goto LAB_064b8fb4;
    in_stack_00000068 = 0;
    in_stack_00000060 = 4;
    in_stack_00000070 = 0;
    in_stack_00000078 = in_stack_000000d8;
    in_stack_00000080 = lVar10;
    in_stack_00000108 = in_stack_000000d8;
    FUN_07c8c628(lVar8,&stack0x00000060,0);
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(lVar10,0,0);
  if ((uVar5 & 1) != 0) {
    in_stack_00000110 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    in_stack_000000f0 = 4;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a119fc(lVar8,0,0);
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)(unaff_x19 + 0xf0);
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
    in_stack_000000d8 = lVar8;
    in_stack_000000e0 = lVar9;
    in_stack_00000108 = lVar8;
    in_stack_00000110 = lVar9;
    if (lVar10 == 0) goto LAB_064b8fb4;
    in_stack_00000038 = in_stack_000000f8;
    in_stack_00000030 = in_stack_000000f0;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000048 = lVar8;
    in_stack_00000050 = lVar9;
    FUN_07c8c628(lVar10,&stack0x00000030,0);
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(lVar9,0,0);
  if ((uVar5 & 1) != 0) {
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
    in_stack_000000d8 = lVar10;
    in_stack_00000108 = lVar10;
    if (lVar9 == 0) goto LAB_064b8fb4;
    FUN_07c8c628(lVar9);
  }
  return;
}


