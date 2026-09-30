/*
FUNCTION_NAME: ModIO.Implementation.ModIOUnityImplementation.<GetMultipartUploadSessions>d__147$$MoveNext
ENTRY_POINT: 064b841c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_4
*/


void ModIO_Implementation_ModIOUnityImplementation_<GetMultipartUploadSessions>d__147__MoveNext
               (void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long unaff_x19;
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
  
  FUN_033b9870();
  lVar4 = *(long *)(unaff_x22 + 0x2f8);
  if (**(char **)(lVar4 + 0xb8) == '\0') {
    lVar10 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0xe0);
    if (lVar4 == 0) goto LAB_064b8fb4;
    pcVar8 = *(code **)(unaff_x28 + 400);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x28 + 400) = pcVar8;
    }
    lVar4 = (*pcVar8)(lVar4);
    if (lVar4 == 0) goto LAB_064b8fb4;
    pcVar8 = *(code **)(unaff_x23 + 0x278);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x23 + 0x278) = pcVar8;
    }
    (*pcVar8)(lVar4,1);
    if (((*(long *)(unaff_x19 + 0xe0) == 0) ||
        (lVar4 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x100), lVar4 == 0)) ||
       (*(long *)(lVar4 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_064b8fb4;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0xe0) + 0x100);
    uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
    FUN_07a222a8();
    if (lVar4 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar4,uVar5,0);
    lVar4 = FUN_05300068(DAT_083fcb68);
    if (lVar4 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar4,*(undefined8 *)(unaff_x19 + 0xe0),0,0);
    lVar10 = *(long *)(unaff_x19 + 0xe0);
    lVar4 = *(long *)(unaff_x22 + 0x2f8);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    FUN_033b9870();
    lVar4 = *(long *)(unaff_x22 + 0x2f8);
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 1) == '\0') {
    lVar4 = lVar10;
    lVar10 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 0xe8);
    if (lVar4 == 0) goto LAB_064b8fb4;
    pcVar8 = *(code **)(unaff_x28 + 400);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x28 + 400) = pcVar8;
    }
    lVar4 = (*pcVar8)(lVar4);
    if (lVar4 == 0) goto LAB_064b8fb4;
    pcVar8 = *(code **)(unaff_x23 + 0x278);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x23 + 0x278) = pcVar8;
    }
    (*pcVar8)(lVar4,1);
    if (((*(long *)(unaff_x19 + 0xe8) == 0) ||
        (lVar4 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x100), lVar4 == 0)) ||
       (*(long *)(lVar4 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_064b8fb4;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0xe8) + 0x100);
    uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
    FUN_07a222a8();
    if (lVar4 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar4,uVar5,0);
    lVar4 = FUN_05300068(DAT_083fcb68);
    if (lVar4 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar4,*(undefined8 *)(unaff_x19 + 0xe8),0,0);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a119fc(lVar10,0,0);
    bVar3 = (uVar6 & 1) == 0;
    lVar4 = *(long *)(unaff_x19 + 0xe8);
    if (bVar3) {
      lVar4 = lVar10;
    }
    lVar10 = 0;
    if (bVar3) {
      lVar10 = *(long *)(unaff_x19 + 0xe8);
    }
  }
  uVar5 = DAT_084342a0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  FUN_0683f31c(&stack0x000000c0,*(undefined8 *)(*(long *)(DAT_083c8d10 + 0xb8) + 0x40),0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000120 = in_stack_000000c0;
  in_stack_00000138 = in_stack_000000d8;
  in_stack_00000130 = in_stack_000000d0;
  uVar5 = FUN_0666f060(0,uVar5,&stack0x00000120);
  if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ca458);
  }
  FUN_079c9c0c(uVar5,0);
  lVar9 = *(long *)(DAT_083c8d10 + 0xb8);
  if (*(long *)(lVar9 + 0x40) == 0) {
    if (*(long *)(lVar9 + 0x38) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xa8);
      lVar9 = *plVar11;
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x28 + 400);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar8;
      }
      lVar9 = (*pcVar8)(lVar9);
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x23 + 0x278);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar8;
      }
      (*pcVar8)(lVar9,1);
      if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar9 = *(long *)(*plVar11 + 0x100);
      uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar9 + 0x10) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xa0);
      lVar9 = *plVar11;
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x28 + 400);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar8;
      }
      lVar9 = (*pcVar8)(lVar9);
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x23 + 0x278);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar8;
      }
      (*pcVar8)(lVar9,1);
      if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar9 = *(long *)(*plVar11 + 0x100);
      uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xb8);
      lVar9 = *plVar11;
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x28 + 400);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar8;
      }
      lVar9 = (*pcVar8)(lVar9);
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x23 + 0x278);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar8;
      }
      (*pcVar8)(lVar9,1);
      if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar9 = *(long *)(*plVar11 + 0x100);
      uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar9 + 0x20) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xc0);
      lVar9 = *plVar11;
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x28 + 400);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar8;
      }
      lVar9 = (*pcVar8)(lVar9);
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x23 + 0x278);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar8;
      }
      (*pcVar8)(lVar9,1);
      if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar9 = *(long *)(*plVar11 + 0x100);
      uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar9 + 0x28) != 0) {
      plVar11 = (long *)(unaff_x19 + 200);
      lVar9 = *plVar11;
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x28 + 400);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar8;
      }
      lVar9 = (*pcVar8)(lVar9);
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x23 + 0x278);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar8;
      }
      (*pcVar8)(lVar9,1);
      if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar9 = *(long *)(*plVar11 + 0x100);
      uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar9 + 0x48) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xd0);
      lVar9 = *plVar11;
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x28 + 400);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar8;
      }
      lVar9 = (*pcVar8)(lVar9);
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x23 + 0x278);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar8;
      }
      (*pcVar8)(lVar9,1);
      if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar9 = *(long *)(*plVar11 + 0x100);
      uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    if (*(long *)(lVar9 + 0x30) != 0) {
      plVar11 = (long *)(unaff_x19 + 0xd8);
      lVar9 = *plVar11;
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x28 + 400);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        *(code **)(unaff_x28 + 400) = pcVar8;
      }
      lVar9 = (*pcVar8)(lVar9);
      if (lVar9 == 0) goto LAB_064b8fb4;
      pcVar8 = *(code **)(unaff_x23 + 0x278);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar8;
      }
      (*pcVar8)(lVar9,1);
      if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
      FUN_07a2142c();
      if (*plVar11 == 0) goto LAB_064b8fb4;
      lVar9 = *(long *)(*plVar11 + 0x100);
      uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
      goto LAB_064b8bd4;
    }
    lVar9 = 0;
  }
  else {
    plVar11 = (long *)(unaff_x19 + 0xb0);
    lVar9 = *plVar11;
    if (lVar9 == 0) goto LAB_064b8fb4;
    pcVar8 = *(code **)(unaff_x28 + 400);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x28 + 400) = pcVar8;
    }
    lVar9 = (*pcVar8)(lVar9);
    if (lVar9 == 0) goto LAB_064b8fb4;
    pcVar8 = *(code **)(unaff_x23 + 0x278);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x23 + 0x278) = pcVar8;
    }
    (*pcVar8)(lVar9,1);
    if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x100), lVar9 == 0)) ||
       (*(long *)(lVar9 + 0x10) == 0)) goto LAB_064b8fb4;
    FUN_07a2142c();
    if (*plVar11 == 0) goto LAB_064b8fb4;
    lVar9 = *(long *)(*plVar11 + 0x100);
    uVar5 = FUN_03398a84(*(undefined8 *)(unaff_x26 + 0x738));
LAB_064b8bd4:
    FUN_07a222a8();
    if (lVar9 == 0) goto LAB_064b8fb4;
    FUN_07a223cc(lVar9,uVar5,0);
    lVar9 = *plVar11;
    lVar7 = FUN_05300068(DAT_083fcb68);
    if (lVar7 == 0) goto LAB_064b8fb4;
    FUN_06498934(lVar7,*plVar11,0,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0xf0);
  in_stack_000000f8 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000f0 = 4;
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a119fc(lVar9,0,0);
  in_stack_000000e0 = lVar4;
  if ((uVar6 & 1) == 0) {
    in_stack_000000e0 = lVar9;
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
  if (lVar7 == 0) {
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
  FUN_07c8c628(lVar7,&stack0x00000090,0);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
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
    in_stack_000000e0 = lVar4;
    in_stack_00000108 = in_stack_000000d8;
    in_stack_00000110 = lVar4;
    if (lVar9 == 0) goto LAB_064b8fb4;
    in_stack_00000068 = 0;
    in_stack_00000060 = 4;
    in_stack_00000070 = 0;
    in_stack_00000078 = in_stack_000000d8;
    in_stack_00000080 = lVar4;
    in_stack_00000108 = in_stack_000000d8;
    FUN_07c8c628(lVar9,&stack0x00000060,0);
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4(lVar4,0,0);
  if ((uVar6 & 1) != 0) {
    in_stack_00000110 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000108 = 0;
    in_stack_00000100 = 0;
    in_stack_000000f0 = 4;
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar6 = FUN_07a119fc(lVar9,0,0);
    if ((uVar6 & 1) != 0) {
      lVar9 = *(long *)(unaff_x19 + 0xf0);
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
    in_stack_000000d8 = lVar9;
    in_stack_000000e0 = lVar10;
    in_stack_00000108 = lVar9;
    in_stack_00000110 = lVar10;
    if (lVar4 == 0) goto LAB_064b8fb4;
    in_stack_00000038 = in_stack_000000f8;
    in_stack_00000030 = in_stack_000000f0;
    in_stack_00000040 = in_stack_00000100;
    in_stack_00000048 = lVar9;
    in_stack_00000050 = lVar10;
    FUN_07c8c628(lVar4,&stack0x00000030,0);
  }
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar6 = FUN_07a0d2c4(lVar10,0,0);
  if ((uVar6 & 1) != 0) {
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
    in_stack_000000d8 = lVar4;
    in_stack_00000108 = lVar4;
    if (lVar10 == 0) goto LAB_064b8fb4;
    FUN_07c8c628(lVar10);
  }
  return;
}


