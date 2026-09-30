/*
FUNCTION_NAME: OVRPlugin$$EnqueueDestroyLayer
ENTRY_POINT: 033bc884
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__EnqueueDestroyLayer(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long *unaff_x19;
  uint uVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 033bc888 to 034bc88b has its CatchHandler @ 033bc934 */
  FUN_01d7d918(StringLiteral_3622);
  FUN_01d7d918(StringLiteral_1130);
  FUN_01d7d918(StringLiteral_2143);
  FUN_01d7d918(StringLiteral_3621);
  FUN_01d7d918(StringLiteral_1554);
                    /* try { // try from 033bc8c8 to 034bc903 has its CatchHandler @ 033bc93c */
  FUN_01d7d918(StringLiteral_5177);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  *(undefined1 *)(unaff_x20 + 0x985) = 1;
  if ((unaff_x19 != (long *)0x0) &&
     (plVar7 = (long *)(**(code **)(*unaff_x19 + 0x1b8))(), plVar7 != (long *)0x0)) {
    iVar5 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
                    /* try { // try from 033bc904 to 034bc953 has its CatchHandler @ 033bc784 */
    if (iVar5 != 8) {
      return 0;
    }
    plVar7 = (long *)(**(code **)(*unaff_x19 + 0x1b8))();
    if (plVar7 != (long *)0x0) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bc888 with catch @ 033bc934
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bc874 with catch @ 033bc938
                        */
      bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bc8c8 with catch @ 033bc93c
                        */
                    /* try { // try from 033bc954 to 034bc957 has its CatchHandler @ 033bc980 */
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1554
         )) {
LAB_033bcd10:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar7);
      }
                    /* try { // try from 033bc958 to 034bc98f has its CatchHandler @ 033bc784 */
      uVar8 = (**(code **)(*plVar7 + 0x408))(plVar7,*(undefined8 *)(*plVar7 + 0x410));
      puVar2 = 
      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      uVar9 = FUN_033aa3b4(in_stack_00000008,0,0);
      if ((uVar9 & 1) != 0) {
        uVar19 = *(undefined8 *)StringLiteral_8777;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        in_stack_00000008 = FUN_033a87c8(uVar19,0);
      }
      uVar9 = FUN_03308b18(plVar7,uVar8,0);
      if ((uVar9 & 1) != 0) {
        lVar10 = (**(code **)(*unaff_x19 + 0x228))();
        if (lVar10 == 0) {
          return 0;
        }
        uVar8 = *(undefined8 *)StringLiteral_8776;
        lVar11 = thunk_FUN_01de26bc(lVar10,uVar8);
        if (lVar11 != 0) {
          return lVar11;
        }
LAB_033bccb8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar10,uVar8);
      }
      lVar10 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3621);
      FUN_0319873c(lVar10,*(undefined8 *)StringLiteral_3622);
      lVar11 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_2143);
      FUN_0319873c(lVar11,*(undefined8 *)StringLiteral_2142);
      puVar4 = StringLiteral_8778;
      puVar3 = StringLiteral_2141;
      puVar2 = StringLiteral_1660;
      do {
        if (plVar7 == (long *)0x0) goto LAB_033bcd08;
        lVar12 = (**(code **)(*plVar7 + 0x378))(plVar7,*(undefined8 *)(*plVar7 + 0x380));
        uVar6 = (**(code **)(*unaff_x19 + 0x1e8))();
        if (lVar12 == 0) goto LAB_033bcd08;
        if (*(uint *)(lVar12 + 0x18) <= uVar6) {
LAB_033bcd0c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar13 = *(long **)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar13 == (long *)0x0) ||
           (lVar12 = (**(code **)(*plVar13 + 0x228))
                               (plVar13,in_stack_00000008,0,*(undefined8 *)(*plVar13 + 0x230)),
           lVar12 == 0)) goto LAB_033bcd08;
        uVar8 = *(undefined8 *)StringLiteral_8776;
        lVar14 = thunk_FUN_01de26bc(lVar12,uVar8);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar12,uVar8);
        }
        uVar6 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar6) {
          uVar18 = 0;
          do {
            if (uVar6 <= uVar18) goto LAB_033bcd0c;
            lVar12 = *(long *)(lVar14 + (long)(int)uVar18 * 8 + 0x20);
            if ((lVar12 == 0) || (uVar8 = thunk_FUN_01dfff04(lVar12,0), lVar10 == 0))
            goto LAB_033bcd08;
            uVar9 = FUN_03199300(lVar10,uVar8,*(undefined8 *)puVar4);
            if ((uVar9 & 1) == 0) {
              lVar16 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)puVar2;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_033bcd08;
              uVar6 = *(uint *)(lVar10 + 0x18);
              if (uVar6 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar6 + 1;
                puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
                *puVar15 = uVar8;
                thunk_FUN_01e10808(puVar15,uVar8);
              }
              else {
                FUN_03198f70(lVar10,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              if (lVar11 == 0) goto LAB_033bcd08;
              lVar16 = *(long *)(lVar11 + 0x10);
              lVar17 = *(long *)puVar3;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_033bcd08;
              uVar6 = *(uint *)(lVar11 + 0x18);
              if (uVar6 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar6 + 1;
                plVar13 = (long *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
                *plVar13 = lVar12;
                thunk_FUN_01e10808(plVar13,lVar12);
              }
              else {
                FUN_03198f70(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar6 = *(uint *)(lVar14 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar6);
        }
        bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_5177)) goto LAB_033bcd10;
        plVar13 = (long *)FUN_03315340(plVar7,0);
        uVar9 = FUN_03308b18(plVar13,plVar7,0);
        plVar7 = plVar13;
      } while ((uVar9 & 1) == 0);
      if (lVar11 != 0) {
        lVar10 = FUN_033b8088(in_stack_00000008,*(undefined4 *)(lVar11 + 0x18),0);
        if (lVar10 == 0) {
          lVar12 = 0;
        }
        else {
          uVar8 = *(undefined8 *)StringLiteral_8776;
          lVar12 = thunk_FUN_01de26bc(lVar10,uVar8);
          if (lVar12 == 0) goto LAB_033bccb8;
        }
        FUN_03199520(lVar11,lVar12,0,*(undefined8 *)StringLiteral_8779);
        return lVar12;
      }
    }
  }
LAB_033bcd08:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


