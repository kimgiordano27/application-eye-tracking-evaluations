/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRHandSubsystem$$get_leftHand
ENTRY_POINT: 03ad1160
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03ad17c4) */
/* WARNING: Removing unreachable block (ram,0x03ad1688) */
/* WARNING: Removing unreachable block (ram,0x03ad17bc) */

void UnityEngine_XR_Hands_XRHandSubsystem__get_leftHand(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar16;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong uVar17;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  char cStack000000000000001c;
  
  FUN_01d7d918();
  FUN_01d7d918(PTR_DAT_0423c908);
  FUN_01d7d918(Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
  FUN_01d7d918(Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
  FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads);
  FUN_01d7d918(StringLiteral_3614);
  FUN_01d7d918(StringLiteral_3615);
  FUN_01d7d918(Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial);
  FUN_01d7d918(PTR_DAT_0423c910);
  FUN_01d7d918(StringLiteral_1660);
  FUN_01d7d918(PTR_DAT_0423c8e8);
  FUN_01d7d918(StringLiteral_3622);
  FUN_01d7d918(PTR_DAT_0423c8e0);
  FUN_01d7d918(StringLiteral_3621);
  FUN_01d7d918(StringLiteral_1700);
  FUN_01d7d918(StringLiteral_397);
  FUN_01d7d918(StringLiteral_1325);
  *(undefined1 *)(unaff_x19 + 0x75c) = 1;
  uVar7 = thunk_FUN_01de27b8(*unaff_x21);
  FUN_033d8040(uVar7,0);
  **(undefined8 **)(*unaff_x23 + 0xb8) = uVar7;
  thunk_FUN_01e10808(*(undefined8 *)(*unaff_x23 + 0xb8),uVar7);
  uVar7 = thunk_FUN_01de27b8(*unaff_x20);
  FUN_0319873c(uVar7,*unaff_x29);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_01e10808(puVar8,uVar7);
  uVar7 = thunk_FUN_01de27b8(*unaff_x28);
  FUN_0319873c(uVar7,*unaff_x27);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_01e10808(puVar8,uVar7);
  uVar7 = thunk_FUN_01de27b8(*unaff_x26);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar7,*unaff_x25);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
  *puVar8 = uVar7;
  thunk_FUN_01e10808(puVar8,uVar7);
  uVar7 = thunk_FUN_01de27b8(*unaff_x24);
  FUN_02b235c4(uVar7,*unaff_x22);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
  *puVar8 = uVar7;
  thunk_FUN_01e10808(puVar8,uVar7);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar8 = 0;
  thunk_FUN_01e10808(puVar8,0);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
  *puVar8 = 0;
  thunk_FUN_01e10808(puVar8,0);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x38);
  *puVar8 = 0;
  thunk_FUN_01e10808(puVar8,0);
  uVar7 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_0423c908);
  FUN_02b235c4(uVar7,*(undefined8 *)PTR_DAT_0423c900);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x40);
  *puVar8 = uVar7;
  thunk_FUN_01e10808(puVar8,uVar7);
  uVar7 = **(undefined8 **)(*unaff_x23 + 0xb8);
  cStack000000000000001c = '\0';
  FUN_033f4894(uVar7,&stack0x0000001c,0);
  lVar9 = thunk_FUN_01dfeaf4(0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar9 = FUN_033d5cd4(lVar9,0);
  puVar6 = StringLiteral_3615;
  puVar5 = StringLiteral_3614;
  puVar4 = StringLiteral_1660;
  puVar3 = StringLiteral_1325;
  puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar17 = 0;
    uVar12 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar10 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar16 = *(undefined8 *)(lVar9 + uVar17 * 8 + 0x20);
      lVar13 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)PTR_DAT_0423c910;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar16;
        thunk_FUN_01e10808(puVar8,uVar16);
      }
      else {
        FUN_03198f70(lVar10,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar11 = (long *)FUN_03ad186c(uVar16);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03ad14dc;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar5,0);
LAB_03ad14dc:
      plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
LAB_03ad14f0:
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03ad153c;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar2,0);
LAB_03ad153c:
      uVar12 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      if ((uVar12 & 1) != 0) {
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03ad1598;
            }
            uVar12 = uVar12 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)puVar6,0);
LAB_03ad1598:
        uVar16 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        lVar10 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar16;
          thunk_FUN_01e10808(puVar8);
        }
        else {
          FUN_03198f70(lVar10,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03ad14f0;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)
                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03ad1670;
            }
            uVar12 = uVar12 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01dde8fc(plVar11,*(long *)
                                       Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                              ,0);
LAB_03ad1670:
        (*(code *)*puVar8)(plVar11,puVar8[1]);
      }
      uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  if (cStack000000000000001c != '\0') {
    thunk_FUN_01dccd6c(uVar7,0);
  }
  return;
}


