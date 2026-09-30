/*
FUNCTION_NAME: TMPro.TMP_UpdateRegistry$$InternalRegisterCanvasElementForLayoutRebuild
ENTRY_POINT: 05d81d10
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

void TMPro_TMP_UpdateRegistry__InternalRegisterCanvasElementForLayoutRebuild(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  char cVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x19;
  long unaff_x23;
  undefined8 uVar24;
  long lVar25;
  long unaff_x29;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 *puVar29;
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
  undefined8 in_stack_00000260;
  
  puVar3 = PTR_DAT_067c8f20;
  if (param_1 == 0) {
LAB_05d82e80:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar7 = FUN_05d6d2bc(param_1,0);
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    uVar8 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05d82e80;
    uVar24 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_060f078c(uVar24,0,0);
  }
  if ((*(long *)(unaff_x19 + 0x1c0) == 0) ||
     (plVar14 = *(long **)(*(long *)(unaff_x19 + 0x1c0) + 0x38), plVar14 == (long *)0x0))
  goto LAB_05d82e80;
  iVar13 = *(int *)(param_1 + 0x1cc);
  iVar9 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
  puVar4 = Method_Unity_Collections_FixedStringMethods_Append<UnsafeText>__;
  lVar22 = *(long *)(unaff_x19 + 0x1b0);
  if (iVar9 == 1) {
    if (lVar22 == 0) goto LAB_05d82e80;
    puVar20 = (undefined8 *)(lVar22 + 0x20);
  }
  else {
    if (lVar22 == 0) goto LAB_05d82e80;
    puVar20 = (undefined8 *)(lVar22 + 0x30);
  }
  if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_05d82e80;
  uVar24 = *puVar20;
  uVar10 = FUN_05d75648(*(long *)(unaff_x19 + 0x1c0),0);
  if (((uVar7 | uVar10 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_060f078c(uVar24,0,0);
  }
  else {
    uVar10 = 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar22 = FUN_05c89de0(0);
  if (lVar22 == 0) goto LAB_05d82e80;
  uVar15 = FUN_05c89fc0(lVar22,0);
  if ((uVar15 & 1) == 0) {
    cVar5 = *(char *)(unaff_x19 + 0x259);
  }
  else {
    cVar5 = '\0';
  }
  if (*(long *)(unaff_x19 + 0x1d0) == 0) goto LAB_05d82e80;
  uVar15 = FUN_05d765e0(*(long *)(unaff_x19 + 0x1d0),0);
  if ((uVar15 & 1) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(unaff_x19 + 600);
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05d82e80;
  uVar11 = FUN_05d75f04(*(long *)(unaff_x19 + 0x1c8),0);
  if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05d82e80;
  uVar12 = FUN_05d76104(*(long *)(unaff_x19 + 0x1d8),0);
  if (((uVar7 | uVar11 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067c9288 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_060a0e3c(0);
  }
  else {
    uVar11 = 0;
  }
  uVar7 = uVar12 ^ 1 | uVar7;
  uVar12 = FUN_05d6d958(param_1,0);
  uVar15 = FUN_05d6d948(param_1,0);
  if (((uVar15 & 1) != 0) && ((uVar12 & 1) == 0)) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db9350(param_1,0,0);
  }
  uVar1 = uVar8 & 1;
  if (iVar13 == 2) {
    uVar1 = uVar1 + 1;
  }
  iVar9 = uVar1 + (uVar10 & 1);
  if (cVar5 != '\0') {
    iVar9 = iVar9 + 1;
  }
  cVar21 = *(char *)(unaff_x19 + 0x25b);
  if ((cVar21 != '\0') && (iVar9 + ((uVar7 ^ 0xffffffff) & 1) + (uVar11 & 1) + (uVar12 & 1) != 0)) {
    plVar14 = *(long **)(param_1 + 0x1d8);
    if (plVar14 == (long *)0x0) goto LAB_05d82e80;
    (**(code **)(*plVar14 + 0x298))(plVar14,0,*(undefined8 *)(*plVar14 + 0x2a0));
    cVar21 = *(char *)(unaff_x19 + 0x25b);
  }
  if (cVar21 == '\0') {
    uVar24 = *(undefined8 *)(unaff_x19 + 0xf0);
    uVar16 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1d8) == 0) goto LAB_05d82e80;
    uVar24 = FUN_05d5add8(*(long *)(param_1 + 0x1d8),0);
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      uVar16 = 0;
    }
    else {
      if (*(long **)(param_1 + 0x1d8) == (long *)0x0) goto LAB_05d82e80;
      uVar16 = (**(code **)(**(long **)(param_1 + 0x1d8) + 0x1c8))();
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
  lVar22 = *(long *)(*(long *)PTR_DAT_067c9770 + 0xb8);
  in_stack_00000158 = *(undefined8 *)(lVar22 + 0x48);
  in_stack_00000150 = *(undefined8 *)(lVar22 + 0x40);
  in_stack_00000168 = *(undefined8 *)(lVar22 + 0x58);
  in_stack_00000160 = *(undefined8 *)(lVar22 + 0x50);
  in_stack_00000178 = *(undefined8 *)(lVar22 + 0x68);
  in_stack_00000170 = *(undefined8 *)(lVar22 + 0x60);
  in_stack_00000188 = *(undefined8 *)(lVar22 + 0x78);
  in_stack_00000180 = *(undefined8 *)(lVar22 + 0x70);
  FUN_060b5ea4(&stack0x00000190,&stack0x00000150,1,0);
  if (unaff_x23 == 0) goto LAB_05d82e80;
  in_stack_00000118 = in_stack_00000198;
  in_stack_00000110 = in_stack_00000190;
  in_stack_00000128 = in_stack_000001a8;
  in_stack_00000120 = in_stack_000001a0;
  in_stack_00000138 = in_stack_000001b8;
  in_stack_00000130 = in_stack_000001b0;
  in_stack_00000148 = in_stack_000001c8;
  in_stack_00000140 = in_stack_000001c0;
  FUN_061162d0();
  if ((uVar8 & 1) != 0) {
    uVar17 = FUN_034dac00(0x12,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar17,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    uVar17 = FUN_05d83678();
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar26 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000260,uVar24,uVar17,2,0,uVar26,0,0);
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if (iVar13 == 2) {
    uVar17 = FUN_034dac00(0x13,*(undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar17,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    FUN_05d83678();
    FUN_05d838b0();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  puVar20 = (undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__;
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x1c0) == 0) ||
       (plVar14 = *(long **)(*(long *)(unaff_x19 + 0x1c0) + 0x38), plVar14 == (long *)0x0))
    goto LAB_05d82e80;
    iVar13 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    uVar27 = 0x14;
    if (iVar13 != 1) {
      uVar27 = 0x15;
    }
    uVar17 = FUN_034dac00(uVar27,*puVar20);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar17,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    FUN_05d83678();
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d83e5c(*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x130),
                 *(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x138));
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((uVar12 & 1) != 0) {
    uVar17 = FUN_034dac00(0x16,*puVar20);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar17,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(unaff_x19 + 0x110) == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x110) + 0x18);
    }
    uVar26 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x60);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<List<XRLoadAnchorResult>>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05db9624(in_stack_00000260,uVar26,unaff_x29 + 8,uVar24,uVar16,uVar17,0);
    puVar20 = (undefined8 *)Method_System_Net_Sockets_NetworkStream_Close__;
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((uVar11 & 1) != 0) {
    uVar17 = FUN_034dac00(0x17,*puVar20);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar17,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    FUN_05d83678();
    FUN_05d83f58();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  if ((uVar7 & 1) == 0) {
    uVar17 = FUN_034dac00(0x18,*puVar20);
    FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar17,0);
    in_stack_00000190 = 0;
    in_stack_00000198 = &stack0x00000234;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d83678();
    FUN_05d841f0();
    FUN_05d83790();
    FUN_05c5cb50(&stack0x00000234,0);
  }
  uVar17 = FUN_034dac00(0x19,*puVar20);
  FUN_05c5cb48(&stack0x00000234,in_stack_00000260,uVar17,0);
  in_stack_00000100 = 0;
  in_stack_00000108 = &stack0x00000234;
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar22 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  thunk_FUN_060bf9c4(lVar22,0,0);
  if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar7 = FUN_05d6aa74(*(long *)(unaff_x19 + 0x1e0),0);
  if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = FUN_05d765e0(*(long *)(unaff_x19 + 0x1d0),0);
  if (((uVar7 | uVar8) & 1) != 0) {
    uVar17 = FUN_034dac00(0x1a,*puVar20);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar17,0);
    in_stack_00000198 = &stack0x000001fc;
    in_stack_00000190 = 0;
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d84430();
    FUN_02a83444(&stack0x00000190);
  }
  if (cVar2 != '\0') {
    uVar17 = FUN_034dac00(0x1d,*puVar20);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar17,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar14 = *(long **)(*(long *)(unaff_x19 + 0x1d0) + 0x48);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar14 = *(long **)(*(long *)(unaff_x19 + 0x1e0) + 0x78);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar13 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    if (iVar13 < 0) {
      iVar13 = iVar13 + 1;
    }
    uVar8 = uVar7;
    if (iVar13 >> 1 <= (int)uVar7) {
      uVar8 = iVar13 >> 1;
    }
    uVar10 = 0;
    if (-1 < (int)uVar7) {
      uVar10 = uVar8;
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05c9ac9c(&stack0x00000190,uVar24,0);
    if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = *(uint *)(*(long *)(unaff_x19 + 0x140) + 0x18);
    if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    FUN_05d84f84();
    FUN_02a83444(&stack0x000000f0);
  }
  if (cVar5 != '\0') {
    if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar15 = FUN_05d76104(*(long *)(unaff_x19 + 0x1d8),0);
    uVar28 = 0x3f800000;
    uVar27 = 0x3f800000;
    if ((uVar15 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar14 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x38);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar27 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar14 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x40);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar28 = (**(code **)(*plVar14 + 0x218))(plVar14,*(undefined8 *)(*plVar14 + 0x220));
    }
    uVar17 = FUN_034dac00(0x1b,*puVar20);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar17,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,uVar24,0);
    FUN_05d855b4(uVar27,uVar28);
    FUN_02a83444(&stack0x000000f0);
    uVar17 = FUN_034dac00(0x1c,*puVar20);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar17,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,uVar24,0);
    in_stack_000000e0 = in_stack_000001b0;
    in_stack_000000c8 = in_stack_00000198;
    in_stack_000000c0 = in_stack_00000190;
    in_stack_000000d8 = in_stack_000001a8;
    in_stack_000000d0 = in_stack_000001a0;
    FUN_05d85c0c(uVar27,uVar28);
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
  if (param_1 == 0) {
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
  uVar15 = FUN_05d6d114(param_1,0);
  if (((uVar15 & 1) != 0) && (*(char *)(unaff_x19 + 0x256) != '\0')) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar22 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar15 = FUN_060be514(lVar22,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  uVar15 = FUN_05d83634(uVar15,param_1);
  if ((uVar15 & 1) != 0) {
    FUN_05d6d448(param_1,0);
    FUN_05d6d540(param_1,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d6d5d0(param_1,0);
    FUN_05d86e60();
  }
  if (*(char *)(unaff_x19 + 599) != '\0') {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar22 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_060be514(lVar22,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                 ,0);
  }
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  cVar5 = *(char *)(param_1 + 399);
  if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(uVar17,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,cVar5 != '\0',
               0);
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar22 = FUN_05d5a440(param_1,0);
  if (lVar22 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = thunk_FUN_05d43a98(lVar22,*(undefined1 *)(param_1 + 0x1e0),0);
    uVar7 = uVar7 & 1;
  }
  lVar18 = *(long *)puVar3;
  lVar25 = *(long *)(unaff_x19 + 0xf8);
  if (*(int *)(lVar18 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar18 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_067c97a8;
  if (lVar25 == **(long **)(lVar18 + 0xb8)) {
    iVar13 = (uint)*(byte *)(param_1 + 0x18c) << 1;
  }
  else {
    iVar13 = 2;
  }
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&stack0x00000190,2,0);
  uVar23 = in_stack_000001b0;
  uVar26 = in_stack_000001a8;
  uVar17 = in_stack_000001a0;
  puVar29 = in_stack_00000198;
  uVar15 = in_stack_00000190;
  if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar19 = FUN_05c35d3c(*(long *)(param_1 + 0x1a0),0);
  if ((uVar19 & 1) != 0) {
    lVar18 = *(long *)(param_1 + 0x1a0);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar29 = *(undefined1 **)(lVar18 + 0x48);
    uVar15 = *(ulong *)(lVar18 + 0x40);
    uVar26 = *(undefined8 *)(lVar18 + 0x58);
    uVar17 = *(undefined8 *)(lVar18 + 0x50);
    uVar23 = *(undefined8 *)(lVar18 + 0x60);
  }
  if (*(char *)(unaff_x19 + 0x25b) == '\0') {
    if (*(char *)(param_1 + 0x1e0) == '\0') {
      lVar18 = *(long *)(unaff_x19 + 0xf8);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      in_stack_00000198 = *(undefined1 **)(lVar18 + 0x30);
      in_stack_00000190 = *(ulong *)(lVar18 + 0x28);
      in_stack_000001a8 = *(undefined8 *)(lVar18 + 0x40);
      in_stack_000001a0 = *(undefined8 *)(lVar18 + 0x38);
      in_stack_000001b0 = *(undefined8 *)(lVar18 + 0x48);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_stack_000000b0 = in_stack_000001b0;
      in_stack_00000098 = in_stack_00000198;
      in_stack_00000090 = in_stack_00000190;
      in_stack_000000a8 = in_stack_000001a8;
      in_stack_000000a0 = in_stack_000001a0;
      in_stack_00000060 = uVar15;
      in_stack_00000068 = puVar29;
      in_stack_00000070 = uVar17;
      in_stack_00000078 = uVar26;
      in_stack_00000080 = uVar23;
      uVar19 = FUN_0610d5f4(&stack0x00000090,&stack0x00000060,0);
      if ((uVar19 & 1) == 0) {
        cVar5 = *(char *)(unaff_x19 + 0x255);
      }
      else {
        cVar5 = '\x01';
      }
    }
    else {
      cVar5 = '\x01';
    }
    plVar14 = (long *)PTR_DAT_067c8f20;
    cVar5 = cVar5 != '\0';
    *(char *)(unaff_x19 + 0x25a) = cVar5;
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      uVar16 = FUN_05d83678();
      puVar3 = 
      Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
      ;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,uVar24,uVar16,iVar13,0,uVar17,0,0);
      uVar24 = FUN_05d83678();
      lVar22 = *(long *)(unaff_x19 + 0xf8);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = *(undefined8 *)(unaff_x19 + 0x270);
      if (*(long *)(lVar22 + 0x18) == 0) {
        bVar6 = false;
      }
      else {
        iVar13 = FUN_060cbf28(*(long *)(lVar22 + 0x18),0);
        bVar6 = iVar13 == 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,uVar24,lVar22,2,0,uVar16,bVar6,0);
      goto LAB_05d82e48;
    }
  }
  else {
    cVar5 = *(char *)(unaff_x19 + 0x25a);
    plVar14 = (long *)PTR_DAT_067c8f20;
  }
  if (cVar5 == '\0') {
    if (*(char *)(unaff_x19 + 0x255) == '\0') {
      plVar14 = *(long **)(param_1 + 0x1d8);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      (**(code **)(*plVar14 + 0x298))(plVar14,1,*(undefined8 *)(*plVar14 + 0x2a0));
      plVar14 = *(long **)(param_1 + 0x1d8);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar16 = (**(code **)(*plVar14 + 0x1c8))
                         (plVar14,in_stack_00000260,*(undefined8 *)(*plVar14 + 0x1d0));
    }
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000260,uVar24,uVar16,iVar13,0,uVar17,0,0);
    if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x118) = uVar16;
    FUN_05d83790();
  }
  else if (uVar7 == 0) {
    uVar16 = *(undefined8 *)(param_1 + 0xf0);
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar19 = FUN_060f078c(uVar16,0,0);
    if ((uVar19 & 1) != 0) {
      in_stack_000001b0 = 0;
      in_stack_00000198 = (undefined1 *)0x0;
      in_stack_00000190 = 0;
      in_stack_000001a8 = 0;
      in_stack_000001a0 = 0;
      FUN_0610cedc(&stack0x00000190,*(undefined8 *)(param_1 + 0xf0),0);
      uVar23 = in_stack_000001b0;
      uVar15 = in_stack_00000190;
      puVar29 = in_stack_00000198;
      uVar17 = in_stack_000001a0;
      uVar26 = in_stack_000001a8;
    }
    in_stack_00000030 = uVar15;
    in_stack_00000038 = puVar29;
    in_stack_00000040 = uVar17;
    in_stack_00000048 = uVar26;
    in_stack_00000050 = uVar23;
    in_stack_000001d0 = uVar15;
    in_stack_000001d8 = puVar29;
    in_stack_000001e0 = uVar17;
    in_stack_000001e8 = uVar26;
    FUN_05c9caa8(&stack0x00000030,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    uVar16 = **(undefined8 **)
               (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(in_stack_00000260,param_1,uVar24,uVar16,iVar13,0,uVar17,0);
    if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x118) = uVar16;
  }
  else {
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar20 = (undefined8 *)FUN_05d43a80(lVar22,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = *puVar20;
    uVar16 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        );
    }
    FUN_05cab544(in_stack_00000260,uVar24,uVar17,0,0,uVar16,0,0);
    lVar18 = *(long *)(param_1 + 0x1d8);
    puVar20 = (undefined8 *)FUN_05d43a80(lVar22,0);
    uVar24 = *puVar20;
    puVar20 = (undefined8 *)FUN_05d43a88(lVar22,0);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d61b54(lVar18,uVar24,*puVar20,0);
  }
LAB_05d82e48:
  lVar22 = in_stack_00000100;
  FUN_05c5cb50(in_stack_00000108,0);
  if (lVar22 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0(lVar22);
}


