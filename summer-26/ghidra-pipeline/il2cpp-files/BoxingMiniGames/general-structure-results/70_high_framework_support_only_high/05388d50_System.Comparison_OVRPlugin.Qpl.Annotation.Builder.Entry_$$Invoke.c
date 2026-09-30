/*
FUNCTION_NAME: System.Comparison<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 05388d50
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Comparison<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  ulong in_x9;
  ulong uVar3;
  long unaff_x19;
  ulong __n;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x22;
  void *__s;
  void *unaff_x24;
  size_t unaff_x25;
  undefined8 uVar7;
  void *__dest;
  long lVar8;
  undefined8 *__dest_00;
  long unaff_x29;
  
  uVar3 = unaff_x25 + 0xf & 0x1fffffff0;
  __n = (ulong)*(uint *)(**(long **)(param_2 + 0xc0) + 0xfc);
  __dest_00 = (undefined8 *)(&stack0x00000000 + -uVar3);
  __dest = (void *)((long)__dest_00 - uVar3);
  __s = (void *)((long)__dest - (__n + 0xf & 0x1fffffff0));
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_0367c9fc(param_1);
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  lVar8 = **(long **)(lVar2 + 0xb8);
  lVar2 = lVar5;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x40) + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(__dest_00,unaff_x24,unaff_x25);
  memset(__s,0,__n);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x40) + 0x28) < 0) {
    memcpy(__dest,__dest_00,unaff_x25);
  }
  else {
    __dest = (void *)*__dest_00;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  FUN_0538868c(__s,__dest,*(undefined8 *)(unaff_x29 + -0x40),
               *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
  if (lVar8 == 0) {
LAB_05389208:
    lVar2 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x28);
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    uVar7 = *(undefined8 *)(unaff_x29 + -0x48);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar2 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x19 + 0x20);
    }
    uVar4 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x68);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x68);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x22;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
    *(void **)(unaff_x29 + -0x20) = __s;
    (**(code **)(lVar2 + 0x10))(uVar4,lVar2,lVar8,unaff_x29 + -0x28,__s);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    if (lVar2 == 0) goto LAB_05389208;
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x19 + 0x20);
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x90);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x22;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
    *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
    (**(code **)(lVar5 + 0x10))(uVar6,lVar5,lVar2,unaff_x29 + -0x28,uVar4);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0367c9fc();
    }
    if (lVar2 == 0) goto LAB_05389208;
    lVar8 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar5 = *(long *)(unaff_x19 + 0x20);
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xa8);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_0367c9fc(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xa8);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar7;
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x22;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
    *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
    (**(code **)(lVar5 + 0x10))(uVar6,lVar5,lVar2,unaff_x29 + -0x28,uVar4);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar5 = *(long *)(unaff_x29 + -0x38);
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc();
    }
    if (lVar2 != 0) {
      FUN_0422b414(lVar2,*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x18),
                   *(undefined8 *)PTR_DAT_079fff58);
      if (*(long *)(lVar5 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_05389228;
    }
    lVar2 = *(long *)(lVar5 + 0x28);
  }
  if (lVar2 == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_05389228:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


