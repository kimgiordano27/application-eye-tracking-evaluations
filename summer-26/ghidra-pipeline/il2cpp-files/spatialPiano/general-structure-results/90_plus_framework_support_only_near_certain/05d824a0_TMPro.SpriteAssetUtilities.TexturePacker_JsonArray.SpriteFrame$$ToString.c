/*
FUNCTION_NAME: TMPro.SpriteAssetUtilities.TexturePacker_JsonArray.SpriteFrame$$ToString
ENTRY_POINT: 05d824a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05d82718) */
/* WARNING: Removing unreachable block (ram,0x05d82628) */
/* WARNING: Removing unreachable block (ram,0x05d82520) */
/* WARNING: Removing unreachable block (ram,0x05d827ac) */

void TMPro_SpriteAssetUtilities_TexturePacker_JsonArray_SpriteFrame__ToString(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *unaff_x27;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 *puVar21;
  undefined8 in_stack_00000018;
  int in_stack_00000028;
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
  undefined8 in_stack_00000108;
  ulong in_stack_00000190;
  undefined1 *in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  ulong in_stack_000001d0;
  undefined1 *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000260;
  
  uVar6 = FUN_05d765e0();
  if (((unaff_w23 | uVar6) & 1) != 0) {
    uVar8 = FUN_034dac00(0x1a,*unaff_x27);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
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
    uVar8 = FUN_034dac00(0x1d,*unaff_x27);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    if (*(long *)(unaff_x19 + 0x1d0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 05d8256c to 05e82573 has its CatchHandler @ 05d825dc */
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d0) + 0x48);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 05d82574 to 05e825cb has its CatchHandler @ 05d8224c */
    uVar6 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1e0) + 0x78);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar7 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    if (iVar7 < 0) {
      iVar7 = iVar7 + 1;
    }
    uVar1 = uVar6;
    if (iVar7 >> 1 <= (int)uVar6) {
      uVar1 = iVar7 >> 1;
    }
    uVar2 = 0;
    if (-1 < (int)uVar6) {
      uVar2 = uVar1;
    }
    if (in_stack_00000238 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 05d825cc to 05e825cf has its CatchHandler @ 05d8262c */
                    /* try { // try from 05d825d0 to 05e825d3 has its CatchHandler @ 05d825d8 */
                    /* try { // try from 05d825d4 to 05e825f7 has its CatchHandler @ 05d8224c */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d825d0 with catch @ 05d825d8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d8256c with catch @ 05d825dc
                        */
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = *(uint *)(*(long *)(unaff_x19 + 0x140) + 0x18);
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
                    /* try { // try from 05d825f8 to 05e825fb has its CatchHandler @ 05d8261c */
    if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
                    /* try { // try from 05d825fc to 05e8261f has its CatchHandler @ 05d8224c */
    FUN_05d84f84();
                    /* catch() { ... } // from try @ 05d825f8 with catch @ 05d8261c */
    FUN_02a83444(&stack0x000000f0);
                    /* try { // try from 05d82620 to 05e82627 has its CatchHandler @ 05d82680 */
  }
  if (in_stack_00000028 != 0) {
    if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = FUN_05d76104(*(long *)(unaff_x19 + 0x1d8),0);
    uVar20 = 0x3f800000;
    uVar19 = 0x3f800000;
    if ((uVar10 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x38);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar19 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
      if (*(long *)(unaff_x19 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar9 = *(long **)(*(long *)(unaff_x19 + 0x1d8) + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar20 = (**(code **)(*plVar9 + 0x218))(plVar9,*(undefined8 *)(*plVar9 + 0x220));
    }
    uVar8 = FUN_034dac00(0x1b,*unaff_x27);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    FUN_05d855b4(uVar19,uVar20);
    FUN_02a83444(&stack0x000000f0);
    uVar8 = FUN_034dac00(0x1c,*unaff_x27);
    in_stack_00000190 = in_stack_00000190 & 0xffffffffffffff00;
    FUN_05c5cb48(&stack0x00000190,in_stack_00000260,uVar8,0);
    in_stack_000000f8 = &stack0x000001fc;
    in_stack_000000f0 = 0;
    FUN_05c9ac9c(&stack0x00000190,in_stack_00000240,0);
    in_stack_000000e0 = in_stack_000001b0;
    in_stack_000000c8 = in_stack_00000198;
    in_stack_000000c0 = in_stack_00000190;
    in_stack_000000d8 = in_stack_000001a8;
    in_stack_000000d0 = in_stack_000001a0;
    FUN_05d85c0c(uVar19,uVar20);
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
  uVar10 = FUN_05d6d114(in_stack_00000238,0);
  if (((uVar10 & 1) != 0) && (*(char *)(unaff_x19 + 0x256) != '\0')) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar10 = FUN_060be514(lVar11,*(undefined8 *)Method_Unity_AppUI_UI_PickerItem_OnClick__,0);
  }
  uVar10 = FUN_05d83634(uVar10,in_stack_00000238);
  if ((uVar10 & 1) != 0) {
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
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_060be514(lVar11,*(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateGesture__
                 ,0);
  }
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
  cVar4 = *(char *)(in_stack_00000238 + 399);
  if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05cb163c(uVar8,*(undefined8 *)Method_Unity_AppUI_UI_Picker_OnKeyboardFocusIn__,cVar4 != '\0',0
              );
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
              ) == 0) {
    thunk_FUN_02f6670c();
  }
  lVar11 = FUN_05d5a440(in_stack_00000238,0);
  if (lVar11 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = thunk_FUN_05d43a98(lVar11,*(undefined1 *)(in_stack_00000238 + 0x1e0),0);
    uVar6 = uVar6 & 1;
  }
  lVar12 = *(long *)puVar3;
  lVar18 = *(long *)(unaff_x19 + 0xf8);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar12 = *(long *)puVar3;
  }
  puVar3 = PTR_DAT_067c97a8;
  if (lVar18 == **(long **)(lVar12 + 0xb8)) {
    iVar7 = (uint)*(byte *)(in_stack_00000238 + 0x18c) << 1;
  }
  else {
    iVar7 = 2;
  }
  if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0610d14c(&stack0x00000190,2,0);
  uVar15 = in_stack_000001b0;
  uVar17 = in_stack_000001a8;
  uVar8 = in_stack_000001a0;
  puVar21 = in_stack_00000198;
  uVar10 = in_stack_00000190;
  if (*(long *)(in_stack_00000238 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar13 = FUN_05c35d3c(*(long *)(in_stack_00000238 + 0x1a0),0);
  if ((uVar13 & 1) != 0) {
    lVar12 = *(long *)(in_stack_00000238 + 0x1a0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar21 = *(undefined1 **)(lVar12 + 0x48);
    uVar10 = *(ulong *)(lVar12 + 0x40);
    uVar17 = *(undefined8 *)(lVar12 + 0x58);
    uVar8 = *(undefined8 *)(lVar12 + 0x50);
    uVar15 = *(undefined8 *)(lVar12 + 0x60);
  }
  if (*(char *)(unaff_x19 + 0x25b) == '\0') {
    if (*(char *)(in_stack_00000238 + 0x1e0) == '\0') {
      lVar12 = *(long *)(unaff_x19 + 0xf8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      in_stack_00000198 = *(undefined1 **)(lVar12 + 0x30);
      in_stack_00000190 = *(ulong *)(lVar12 + 0x28);
      in_stack_000001a8 = *(undefined8 *)(lVar12 + 0x40);
      in_stack_000001a0 = *(undefined8 *)(lVar12 + 0x38);
      in_stack_000001b0 = *(undefined8 *)(lVar12 + 0x48);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      in_stack_000000b0 = in_stack_000001b0;
      in_stack_00000098 = in_stack_00000198;
      in_stack_00000090 = in_stack_00000190;
      in_stack_000000a8 = in_stack_000001a8;
      in_stack_000000a0 = in_stack_000001a0;
      in_stack_00000060 = uVar10;
      in_stack_00000068 = puVar21;
      in_stack_00000070 = uVar8;
      in_stack_00000078 = uVar17;
      in_stack_00000080 = uVar15;
      uVar13 = FUN_0610d5f4(&stack0x00000090,&stack0x00000060,0);
      if ((uVar13 & 1) == 0) {
        cVar4 = *(char *)(unaff_x19 + 0x255);
      }
      else {
        cVar4 = '\x01';
      }
    }
    else {
      cVar4 = '\x01';
    }
    plVar9 = (long *)PTR_DAT_067c8f20;
    cVar4 = cVar4 != '\0';
    *(char *)(unaff_x19 + 0x25a) = cVar4;
    if (*(char *)(unaff_x19 + 0x25b) == '\0') {
      uVar8 = FUN_05d83678();
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
      FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar8,iVar7,0,uVar17,0,0);
      uVar8 = FUN_05d83678();
      lVar11 = *(long *)(unaff_x19 + 0xf8);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar17 = *(undefined8 *)(unaff_x19 + 0x270);
      if (*(long *)(lVar11 + 0x18) == 0) {
        bVar5 = false;
      }
      else {
        iVar7 = FUN_060cbf28(*(long *)(lVar11 + 0x18),0);
        bVar5 = iVar7 == 1;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05cab544(in_stack_00000260,uVar8,lVar11,2,0,uVar17,bVar5,0);
      goto LAB_05d82e48;
    }
  }
  else {
    cVar4 = *(char *)(unaff_x19 + 0x25a);
    plVar9 = (long *)PTR_DAT_067c8f20;
  }
  if (cVar4 == '\0') {
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
      in_stack_00000248 =
           (**(code **)(*plVar9 + 0x1c8))(plVar9,in_stack_00000260,*(undefined8 *)(*plVar9 + 0x1d0))
      ;
    }
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05cab544(in_stack_00000260,in_stack_00000240,in_stack_00000248,iVar7,0,uVar8,0,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = in_stack_00000248;
    FUN_05d83790();
  }
  else if (uVar6 == 0) {
    uVar16 = *(undefined8 *)(in_stack_00000238 + 0xf0);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar13 = FUN_060f078c(uVar16,0,0);
    if ((uVar13 & 1) != 0) {
      in_stack_000001b0 = 0;
      in_stack_00000198 = (undefined1 *)0x0;
      in_stack_00000190 = 0;
      in_stack_000001a8 = 0;
      in_stack_000001a0 = 0;
      FUN_0610cedc(&stack0x00000190,*(undefined8 *)(in_stack_00000238 + 0xf0),0);
      uVar15 = in_stack_000001b0;
      uVar10 = in_stack_00000190;
      puVar21 = in_stack_00000198;
      uVar8 = in_stack_000001a0;
      uVar17 = in_stack_000001a8;
    }
    in_stack_00000030 = uVar10;
    in_stack_00000038 = puVar21;
    in_stack_00000040 = uVar8;
    in_stack_00000048 = uVar17;
    in_stack_00000050 = uVar15;
    in_stack_000001d0 = uVar10;
    in_stack_000001d8 = puVar21;
    in_stack_000001e0 = uVar8;
    in_stack_000001e8 = uVar17;
    FUN_05c9caa8(&stack0x00000030,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    uVar8 = **(undefined8 **)
              (*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ + 0xb8);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05dac118(in_stack_00000260,in_stack_00000238,in_stack_00000240,uVar8,iVar7,0,uVar17,0);
    if (*(long *)(unaff_x20 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x1d8) + 0x118) = uVar8;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar14 = (undefined8 *)FUN_05d43a80(lVar11,0);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar17 = *puVar14;
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1b0) + 0x78);
    if (*(int *)(*(long *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)
                          Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                        );
    }
    FUN_05cab544(in_stack_00000260,in_stack_00000240,uVar17,0,0,uVar8,0,0);
    lVar12 = *(long *)(unaff_x20 + 0x1d8);
    puVar14 = (undefined8 *)FUN_05d43a80(lVar11,0);
    uVar8 = *puVar14;
    puVar14 = (undefined8 *)FUN_05d43a88(lVar11,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05d61b54(lVar12,uVar8,*puVar14,0);
  }
LAB_05d82e48:
  lVar11 = in_stack_00000100;
  FUN_05c5cb50(in_stack_00000108,0);
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0(lVar11);
}


