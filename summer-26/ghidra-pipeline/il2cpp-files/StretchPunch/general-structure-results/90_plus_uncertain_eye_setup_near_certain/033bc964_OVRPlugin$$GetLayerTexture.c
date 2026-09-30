/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 033bc964
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetLayerTexture(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  code *in_x9;
  long lVar14;
  long *unaff_x19;
  uint uVar15;
  undefined8 uVar16;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x410));
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
                    /* catch() { ... } // from try @ 033bc954 with catch @ 033bc980 */
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      );
  }
                    /* try { // try from 033bc990 to 034bc997 has its CatchHandler @ 033bc9ac */
                    /* try { // try from 033bc998 to 034bc9a3 has its CatchHandler @ 033bc784 */
  uVar6 = FUN_033aa3b4(in_stack_00000008,0,0);
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 033bc9a4 to 034bc9ab has its CatchHandler @ 033bc9ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033bc990 with catch @ 033bc9ac
                       catch(type#2 @ 00000000) { ... } // from try @ 033bc9a4 with catch @ 033bc9ac
                        */
    uVar16 = *(undefined8 *)StringLiteral_8777;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    in_stack_00000008 = FUN_033a87c8(uVar16,0);
  }
  uVar6 = FUN_03308b18();
  if ((uVar6 & 1) == 0) {
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_3621);
    FUN_0319873c(lVar7,*(undefined8 *)StringLiteral_3622);
    lVar9 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_2143);
    FUN_0319873c(lVar9,*(undefined8 *)StringLiteral_2142);
    puVar4 = StringLiteral_8778;
    puVar3 = StringLiteral_2141;
    puVar2 = StringLiteral_1660;
    do {
      if (unaff_x21 == (long *)0x0) goto LAB_033bcd08;
      lVar8 = (**(code **)(*unaff_x21 + 0x378))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x380));
      uVar5 = (**(code **)(*unaff_x19 + 0x1e8))();
      if (lVar8 == 0) goto LAB_033bcd08;
      if (*(uint *)(lVar8 + 0x18) <= uVar5) {
LAB_033bcd0c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar10 = *(long **)(lVar8 + (long)(int)uVar5 * 8 + 0x20);
      if ((plVar10 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar10 + 0x228))
                            (plVar10,in_stack_00000008,0,*(undefined8 *)(*plVar10 + 0x230)),
         lVar8 == 0)) goto LAB_033bcd08;
      uVar16 = *(undefined8 *)StringLiteral_8776;
      lVar11 = thunk_FUN_01de26bc(lVar8,uVar16);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar8,uVar16);
      }
      uVar5 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar5) {
        uVar15 = 0;
        do {
          if (uVar5 <= uVar15) goto LAB_033bcd0c;
          lVar8 = *(long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
          if ((lVar8 == 0) || (uVar16 = thunk_FUN_01dfff04(lVar8,0), lVar7 == 0)) goto LAB_033bcd08;
          uVar6 = FUN_03199300(lVar7,uVar16,*(undefined8 *)puVar4);
          if ((uVar6 & 1) == 0) {
            lVar13 = *(long *)(lVar7 + 0x10);
            lVar14 = *(long *)puVar2;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_033bcd08;
            uVar5 = *(uint *)(lVar7 + 0x18);
            if (uVar5 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar5 + 1;
              puVar12 = (undefined8 *)(lVar13 + (long)(int)uVar5 * 8 + 0x20);
              *puVar12 = uVar16;
              thunk_FUN_01e10808(puVar12,uVar16);
            }
            else {
              FUN_03198f70(lVar7,uVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar9 == 0) goto LAB_033bcd08;
            lVar13 = *(long *)(lVar9 + 0x10);
            lVar14 = *(long *)puVar3;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_033bcd08;
            uVar5 = *(uint *)(lVar9 + 0x18);
            if (uVar5 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar5 + 1;
              plVar10 = (long *)(lVar13 + (long)(int)uVar5 * 8 + 0x20);
              *plVar10 = lVar8;
              thunk_FUN_01e10808(plVar10,lVar8);
            }
            else {
              FUN_03198f70(lVar9,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar5 = *(uint *)(lVar11 + 0x18);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar5);
      }
      bVar1 = *(byte *)(*(long *)StringLiteral_5177 + 0x130);
      if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)StringLiteral_5177)) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(unaff_x21);
      }
      plVar10 = (long *)FUN_03315340(unaff_x21,0);
      uVar6 = FUN_03308b18(plVar10,unaff_x21,0);
      unaff_x21 = plVar10;
    } while ((uVar6 & 1) == 0);
    if (lVar9 == 0) {
LAB_033bcd08:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar7 = FUN_033b8088(in_stack_00000008,*(undefined4 *)(lVar9 + 0x18),0);
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      uVar16 = *(undefined8 *)StringLiteral_8776;
      lVar8 = thunk_FUN_01de26bc(lVar7,uVar16);
      if (lVar8 == 0) goto LAB_033bccb8;
    }
    FUN_03199520(lVar9,lVar8,0,*(undefined8 *)StringLiteral_8779);
  }
  else {
    lVar7 = (**(code **)(*unaff_x19 + 0x228))();
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      uVar16 = *(undefined8 *)StringLiteral_8776;
      lVar8 = thunk_FUN_01de26bc(lVar7,uVar16);
      if (lVar8 == 0) {
LAB_033bccb8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar7,uVar16);
      }
    }
  }
  return lVar8;
}


