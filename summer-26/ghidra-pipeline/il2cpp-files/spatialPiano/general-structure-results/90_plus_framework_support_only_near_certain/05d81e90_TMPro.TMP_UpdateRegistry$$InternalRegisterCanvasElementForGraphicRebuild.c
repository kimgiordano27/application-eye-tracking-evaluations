/*
FUNCTION_NAME: TMPro.TMP_UpdateRegistry$$InternalRegisterCanvasElementForGraphicRebuild
ENTRY_POINT: 05d81e90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 119
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05d82718) */
/* WARNING: Removing unreachable block (ram,0x05d82628) */
/* WARNING: Removing unreachable block (ram,0x05d82520) */
/* WARNING: Removing unreachable block (ram,0x05d827ac) */

void TMPro_TMP_UpdateRegistry__InternalRegisterCanvasElementForGraphicRebuild(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x23;
  ulong unaff_x24;
  long lVar18;
  uint unaff_w26;
  uint unaff_w27;
  long unaff_x29;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  undefined8 in_stack_00000018;
  int iStack0000000000000028;
  uint uStack000000000000002c;
  ulong in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  undefined1 *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000090;
  undefined1 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  ulong in_stack_000000c0;
  undefined1 *in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined1 *in_stack_000000f8;
  long in_stack_00000100;
  undefined1 *in_stack_00000108;
  ulong in_stack_00000110;
  undefined1 *in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  ulong in_stack_00000190;
  undefined1 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  ulong in_stack_000001d0;
  undefined1 *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000238;
  undefined8 in_stack_00000260;
  
  if ((unaff_x24 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067c9288 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_060a0e3c(0);
  }
  else {
    uVar7 = 0;
  }
  uStack000000000000002c = param_1 ^ 1 | uStack000000000000002c;
  uVar5 = FUN_05d6d958();
  uVar8 = FUN_05d6d948();
  if (((uVar8 & 1) != 0) && ((uVar5 & 1) == 0)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db9350();
  }
  uVar1 = unaff_w27 & 1;
  if (unaff_w21 == 2) {
    uVar1 = uVar1 + 1;
  }
  iVar6 = uVar1 + (unaff_w26 & 1);
  if (iStack0000000000000028 != 0) {
    iVar6 = iVar6 + 1;
  }
  cVar3 = *(char *)(unaff_x19 + 0x25b);
  if ((cVar3 != '\0') &&
     (iVar6 + ((uStack000000000000002c ^ 0xffffffff) & 1) + (uVar7 & 1) + (uVar5 & 1) != 0)) {
    plVar9 = *(long **)(unaff_x20 + 0x1d8);
    if (plVar9 == (long *)0x0) goto LAB_05d82e80;
    (**(code **)(*plVar9 + 0x298))(plVar9,0,*(undefined8 *)(*plVar9 + 0x2a0));
    cVar3 = *(char *)(unaff_x19 + 0x25b);
  }
  if (cVar3 == '\0') {
    uVar10 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar11 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05d82e80;
    uVar10 = FUN_05d5add8(*(long *)(unaff_x20 + 0x1d8),0);
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      uVar11 = 0;
    }
    else {
      if (*(long **)(unaff_x20 + 0x1d8) == (long *)0x0) goto LAB_05d82e80;
      uVar11 = (**(code **)(**(long **)(unaff_x20 + 0x1d8) + 0x1c8))();
    }
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)
                        Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                      );
  }
  if (DAT_06bb87a1 == '\0') {
    FUN_02f08768(PTR_DAT_067c9770);
    DAT_06bb87a1 = '\x01';
  }
  lVar16 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
  in_stack_00000158 = *(undefined8 *)(lVar16 + 0x48);
  in_stack_00000150 = *(undefined8 *)(lVar16 + 0x40);
  in_stack_00000168 = *(undefined8 *)(lVar16 + 0x58);
  in_stack_00000160 = *(undefined8 *)(lVar16 + 0x50);
  in_stack_00000178 = *(undefined8 *)(lVar16 + 0x68);
  in_stack_00000170 = *(undefined8 *)(lVar16 + 0x60);
  in_stack_00000188 = *(undefined8 *)(lVar16 + 0x78);
  in_stack_00000180 = *(undefined8 *)(lVar16 + 0x70);
  FUN_060b5ea4(&stack0x00000190,&stack0x00000150,1,0);
  if (unaff_x23 == 0) {
LAB_05d82e80:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  in_stack_00000118 = in_stack_00000198;
  in_stack_00000110 = in_stack_00000190;
  in_stack_00000128 = in_stack_000001a8;
  in_stack_00000120 = in_stack_000001a0;
  in_stack_00000138 = in_stack_000001b8;
  in_stack_00000130 = in_stack_000001b0;
  in_stack_00000148 = in_stack_000001c8;
  in_stack_00000140 = in_stack_000001c0;
  FUN_061162d0();
  if ((unaff_w27 & 1) != 0) {
    uVar12 = FUN_034dac00(0x12,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar12,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    uVar12 = FUN_05d83678();
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar19 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000260,uVar10,uVar12,2,0,uVar19,0,0);
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if (unaff_w21 == 2) {
    uVar12 = FUN_034dac00(0x13,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar12,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    FUN_05d83678();
    FUN_05d838b0();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  puVar15 = (undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__;
  if ((unaff_w26 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x1c0) == 0) ||
       (plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1c0) + 0x38), plVar9 == (long *)0x0))
    goto LAB_05d82e80;
    iVar6 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    uVar20 = 0x14;
    if (iVar6 != 1) {
      uVar20 = 0x15;
    }
    uVar12 = FUN_034dac00(uVar20,*puVar15);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar12,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    FUN_05d83678();
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d83e5c(*(undefined4 *)(in_stack_00000238 + 300),*(undefined4 *)(in_stack_00000238 + 0x130)
                 ,*(undefined4 *)(in_stack_00000238 + 0x134),
                 *(undefined4 *)(in_stack_00000238 + 0x138));
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((uVar5 & 1) != 0) {
    uVar12 = FUN_034dac00(0x16,*puVar15);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar12,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(unaff_x19 + 0x110) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x110) + 0x18);
    }
    uVar19 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x60);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db9624(in_stack_00000260,uVar19,unaff_x29 + 8,uVar10,uVar11,uVar12,0);
    puVar15 = (undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__;
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((uVar7 & 1) != 0) {
    uVar12 = FUN_034dac00(0x17,*puVar15);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar12,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    FUN_05d83678();
    FUN_05d83f58();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((uStack000000000000002c & 1) == 0) {
    uVar12 = FUN_034dac00(0x18,*puVar15);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar12,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d83678();
    FUN_05d841f0();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  uVar12 = FUN_034dac00(0x19,*puVar15);
  FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar12,0);
  in_stack_00000100 = 0;
  in_stack_00000108 = &stack0x00000234;
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar16 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_060bf9c4(lVar16,0,0);
  if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar7 = FUN_05d6aa74(*(long *)(unaff_x19 + 0x1e0),0);
  if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_05d765e0(*(long *)(unaff_x19 + 0x1d0),0);
  if (((uVar7 | uVar5) & 1) != 0) {
    uVar12 = FUN_034dac00(0x1a,*puVar15);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar12,0);
    in_stack_00000198 = &stack0x000001fc;
    in_stack_00000190 = 0;
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d84430();
    FUN_02a83444(&stack0x00000190);
  }
  if (in_stack_00000018._4_4_ != 0) {
    uVar12 = FUN_034dac00(0x1d,*puVar15);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar12,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d0) + 0x48);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1e0) + 0x78);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar6 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if (iVar6 < 0) {
      iVar6 = iVar6 + 1;
    }
    uVar5 = uVar7;
    if (iVar6 >> 1 <= (int)uVar7) {
      uVar5 = iVar6 >> 1;
    }
    uVar1 = 0;
    if (-1 < (int)uVar7) {
      uVar1 = uVar5;
    }
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c9ac9c(&stack0x00000190,uVar10,0);
    if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = *(uint *)(*(long *)(unaff_x19 + 0x140) + 0x18);
    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (uVar7 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05d84f84();
    FUN_02a83444(&stack0x000000f0);
  }
  if (iStack0000000000000028 != 0) {
    if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = FUN_05d76104(*(long *)(unaff_x19 + 0x1d8),0);
    uVar21 = 0x3f800000;
    uVar20 = 0x3f800000;
    if ((uVar8 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x38);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar20 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar21 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    }
    uVar12 = FUN_034dac00(0x1b,*puVar15);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar12,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,uVar10,0);
    FUN_05d855b4(uVar20,uVar21);
    FUN_02a83444(&stack0x000000f0);
    uVar12 = FUN_034dac00(0x1c,*puVar15);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar12,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,uVar10,0);
    in_stack_000000e0 = in_stack_000001b0;
    in_stack_000000c8 = in_stack_00000198;
    in_stack_000000c0 = in_stack_00000190;
    in_stack_000000d8 = in_stack_000001a8;
    in_stack_000000d0 = in_stack_000001a0;
    FUN_05d85c0c(uVar20,uVar21);
    FUN_02a83444(&stack0x000000f0);
  }
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86378();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86674();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86768();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d869b8();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86d14();
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05d86dc4();
  uVar8 = FUN_05d6d114(in_stack_00000238,0);
  if (((uVar8 & 1) != 0) && (*(char *)(unaff_x19 + 0x256) != '\0')) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar16 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = FUN_060be514(lVar16,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  uVar8 = FUN_05d83634(uVar8,in_stack_00000238);
  if ((uVar8 & 1) != 0) {
    FUN_05d6d448(in_stack_00000238,0);
    FUN_05d6d540(in_stack_00000238,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d6d5d0(in_stack_00000238,0);
    FUN_05d86e60();
  }
  if (*(char *)(unaff_x19 + 599) != '\0') {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar16 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_060be514(lVar16,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                 ,0);
  }
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  cVar3 = *(char *)(in_stack_00000238 + 399);
  if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(uVar12,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,cVar3 != '\0',
               0);
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar16 = FUN_05d5a440(in_stack_00000238,0);
  if (lVar16 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk_FUN_05d43a98(lVar16,*(undefined1 *)(in_stack_00000238 + 0x1e0),0);
    uVar7 = uVar7 & 1;
  }
  lVar13 = *(long *)puVar2;
  lVar18 = *(long *)(unaff_x19 + 0xf8);
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_067c97a8;
  if (lVar18 == **(long **)(lVar13 + 0xb8)) {
    iVar6 = (uint)*(byte *)(in_stack_00000238 + 0x18c) << 1;
  }
  else {
    iVar6 = 2;
  }
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&stack0x00000190,2,0);
  uVar17 = in_stack_000001b0;
  uVar19 = in_stack_000001a8;
  uVar12 = in_stack_000001a0;
  puVar22 = in_stack_00000198;
  uVar8 = in_stack_00000190;
  if (*(long *)(in_stack_00000238 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar14 = FUN_05c35d3c(*(long *)(in_stack_00000238 + 0x1a0),0);
  if ((uVar14 & 1) != 0) {
    lVar13 = *(long *)(in_stack_00000238 + 0x1a0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar22 = *(undefined1 **)(lVar13 + 0x48);
    uVar8 = *(ulong *)(lVar13 + 0x40);
    uVar19 = *(undefined8 *)(lVar13 + 0x58);
    uVar12 = *(undefined8 *)(lVar13 + 0x50);
    uVar17 = *(undefined8 *)(lVar13 + 0x60);
  }
  if (*(char *)(unaff_x19 + 0x25b) == '\0') {
    if (*(char *)(in_stack_00000238 + 0x1e0) == '\0') {
      lVar13 = *(long *)(unaff_x19 + 0xf8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      in_stack_00000198 = *(undefined1 **)(lVar13 + 0x30);
      in_stack_00000190 = *(ulong *)(lVar13 + 0x28);
      in_stack_000001a8 = *(undefined8 *)(lVar13 + 0x40);
      in_stack_000001a0 = *(undefined8 *)(lVar13 + 0x38);
      in_stack_000001b0 = *(undefined8 *)(lVar13 + 0x48);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_stack_000000b0 = in_stack_000001b0;
      in_stack_00000098 = in_stack_00000198;
      in_stack_00000090 = in_stack_00000190;
      in_stack_000000a8 = in_stack_000001a8;
      in_stack_000000a0 = in_stack_000001a0;
      in_stack_00000060 = uVar8;
      in_stack_00000068 = puVar22;
      in_stack_00000070 = uVar12;
      in_stack_00000078 = uVar19;
      in_stack_00000080 = uVar17;
      uVar14 = FUN_0610d5f4(&stack0x00000090,&stack0x00000060,0);
      if ((uVar14 & 1) == 0) {
        cVar3 = *(char *)(unaff_x19 + 0x255);
      }
      else {
        cVar3 = '\x01';
      }
    }
    else {
      cVar3 = '\x01';
    }
    plVar9 = (long *)PTR_DAT_067c8f20;
    cVar3 = cVar3 != '\0';
    *(char *)(unaff_x19 + 0x25a) = cVar3;
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      uVar11 = FUN_05d83678();
      puVar2 = 
      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
      ;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,uVar10,uVar11,iVar6,0,uVar12,0,0);
      uVar10 = FUN_05d83678();
      lVar16 = *(long *)(unaff_x19 + 0xf8);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar11 = *(undefined8 *)(unaff_x19 + 0x270);
      if (*(long *)(lVar16 + 0x18) == 0) {
        bVar4 = false;
      }
      else {
        iVar6 = FUN_060cbf28(*(long *)(lVar16 + 0x18),0);
        bVar4 = iVar6 == 1;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,uVar10,lVar16,2,0,uVar11,bVar4,0);
      goto LAB_05d82e48;
    }
  }
  else {
    cVar3 = *(char *)(unaff_x19 + 0x25a);
    plVar9 = (long *)PTR_DAT_067c8f20;
  }
  if (cVar3 == '\0') {
    if (*(char *)(unaff_x19 + 0x255) == '\0') {
      plVar9 = *(long **)(unaff_x20 + 0x1d8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar9 + 0x298))(plVar9,1,*(undefined8 *)(*plVar9 + 0x2a0));
      plVar9 = *(long **)(unaff_x20 + 0x1d8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar11 = (**(code **)(*plVar9 + 0x1c8))
                         (plVar9,in_stack_00000260,*(undefined8 *)(*plVar9 + 0x1d0));
    }
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000260,uVar10,uVar11,iVar6,0,uVar12,0,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = uVar11;
    FUN_05d83790();
  }
  else if (uVar7 == 0) {
    uVar11 = *(undefined8 *)(in_stack_00000238 + 0xf0);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar14 = FUN_060f078c(uVar11,0,0);
    if ((uVar14 & 1) != 0) {
      in_stack_000001b0 = 0;
      in_stack_00000198 = (undefined1 *)0x0;
      in_stack_00000190 = 0;
      in_stack_000001a8 = 0;
      in_stack_000001a0 = 0;
      FUN_0610cedc(&stack0x00000190,*(undefined8 *)(in_stack_00000238 + 0xf0),0);
      uVar17 = in_stack_000001b0;
      uVar8 = in_stack_00000190;
      puVar22 = in_stack_00000198;
      uVar12 = in_stack_000001a0;
      uVar19 = in_stack_000001a8;
    }
    in_stack_00000030 = uVar8;
    in_stack_00000038 = puVar22;
    in_stack_00000040 = uVar12;
    in_stack_00000048 = uVar19;
    in_stack_00000050 = uVar17;
    in_stack_000001d0 = uVar8;
    in_stack_000001d8 = puVar22;
    in_stack_000001e0 = uVar12;
    in_stack_000001e8 = uVar19;
    FUN_05c9caa8(&stack0x00000030,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar12 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    uVar11 = **(undefined8 **)
               (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(in_stack_00000260,in_stack_00000238,uVar10,uVar11,iVar6,0,uVar12,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = uVar11;
  }
  else {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar15 = (undefined8 *)FUN_05d43a80(lVar16,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar12 = *puVar15;
    uVar11 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        );
    }
    FUN_05cab544(in_stack_00000260,uVar10,uVar12,0,0,uVar11,0,0);
    lVar13 = *(long *)(unaff_x20 + 0x1d8);
    puVar15 = (undefined8 *)FUN_05d43a80(lVar16,0);
    uVar10 = *puVar15;
    puVar15 = (undefined8 *)FUN_05d43a88(lVar16,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d61b54(lVar13,uVar10,*puVar15,0);
  }
LAB_05d82e48:
  lVar16 = in_stack_00000100;
  FUN_05c5cb50(in_stack_00000108,0);
  if (lVar16 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0(lVar16);
}


