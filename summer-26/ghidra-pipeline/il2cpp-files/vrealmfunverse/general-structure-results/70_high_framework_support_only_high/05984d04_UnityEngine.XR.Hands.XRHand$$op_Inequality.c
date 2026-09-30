/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHand$$op_Inequality
ENTRY_POINT: 05984d04
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


void UnityEngine_XR_Hands_XRHand__op_Inequality(void)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  int in_w8;
  undefined8 *puVar18;
  undefined8 uVar19;
  long unaff_x19;
  long unaff_x20;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  long lVar23;
  uint unaff_w24;
  long lVar24;
  long unaff_x25;
  byte bVar25;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000060;
  int in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  byte in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_0000071c;
  long in_stack_00000758;
  undefined4 in_stack_0000076c;
  byte in_stack_00000978;
  byte in_stack_0000097c;
  int in_stack_00000980;
  undefined4 in_stack_00000988;
  undefined4 in_stack_00000990;
  undefined4 in_stack_00000994;
  int in_stack_00000998;
  undefined4 in_stack_0000099c;
  undefined8 in_stack_000009a0;
  undefined4 in_stack_000009a8;
  undefined4 in_stack_000009ac;
  undefined8 in_stack_000009b0;
  undefined8 in_stack_000009b8;
  undefined4 in_stack_000009c0;
  
  if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
  uVar11 = in_w8 == 1 | unaff_w29;
  uVar12 = FUN_058fdaf8(*(long *)(unaff_x19 + 0xe8),0);
  if (((uVar12 & 1) == 0) && ((in_stack_00000060 & 0x100000000) == 0)) {
    unaff_w28 = 0;
    unaff_w24 = 0;
    uVar11 = 0;
    in_stack_00000050._4_4_ = 0;
    *(undefined1 *)(unaff_x19 + 0x140) = 0;
  }
  if (*(char *)(unaff_x19 + 0x134) != '\0') {
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_05986378;
    bVar7 = FUN_058fdc40(*(long *)(unaff_x19 + 0xe8),0);
    *(byte *)(unaff_x19 + 0x134) = bVar7 & 1;
  }
  if (*(long *)(unaff_x20 + 0x1d8) == 0) goto LAB_05986378;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d8) + 0x140) = *(undefined1 *)(unaff_x19 + 0x140);
  if ((unaff_w26 & 1) == 0) {
    bVar7 = 0;
  }
  else {
    lVar13 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar13 == 0) goto LAB_05986378;
    if ((*(char *)(lVar13 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar13,0);
    }
    bVar7 = *(byte *)(unaff_x19 + 0x134) ^ 1;
  }
  if (bVar7 != 0 || ((uVar11 | unaff_w28) & 1) != 0) {
    if (((unaff_w26 | uVar11 ^ 0xffffffff) & 1) == 0) {
      FUN_05c726ac(&stack0x00000830,0,0);
      FUN_059816e8();
    }
    else {
      FUN_05c726ac(&stack0x00000830,0x31,0);
    }
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    }
    FUN_0596c2d0(0,(long *)(unaff_x19 + 0x268),&stack0x00000830,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
                 ,0);
    if ((*(long *)(unaff_x19 + 0x268) == 0) || (unaff_x27 == 0)) goto LAB_05986378;
    FUN_05cbe6a0();
    if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc8fd8(&stack0x000009d8);
    FUN_05cb2938();
  }
  if ((unaff_w26 & 1) == 0) {
    if ((in_stack_00000048 & 0x100000000) != 0) {
LAB_05984fa8:
      bVar5 = false;
      plVar21 = (long *)(unaff_x19 + 0x278);
      puVar18 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar22 = *puVar18;
      if (bVar5) {
        lVar13 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar13 == 0) goto LAB_05986378;
        uVar9 = FUN_059a158c(lVar13,0);
        uVar9 = FUN_059a1698(lVar13,uVar9,0);
        FUN_05c726ac(&stack0x000007f0,uVar9,0);
        lVar13 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar13 == 0) goto LAB_05986378;
        uVar9 = FUN_059a158c(lVar13,0);
        FUN_059a327c(lVar13,&stack0x00000390,uVar9,0);
      }
      else {
        uVar9 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar9,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar21,&stack0x000007f0,0,1,1,uVar22,0);
      }
      if ((*plVar21 == 0) || (unaff_x27 == 0)) goto LAB_05986378;
      FUN_05cbe6a0();
      puVar4 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ + 0xe4) == 0)
      {
        thunk_FUN_02b9ad44();
      }
      if (DAT_066d355c == '\0') {
        FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
        DAT_066d355c = '\x01';
      }
      lVar13 = *(long *)puVar4;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar13 = *(long *)puVar4;
      }
      if (**(long **)(lVar13 + 0xb8) == 0) goto LAB_05986378;
      *(long *)(**(long **)(lVar13 + 0xb8) + 0x10) = unaff_x27;
      thunk_FUN_02bb0e9c();
      FUN_05967c50(**(undefined8 **)(*(long *)puVar4 + 0xb8),in_stack_00000988,0);
      if ((unaff_w26 & 1) != 0) {
        if (*plVar21 == 0) goto LAB_05986378;
        FUN_05cbe6a0();
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8);
      FUN_05cb2938();
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
    uVar8 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
    if (((in_stack_00000048._4_4_ | uVar8) & 1) != 0) {
      if ((uVar8 & 1) == 0) goto LAB_05984fa8;
      lVar13 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar13 == 0) goto LAB_05986378;
      lVar20 = *(long *)(lVar13 + 0x30);
      uVar8 = FUN_059a158c(lVar13,0);
      if (lVar20 == 0) goto LAB_05986378;
      if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_05986388;
      plVar21 = (long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20);
      if (*plVar21 == 0) goto LAB_05986378;
      bVar5 = true;
      puVar18 = (undefined8 *)(*plVar21 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar4 = Method_System_Array_Resize<object>__;
  if ((uVar11 & 1) != 0) {
    if ((in_stack_00000020 & 0x100000000) == 0) {
      if ((unaff_w26 & 1) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar13 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar13 = *(long *)puVar4;
        if ((unaff_w26 & 1) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar21 = (long *)(unaff_x19 + 0x270);
        puVar18 = (undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18);
      }
      else {
        if ((unaff_w26 & 1) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar13 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar13 == 0) goto LAB_05986378;
        lVar20 = *(long *)(lVar13 + 0x30);
        uVar8 = FUN_059a1568(lVar13,0);
        if (lVar20 == 0) goto LAB_05986378;
        if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_05986388;
        plVar21 = (long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20);
        if (*plVar21 == 0) goto LAB_05986378;
        puVar18 = (undefined8 *)(*plVar21 + 0x58);
      }
      uVar22 = *puVar18;
      if ((unaff_w26 & 1) == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar9 = FUN_059b7ed4(0);
        FUN_05c726ac(&stack0x000007b0,uVar9,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar21,&stack0x000007b0,0,1,1,uVar22,0);
      }
      else {
        lVar13 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar13 == 0) goto LAB_05986378;
        uVar9 = FUN_059a1568(lVar13,0);
        uVar9 = FUN_059a1698(lVar13,uVar9,0);
        FUN_05c726ac(&stack0x000007b0,uVar9,0);
        lVar13 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar13 == 0) goto LAB_05986378;
        uVar9 = FUN_059a1568(lVar13,0);
        FUN_059a327c(lVar13,&stack0x000002f0,uVar9,0);
      }
      if ((*plVar21 == 0) || (unaff_x27 == 0)) goto LAB_05986378;
      FUN_05cbe6a0();
      if ((unaff_w26 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar21 == 0) goto LAB_05986378;
        FUN_05cbe6a0();
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8);
      FUN_05cb2938();
      if ((unaff_w26 & 1) == 0) {
        lVar13 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000030._4_4_ == 0) {
          if (lVar13 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar13,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar13 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar13,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar8 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar12 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar20 = *(long *)(unaff_x19 + 0x150);
      uVar22 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar13 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000030._4_4_ != 0) {
          if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_05986388;
          if (lVar20 == 0) goto LAB_05986378;
          uVar17 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar14 = *(undefined8 *)(lVar13 + (long)(int)uVar8 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_05986388;
        if (lVar20 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar20,uVar22,*(undefined8 *)(lVar13 + (long)(int)uVar8 * 8 + 0x20),0);
      }
      else {
        if ((lVar13 == 0) || (lVar23 = *(long *)(lVar13 + 0x30), lVar23 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar23 + 0x18) <= uVar8) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar14 = *(undefined8 *)(lVar23 + (long)(int)uVar8 * 8 + 0x20);
        uVar8 = FUN_059a158c(lVar13,0);
        if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_05986388;
        if (lVar20 == 0) goto LAB_05986378;
        uVar17 = *(undefined8 *)(lVar23 + (long)(int)uVar8 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar20,uVar22,uVar14,uVar17,0);
      }
      puVar4 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < in_stack_00000980 - 0xfbU) {
        lVar13 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar13 == 0) goto LAB_05986378;
        puVar18 = (undefined8 *)(lVar13 + 0xb8);
        *puVar18 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        thunk_FUN_02bb0e9c(puVar18);
      }
    }
LAB_05985640:
    FUN_05920d64();
  }
LAB_05985650:
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x158),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((in_stack_00000050._4_4_ & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05986378;
    FUN_059b24c4(*(long *)(unaff_x19 + 0x310),&stack0x000009d0,&stack0x00000770,&stack0x0000076c,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x330,&stack0x00000770,in_stack_0000076c,1,0,
                 *(undefined8 *)Method_System_Array_Sort<float>__,0);
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_05986378;
    FUN_059b2460(*(long *)(unaff_x19 + 0x310),&stack0x00000760,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
  uVar12 = FUN_057f0fbc(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar12 & 1) != 0) {
    FUN_05920d64();
  }
  cVar3 = *(char *)(unaff_x20 + 0x1e0);
  if ((unaff_w26 & 1) == 0) {
    uVar9 = 2;
    if ((unaff_w24 & 1) == 0) {
      uVar9 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000998) {
      uVar2 = uVar9;
    }
    iVar10 = 0;
    if (((unaff_w28 | unaff_w24) & 1) == 0 && cVar3 != '\0') {
      iVar10 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
    uVar12 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_05986378;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) != '\0') {
        iVar10 = 0;
      }
    }
    uVar8 = 0;
    if (1 < in_stack_00000998) {
      uVar8 = unaff_w28;
    }
    if (uVar8 == 1) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar12 = FUN_0596ade4(0);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
        if (*(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) == 500 && (unaff_w24 & 1) == 0) {
          if (iVar10 == 0) {
            iVar10 = 2;
          }
          else if (iVar10 == 3) {
            iVar10 = 1;
          }
        }
      }
    }
    if (in_stack_00000070._4_4_ == 0) {
      lVar13 = *(long *)(unaff_x19 + 0x198);
      if (lVar13 == 0) goto LAB_05986378;
    }
    else {
      lVar13 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar13 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar13,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar13,uVar2,0,0);
    FUN_05914d8c(lVar13,iVar10,0);
    puVar4 = Method_System_Array_Reverse<int>__;
    lVar23 = *(long *)(unaff_x19 + 0x108);
    lVar20 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar20 = *(long *)puVar4;
    }
    puVar18 = *(undefined8 **)(lVar20 + 0xb8);
    lVar24 = puVar18[2];
    if (lVar24 == 0) {
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar18 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar22 = *puVar18;
      lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar24,uVar22,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar21 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar21 = lVar24;
      thunk_FUN_02bb0e9c(plVar21,lVar24);
      unaff_w26 = in_stack_00000080._4_4_;
    }
    if (lVar23 == 0) goto LAB_05986378;
    lVar20 = FUN_037a6b94(lVar23,lVar24,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar20 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x25 == 0) goto LAB_05986378;
      iVar10 = FUN_05c407c0();
      if (iVar10 == 4) goto LAB_059859c0;
      uVar9 = 1;
    }
    else {
LAB_059859c0:
      uVar9 = 0;
    }
    uVar12 = FUN_05c97ba0(0);
    if ((uVar12 & 1) != 0) {
      FUN_05915280(0,0,0,0x3f800000,lVar13,uVar9,0);
    }
    FUN_05920d64();
  }
  else {
    lVar13 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar13 == 0) goto LAB_05986378;
    if ((*(char *)(lVar13 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar13,0);
    }
    FUN_05986f8c();
  }
  if (unaff_x25 == 0) goto LAB_05986378;
  iVar10 = FUN_05c407c0();
  if ((iVar10 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar22 = FUN_05c580a0(0);
    puVar4 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar12 = FUN_05c8c45c(uVar22,0,0);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_0317392c();
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar22 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar4);
        }
        uVar12 = FUN_05c8c45c(uVar22,0,0);
        if ((uVar12 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (unaff_w28 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (uVar11 & 1) == 0) {
      uVar12 = FUN_05c977c4(0);
      uVar22 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar12 & 1) == 0) {
        uVar14 = FUN_05c69330(0);
      }
      else {
        uVar14 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar22,uVar14,0);
    }
  }
  else if ((((unaff_w26 & 1) == 0) || (*(char *)(unaff_x19 + 0x134) == '\0')) ||
          ((in_stack_00000978 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    FUN_059b5afc(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x240),
                 *(undefined8 *)(unaff_x19 + 0x268),0);
    FUN_05920d64();
  }
  if ((unaff_w24 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar13 = FUN_05993404(0);
    if (lVar13 == 0) goto LAB_05986378;
    uVar9 = *(undefined4 *)(lVar13 + 0x48);
    FUN_059b478c(uVar9,&stack0x00000720,&stack0x0000071c,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x280,&stack0x00000720,in_stack_0000071c,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>__ctor__
                 ,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_05986378;
    FUN_059b482c(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x230),
                 *(undefined8 *)(unaff_x19 + 0x280),uVar9,0);
    FUN_05920d64();
  }
  if ((in_stack_0000097c & 1) != 0) {
    FUN_05c726ac(&stack0x000006e0,0x2e,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x288,&stack0x000006e0,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<RectIntField,_RectIntField_UxmlTraits>__ctor__
                 ,0);
    FUN_05c726ac(&stack0x000006a0,0,0);
    FUN_0596c2d0(0,unaff_x19 + 0x290,&stack0x000006a0,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_UxmlFactory<RectField,_RectField_UxmlTraits>__ctor__
                 ,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<LongField,_LongField_UxmlTraits>__ctor__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_0593b4dc();
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_05986378;
    FUN_05939f18(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x290),0);
    FUN_05920d64();
  }
  if ((in_stack_00000048 & 1) != 0) {
    FUN_05920d64();
  }
  uVar11 = 0;
  if (cVar3 != '\0') {
    uVar11 = 3;
  }
  if (unaff_w28 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar11 = 0, 1 < in_stack_00000998)
       ) {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_0596ade4(0);
      uVar11 = uVar11 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000998 < 2 || cVar3 == '\0') | in_stack_00000088) ^ 0xff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar11,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar12 = FUN_059285dc();
  uVar15 = FUN_059283a4();
  if (((uVar12 & 1) != 0) && ((uVar15 & 1) != 0)) {
    lVar13 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar13 == 0) goto LAB_05986378;
    FUN_05934854(lVar13);
    FUN_05920d64();
  }
  bVar5 = cVar3 == '\0';
  bVar6 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar5 || ((in_stack_00000040._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar16 = FUN_05928964(), (uVar16 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar7 = 0;
joined_r0x05985f3c:
    if (!bVar6 || bVar5) goto LAB_05985f40;
LAB_05985f60:
    bVar25 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar7 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar7 = 1;
    if (bVar6 && !bVar5) goto LAB_05985f60;
LAB_05985f40:
    bVar25 = in_stack_00000038 == 0 & (bVar7 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar11 = uVar11 ^ 1;
  }
  plVar21 = (long *)(unaff_x19 + 0x230);
  plVar1 = (long *)(unaff_x19 + 0x240);
  if (in_stack_00000068 == 0) {
    if (cVar3 == '\0') {
      return;
    }
    FUN_05983048();
  }
  else {
    uVar9 = FUN_05c7228c(&stack0x00000990,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)
                          Method_UnityEngine_UIElements_UxmlFactory<Toggle,_Toggle_UxmlTraits>__ctor__
                        );
    }
    in_stack_00000190 = CONCAT44(in_stack_00000994,in_stack_00000990);
    in_stack_00000198 = CONCAT44(in_stack_0000099c,in_stack_00000998);
    in_stack_000001a0 = in_stack_000009a0;
    in_stack_000001a8 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
    in_stack_000001b0 = in_stack_000009b0;
    in_stack_000001b8 = in_stack_000009b8;
    in_stack_000001c0 = in_stack_000009c0;
    FUN_0593f348(&stack0x000001d0,&stack0x00000190,in_stack_00000990,in_stack_00000994,uVar9,0,0);
    if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0)
    {
      thunk_FUN_02b9ad44();
    }
    FUN_0596c2d0(0,unaff_x19 + 0x328,&stack0x00000660,0,1,1,
                 *(undefined8 *)Method_System_Array_Reverse<byte>__,0);
    if (cVar3 == '\0') {
      if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar21,0,plVar1,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar21,bVar25,plVar1,
                 &stack0x00000760,unaff_x19 + 0x288,bVar7 & 1);
    FUN_05920d64();
  }
  lVar13 = *plVar21;
  if ((bVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar11 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar7 & 1) == 0) &&
     (((in_stack_00000068 == 0 || (in_stack_00000038 != 0)) || (bVar6 && !bVar5)))) {
    lVar20 = *plVar21;
    if (lVar20 == 0) goto LAB_05986378;
    uVar17 = *(undefined8 *)(lVar20 + 0x30);
    uVar14 = *(undefined8 *)(lVar20 + 0x28);
    uVar27 = *(undefined8 *)(lVar20 + 0x40);
    uVar26 = *(undefined8 *)(lVar20 + 0x38);
    uVar22 = *(undefined8 *)(lVar20 + 0x48);
    lVar20 = *(long *)(unaff_x19 + 600);
    if (lVar20 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar20 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar20 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar20 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar20 + 0x38);
    uVar19 = *(undefined8 *)(lVar20 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar19;
    in_stack_00000160 = uVar14;
    in_stack_00000168 = uVar17;
    in_stack_00000170 = uVar26;
    in_stack_00000178 = uVar27;
    in_stack_00000180 = uVar22;
    uVar16 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar16 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar13,0);
      FUN_05920d64();
    }
  }
  if (((uVar12 & 1) != 0) && ((uVar15 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar12 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      uVar17 = *(undefined8 *)(lVar13 + 0x30);
      uVar14 = *(undefined8 *)(lVar13 + 0x28);
      uVar27 = *(undefined8 *)(lVar13 + 0x40);
      uVar26 = *(undefined8 *)(lVar13 + 0x38);
      uVar22 = *(undefined8 *)(lVar13 + 0x48);
      lVar13 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar13 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar13 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar13 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar13 + 0x50);
        uVar19 = *(undefined8 *)(lVar13 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar19;
        in_stack_000000c0 = uVar14;
        in_stack_000000c8 = uVar17;
        in_stack_000000d0 = uVar26;
        in_stack_000000d8 = uVar27;
        in_stack_000000e0 = uVar22;
        uVar12 = FUN_05cac694(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar12 & 1) != 0) {
          return;
        }
        if (*(long *)(unaff_x20 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x28) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 0x1f0) != 0) {
            FUN_059b5afc(*(long *)(unaff_x19 + 0x1f0),*(undefined8 *)(unaff_x19 + 0x240),
                         *(undefined8 *)(unaff_x19 + 0x260),0);
            if (*(long *)(unaff_x19 + 0x1f0) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0xcd) = 1;
LAB_059840d8:
              FUN_05920d64();
              return;
            }
          }
        }
      }
    }
  }
LAB_05986378:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


