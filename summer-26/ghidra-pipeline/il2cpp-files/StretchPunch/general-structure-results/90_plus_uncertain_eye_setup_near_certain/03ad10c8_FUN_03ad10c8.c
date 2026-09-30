/*
FUNCTION_NAME: FUN_03ad10c8
ENTRY_POINT: 03ad10c8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03ad17c4) */
/* WARNING: Removing unreachable block (ram,0x03ad1688) */
/* WARNING: Removing unreachable block (ram,0x03ad17bc) */

void FUN_03ad10c8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  ulong uVar22;
  char local_64 [4];
  
  puVar11 = PTR_DAT_0423c8f8;
  puVar10 = PTR_DAT_0423c8f0;
  puVar9 = PTR_DAT_0423c8e8;
  puVar8 = PTR_DAT_0423c8e0;
  puVar7 = StringLiteral_3622;
  puVar6 = StringLiteral_3621;
  puVar5 = StringLiteral_1700;
  puVar4 = StringLiteral_397;
  puVar3 = Field_UnityEngine_EventSystems_RaycastResult_m_GameObject;
  puVar2 = Field_UnityEngine_InputSystem_UI_NavigationModel_eventData;
  if ((DAT_044ab75c & 1) == 0) {
    FUN_01d7d918(PTR_DAT_0423c900);
    FUN_01d7d918(PTR_DAT_0423c8f8);
    FUN_01d7d918(PTR_DAT_0423c8f0);
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
    DAT_044ab75c = 1;
  }
  uVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
  FUN_033d8040(uVar12,0);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar12;
  thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar12);
  uVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar6);
  FUN_0319873c(uVar12,*(undefined8 *)puVar7);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
  *puVar13 = uVar12;
  thunk_FUN_01e10808(puVar13,uVar12);
  uVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar8);
  FUN_0319873c(uVar12,*(undefined8 *)puVar9);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
  *puVar13 = uVar12;
  thunk_FUN_01e10808(puVar13,uVar12);
  uVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar2);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar12,*(undefined8 *)puVar3);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
  *puVar13 = uVar12;
  thunk_FUN_01e10808(puVar13,uVar12);
  uVar12 = thunk_FUN_01de27b8(*(undefined8 *)puVar10);
  FUN_02b235c4(uVar12,*(undefined8 *)puVar11);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
  *puVar13 = uVar12;
  thunk_FUN_01e10808(puVar13,uVar12);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
  *puVar13 = 0;
  thunk_FUN_01e10808(puVar13,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
  *puVar13 = 0;
  thunk_FUN_01e10808(puVar13,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38);
  *puVar13 = 0;
  thunk_FUN_01e10808(puVar13,0);
  uVar12 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_0423c908);
  FUN_02b235c4(uVar12,*(undefined8 *)PTR_DAT_0423c900);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
  *puVar13 = uVar12;
  thunk_FUN_01e10808(puVar13,uVar12);
  uVar12 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  local_64[0] = '\0';
  FUN_033f4894(uVar12,local_64,0);
  lVar14 = thunk_FUN_01dfeaf4(0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar14 = FUN_033d5cd4(lVar14,0);
  puVar7 = StringLiteral_3615;
  puVar6 = StringLiteral_3614;
  puVar4 = StringLiteral_1660;
  puVar3 = StringLiteral_1325;
  puVar2 = Field_UnityEngine_UIElements_UIR_RenderChain_RenderNodeData_standardMaterial;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
    uVar22 = 0;
    uVar17 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
    do {
      if (uVar17 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar15 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar21 = *(undefined8 *)(lVar14 + uVar22 * 8 + 0x20);
      lVar18 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)PTR_DAT_0423c910;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = *(uint *)(lVar15 + 0x18);
      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
        puVar13 = (undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
        *puVar13 = uVar21;
        thunk_FUN_01e10808(puVar13,uVar21);
      }
      else {
        FUN_03198f70(lVar15,uVar21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      plVar16 = (long *)FUN_03ad186c(uVar21);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar15 = *plVar16;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar6) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ad14dc;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_01dde8fc(plVar16,*(long *)puVar6,0);
LAB_03ad14dc:
      plVar16 = (long *)(*(code *)*puVar13)(plVar16,puVar13[1]);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
LAB_03ad14f0:
      lVar15 = *plVar16;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
            puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03ad153c;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar13 = (undefined8 *)FUN_01dde8fc(plVar16,*(long *)puVar2,0);
LAB_03ad153c:
      uVar17 = (*(code *)*puVar13)(plVar16,puVar13[1]);
      if ((uVar17 & 1) != 0) {
        lVar15 = *plVar16;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar7) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ad1598;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_01dde8fc(plVar16,*(long *)puVar7,0);
LAB_03ad1598:
        uVar21 = (*(code *)*puVar13)(plVar16,puVar13[1]);
        lVar15 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar18 = *(long *)(lVar15 + 0x10);
        lVar19 = *(long *)puVar4;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar1 = *(uint *)(lVar15 + 0x18);
        if (uVar1 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
          puVar13 = (undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
          *puVar13 = uVar21;
          thunk_FUN_01e10808(puVar13);
        }
        else {
          FUN_03198f70(lVar15,uVar21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03ad14f0;
      }
      if (plVar16 != (long *)0x0) {
        lVar15 = *plVar16;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)
                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03ad1670;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01dde8fc(plVar16,*(long *)
                                        Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                               ,0);
LAB_03ad1670:
        (*(code *)*puVar13)(plVar16,puVar13[1]);
      }
      uVar17 = (ulong)*(uint *)(lVar14 + 0x18);
      uVar22 = uVar22 + 1;
    } while ((long)uVar22 < (long)(int)*(uint *)(lVar14 + 0x18));
  }
  if (local_64[0] != '\0') {
    thunk_FUN_01dccd6c(uVar12,0);
  }
  return;
}


