/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandDevice$$get_leftHand
ENTRY_POINT: 05984e6c
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


void UnityEngine_XR_Hands_XRHandDevice__get_leftHand(undefined8 param_1,undefined8 param_2)

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
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long unaff_x19;
  long unaff_x20;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  uint unaff_w24;
  long lVar23;
  long unaff_x25;
  byte bVar24;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  ulong unaff_x29;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
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
  
  FUN_05c726ac(param_1,param_2,0);
  FUN_059816e8();
  if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0) {
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
  if ((unaff_w26 & 1) == 0) {
    if ((in_stack_00000048 & 0x100000000) != 0) {
LAB_05984fa8:
      bVar5 = false;
      plVar20 = (long *)(unaff_x19 + 0x278);
      puVar17 = (undefined8 *)Method_System_Array_Reverse<Vector2>__;
LAB_05984fb8:
      uVar21 = *puVar17;
      if (bVar5) {
        lVar11 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar11 == 0) goto LAB_05986378;
        uVar9 = FUN_059a158c(lVar11,0);
        uVar9 = FUN_059a1698(lVar11,uVar9,0);
        FUN_05c726ac(&stack0x000007f0,uVar9,0);
        lVar11 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar11 == 0) goto LAB_05986378;
        uVar9 = FUN_059a158c(lVar11,0);
        FUN_059a327c(lVar11,&stack0x00000390,uVar9,0);
      }
      else {
        uVar9 = FUN_05967d34(in_stack_00000988,0);
        FUN_05c726ac(&stack0x000007f0,uVar9,0);
        if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) ==
            0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0596c2d0(0,plVar20,&stack0x000007f0,0,1,1,uVar21,0);
      }
      if ((*plVar20 == 0) || (unaff_x27 == 0)) goto LAB_05986378;
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
      lVar11 = *(long *)puVar4;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar11 = *(long *)puVar4;
      }
      if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_05986378;
      *(long *)(**(long **)(lVar11 + 0xb8) + 0x10) = unaff_x27;
      thunk_FUN_02bb0e9c();
      FUN_05967c50(**(undefined8 **)(*(long *)puVar4 + 0xb8),in_stack_00000988,0);
      if ((unaff_w26 & 1) != 0) {
        if (*plVar20 == 0) goto LAB_05986378;
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
      lVar11 = *(long *)(unaff_x19 + 0x2a0);
      if (lVar11 == 0) goto LAB_05986378;
      lVar19 = *(long *)(lVar11 + 0x30);
      uVar8 = FUN_059a158c(lVar11,0);
      if (lVar19 == 0) goto LAB_05986378;
      if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_05986388;
      plVar20 = (long *)(lVar19 + (long)(int)uVar8 * 8 + 0x20);
      if (*plVar20 == 0) goto LAB_05986378;
      bVar5 = true;
      puVar17 = (undefined8 *)(*plVar20 + 0x58);
      goto LAB_05984fb8;
    }
  }
  puVar4 = Method_System_Array_Resize<object>__;
  if ((unaff_x29 & 1) != 0) {
    if ((in_stack_00000020 & 0x100000000) == 0) {
      if ((unaff_w26 & 1) != 0) goto LAB_05985650;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_05986378;
      FUN_059b991c(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x268),
                   0);
    }
    else {
      lVar11 = *(long *)Method_System_Array_Resize<object>__;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar11 = *(long *)puVar4;
        if ((unaff_w26 & 1) != 0) goto LAB_05985268;
LAB_059852ac:
        plVar20 = (long *)(unaff_x19 + 0x270);
        puVar17 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x18);
      }
      else {
        if ((unaff_w26 & 1) == 0) goto LAB_059852ac;
LAB_05985268:
        lVar11 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar11 == 0) goto LAB_05986378;
        lVar19 = *(long *)(lVar11 + 0x30);
        uVar8 = FUN_059a1568(lVar11,0);
        if (lVar19 == 0) goto LAB_05986378;
        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_05986388;
        plVar20 = (long *)(lVar19 + (long)(int)uVar8 * 8 + 0x20);
        if (*plVar20 == 0) goto LAB_05986378;
        puVar17 = (undefined8 *)(*plVar20 + 0x58);
      }
      uVar21 = *puVar17;
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
        FUN_0596c2d0(0,plVar20,&stack0x000007b0,0,1,1,uVar21,0);
      }
      else {
        lVar11 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar11 == 0) goto LAB_05986378;
        uVar9 = FUN_059a1568(lVar11,0);
        uVar9 = FUN_059a1698(lVar11,uVar9,0);
        FUN_05c726ac(&stack0x000007b0,uVar9,0);
        lVar11 = *(long *)(unaff_x19 + 0x2a0);
        if (lVar11 == 0) goto LAB_05986378;
        uVar9 = FUN_059a1568(lVar11,0);
        FUN_059a327c(lVar11,&stack0x000002f0,uVar9,0);
      }
      if ((*plVar20 == 0) || (unaff_x27 == 0)) goto LAB_05986378;
      FUN_05cbe6a0();
      if ((unaff_w26 & 1) != 0) {
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*plVar20 == 0) goto LAB_05986378;
        FUN_05cbe6a0();
      }
      if (*(int *)(*(long *)PTR_DAT_06320cb0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05cc8fd8(&stack0x000009d8);
      FUN_05cb2938();
      if ((unaff_w26 & 1) == 0) {
        lVar11 = *(long *)(unaff_x19 + 0x150);
        if (in_stack_00000030._4_4_ == 0) {
          if (lVar11 == 0) goto LAB_05986378;
          FUN_059b7f1c(lVar11,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       0);
        }
        else {
          if (lVar11 == 0) goto LAB_05986378;
          FUN_059b7f54(lVar11,*(undefined8 *)(unaff_x19 + 0x268),*(undefined8 *)(unaff_x19 + 0x270),
                       *(undefined8 *)(unaff_x19 + 0x278),0);
        }
        goto LAB_05985640;
      }
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar8 = FUN_059a1568(*(long *)(unaff_x19 + 0x2a0),0);
      if (*(long *)(unaff_x19 + 0x2a0) == 0) goto LAB_05986378;
      uVar12 = FUN_059a15bc(*(long *)(unaff_x19 + 0x2a0),0);
      lVar19 = *(long *)(unaff_x19 + 0x150);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x240);
      lVar11 = *(long *)(unaff_x19 + 0x2a0);
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000030._4_4_ != 0) {
          if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x30), lVar11 == 0)) goto LAB_05986378;
          if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_05986388;
          if (lVar19 == 0) goto LAB_05986378;
          uVar16 = *(undefined8 *)(unaff_x19 + 0x278);
          uVar13 = *(undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20);
          goto LAB_059855b0;
        }
        if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x30), lVar11 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_05986388;
        if (lVar19 == 0) goto LAB_05986378;
        FUN_059b7f1c(lVar19,uVar21,*(undefined8 *)(lVar11 + (long)(int)uVar8 * 8 + 0x20),0);
      }
      else {
        if ((lVar11 == 0) || (lVar22 = *(long *)(lVar11 + 0x30), lVar22 == 0)) goto LAB_05986378;
        if (*(uint *)(lVar22 + 0x18) <= uVar8) {
LAB_05986388:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar13 = *(undefined8 *)(lVar22 + (long)(int)uVar8 * 8 + 0x20);
        uVar8 = FUN_059a158c(lVar11,0);
        if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_05986388;
        if (lVar19 == 0) goto LAB_05986378;
        uVar16 = *(undefined8 *)(lVar22 + (long)(int)uVar8 * 8 + 0x20);
LAB_059855b0:
        FUN_059b7f54(lVar19,uVar21,uVar13,uVar16,0);
      }
      puVar4 = Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__;
      if (0xffffffe0 < in_stack_00000980 - 0xfbU) {
        lVar11 = *(long *)(unaff_x19 + 0x150);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar11 == 0) goto LAB_05986378;
        puVar17 = (undefined8 *)(lVar11 + 0xb8);
        *puVar17 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        thunk_FUN_02bb0e9c(puVar17);
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
  if ((in_stack_00000050 & 0x100000000) != 0) {
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
      lVar11 = *(long *)(unaff_x19 + 0x198);
      if (lVar11 == 0) goto LAB_05986378;
    }
    else {
      lVar11 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar11 == 0) goto LAB_05986378;
      FUN_059bc8e8(lVar11,*(undefined8 *)(unaff_x19 + 0x230),*(undefined8 *)(unaff_x19 + 0x278),
                   *(undefined8 *)(unaff_x19 + 0x240),0);
    }
    FUN_05914c54(lVar11,uVar2,0,0);
    FUN_05914d8c(lVar11,iVar10,0);
    puVar4 = Method_System_Array_Reverse<int>__;
    lVar22 = *(long *)(unaff_x19 + 0x108);
    lVar19 = *(long *)Method_System_Array_Reverse<int>__;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar19 = *(long *)puVar4;
    }
    puVar17 = *(undefined8 **)(lVar19 + 0xb8);
    lVar23 = puVar17[2];
    if (lVar23 == 0) {
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar17 = *(undefined8 **)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8);
      }
      uVar21 = *puVar17;
      lVar23 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
      FUN_03bfe598(lVar23,uVar21,*(undefined8 *)Method_System_Array_Reverse<byte>__,0);
      plVar20 = (long *)(*(long *)(*(long *)Method_System_Array_Reverse<int>__ + 0xb8) + 0x10);
      *plVar20 = lVar23;
      thunk_FUN_02bb0e9c(plVar20,lVar23);
      unaff_w26 = in_stack_00000080._4_4_;
    }
    if (lVar22 == 0) goto LAB_05986378;
    lVar19 = FUN_037a6b94(lVar22,lVar23,*(undefined8 *)Method_System_Array_Resize<OVRPlugin_Quatf>__
                         );
    if ((lVar19 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
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
      FUN_05915280(0,0,0,0x3f800000,lVar11,uVar9,0);
    }
    FUN_05920d64();
  }
  else {
    lVar11 = *(long *)(unaff_x19 + 0x2a0);
    if (lVar11 == 0) goto LAB_05986378;
    if ((*(char *)(lVar11 + 0x15) != '\0') &&
       ((in_stack_00000980 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_059a2ed0(lVar11,0);
    }
    FUN_05986f8c();
  }
  if (unaff_x25 == 0) goto LAB_05986378;
  iVar10 = FUN_05c407c0();
  if ((iVar10 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar21 = FUN_05c580a0(0);
    puVar4 = PTR_DAT_06312520;
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
    }
    uVar12 = FUN_05c8c45c(uVar21,0,0);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_0317392c();
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000758 == 0) goto LAB_05986378;
        uVar21 = FUN_05c5f86c(in_stack_00000758,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar4);
        }
        uVar12 = FUN_05c8c45c(uVar21,0,0);
        if ((uVar12 & 1) != 0) goto LAB_05985a60;
      }
    }
    else {
LAB_05985a60:
      FUN_05920d64();
    }
  }
  if (unaff_w28 == 0) {
    if (*(int *)(unaff_x20 + 0xe8) == 0 && (unaff_x29 & 1) == 0) {
      uVar12 = FUN_05c977c4(0);
      uVar21 = *(undefined8 *)
                Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>__ctor__
      ;
      if ((uVar12 & 1) == 0) {
        uVar13 = FUN_05c69330(0);
      }
      else {
        uVar13 = FUN_05c693b8(0);
      }
      FUN_05c593d0(uVar21,uVar13,0);
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
    lVar11 = FUN_05993404(0);
    if (lVar11 == 0) goto LAB_05986378;
    uVar9 = *(undefined4 *)(lVar11 + 0x48);
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
  uVar8 = 0;
  if (cVar3 != '\0') {
    uVar8 = 3;
  }
  if (unaff_w28 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_05986378;
    if ((499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) && (uVar8 = 0, 1 < in_stack_00000998))
    {
      if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4) == 0
         ) {
        thunk_FUN_02b9ad44();
      }
      uVar8 = FUN_0596ade4(0);
      uVar8 = uVar8 & 1;
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914c54(*(long *)(unaff_x19 + 0x1c8),
               (((in_stack_00000998 < 2 || cVar3 == '\0') | in_stack_00000088) ^ 0xff) & 1,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_05986378;
  FUN_05914d8c(*(long *)(unaff_x19 + 0x1c8),uVar8,0);
  FUN_05920d64();
  FUN_05920d64();
  FUN_059870e4();
  uVar12 = FUN_059285dc();
  uVar14 = FUN_059283a4();
  if (((uVar12 & 1) != 0) && ((uVar14 & 1) != 0)) {
    lVar11 = *(long *)(unaff_x19 + 0x200);
    FUN_059816e8();
    if (lVar11 == 0) goto LAB_05986378;
    FUN_05934854(lVar11);
    FUN_05920d64();
  }
  bVar5 = cVar3 == '\0';
  bVar6 = *(long *)(unaff_x20 + 0x1b0) != 0;
  if ((bVar5 || ((in_stack_00000040._4_4_ ^ 0xffffffff) & 1) != 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar15 = FUN_05928964(), (uVar15 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    bVar7 = 0;
joined_r0x05985f3c:
    if (!bVar6 || bVar5) goto LAB_05985f40;
LAB_05985f60:
    bVar24 = 0;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      bVar7 = FUN_058fdadc(*(long *)(unaff_x19 + 0xe8),0);
      goto joined_r0x05985f3c;
    }
    bVar7 = 1;
    if (bVar6 && !bVar5) goto LAB_05985f60;
LAB_05985f40:
    bVar24 = in_stack_00000038 == 0 & (bVar7 ^ 1);
  }
  if (*(long *)(unaff_x19 + 0xe8) == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = FUN_058fdbcc(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar8 = uVar8 ^ 1;
  }
  plVar20 = (long *)(unaff_x19 + 0x230);
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
      FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar20,0,plVar1,&stack0x00000760,
                   unaff_x19 + 0x288,0);
      goto LAB_059840d8;
    }
    FUN_05983048();
    if (*(long *)(unaff_x19 + 0x318) == 0) goto LAB_05986378;
    FUN_0593c8b4(*(long *)(unaff_x19 + 0x318),&stack0x00000990,plVar20,bVar24,plVar1,
                 &stack0x00000760,unaff_x19 + 0x288,bVar7 & 1);
    FUN_05920d64();
  }
  lVar11 = *plVar20;
  if ((bVar7 & 1) != 0) {
    if (*(long *)(unaff_x19 + 800) == 0) goto LAB_05986378;
    FUN_0593c9fc(*(long *)(unaff_x19 + 800),&stack0x00000658,1,uVar8 & 1,0);
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_05920d64();
  }
  if (((bVar7 & 1) == 0) &&
     (((in_stack_00000068 == 0 || (in_stack_00000038 != 0)) || (bVar6 && !bVar5)))) {
    lVar19 = *plVar20;
    if (lVar19 == 0) goto LAB_05986378;
    uVar16 = *(undefined8 *)(lVar19 + 0x30);
    uVar13 = *(undefined8 *)(lVar19 + 0x28);
    uVar26 = *(undefined8 *)(lVar19 + 0x40);
    uVar25 = *(undefined8 *)(lVar19 + 0x38);
    uVar21 = *(undefined8 *)(lVar19 + 0x48);
    lVar19 = *(long *)(unaff_x19 + 600);
    if (lVar19 == 0) goto LAB_05986378;
    in_stack_000001d8 = *(undefined8 *)(lVar19 + 0x30);
    in_stack_000001d0 = *(undefined8 *)(lVar19 + 0x28);
    in_stack_000001e8 = *(undefined8 *)(lVar19 + 0x40);
    in_stack_000001e0 = *(undefined8 *)(lVar19 + 0x38);
    uVar18 = *(undefined8 *)(lVar19 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    in_stack_00000138 = in_stack_000001d8;
    in_stack_00000130 = in_stack_000001d0;
    in_stack_00000148 = in_stack_000001e8;
    in_stack_00000140 = in_stack_000001e0;
    in_stack_00000150 = uVar18;
    in_stack_00000160 = uVar13;
    in_stack_00000168 = uVar16;
    in_stack_00000170 = uVar25;
    in_stack_00000178 = uVar26;
    in_stack_00000180 = uVar21;
    uVar15 = FUN_05cac694(&stack0x00000160,&stack0x00000130,0);
    if ((uVar15 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_05986378;
      in_stack_000000f8 = CONCAT44(in_stack_0000099c,in_stack_00000998);
      in_stack_000000f0 = CONCAT44(in_stack_00000994,in_stack_00000990);
      in_stack_00000108 = CONCAT44(in_stack_000009ac,in_stack_000009a8);
      in_stack_00000100 = in_stack_000009a0;
      in_stack_00000110 = in_stack_000009b0;
      in_stack_00000118 = in_stack_000009b8;
      in_stack_00000120 = in_stack_000009c0;
      FUN_059bdd44(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,lVar11,0);
      FUN_05920d64();
    }
  }
  if (((uVar12 & 1) != 0) && ((uVar14 & 1) == 0 && *(char *)(unaff_x20 + 0x238) != '\0')) {
    FUN_05920d64();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar12 = FUN_057ec748(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar11 = *plVar1;
    if (lVar11 != 0) {
      uVar16 = *(undefined8 *)(lVar11 + 0x30);
      uVar13 = *(undefined8 *)(lVar11 + 0x28);
      uVar26 = *(undefined8 *)(lVar11 + 0x40);
      uVar25 = *(undefined8 *)(lVar11 + 0x38);
      uVar21 = *(undefined8 *)(lVar11 + 0x48);
      lVar11 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar11 != 0) {
        in_stack_000001d8 = *(undefined8 *)(lVar11 + 0x48);
        in_stack_000001d0 = *(undefined8 *)(lVar11 + 0x40);
        in_stack_000001e8 = *(undefined8 *)(lVar11 + 0x58);
        in_stack_000001e0 = *(undefined8 *)(lVar11 + 0x50);
        uVar18 = *(undefined8 *)(lVar11 + 0x60);
        if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        in_stack_00000098 = in_stack_000001d8;
        in_stack_00000090 = in_stack_000001d0;
        in_stack_000000a8 = in_stack_000001e8;
        in_stack_000000a0 = in_stack_000001e0;
        in_stack_000000b0 = uVar18;
        in_stack_000000c0 = uVar13;
        in_stack_000000c8 = uVar16;
        in_stack_000000d0 = uVar25;
        in_stack_000000d8 = uVar26;
        in_stack_000000e0 = uVar21;
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


