/*
FUNCTION_NAME: UnityEngine.UI.Selectable$$StartColorTween
ENTRY_POINT: 02778db4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UI_Selectable__StartColorTween(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long in_x10;
  long *unaff_x19;
  undefined2 *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long *unaff_x29;
  long lVar14;
  undefined8 uVar15;
  long *in_stack_00000020;
  uint uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 uStack00000000000000a0;
  undefined4 uStack00000000000000a1;
  undefined3 uStack00000000000000a5;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined1 uStack00000000000000d0;
  undefined4 uStack00000000000000d1;
  undefined3 uStack00000000000000d5;
  undefined4 uStack00000000000000d8;
  undefined3 uStack00000000000000dc;
  long in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  int iStack0000000000000100;
  undefined4 uStack0000000000000104;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  int iStack0000000000000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  
  if (unaff_w22 == 0) {
    lVar14 = *(long *)(unaff_x23 + 0x20);
    lVar11 = *(long *)(unaff_x23 + 0x18);
    unaff_x29[2] = *(long *)(unaff_x23 + 0x28);
    unaff_x29[1] = lVar14;
    *unaff_x29 = lVar11;
    uVar15 = *(undefined8 *)(unaff_x23 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x23 + 0x30);
    unaff_x25[7] = *(undefined8 *)(unaff_x23 + 0x40);
    unaff_x25[6] = uVar15;
    unaff_x25[5] = uVar13;
    uVar13 = *(undefined8 *)(unaff_x23 + 0x50);
    unaff_x25[8] = uVar13;
  }
  else {
    lVar11 = *(long *)(unaff_x26 + 0x48);
    if (lVar11 == 0) goto LAB_027791c8;
    iVar2 = *(int *)(lVar11 + 0x18);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(unaff_x23 + 0x58) / iVar2;
    }
    FUN_0132138c(lVar11,*(int *)(unaff_x23 + 0x58) - iVar4 * iVar2,&stack0x00000190,
                 **(undefined8 **)(in_x10 + 0x650));
    lVar11 = _iStack0000000000000190;
    if (_iStack0000000000000190 == 0) goto LAB_027791c8;
    FUN_0132138c(_iStack0000000000000190,unaff_w22 + -1,&stack0x00000190,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_s8__);
    uVar15 = in_stack_000001d8;
    uVar13 = in_stack_000001d0;
    lVar10 = in_stack_000001c8;
    lVar9 = in_stack_000001c0;
    lVar8 = in_stack_000001b8;
    lVar7 = in_stack_000001b0;
    lVar14 = in_stack_000001a8;
    in_stack_000001e8 = in_stack_000001a0;
    in_stack_000001e0 = in_stack_00000198;
    iVar4 = iStack0000000000000190;
    iVar2 = *(int *)(unaff_x23 + 0x5c);
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661ba8(iVar4 == iVar2,0);
    *(byte *)(unaff_x25 + 9) = *(byte *)(unaff_x25 + 9) | (byte)uVar15 & 1;
    in_stack_00000198 = in_stack_000001e8;
    _iStack0000000000000190 = in_stack_000001e0;
    in_stack_000001a8 = lVar7;
    in_stack_000001a0 = lVar14;
    in_stack_000001b8 = lVar9;
    in_stack_000001b0 = lVar8;
    in_stack_000001c0 = lVar10;
    unaff_x29[2] = lVar7;
    unaff_x29[1] = lVar14;
    *unaff_x29 = in_stack_000001e8;
    in_stack_00000180 = lVar10;
    in_stack_00000168 = lVar7;
    in_stack_00000160 = lVar14;
    in_stack_00000178 = lVar9;
    in_stack_00000170 = lVar8;
    in_stack_00000158 = in_stack_000001e8;
    in_stack_00000150 = in_stack_000001e0;
    unaff_x25[6] = lVar9;
    unaff_x25[5] = lVar8;
    unaff_x25[7] = lVar10;
    unaff_x25[8] = uVar13;
    uStack0000000000000104 = 0xffffffff;
    iStack0000000000000100 = iVar4;
    in_stack_00000110 = in_stack_000001e8;
    in_stack_00000108 = in_stack_000001e0;
    in_stack_00000120 = lVar7;
    in_stack_00000118 = lVar14;
    in_stack_00000130 = lVar9;
    in_stack_00000128 = lVar8;
    in_stack_00000138 = lVar10;
    in_stack_00000140 = uVar13;
    in_stack_00000148 = uVar15;
    FUN_0132149c(lVar11,unaff_w22 + -1,&stack0x00000100,*(undefined8 *)PTR_DAT_033f5a48);
    lVar11 = *(long *)(unaff_x26 + 0x40);
    if (lVar11 == 0) goto LAB_027791c8;
    uVar3 = *(uint *)(lVar11 + 0x18);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = *(uint *)(unaff_x26 + 0x60) / uVar3;
    }
    FUN_0132138c(lVar11,*(uint *)(unaff_x26 + 0x60) - uVar5 * uVar3,&stack0x000000e0,
                 *(undefined8 *)
                  Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__);
    lVar11 = in_stack_000000e0;
    puVar6 = System_Collections_Generic_Dictionary<string,_string>_TypeInfo;
    in_stack_000000f0 = *(undefined8 *)(unaff_x23 + 0x28);
    in_stack_000000e8 = *(undefined8 *)(unaff_x23 + 0x20);
    lVar14 = *(long *)(unaff_x23 + 0x18);
    uStack00000000000000d8 = 0;
    uStack00000000000000dc = 0;
    bVar1 = in_stack_000000e0 == 0;
    in_stack_000000e0 = lVar14;
    if (bVar1) goto LAB_027791c8;
    uStack00000000000000d0 = 1;
    uStack00000000000000d1 = 0;
    uStack00000000000000d5 = 0;
    in_stack_000000b0 = lVar14;
    in_stack_000000b8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000f0;
    in_stack_000000c8 = *(undefined8 *)(unaff_x23 + 0x50);
    FUN_00ce442c(lVar11,&stack0x000000b0,
                 *(undefined8 *)System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    in_stack_00000098 = *(undefined8 *)(unaff_x23 + 0x50);
    in_stack_00000088 = *(undefined8 *)(unaff_x23 + 0x38);
    in_stack_00000080 = *(undefined8 *)(unaff_x23 + 0x30);
    in_stack_00000090 = *(undefined8 *)(unaff_x23 + 0x40);
    uStack00000000000000a0 = 0;
    uStack00000000000000a1 = 0;
    uStack00000000000000a5 = 0;
    param_1 = FUN_00ce442c(lVar11,&stack0x00000080,*(undefined8 *)puVar6);
    uVar13 = *(undefined8 *)(unaff_x23 + 0x50);
  }
  uVar12 = FUN_02779514(param_1,uVar13,uStack000000000000002c,uStack0000000000000028,
                        (undefined4 *)(unaff_x23 + 0x18),(undefined4 *)(unaff_x23 + 0x30),1);
  if ((uVar12 & 1) == 0) {
    FUN_02778438();
  }
  else {
    if ((*(long *)(unaff_x23 + 0x50) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x23 + 0x50) + 0x18), lVar11 == 0)) goto LAB_027791c8;
    FUN_01282738(lVar11,*(undefined4 *)(unaff_x23 + 0x18),*(undefined4 *)(unaff_x23 + 0x1c),
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                );
    if ((*(long *)(unaff_x23 + 0x50) == 0) ||
       (lVar11 = *(long *)(*(long *)(unaff_x23 + 0x50) + 0x20), lVar11 == 0)) goto LAB_027791c8;
    FUN_01282738(lVar11,*(undefined4 *)(unaff_x23 + 0x30),*(undefined4 *)(unaff_x23 + 0x34),
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
  }
  *(uint *)(unaff_x23 + 0x48) = uStack0000000000000028 / 3;
  uVar13 = NEON_rev64(*unaff_x25,4);
  *(undefined8 *)(unaff_x23 + 0x58) = uVar13;
  lVar11 = *(long *)(unaff_x26 + 0x48);
  if (lVar11 != 0) {
    iVar2 = *(int *)(lVar11 + 0x18);
    iVar4 = 0;
    if ((long)iVar2 != 0) {
      iVar4 = (int)((long)(ulong)*(uint *)(unaff_x26 + 0x60) / (long)iVar2);
    }
    FUN_0132138c(lVar11,*(uint *)(unaff_x26 + 0x60) - iVar4 * iVar2,&stack0x00000190,
                 *(undefined8 *)StringLiteral_4895);
    lVar11 = _iStack0000000000000190;
    memcpy(&stack0x00000190,unaff_x25,0x50);
    puVar6 = PTR_DAT_033ef0d0;
    if (lVar11 != 0) {
      memcpy(&stack0x00000030,&stack0x00000190,0x50);
      FUN_00ce461c(lVar11,&stack0x00000030,*(undefined8 *)puVar6);
      if ((*(long *)(unaff_x23 + 0x50) != 0) &&
         (lVar11 = *(long *)(*(long *)(unaff_x23 + 0x50) + 0x18), lVar11 != 0)) {
        in_stack_00000150 = 0;
        in_stack_00000158 = 0;
        FUN_01344298(&stack0x00000150,*(undefined8 *)(lVar11 + 0x20),*(undefined8 *)(lVar11 + 0x28),
                     *(undefined4 *)(unaff_x23 + 0x18),uStack000000000000002c,
                     *(undefined8 *)
                      Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
        in_stack_00000020[1] = in_stack_00000158;
        *in_stack_00000020 = in_stack_00000150;
        if ((*(long *)(unaff_x23 + 0x50) != 0) &&
           (lVar11 = *(long *)(*(long *)(unaff_x23 + 0x50) + 0x20), lVar11 != 0)) {
          in_stack_000000e0 = 0;
          in_stack_000000e8 = 0;
          FUN_01344298(&stack0x000000e0,*(undefined8 *)(lVar11 + 0x20),
                       *(undefined8 *)(lVar11 + 0x28),*(undefined4 *)(unaff_x23 + 0x30),
                       uStack0000000000000028,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
          unaff_x24[1] = in_stack_000000e8;
          *unaff_x24 = in_stack_000000e0;
          *unaff_x21 = (short)*(undefined4 *)(unaff_x23 + 0x18);
          return;
        }
      }
    }
  }
LAB_027791c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


