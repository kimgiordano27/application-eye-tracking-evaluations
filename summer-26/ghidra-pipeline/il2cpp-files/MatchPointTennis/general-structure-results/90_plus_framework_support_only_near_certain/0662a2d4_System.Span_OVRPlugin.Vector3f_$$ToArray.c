/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 0662a2d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Span<OVRPlugin_Vector3f>__ToArray(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  short *psVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uVar1 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x30) + 0x20,0);
  uVar2 = FUN_07a5629c(param_1,uVar1,0);
  if ((uVar2 & 1) == 0) {
LAB_0662a34c:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x88) + 0x20,0);
    uVar2 = FUN_07a5629c(uVar1,uVar6,0);
    if ((uVar2 & 1) != 0) {
      in_stack_00000048 = unaff_x20[1];
      in_stack_00000040 = *unaff_x20;
      in_stack_00000058 = unaff_x20[3];
      in_stack_00000050 = unaff_x20[2];
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000040);
      if (plVar4 == (long *)0x0) goto LAB_0662a8e8;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x88) + 0x40))
      goto LAB_0662a8ec;
      psVar7 = (short *)thunk_FUN_04485360();
      if (*psVar7 == 0) goto LAB_0662a828;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x68) + 0x20,0);
    uVar2 = FUN_07a5629c(uVar1,uVar6,0);
    if ((uVar2 & 1) != 0) {
      in_stack_00000048 = unaff_x20[1];
      in_stack_00000040 = *unaff_x20;
      in_stack_00000058 = unaff_x20[3];
      in_stack_00000050 = unaff_x20[2];
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000040);
      if (plVar4 == (long *)0x0) goto LAB_0662a8e8;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x68) + 0x40))
      goto LAB_0662a8ec;
      plVar4 = (long *)thunk_FUN_04485360();
      if (*plVar4 == 0) goto LAB_0662a828;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x70) + 0x20,0);
    uVar2 = FUN_07a5629c(uVar1,uVar6,0);
    if ((uVar2 & 1) != 0) {
      in_stack_00000048 = unaff_x20[1];
      in_stack_00000040 = *unaff_x20;
      in_stack_00000058 = unaff_x20[3];
      in_stack_00000050 = unaff_x20[2];
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000040);
      if (plVar4 == (long *)0x0) goto LAB_0662a8e8;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x70) + 0x40))
      goto LAB_0662a8ec;
      plVar4 = (long *)thunk_FUN_04485360();
      if (*plVar4 == 0) goto LAB_0662a828;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x38) + 0x20,0);
    uVar2 = FUN_07a5629c(uVar1,uVar6,0);
    if ((uVar2 & 1) != 0) {
      in_stack_00000048 = unaff_x20[1];
      in_stack_00000040 = *unaff_x20;
      in_stack_00000058 = unaff_x20[3];
      in_stack_00000050 = unaff_x20[2];
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000040);
      if (plVar4 == (long *)0x0) goto LAB_0662a8e8;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40))
      goto LAB_0662a8ec;
      psVar7 = (short *)thunk_FUN_04485360();
      if (*psVar7 == 0) goto LAB_0662a828;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x40) + 0x20,0);
    uVar2 = FUN_07a5629c(uVar1,uVar6,0);
    if ((uVar2 & 1) != 0) {
      in_stack_00000048 = unaff_x20[1];
      in_stack_00000040 = *unaff_x20;
      in_stack_00000058 = unaff_x20[3];
      in_stack_00000050 = unaff_x20[2];
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000040);
      if (plVar4 == (long *)0x0) goto LAB_0662a8e8;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x40) + 0x40))
      goto LAB_0662a8ec;
      psVar7 = (short *)thunk_FUN_04485360();
      if (*psVar7 == 0) goto LAB_0662a828;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x58) + 0x20,0);
    uVar2 = FUN_07a5629c(uVar1,uVar6,0);
    if ((uVar2 & 1) != 0) {
      in_stack_00000048 = unaff_x20[1];
      in_stack_00000040 = *unaff_x20;
      in_stack_00000058 = unaff_x20[3];
      in_stack_00000050 = unaff_x20[2];
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000040);
      if (plVar4 == (long *)0x0) goto LAB_0662a8e8;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40))
      goto LAB_0662a8ec;
      plVar4 = (long *)thunk_FUN_04485360();
      if (*plVar4 == 0) goto LAB_0662a828;
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)(unaff_x22 + 0xe0));
    }
    uVar1 = FUN_07a4ce38(uVar1,0);
    uVar6 = FUN_07a4ce38(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar2 = FUN_07a5629c(uVar1,uVar6,0);
    if ((uVar2 & 1) != 0) {
      in_stack_00000048 = unaff_x20[1];
      in_stack_00000040 = *unaff_x20;
      in_stack_00000058 = unaff_x20[3];
      in_stack_00000050 = unaff_x20[2];
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04481fb8();
      }
      plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                          &stack0x00000040);
      if (plVar4 == (long *)0x0) {
LAB_0662a8e8:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x60) + 0x40)) {
LAB_0662a8ec:
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      puVar8 = (undefined8 *)thunk_FUN_04485360();
      uVar2 = FUN_07a9891c(0,*puVar8,0);
      if ((uVar2 & 1) != 0) goto LAB_0662a828;
    }
    uVar11 = unaff_x20[1];
    uVar10 = *unaff_x20;
    uVar6 = unaff_x20[3];
    uVar1 = unaff_x20[2];
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar9 = thunk_FUN_0448520c();
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    in_stack_00000040 = uVar10;
    in_stack_00000048 = uVar11;
    in_stack_00000050 = uVar1;
    in_stack_00000058 = uVar6;
    FUN_0687bfd4(uVar9,&stack0x00000040,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x58));
  }
  else {
    in_stack_00000048 = unaff_x20[1];
    in_stack_00000040 = *unaff_x20;
    in_stack_00000058 = unaff_x20[3];
    in_stack_00000050 = unaff_x20[2];
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    plVar4 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),
                                        &stack0x00000040);
    if (plVar4 == (long *)0x0) goto LAB_0662a8e8;
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x30) + 0x40))
    goto LAB_0662a8ec;
    pcVar5 = (char *)thunk_FUN_04485360();
    if (*pcVar5 != '\0') goto LAB_0662a34c;
LAB_0662a828:
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8();
    }
    uVar9 = **(undefined8 **)(lVar3 + 0xb8);
  }
  return uVar9;
}


