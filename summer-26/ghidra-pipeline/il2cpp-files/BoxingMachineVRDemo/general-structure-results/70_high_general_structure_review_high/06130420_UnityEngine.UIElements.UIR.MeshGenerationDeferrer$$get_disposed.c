/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.MeshGenerationDeferrer$$get_disposed
ENTRY_POINT: 06130420
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Type propagation algorithm not settling */

void UnityEngine_UIElements_UIR_MeshGenerationDeferrer__get_disposed
               (undefined8 param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  undefined1 *puVar25;
  undefined1 uVar26;
  long lVar27;
  float *pfVar28;
  uint uVar29;
  float *pfVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  uint uVar34;
  long unaff_x19;
  uint uVar35;
  undefined8 *unaff_x20;
  uint *unaff_x21;
  long unaff_x22;
  uint uVar36;
  char *unaff_x24;
  long *plVar37;
  long unaff_x25;
  long *unaff_x26;
  uint *unaff_x27;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  ulong uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float unaff_s8;
  float fVar55;
  float unaff_s9;
  float fVar56;
  float fVar57;
  float unaff_s10;
  float fVar58;
  float unaff_s11;
  float unaff_s12;
  float fVar59;
  undefined8 uVar60;
  float unaff_s13;
  float fVar61;
  float unaff_s14;
  float fVar62;
  float fVar63;
  float unaff_s15;
  float fVar64;
  float fVar65;
  int iStack0000000000000020;
  long *in_stack_00000028;
  int *piStack0000000000000040;
  long in_stack_00000048;
  void *in_stack_00000050;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  float *in_stack_00000098;
  long *in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000d8;
  undefined8 *in_stack_000000f0;
  ulong in_stack_000000f8;
  float fStack000000000000010c;
  uint in_stack_00000110;
  float *in_stack_00000120;
  float fStack0000000000000128;
  long in_stack_00000130;
  float in_stack_00000140;
  long in_stack_00000148;
  float fStack0000000000000150;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float fStack0000000000000168;
  float fStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000184;
  uint uStack000000000000018c;
  int iStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  uint in_stack_0000112c;
  uint uVar66;
  undefined8 in_stack_000011c0;
  char in_stack_000011cc;
  
  piStack0000000000000040 = param_2;
  FUN_0613bf50();
  lVar2 = unaff_x19 + 0x15e8;
  FUN_04306c20(lVar2,*unaff_x20);
  *(undefined1 *)(unaff_x19 + 0x4d) = 0;
  fVar49 = DAT_01208580;
  fVar53 = DAT_0120833c;
  uVar66 = 0;
  lVar27 = *(long *)(unaff_x19 + 0x20);
  if (lVar27 == 0) {
UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar6 = in_stack_00000078._4_4_ - 1;
  fStack0000000000000184 = 0.0;
  if (unaff_s14 <= 0.0) {
    unaff_s14 = 0.0;
  }
  fStack0000000000000194 = fStack0000000000000194 - (unaff_s12 - unaff_s13);
  if (unaff_s15 <= 0.0) {
    unaff_s15 = 0.0;
  }
  plVar3 = (long *)(unaff_x19 + 0x1590);
  fVar59 = (unaff_s10 / unaff_s11) * unaff_s9 * unaff_s8;
  fVar52 = unaff_s14 + DAT_01208248;
  fVar47 = unaff_s15 + DAT_01208248;
  fVar38 = unaff_s8 * in_stack_00000198 * DAT_01208580;
  bVar8 = true;
  iStack0000000000000020 = 0;
  bVar9 = false;
  iStack0000000000000190 = 0;
  plVar1 = (long *)(unaff_x25 + 0x30);
  bVar10 = 1;
  fStack0000000000000168 = fVar52;
  fStack0000000000000150 = fVar59;
LAB_0613054c:
  if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar66) {
    return;
  }
  if (*(uint *)(lVar27 + 0x18) <= uVar66) goto LAB_061347f8;
  uVar15 = *(uint *)(lVar27 + (long)(int)uVar66 * 0x10 + 0x24);
  if (uVar15 == 0) {
    return;
  }
  *unaff_x21 = uVar15;
  uVar20 = in_stack_000011c0;
  if (5 < iStack0000000000000190) {
    uVar20 = FUN_05023548();
    uVar21 = FUN_050048bc(&stack0x0000115c,0);
    uVar20 = FUN_04e8e29c(*(undefined8 *)
                           Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__,
                          uVar20,*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlList<InputControl>_RemoveAt__
                          ,uVar21,0);
    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
    }
    FUN_060223e8(uVar20,0);
    uVar20 = CONCAT44(3,*unaff_x27);
    uVar15 = *unaff_x21;
  }
  in_stack_000011c0 = uVar20;
  if (uVar15 == 0x1a) goto LAB_061343b8;
  if ((uVar15 == 0x3c) && (*(char *)(unaff_x22 + 0xe1) != '\0')) {
    unaff_x24[0] = '\x01';
    unaff_x24[1] = '\x01';
    uVar22 = FUN_06137328();
    if (((uVar22 & 1) != 0) && (uVar66 = in_stack_0000112c, *unaff_x24 == '\x01'))
    goto LAB_061343b8;
  }
  else {
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
    lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
    *unaff_x24 = *(char *)(lVar27 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar27 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar27 + 0x40);
    thunk_FUN_02dd37b4();
  }
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar18 = *(uint *)(unaff_x19 + 0x32c);
  uVar15 = *(uint *)(lVar27 + 0x18);
  if (uVar15 <= uVar18) goto LAB_061347f8;
  cVar4 = *(char *)(lVar27 + (long)(int)uVar18 * 0x188 + 100);
  uVar44 = *(undefined4 *)(unaff_x19 + 0x78);
  unaff_x24[1] = '\0';
  bVar13 = false;
  if ((uint)uVar20 == uVar18) {
    uVar18 = (uint)((ulong)uVar20 >> 0x20);
    *unaff_x21 = uVar18;
    bVar13 = true;
    *unaff_x24 = '\x01';
    if (uVar18 == 0x2026) {
      if (uVar15 <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_061347f8;
      *(undefined8 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x188 + 0x30) =
           *(undefined8 *)(unaff_x19 + 0x19f0);
      thunk_FUN_02dd37b4();
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
      lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
      *(undefined1 *)(lVar27 + 0x28) = 1;
      *(undefined8 *)(lVar27 + 0x40) = *(undefined8 *)(unaff_x19 + 0x19f8);
      thunk_FUN_02dd37b4();
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_061347f8;
      *(undefined8 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x188 + 0x58) =
           *(undefined8 *)(unaff_x19 + 0x1a00);
      thunk_FUN_02dd37b4();
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
      *(undefined4 *)(lVar27 + (long)(int)*unaff_x27 * 0x188 + 0x60) =
           *(undefined4 *)(unaff_x19 + 0x1a08);
      lVar27 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x1a28)) goto LAB_061347f8;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x1a28) * 0x38;
      *(int *)(lVar27 + 0x54) = *(int *)(lVar27 + 0x54) + 1;
      *(undefined1 *)(unaff_x19 + 0x4d) = 1;
      bVar13 = true;
      uVar20 = CONCAT44(3,*(int *)(unaff_x19 + 0x32c) + 1);
    }
    else if (uVar18 == 3) {
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      uVar15 = *unaff_x27;
      lVar23 = FUN_06122f54(*unaff_x26,0);
      if (lVar23 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      uVar21 = FUN_04935740(lVar23,3,*(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_Hands_PokeBlendShapeAnimator_<OnEnable>b__10_0__
                           );
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
      *(undefined8 *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x30) = uVar21;
      thunk_FUN_02dd37b4();
      bVar13 = true;
      *(undefined1 *)(unaff_x19 + 0x4d) = 1;
    }
  }
  uVar15 = *unaff_x27;
  in_stack_000011c0 = uVar20;
  if (((int)uVar15 < *(int *)(unaff_x22 + 0x110)) && (*unaff_x21 != 3)) {
    lVar27 = *plVar1;
    if (lVar27 != 0) {
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
      lVar27 = lVar27 + (long)(int)uVar15 * 0x188;
      *(undefined1 *)(lVar27 + 0x1a0) = 0;
      *(undefined4 *)(lVar27 + 0x20) = 0x200b;
      *(undefined4 *)(lVar27 + 0x6c) = 0;
      *unaff_x27 = uVar15 + 1;
      goto LAB_061343b8;
    }
    goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  }
  cVar5 = *unaff_x24;
  if (cVar5 == '\x01') {
    uVar15 = *(uint *)(unaff_x19 + 0x124);
    if ((uVar15 >> 4 & 1) == 0) {
      if ((uVar15 >> 3 & 1) == 0) {
        fStack0000000000000170 = 1.0;
        if ((uVar15 >> 5 & 1) != 0) {
          uVar15 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar22 = FUN_04f837e4(uVar15,0);
          if ((uVar22 & 1) != 0) {
            uVar15 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar15 = FUN_04f83a70(uVar15,0);
            *unaff_x21 = uVar15 & 0xffff;
            fStack0000000000000170 = fVar53;
          }
        }
      }
      else {
        uVar15 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar22 = FUN_04f83744(uVar15,0);
        fStack0000000000000170 = 1.0;
        if ((uVar22 & 1) != 0) {
          uVar15 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar15 = FUN_04f83be8(uVar15,0);
          goto LAB_06130a08;
        }
      }
    }
    else {
      uVar15 = *unaff_x21;
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar22 = FUN_04f837e4(uVar15,0);
      fStack0000000000000170 = 1.0;
      if ((uVar22 & 1) != 0) {
        uVar15 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar15 = FUN_04f83a70(uVar15,0);
LAB_06130a08:
        fStack0000000000000170 = 1.0;
        *unaff_x21 = uVar15 & 0xffff;
      }
    }
    cVar5 = *unaff_x24;
  }
  else {
    fStack0000000000000170 = 1.0;
  }
  if (cVar5 == '\x01') {
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
    *plVar3 = *(long *)(lVar27 + (long)(int)*unaff_x27 * 0x188 + 0x30);
    thunk_FUN_02dd37b4(plVar3);
    if (*plVar3 == 0) goto LAB_061343b8;
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
    *unaff_x26 = *(long *)(lVar27 + (long)(int)*unaff_x27 * 0x188 + 0x40);
    thunk_FUN_02dd37b4();
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
    *in_stack_000000d8 = *(long *)(lVar27 + (long)(int)*unaff_x27 * 0x188 + 0x58);
    thunk_FUN_02dd37b4();
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    uVar18 = *unaff_x27;
    uVar15 = *(uint *)(lVar27 + 0x18);
    if (uVar15 <= uVar18) goto LAB_061347f8;
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar18 * 0x188 + 0x60);
    if (bVar13) {
      lVar23 = *(long *)(unaff_x19 + 0x20);
      if (lVar23 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar23 + 0x18) <= uVar66) goto LAB_061347f8;
      if ((*(int *)(lVar23 + (long)(int)uVar66 * 0x10 + 0x24) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x330))) goto LAB_06130ba8;
      if (uVar15 <= uVar18 - 1) goto LAB_061347f8;
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar56 = *(float *)(lVar27 + (long)(int)(uVar18 - 1) * 0x188 + 0x68);
      fVar39 = (float)FUN_06114600(*unaff_x26 + 0xb0,0);
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar40 = (float)FUN_06114608(*unaff_x26 + 0xb0,0);
      fVar64 = in_stack_00000140;
      if (*(char *)(unaff_x22 + 0xe9) != '\0') {
        fVar64 = 1.0;
      }
      fVar64 = ((fStack0000000000000170 * fVar56) / fVar39) * fVar40 * fVar64;
LAB_06131120:
      fStack0000000000000164 = 0.0;
      fStack000000000000016c = 0.0;
      if (*unaff_x21 != 0x2026) goto LAB_0613113c;
    }
    else {
LAB_06130ba8:
      if (*(long *)(unaff_x19 + 0x68) == 0)
      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar56 = *(float *)(unaff_x19 + 0xf4);
      fVar39 = (float)FUN_06114600(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar40 = (float)FUN_06114608(*unaff_x26 + 0xb0,0);
      fVar64 = in_stack_00000140;
      if (*(char *)(unaff_x22 + 0xe9) != '\0') {
        fVar64 = 1.0;
      }
      fVar64 = ((fStack0000000000000170 * fVar56) / fVar39) * fVar40 * fVar64;
      if (bVar13) goto LAB_06131120;
LAB_0613113c:
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fStack000000000000016c = (float)FUN_06114630(*unaff_x26 + 0xb0,0);
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fStack0000000000000164 = (float)FUN_06114660(*unaff_x26 + 0xb0,0);
    }
    lVar27 = *(long *)(unaff_x19 + 0x1590);
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0))
    goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar56 = *(float *)(unaff_x19 + 0xf0);
    fVar39 = *(float *)(lVar27 + 0x2c);
    fStack0000000000000150 = (float)FUN_06114b00(*(long *)(lVar27 + 0x20),0);
    if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar40 = (float)FUN_06114658(*unaff_x26 + 0xb0,0);
    if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar45 = *(float *)(unaff_x19 + 0xf0);
    fVar43 = (float)FUN_06114608(*unaff_x26 + 0xb0,0);
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    uVar15 = *(uint *)(unaff_x19 + 0x32c);
    if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
    lVar23 = lVar27 + (long)(int)uVar15 * 0x188;
    fStack0000000000000150 = fVar64 * fVar56 * fVar39 * fStack0000000000000150;
    *(undefined1 *)(lVar23 + 0x28) = 1;
    *(float *)(lVar23 + 0x16c) = fStack0000000000000150;
    fStack0000000000000184 = *(float *)(unaff_x19 + 0xd8);
    fVar43 = fVar64 * fVar40 * fVar45 * fVar43;
LAB_06131210:
    uVar18 = *unaff_x21;
    fVar39 = 0.0;
    if (uVar18 != 3 && uVar18 != 0xad) {
      fVar39 = fStack0000000000000150;
    }
  }
  else {
    if (cVar5 == '\x02') {
      lVar27 = *plVar1;
      if (lVar27 != 0) {
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
        plVar37 = *(long **)(lVar27 + (long)(int)*unaff_x27 * 0x188 + 0x30);
        if (plVar37 != (long *)0x0) {
          bVar14 = *(byte *)(*(long *)Method_VRUIP_PopElement_ResetPosition__ + 0x130);
          if ((*(byte *)(*plVar37 + 0x130) < bVar14) ||
             (*(long *)(*(long *)(*plVar37 + 200) + (ulong)bVar14 * 8 + -8) !=
              *(long *)Method_VRUIP_PopElement_ResetPosition__)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar37);
          }
          plVar24 = (long *)FUN_06153e30(plVar37,0);
          if (plVar24 == (long *)0x0) {
            plVar24 = (long *)0x0;
            *in_stack_000000a0 = 0;
          }
          else {
            lVar27 = *(long *)Method_VRUIP_PopElement_Pop__;
            bVar14 = *(byte *)(lVar27 + 0x130);
            if (*(byte *)(*plVar24 + 0x130) < bVar14) {
              plVar32 = (long *)0x0;
            }
            else {
              plVar32 = plVar24;
              if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar14 * 8 + -8) != lVar27) {
                plVar32 = (long *)0x0;
              }
            }
            *in_stack_000000a0 = (long)plVar32;
            if (*(byte *)(*plVar24 + 0x130) < bVar14) {
              plVar24 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar14 * 8 + -8) != lVar27) {
              plVar24 = (long *)0x0;
            }
          }
          thunk_FUN_02dd37b4(in_stack_000000a0,plVar24);
          iVar16 = FUN_06154f60(plVar37,0);
          *(int *)(unaff_x19 + 0x1584) = iVar16;
          if (*unaff_x21 == 0x3c) {
            *unaff_x21 = iVar16 + 0xe000;
          }
          else {
            uVar17 = FUN_05bda2ec(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            *(undefined4 *)(unaff_x19 + 0x1588) = uVar17;
          }
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar56 = *(float *)(unaff_x19 + 0xf4);
            FUN_06122a48(&stack0x000011d0,*(long *)(unaff_x19 + 0x68),0);
            memcpy(&stack0x00001160,&stack0x000011d0,0x60);
            fVar39 = (float)FUN_06114600(&stack0x00001160,0);
            if (*unaff_x26 != 0) {
              FUN_06122a48(&stack0x000011d0,*unaff_x26,0);
              memcpy(&stack0x00001160,&stack0x000011d0,0x60);
              fVar40 = (float)FUN_06114608(&stack0x00001160,0);
              fVar64 = in_stack_00000140;
              if (*(char *)(unaff_x22 + 0xe9) != '\0') {
                fVar64 = 1.0;
              }
              if (*in_stack_000000a0 == 0)
              goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
              fVar64 = (fVar56 / fVar39) * fVar40 * fVar64;
              fVar39 = (float)FUN_06114600(*in_stack_000000a0 + 0x48,0);
              fVar56 = *(float *)(unaff_x19 + 0xf4);
              if (fVar39 <= 0.0) {
                if (*unaff_x26 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar39 = (float)FUN_06114600(*unaff_x26 + 0xb0,0);
                if (*unaff_x26 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar40 = (float)FUN_06114608(*unaff_x26 + 0xb0,0);
                fStack0000000000000164 = in_stack_00000140;
                if (*(char *)(unaff_x22 + 0xe9) != '\0') {
                  fStack0000000000000164 = 1.0;
                }
                if (*unaff_x26 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar45 = (float)FUN_06114630(*unaff_x26 + 0xb0,0);
                if (plVar37[4] == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                FUN_06114ac4(&stack0x000011d0,plVar37[4],0);
                fVar57 = (float)FUN_061148f4(&stack0x00001110,0);
                if (plVar37[4] == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar41 = *(float *)((long)plVar37 + 0x2c);
                fVar42 = (float)FUN_06114b00(plVar37[4],0);
                if (*unaff_x26 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fStack000000000000016c = (float)FUN_06114630(*unaff_x26 + 0xb0,0);
                if (*unaff_x26 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar62 = (float)FUN_06114658(*unaff_x26 + 0xb0,0);
                if (*unaff_x26 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar54 = *(float *)(unaff_x19 + 0xf0);
                fVar43 = (float)FUN_06114608(*unaff_x26 + 0xb0,0);
                if (*(long *)(unaff_x19 + 0x68) == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fStack0000000000000164 = (fVar56 / fVar39) * fVar40 * fStack0000000000000164;
                fStack0000000000000150 =
                     fStack0000000000000164 * (fVar45 / fVar57) * fVar41 * fVar42;
                fStack0000000000000164 = fStack0000000000000164 / fStack0000000000000150;
                fVar43 = fVar64 * fVar62 * fVar54 * fVar43;
                fStack000000000000016c = fStack0000000000000164 * fStack000000000000016c;
                fVar39 = (float)FUN_06114660(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                fStack0000000000000164 = fStack0000000000000164 * fVar39;
              }
              else {
                if (*in_stack_000000a0 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar39 = (float)FUN_06114600(*in_stack_000000a0 + 0x48,0);
                if (*in_stack_000000a0 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar40 = (float)FUN_06114608(*in_stack_000000a0 + 0x48,0);
                if (plVar37[4] == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar57 = *(float *)((long)plVar37 + 0x2c);
                fVar45 = in_stack_00000140;
                if (*(char *)(unaff_x22 + 0xe9) != '\0') {
                  fVar45 = 1.0;
                }
                fVar41 = (float)FUN_06114b00(plVar37[4],0);
                if (*in_stack_000000a0 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fStack000000000000016c = (float)FUN_06114630(*in_stack_000000a0 + 0x48,0);
                if (*in_stack_000000a0 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar42 = (float)FUN_06114658(*in_stack_000000a0 + 0x48,0);
                if (*in_stack_000000a0 == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar62 = *(float *)(unaff_x19 + 0xf0);
                fVar43 = (float)FUN_06114608(*in_stack_000000a0 + 0x48,0);
                if (*(long *)(unaff_x19 + 0xe0) == 0)
                goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                fVar43 = fVar64 * fVar42 * fVar62 * fVar43;
                fStack0000000000000150 = (fVar56 / fVar39) * fVar40 * fVar45 * fVar57 * fVar41;
                fStack0000000000000164 = (float)FUN_06114660(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
              }
              *plVar3 = (long)plVar37;
              thunk_FUN_02dd37b4(plVar3,plVar37);
              lVar27 = *plVar1;
              if (lVar27 != 0) {
                if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
                lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
                *(undefined1 *)(lVar27 + 0x28) = 2;
                *(float *)(lVar27 + 0x16c) = fStack0000000000000150;
                *(long *)(lVar27 + 0x48) = *in_stack_000000a0;
                thunk_FUN_02dd37b4();
                lVar27 = *plVar1;
                if (lVar27 != 0) {
                  if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
                  *(long *)(lVar27 + (long)(int)*unaff_x27 * 0x188 + 0x40) = *unaff_x26;
                  thunk_FUN_02dd37b4();
                  lVar27 = *plVar1;
                  if (lVar27 != 0) {
                    uVar15 = *unaff_x27;
                    if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
                    *(undefined4 *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x60) =
                         *(undefined4 *)(unaff_x19 + 0x78);
                    *(undefined4 *)(unaff_x19 + 0x78) = uVar44;
                    fStack0000000000000184 = 0.0;
                    goto LAB_06131210;
                  }
                }
              }
            }
          }
        }
      }
      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    }
    uVar18 = *unaff_x21;
    lVar27 = *plVar1;
    fVar43 = 0.0;
    fVar39 = fVar43;
    if (uVar18 != 3 && uVar18 != 0xad) {
      fVar39 = fStack0000000000000150;
    }
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    uVar15 = *unaff_x27;
    fStack000000000000016c = 0.0;
    fStack0000000000000164 = 0.0;
  }
  if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
  lVar27 = lVar27 + (long)(int)uVar15 * 0x188;
  *(uint *)(lVar27 + 0x20) = uVar18;
  *(undefined4 *)(lVar27 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar27 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_061347f8;
  *(undefined4 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x188 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_061347f8;
  *(undefined4 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x188 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar60 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar21 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x32c)) goto LAB_061347f8;
  lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x32c) * 0x188;
  *(undefined4 *)(lVar27 + 0x198) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined8 *)(lVar27 + 400) = uVar60;
  *(undefined8 *)(lVar27 + 0x188) = uVar21;
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar15 = *unaff_x27;
  uVar18 = *(uint *)(lVar27 + 0x18);
  if (uVar18 <= uVar15) goto LAB_061347f8;
  uVar19 = *(uint *)(unaff_x19 + 0x124);
  lVar23 = lVar27 + (long)(int)uVar15 * 0x188;
  *(uint *)(lVar23 + 0x19c) = uVar19;
  if (*(int *)(unaff_x19 + 0x134) == 700) {
    *(uint *)(lVar23 + 0x19c) = uVar19 | 1;
    uVar15 = *unaff_x27;
  }
  if (uVar18 <= uVar15) goto LAB_061347f8;
  lVar27 = *(long *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x38);
  if ((lVar27 == 0) && ((*plVar3 == 0 || (lVar27 = *(long *)(*plVar3 + 0x20), lVar27 == 0))))
  goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  FUN_06114ac4(&stack0x000011d0,lVar27,0);
  uVar15 = *unaff_x21;
  if (uVar15 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uStack000000000000018c = FUN_04f80ed4(uVar15,0);
    uStack000000000000018c = uStack000000000000018c & 1;
  }
  else {
    uStack000000000000018c = 0;
  }
  uVar44 = 0;
  fVar56 = *(float *)(unaff_x22 + 0xec);
  if (((in_stack_000000f8 & 0x100000000) != 0) && (*unaff_x24 == '\x01')) {
    if (*plVar3 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    uVar15 = *unaff_x27;
    uVar18 = *(uint *)(*plVar3 + 0x28);
    if ((int)uVar15 < (int)uVar6) {
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      uVar15 = uVar15 + 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
      if (*(char *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x28) == '\x01') {
        lVar27 = *(long *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x30);
        if ((((lVar27 == 0) || (*unaff_x26 == 0)) ||
            (lVar23 = *(long *)(*unaff_x26 + 0x170), lVar23 == 0)) ||
           (lVar23 = *(long *)(lVar23 + 0x40), lVar23 == 0))
        goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar22 = FUN_04923560(lVar23,uVar18 | *(int *)(lVar27 + 0x28) << 0x10,&stack0x000010e0,
                              *(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_AppendWithCapacity__
                             );
        if ((uVar22 & 1) != 0) {
          FUN_06119050(&stack0x000011d0,&stack0x000010e0,0);
          uVar44 = FUN_06118ea4(&stack0x000010c0,0);
          uVar22 = FUN_0611908c(&stack0x000010e0,0);
          if ((uVar22 & 0x100) != 0) {
            fVar56 = 0.0;
          }
        }
      }
      uVar15 = *unaff_x27;
    }
    uVar19 = uVar15 - 1;
    if (0 < (int)uVar15) {
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_061347f8;
      lVar23 = *(long *)(lVar27 + (ulong)uVar19 * 0x188 + 0x30);
      if (lVar23 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(char *)(lVar27 + (ulong)uVar19 * 0x188 + 0x28) == '\x01') {
        if (((*unaff_x26 == 0) || (lVar27 = *(long *)(*unaff_x26 + 0x170), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0))
        goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar22 = FUN_04923560(lVar27,*(uint *)(lVar23 + 0x28) | uVar18 << 0x10,&stack0x000010e0,
                              *(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_AppendWithCapacity__
                             );
        if ((uVar22 & 1) != 0) {
          FUN_06119078(&stack0x000011d0,&stack0x000010e0,0);
          FUN_06118ea4(&stack0x000010c0,0);
          UnityEngine_UIElements_VisualTreeAsset__ResolveTemplate(uVar44,0);
          uVar22 = FUN_0611908c(&stack0x000010e0,0);
          if ((uVar22 & 0x100) != 0) {
            fVar56 = 0.0;
          }
        }
      }
    }
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    uVar15 = *unaff_x27;
    uVar44 = FUN_06118ce0(&stack0x00001130,0);
    if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
    *(undefined4 *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x160) = uVar44;
  }
  uVar15 = *unaff_x21;
  if (*(int *)(*(long *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamRead__ + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar18 = FUN_06161424(uVar15,0);
  uVar15 = *unaff_x27;
  if ((uVar18 & 1) == 0) {
    if ((uVar18 & 1) == 0 && 0 < (int)uVar15) {
      if ((((in_stack_000000a8 & 0x100000000) == 0) ||
          (uVar19 = *(uint *)(unaff_x19 + 0x19c4), uVar19 == 0x80000000)) || (uVar19 != uVar15 - 1))
      {
        if ((in_stack_00000060 & 0x100000000) == 0) {
LAB_06131ac4:
          bVar11 = false;
        }
        else {
          do {
            uVar15 = uVar15 - 1;
            if (((int)uVar15 < 0) || (uVar15 == *(uint *)(unaff_x19 + 0x19c4))) goto LAB_06131ac4;
            lVar27 = *plVar1;
            if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
            lVar27 = *(long *)(lVar27 + (ulong)uVar15 * 0x188 + 0x30);
            if ((lVar27 == 0) || (lVar27 = FUN_061575f8(lVar27,0), lVar27 == 0))
            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            uVar19 = FUN_06114ab4(lVar27,0);
            if (*plVar3 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            iVar16 = FUN_06154f60(*plVar3,0);
            if (((*unaff_x26 == 0) || (lVar27 = FUN_061230e0(*unaff_x26,0), lVar27 == 0)) ||
               (*(long *)(lVar27 + 0x50) == 0))
            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            uVar22 = FUN_04933ea8(*(long *)(lVar27 + 0x50),uVar19 | iVar16 << 0x10,&stack0x00001080,
                                  *(undefined8 *)
                                   Method_UnityEngine_InputForUI_PointerEvent_ToString__);
          } while ((uVar22 & 1) == 0);
          lVar27 = *plVar1;
          if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
          if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
          fVar45 = *(float *)(unaff_x19 + 0x2e0);
          fVar57 = *(float *)(unaff_x19 + 0x180);
          lVar27 = lVar27 + (ulong)uVar15 * 0x188;
          fVar56 = *(float *)(unaff_x19 + 0x2f8);
          fVar41 = *(float *)(lVar27 + 0x148);
          fVar42 = *(float *)(lVar27 + 0x150);
          FUN_061192d8(&stack0x00001080,0);
          fVar64 = (float)FUN_06119248(&stack0x000010a0,0);
          FUN_061192f8(&stack0x00001080,0);
          fVar40 = (float)FUN_06119268(&stack0x00001098,0);
          FUN_06118cc8(((fVar41 - fVar56) / fVar39 + fVar64) - fVar40,&stack0x00001130,0);
          FUN_061192d8(&stack0x00001080,0);
          fVar56 = (float)UnityEngine_UIElements_VisualTreeAsset___cctor(&stack0x000010a0,0);
          FUN_061192f8(&stack0x00001080,0);
          fVar64 = (float)FUN_06119278(&stack0x00001098,0);
          FUN_06118cd8(((fVar42 - ((fVar43 - fVar45) + fVar57)) / fVar39 + fVar56) - fVar64,
                       &stack0x00001130,0);
          fVar56 = 0.0;
          bVar11 = true;
        }
        if ((in_stack_000000a8 & 0x100000000) != 0) {
          uVar15 = *(uint *)(unaff_x19 + 0x19c4);
          if (!bVar11 && (long)(int)uVar15 != -0x80000000) {
            lVar27 = *plVar1;
            if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
            lVar27 = *(long *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x30);
            if ((lVar27 == 0) || (lVar27 = FUN_061575f8(lVar27,0), lVar27 == 0))
            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            uVar15 = FUN_06114ab4(lVar27,0);
            if (*plVar3 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            iVar16 = FUN_06154f60(*plVar3,0);
            if (((*unaff_x26 == 0) || (lVar27 = FUN_061230e0(*unaff_x26,0), lVar27 == 0)) ||
               (*(long *)(lVar27 + 0x48) == 0))
            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            uVar22 = FUN_0492d308(*(long *)(lVar27 + 0x48),uVar15 | iVar16 << 0x10,&stack0x00001068,
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventsHelper_SendEnterLeave<PointerLeaveEvent,_PointerEnterEvent>__
                                 );
            if ((uVar22 & 1) != 0) {
              lVar27 = *plVar1;
              if (lVar27 != 0) {
                if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_061347f8;
                fVar56 = *(float *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 +
                                   0x148);
                fVar45 = *(float *)(unaff_x19 + 0x2f8);
                FUN_06119298(&stack0x00001068,0);
                fVar64 = (float)FUN_06119248(&stack0x000010a0,0);
                FUN_061192b8(&stack0x00001068,0);
                fVar40 = (float)FUN_06119268(&stack0x00001098,0);
                FUN_06118cc8(((fVar56 - fVar45) / fVar39 + fVar64) - fVar40,&stack0x00001130,0);
                FUN_06119298(&stack0x00001068,0);
                fVar56 = (float)UnityEngine_UIElements_VisualTreeAsset___cctor(&stack0x000010a0,0);
                puVar25 = &stack0x00001068;
                goto LAB_06131c4c;
              }
              goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
            }
          }
        }
      }
      else {
        lVar27 = *plVar1;
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_061347f8;
        lVar27 = *(long *)(lVar27 + (long)(int)uVar19 * 0x188 + 0x30);
        if ((lVar27 == 0) || (lVar27 = FUN_061575f8(lVar27,0), lVar27 == 0))
        goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar15 = FUN_06114ab4(lVar27,0);
        if (*plVar3 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        iVar16 = FUN_06154f60(*plVar3,0);
        if (((*unaff_x26 == 0) || (lVar27 = FUN_061230e0(*unaff_x26,0), lVar27 == 0)) ||
           (*(long *)(lVar27 + 0x48) == 0))
        goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar22 = FUN_0492d308(*(long *)(lVar27 + 0x48),uVar15 | iVar16 << 0x10,&stack0x000010a8,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_PointerEventsHelper_SendEnterLeave<PointerLeaveEvent,_PointerEnterEvent>__
                             );
        if ((uVar22 & 1) != 0) {
          lVar27 = *plVar1;
          if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_061347f8;
          fVar56 = *(float *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * 0x188 + 0x148);
          fVar45 = *(float *)(unaff_x19 + 0x2f8);
          FUN_06119298(&stack0x000010a8,0);
          fVar64 = (float)FUN_06119248(&stack0x000010a0,0);
          FUN_061192b8(&stack0x000010a8,0);
          fVar40 = (float)FUN_06119268(&stack0x00001098,0);
          FUN_06118cc8(((fVar56 - fVar45) / fVar39 + fVar64) - fVar40,&stack0x00001130,0);
          FUN_06119298(&stack0x000010a8,0);
          fVar56 = (float)UnityEngine_UIElements_VisualTreeAsset___cctor(&stack0x000010a0,0);
          puVar25 = &stack0x000010a8;
LAB_06131c4c:
          FUN_061192b8(puVar25,0);
          fVar64 = (float)FUN_06119278(&stack0x00001098,0);
          FUN_06118cd8(fVar56 - fVar64,&stack0x00001130,0);
          fVar56 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar15;
  }
  fVar64 = (float)FUN_06118cd0(&stack0x00001130,0);
  fVar40 = (float)FUN_06118cd0(&stack0x00001130,0);
  if (*(char *)(unaff_x22 + 0xe2) != '\0') {
    fVar57 = *(float *)(unaff_x19 + 0x2f8);
    fVar45 = (float)FUN_0611490c(&stack0x00001140,0);
    fVar57 = fVar57 - fVar39 * fVar45 * (1.0 - *(float *)(unaff_x19 + 0x159c));
    *(float *)(unaff_x19 + 0x2f8) = fVar57;
    if ((uStack000000000000018c != 0) || (*unaff_x21 == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f8) = fVar57 - fVar38 * *(float *)(unaff_x22 + 0xf0);
    }
  }
  fVar45 = *(float *)(unaff_x19 + 0x2f0);
  fStack000000000000010c = 0.0;
  if ((fVar45 != 0.0) && (uVar15 = *unaff_x21, uVar15 != 0x200b)) {
    if (*(char *)(unaff_x19 + 0x2f4) == '\0') {
      bVar11 = false;
    }
    else {
      bVar11 = true;
      if ((uVar15 != 0x2e) && (uVar15 != 0x3a)) {
        bVar11 = uVar15 == 0x2c;
      }
    }
    fVar57 = (float)FUN_061148ec(&stack0x00001140,0);
    fVar41 = (float)FUN_061148fc(&stack0x00001140,0);
    fVar42 = 0.5;
    if (bVar11) {
      fVar42 = 0.25;
    }
    fStack000000000000010c =
         (1.0 - *(float *)(unaff_x19 + 0x159c)) *
         (fVar45 * fVar42 - fVar39 * (fVar57 * 0.5 + fVar41));
    *(float *)(unaff_x19 + 0x2f8) = fStack000000000000010c + *(float *)(unaff_x19 + 0x2f8);
  }
  if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  iVar16 = FUN_061230a0(*unaff_x26,0);
  if (iVar16 == 0x1015) {
    bVar11 = false;
  }
  else {
    if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    iVar16 = FUN_061230a0(*unaff_x26,0);
    bVar11 = iVar16 != 0x11014;
  }
  if ((cVar4 == '\0') && (*unaff_x24 == '\x01')) {
    lVar27 = *plVar1;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
    if ((*(byte *)(lVar27 + (long)(int)*unaff_x27 * 0x188 + 0x19c) & 1) == 0) goto LAB_06131d74;
    if (bVar11) {
      if (*(char *)(unaff_x22 + 0x131) == '\0') {
LAB_06131f0c:
        if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        iVar16 = FUN_06123090(*unaff_x26,0);
        fVar57 = (float)(iVar16 + 1);
      }
      else {
        lVar27 = *in_stack_000000d8;
        if (*(int *)(*(long *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar22 = thunk_FUN_06037254(lVar27,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__
                                                  + 0xb8) + 0x6c),0);
        if ((uVar22 & 1) == 0) goto LAB_06131f0c;
        lVar27 = *in_stack_000000d8;
        if (*(int *)(*(long *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        fVar57 = (float)thunk_FUN_06039384(lVar27,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__
                                                  + 0xb8) + 0x6c),0);
      }
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar45 = (float)FUN_06123148(*unaff_x26,0);
      fVar45 = fVar57 * fVar45 * 0.25;
      if (fVar57 < fStack0000000000000184 + fVar45) {
        fStack0000000000000184 = fVar57 - fVar45;
      }
    }
    else {
      fVar45 = 0.0;
    }
    if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fStack0000000000000128 = (float)FUN_06123158(*unaff_x26,0);
  }
  else {
LAB_06131d74:
    fStack0000000000000128 = 0.0;
    if (bVar11) {
      if (*(char *)(unaff_x22 + 0x131) == '\0') {
LAB_06131e18:
        if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        iVar16 = FUN_06123090(*unaff_x26,0);
        fVar57 = (float)(iVar16 + 1);
      }
      else {
        lVar27 = *in_stack_000000d8;
        if (*(int *)(*(long *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar22 = thunk_FUN_06037254(lVar27,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__
                                                  + 0xb8) + 0x6c),0);
        if ((uVar22 & 1) == 0) goto LAB_06131e18;
        lVar27 = *in_stack_000000d8;
        if (*(int *)(*(long *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__ + 0xe4) ==
            0) {
          thunk_FUN_02dbd7b4();
        }
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        fVar57 = (float)thunk_FUN_06039384(lVar27,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  Method_UnityEngine_ManagedStreamHelpers_ManagedStreamSeek__
                                                  + 0xb8) + 0x6c),0);
      }
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar45 = fVar57 * *(float *)(*unaff_x26 + 400) * 0.25;
      if (fVar57 < fStack0000000000000184 + fVar45) {
        fStack0000000000000184 = fVar57 - fVar45;
      }
    }
    else {
      fVar45 = 0.0;
    }
  }
  fVar42 = *(float *)(unaff_x19 + 0x2f8);
  fVar57 = (float)FUN_061148fc(&stack0x00001140,0);
  fVar62 = *(float *)(unaff_x19 + 0x19a8);
  fVar41 = (float)FUN_06118cc0(&stack0x00001130,0);
  fVar42 = fVar42 + (1.0 - *(float *)(unaff_x19 + 0x159c)) *
                    fVar39 * (fVar41 + ((fVar57 * fVar62 - fStack0000000000000184) - fVar45));
  fVar57 = (float)FUN_06114904(&stack0x00001140,0);
  fVar41 = (float)FUN_06118cd0(&stack0x00001130,0);
  fVar62 = *(float *)(unaff_x19 + 0x180) +
           ((fVar43 + fVar39 * (fStack0000000000000184 + fVar57 + fVar41)) -
           *(float *)(unaff_x19 + 0x2e0));
  fVar57 = (float)FUN_061148f4(&stack0x00001140,0);
  fStack0000000000000174 =
       fVar62 - fVar39 * (fStack0000000000000184 + fStack0000000000000184 + fVar57);
  fVar57 = (float)FUN_061148ec(&stack0x00001140,0);
  fVar57 = fVar42 + (1.0 - *(float *)(unaff_x19 + 0x159c)) *
                    fVar39 * (fVar45 + fVar45 +
                             fStack0000000000000184 + fStack0000000000000184 +
                             fVar57 * *(float *)(unaff_x19 + 0x19a8));
  fStack0000000000000160 = fVar42;
  fVar41 = fVar57;
  if (((cVar4 == '\0') && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0))
  {
    if (*(long *)(unaff_x19 + 0x68) == 0)
    goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    iVar16 = *(int *)(unaff_x19 + 0x19a4);
    fVar54 = (float)FUN_06114638(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar65 = (float)FUN_06114658(*unaff_x26 + 0xb0,0);
    if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar48 = *(float *)(unaff_x19 + 0xf0);
    fVar63 = *(float *)(unaff_x19 + 0x180);
    fVar41 = (float)iVar16 * fVar49;
    fVar58 = (float)FUN_06114608(*unaff_x26 + 0xb0,0);
    fVar58 = fVar58 * fVar48 * (fVar54 - (fVar65 + fVar63)) * 0.5;
    fVar54 = (float)FUN_06114904(&stack0x00001140,0);
    fVar48 = fVar41 * fVar39 * ((fVar45 + fStack0000000000000184 + fVar54) - fVar58);
    fVar54 = (float)FUN_06114904(&stack0x00001140,0);
    fVar65 = (float)FUN_061148f4(&stack0x00001140,0);
    fVar62 = fVar62 + 0.0;
    fStack0000000000000174 = fStack0000000000000174 + 0.0;
    fVar41 = fVar41 * fVar39 * ((((fVar54 - fVar65) - fStack0000000000000184) - fVar45) - fVar58);
    fStack0000000000000160 = fVar42 + fVar48;
    fVar42 = fVar42 + fVar41;
    fVar41 = fVar57 + fVar41;
    fVar57 = fVar57 + fVar48;
  }
  uVar21 = *in_stack_000000f0;
  uVar60 = *(undefined8 *)(unaff_x24 + 0x43c);
  if (DAT_06b72246 == '\0') {
    FUN_02d6084c(PTR_DAT_0675e2d8);
    DAT_06b72246 = '\x01';
  }
  uVar46 = **(undefined8 **)(*(long *)PTR_DAT_0675e2d8 + 0xb8);
  uVar50 = (*(undefined8 **)(*(long *)PTR_DAT_0675e2d8 + 0xb8))[1];
  fVar45 = 0.0;
  if (DAT_01208434 <
      (float)((ulong)uVar60 >> 0x20) * (float)((ulong)uVar50 >> 0x20) +
      (float)uVar60 * (float)uVar50 +
      (float)uVar21 * (float)uVar46 +
      (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar46 >> 0x20)) {
    fVar63 = 0.0;
    fVar58 = 0.0;
    fVar48 = 0.0;
    fVar54 = fVar62;
    fVar65 = fStack0000000000000174;
  }
  else {
    FUN_06056484(&stack0x000011d0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar55 = (fStack0000000000000174 + fVar62) * 0.5;
    fVar61 = (fVar57 + fVar42) * 0.5;
    fVar62 = fVar62 - fVar55;
    fVar48 = 0.0;
    fVar54 = fVar62;
    fStack0000000000000160 =
         (float)UnityEngine_TextCore_Text_TextSettings__get_defaultSpriteAssetPath
                          (fStack0000000000000160 - fVar61,&stack0x00001020,0);
    fStack0000000000000160 = fVar61 + fStack0000000000000160;
    fVar48 = fVar48 + 0.0;
    fVar65 = fStack0000000000000174 - fVar55;
    fVar58 = 0.0;
    fStack0000000000000174 = fVar65;
    fVar42 = (float)UnityEngine_TextCore_Text_TextSettings__get_defaultSpriteAssetPath
                              (fVar42 - fVar61,&stack0x00001020,0);
    fVar42 = fVar61 + fVar42;
    fStack0000000000000174 = fVar55 + fStack0000000000000174;
    fVar58 = fVar58 + 0.0;
    fVar63 = 0.0;
    fVar57 = (float)UnityEngine_TextCore_Text_TextSettings__get_defaultSpriteAssetPath
                              (fVar57 - fVar61,&stack0x00001020,0);
    fVar57 = fVar61 + fVar57;
    fVar62 = fVar55 + fVar62;
    fVar63 = fVar63 + 0.0;
    fVar45 = 0.0;
    fVar41 = (float)UnityEngine_TextCore_Text_TextSettings__get_defaultSpriteAssetPath
                              (fVar41 - fVar61,&stack0x00001020,0);
    fVar41 = fVar61 + fVar41;
    fVar45 = fVar45 + 0.0;
    fVar54 = fVar55 + fVar54;
    fVar65 = fVar55 + fVar65;
  }
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
  lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
  *(float *)(lVar27 + 0x124) = fVar42;
  *(float *)(lVar27 + 0x128) = fStack0000000000000174;
  *(float *)(lVar27 + 300) = fVar58;
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
  lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
  *(float *)(lVar27 + 0x11c) = fVar54;
  *(float *)(lVar27 + 0x120) = fVar48;
  *(float *)(lVar27 + 0x118) = fStack0000000000000160;
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
  lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
  *(float *)(lVar27 + 0x130) = fVar57;
  *(float *)(lVar27 + 0x134) = fVar62;
  *(float *)(lVar27 + 0x138) = fVar63;
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
  lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
  *(float *)(lVar27 + 0x13c) = fVar41;
  *(float *)(lVar27 + 0x140) = fVar65;
  *(float *)(lVar27 + 0x144) = fVar45;
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar15 = *unaff_x27;
  fVar41 = *(float *)(unaff_x19 + 0x2f8);
  fVar45 = (float)FUN_06118cc0(&stack0x00001130,0);
  if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
  *(float *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x148) = fVar41 + fVar39 * fVar45;
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar15 = *unaff_x27;
  fVar62 = *(float *)(unaff_x19 + 0x2e0);
  fVar41 = *(float *)(unaff_x19 + 0x180);
  fVar45 = (float)FUN_06118cd0(&stack0x00001130,0);
  if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
  *(float *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x150) =
       (fVar43 - fVar62) + fVar41 + fVar39 * fVar45;
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar15 = *unaff_x27;
  lVar23 = (long)(int)uVar15;
  if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
  *(float *)(lVar27 + lVar23 * 0x188 + 0x168) =
       (fVar57 - fVar42) / (fVar54 - fStack0000000000000174);
  fVar64 = fVar39 * (fStack000000000000016c + fVar64);
  if (*unaff_x24 == '\x01') {
    fVar64 = fVar64 / fStack0000000000000170;
    fVar40 = (fVar39 * (fStack0000000000000164 + fVar40)) / fStack0000000000000170;
  }
  else {
    fVar40 = fVar39 * (fStack0000000000000164 + fVar40);
  }
  uVar19 = *(uint *)(unaff_x19 + 0x330);
  fVar43 = *(float *)(unaff_x19 + 0x180);
  bVar11 = uVar15 == uVar19;
  bVar12 = uStack000000000000018c == 0;
  fVar64 = fVar43 + fVar64;
  if (bVar12 || bVar11) {
    fVar40 = fVar43 + fVar40;
    fVar45 = fVar64;
    fVar57 = fVar40;
    if (fVar43 != 0.0) {
      fVar45 = (fVar64 - fVar43) / *(float *)(unaff_x19 + 0xf0);
      fVar57 = (fVar40 - fVar43) / *(float *)(unaff_x19 + 0xf0);
      if (fVar45 <= fVar64) {
        fVar45 = fVar64;
      }
      if (fVar40 <= fVar57) {
        fVar57 = fVar40;
      }
    }
    lVar33 = lVar27 + lVar23 * 0x188;
    fVar43 = fVar45;
    if (fVar45 <= *(float *)(unaff_x19 + 0x340)) {
      fVar43 = *(float *)(unaff_x19 + 0x340);
    }
    fVar41 = fVar57;
    if (*(float *)(unaff_x19 + 0x344) <= fVar57) {
      fVar41 = *(float *)(unaff_x19 + 0x344);
    }
    *(float *)(unaff_x19 + 0x340) = fVar43;
    *(float *)(unaff_x19 + 0x344) = fVar41;
    *(float *)(lVar33 + 0x158) = fVar45;
    *(float *)(lVar33 + 0x15c) = fVar57;
    fVar45 = *(float *)(unaff_x19 + 0x2e0);
    fVar57 = fVar64 - fVar45;
  }
  else {
    fVar43 = *(float *)(unaff_x19 + 0x340);
    lVar33 = lVar27 + lVar23 * 0x188;
    *(float *)(lVar33 + 0x158) = fVar43;
    fVar40 = *(float *)(unaff_x19 + 0x344);
    *(float *)(lVar33 + 0x15c) = fVar40;
    fVar45 = *(float *)(unaff_x19 + 0x2e0);
    fVar57 = fVar43 - fVar45;
  }
  *(float *)(lVar33 + 0x14c) = fVar57;
  *(float *)(lVar27 + lVar23 * 0x188 + 0x154) = fVar40 - fVar45;
  *(float *)(unaff_x19 + 0x380) = fVar40 - fVar45;
  if ((*(int *)(unaff_x19 + 0x348) == 0) || (*(char *)(unaff_x19 + 900) != '\0')) {
    if (bVar12 || bVar11) {
      *(float *)(unaff_x19 + 0x37c) = fVar43;
      if (*(long *)(unaff_x19 + 0x68) == 0)
      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar40 = *(float *)(unaff_x19 + 0x378);
      fVar43 = (float)FUN_06114638(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar45 = *(float *)(unaff_x19 + 0x2e0);
      fStack0000000000000170 = (fVar39 * fVar43) / fStack0000000000000170;
      if (fVar40 <= fStack0000000000000170) {
        fVar40 = fStack0000000000000170;
      }
      *(float *)(unaff_x19 + 0x378) = fVar40;
      if (fVar45 == 0.0) goto LAB_06132674;
    }
  }
  else if ((bVar12 || bVar11) && fVar45 == 0.0) {
LAB_06132674:
    fVar40 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= fVar64) {
      fVar40 = fVar64;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar40;
  }
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar36 = *unaff_x27;
  if (*(uint *)(lVar27 + 0x18) <= uVar36) goto LAB_061347f8;
  lVar27 = lVar27 + (long)(int)uVar36 * 0x188;
  *(undefined1 *)(lVar27 + 0x1a0) = 0;
  uVar35 = *unaff_x21;
  if (uVar35 == 9) {
LAB_061326b8:
    *(undefined1 *)(lVar27 + 0x1a0) = 1;
    pfVar28 = (float *)(unaff_x19 + 0x360);
    pfVar30 = in_stack_00000120;
    if (bVar13) {
      lVar27 = *(long *)(in_stack_00000130 + 0x48);
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
      lVar27 = lVar27 + (long)(int)*(uint *)(in_stack_00000148 + 0x5c) * 0x60;
      pfVar30 = (float *)(lVar27 + 100);
      pfVar28 = (float *)(lVar27 + 0x68);
    }
    fVar43 = *pfVar30;
    fVar40 = *pfVar28;
    fVar64 = *(float *)(unaff_x19 + 0x364);
    fVar57 = *(float *)(unaff_x19 + 0x2f8);
    fStack0000000000000168 = (fVar52 - fVar43) - fVar40;
    bVar11 = true;
    if ((fVar64 <= fStack0000000000000168) && (bVar11 = false, !NAN(fVar64))) {
      bVar11 = fVar64 == -1.0;
    }
    if (!bVar11) {
      fStack0000000000000168 = fVar64;
    }
    fVar64 = 0.0;
    if (*(char *)(unaff_x22 + 0xe2) == '\0') {
      fVar64 = (float)FUN_0611490c(&stack0x00001140,0);
      uVar35 = *unaff_x21;
      fVar45 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar41 = *(float *)(unaff_x19 + 0x159c);
    fVar42 = *(float *)(unaff_x19 + 0x344);
    if (uVar35 != 0xad) {
      fStack0000000000000150 = fVar39;
    }
    fVar62 = 0.0;
    if ((0.0 < fVar45) && (fVar62 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar62 = *(float *)(unaff_x19 + 0x340) - *(float *)(unaff_x19 + 0x15b0);
    }
    uVar36 = *unaff_x27;
    fVar62 = (*(float *)(unaff_x19 + 0x37c) - (fVar42 - fVar45)) + fVar62;
    if (fVar47 < fVar62) {
      if (*(int *)(unaff_x19 + 0x354) == -1) {
        *(uint *)(unaff_x19 + 0x354) = uVar36;
      }
      in_stack_000011c0 = DAT_01207480;
      if (*(char *)(unaff_x22 + 200) != '\0') {
        fVar54 = *(float *)(unaff_x22 + 0xfc);
        if (((fVar54 < *(float *)(unaff_x19 + 0x15b4)) && (0.0 < fVar45)) &&
           (*(int *)(unaff_x19 + 0x15a8) < *(int *)(unaff_x19 + 0x15ac))) {
          fVar53 = *(float *)(unaff_x19 + 0x15b4) +
                   ((unaff_s15 - fVar62) / (float)*(int *)(unaff_x19 + 0x348)) / fVar59;
          if (fVar53 <= fVar54) {
            fVar53 = fVar54;
          }
          goto LAB_06134658;
        }
        fVar62 = *(float *)(unaff_x19 + 0xec);
        fVar45 = *(float *)(unaff_x22 + 0xcc);
        if ((fVar45 < fVar62) && (*(int *)(unaff_x19 + 0x15a8) < *(int *)(unaff_x19 + 0x15ac))) {
          fVar53 = (fVar62 - *(float *)(unaff_x19 + 0x15a4)) * 0.5;
          if (fVar53 <= DAT_01208478) {
            fVar53 = DAT_01208478;
          }
          fVar49 = (fVar62 - fVar53) * 20.0 + 0.5;
          fVar53 = DAT_01208638;
          if (fVar49 != INFINITY) {
            fVar53 = (float)(int)fVar49 / 20.0;
          }
          if (fVar53 <= fVar45) {
            fVar53 = fVar45;
          }
          *(float *)(unaff_x19 + 0x15a0) = fVar62;
          goto UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams__RectIntersection;
        }
      }
      switch(*(undefined4 *)(unaff_x22 + 0x94)) {
      case 1:
        if (*(int *)(in_stack_00000148 + 0x5c) < 1) goto switchD_0613282c_caseD_2;
        iVar16 = FUN_04306ab4(lVar2,*(undefined8 *)
                                     Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<DocumentReference>__
                             );
        in_stack_000011c0 = DAT_01207480;
        if (iVar16 == 0) {
          uVar66 = 0xffffffff;
          unaff_x27[0] = 0;
          unaff_x27[1] = 0;
          fStack0000000000000150 = fVar39;
        }
        else {
          FUN_04306f74(&stack0x000011d0,lVar2,
                       *(undefined8 *)
                        Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<EventHandler<LoadBundleTaskProgress>>__
                      );
          memcpy(&stack0x00000c88,&stack0x000011d0,0x398);
          iVar16 = UnityEngine_UIElements_UIR_RenderChain___cctor();
          uVar66 = iVar16 - 1;
          iVar16 = *(int *)(unaff_x19 + 0x32c) + -1;
          *(int *)(unaff_x19 + 0x32c) = iVar16;
          in_stack_000011c0 = CONCAT44(0x2026,iVar16);
          iStack0000000000000190 = iStack0000000000000190 + 1;
          fStack0000000000000150 = fVar39;
        }
        break;
      default:
        goto switchD_0613282c_caseD_2;
      case 3:
      case 6:
        uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
        in_stack_000011c0 = CONCAT44(3,uVar36);
        fStack0000000000000150 = fVar39;
        break;
      case 5:
        if (uVar36 == 0 || (int)uVar66 < 0) {
          uVar66 = 0xffffffff;
          *unaff_x27 = 0;
          fStack0000000000000150 = fVar39;
        }
        else {
          fVar56 = *(float *)(unaff_x19 + 0x340);
          uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
          if (fVar47 < fVar56 - fVar42) goto LAB_06132de4;
          *(undefined4 *)(unaff_x19 + 0x330) = *(undefined4 *)(unaff_x19 + 0x32c);
          *(undefined8 *)(unaff_x19 + 0x340) = in_stack_00000068;
          *(undefined1 *)(unaff_x19 + 900) = 1;
          *(int *)(unaff_x19 + 0x348) = *(int *)(unaff_x19 + 0x348) + 1;
          *(undefined4 *)(unaff_x19 + 0x15b0) = 0;
          *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
          *(undefined4 *)(unaff_x19 + 0x37c) = 0;
          *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
          *(float *)(unaff_x19 + 0x2f8) = *(float *)(unaff_x19 + 0x300) + 0.0;
          *(int *)(unaff_x19 + 0x358) = *(int *)(unaff_x19 + 0x358) + 1;
          in_stack_000011c0 = uVar20;
          fStack0000000000000150 = fVar39;
        }
      }
      goto LAB_061343b8;
    }
switchD_0613282c_caseD_2:
    fVar64 = ABS(fVar57) + fVar64 * (1.0 - fVar41) * fStack0000000000000150;
    if (fStack0000000000000168 < fVar64 && ((uVar18 ^ 0xffffffff) & 1) == 0) {
      if (((in_stack_00000110 == 0) || (in_stack_00000110 == 3)) ||
         (uVar36 == *(uint *)(unaff_x19 + 0x330))) {
        if ((*(char *)(unaff_x22 + 200) != '\0') &&
           (*(int *)(unaff_x19 + 0x15a8) < *(int *)(unaff_x19 + 0x15ac))) {
          fVar45 = *(float *)(unaff_x22 + 0x134) / 100.0;
          if (fVar41 < fVar45) {
            fVar53 = fVar64 / (1.0 - fVar41);
            if (fVar41 <= 0.0) {
              fVar53 = fVar64;
            }
            fVar41 = fVar41 + (fVar64 - (fStack0000000000000168 + DAT_0120854c)) / fVar53;
            goto LAB_0613474c;
          }
          fVar57 = *(float *)(unaff_x19 + 0xec);
          fVar45 = *(float *)(unaff_x22 + 0xcc);
          if (fVar57 <= fVar45) goto LAB_06132a90;
LAB_061346c0:
          fVar53 = (fVar57 - *(float *)(unaff_x19 + 0x15a4)) * 0.5;
          if (fVar53 <= DAT_01208478) {
            fVar53 = DAT_01208478;
          }
          *(float *)(unaff_x19 + 0x15a0) = fVar57;
          fVar49 = (fVar57 - fVar53) * 20.0 + 0.5;
          fVar53 = DAT_01208638;
          if (fVar49 != INFINITY) {
            fVar53 = (float)(int)fVar49 / 20.0;
          }
          if (fVar53 <= fVar45) {
            fVar53 = fVar45;
          }
UnityEngine_UIElements_UIR_MeshGenerator_RectangleParams__RectIntersection:
          *(float *)(unaff_x19 + 0xec) = fVar53;
          return;
        }
LAB_06132a90:
        iVar16 = *(int *)(unaff_x22 + 0x94);
        if (iVar16 != 1) {
          if (iVar16 == 6) {
            uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
            in_stack_000011c0 = CONCAT44(3,*(undefined4 *)(unaff_x19 + 0x32c));
            fStack0000000000000150 = fVar39;
            goto LAB_061343b8;
          }
          if (iVar16 == 3) {
            uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
            goto LAB_06132de4;
          }
          goto LAB_06132acc;
        }
        iVar16 = FUN_04306ab4(lVar2,*(undefined8 *)
                                     Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<DocumentReference>__
                             );
        if (iVar16 == 0) {
LAB_06134614:
          in_stack_000011c0 = DAT_01207480;
          unaff_x27[0] = 0;
          unaff_x27[1] = 0;
          uVar66 = 0xffffffff;
          fStack0000000000000150 = fVar39;
        }
        else {
          FUN_04306f74(&stack0x000011d0,lVar2,
                       *(undefined8 *)
                        Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<EventHandler<LoadBundleTaskProgress>>__
                      );
          memcpy(&stack0x00000558,&stack0x000011d0,0x398);
          iVar16 = UnityEngine_UIElements_UIR_RenderChain___cctor();
LAB_06132c7c:
          iVar7 = *(int *)(unaff_x19 + 0x32c) + -1;
          *(int *)(unaff_x19 + 0x32c) = iVar7;
          iStack0000000000000190 = iStack0000000000000190 + 1;
          uVar66 = iVar16 - 1;
          in_stack_000011c0 = CONCAT44(0x2026,iVar7);
          fStack0000000000000150 = fVar39;
        }
        goto LAB_061343b8;
      }
      uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_01208490) {
        lVar27 = *plVar1;
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar18 = *unaff_x27;
        if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_061347f8;
        fVar57 = *(float *)(unaff_x19 + 0x2e0);
        fVar45 = 0.0;
        if ((0.0 < fVar57) && (fVar45 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar45 = *(float *)(unaff_x19 + 0x340) - *(float *)(unaff_x19 + 0x15b0);
        }
        fVar45 = fVar38 * *(float *)(unaff_x22 + 0xf4) +
                 *(float *)(lVar27 + (long)(int)uVar18 * 0x188 + 0x158) +
                 (fVar45 - *(float *)(unaff_x19 + 0x344)) +
                 fVar59 * (fStack0000000000000194 + *(float *)(unaff_x19 + 0x15b4));
      }
      else {
        fVar45 = *(float *)(unaff_x22 + 0xf4);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar27 = *plVar1;
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        fVar57 = *(float *)(unaff_x19 + 0x2e0);
        uVar18 = *(uint *)(unaff_x19 + 0x32c);
        fVar45 = *(float *)(unaff_x19 + 0x2e4) + fVar38 * fVar45;
      }
      if ((*(uint *)(lVar27 + 0x18) <= uVar18) ||
         (uVar35 = uVar18 - 1, *(uint *)(lVar27 + 0x18) <= uVar35)) goto LAB_061347f8;
      fVar42 = (fVar45 + *(float *)(unaff_x19 + 0x37c) + fVar57) -
               *(float *)(lVar27 + (long)(int)uVar18 * 0x188 + 0x15c);
      if ((!bVar9 && *(int *)(lVar27 + (long)(int)uVar35 * 0x188 + 0x20) == 0xad) &&
         ((fVar42 < fVar47 || (*(int *)(unaff_x22 + 0x94) == 0)))) {
        bVar9 = false;
        *unaff_x27 = uVar35;
        uVar66 = uVar66 - 1;
        in_stack_000011c0 = CONCAT44(0x2d,uVar35);
        fStack0000000000000150 = fVar39;
        goto LAB_061343b8;
      }
      if (*(int *)(lVar27 + (long)(int)uVar18 * 0x188 + 0x20) == 0xad) {
        bVar9 = true;
        in_stack_000011c0 = uVar20;
        fStack0000000000000150 = fVar39;
        goto LAB_061343b8;
      }
      if ((bVar10 & *(byte *)(unaff_x22 + 200)) != 0) {
        fVar41 = *(float *)(unaff_x19 + 0x159c);
        fVar45 = *(float *)(unaff_x22 + 0x134) / 100.0;
        if ((fVar45 <= fVar41) || (*(int *)(unaff_x19 + 0x15ac) <= *(int *)(unaff_x19 + 0x15a8))) {
          fVar57 = *(float *)(unaff_x19 + 0xec);
          fVar45 = *(float *)(unaff_x22 + 0xcc);
          if ((fVar45 < fVar57) && (*(int *)(unaff_x19 + 0x15a8) < *(int *)(unaff_x19 + 0x15ac)))
          goto LAB_061346c0;
          goto LAB_06132fa8;
        }
LAB_0613478c:
        fVar53 = fVar64;
        if (0.0 < fVar41) {
          fVar53 = fVar64 / (1.0 - fVar41);
        }
        fVar41 = fVar41 + (fVar64 - (fStack0000000000000168 + DAT_0120854c)) / fVar53;
LAB_0613474c:
        if (fVar45 <= fVar41) {
          fVar41 = fVar45;
        }
        *(float *)(unaff_x19 + 0x159c) = fVar41;
        return;
      }
LAB_06132fa8:
      iVar16 = *piStack0000000000000040;
      if ((iVar16 != iStack0000000000000020) && ((bVar10 & iVar16 != -1) != 0)) {
        uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
        lVar27 = *(long *)(in_stack_00000130 + 0x30);
        if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        uVar18 = *unaff_x27;
        uVar35 = uVar18 - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar35) goto LAB_061347f8;
        iStack0000000000000020 = iVar16;
        if (*(int *)(lVar27 + (long)(int)uVar35 * 0x188 + 0x20) == 0xad) {
          uVar66 = uVar66 - 1;
          bVar9 = false;
          *unaff_x27 = uVar35;
          in_stack_000011c0 = CONCAT44(0x2d,uVar35);
          fStack0000000000000150 = fVar39;
          goto LAB_061343b8;
        }
      }
      if (fVar42 <= fVar47) {
        FUN_0613f3d0(fVar59);
        bVar10 = 1;
        bVar9 = false;
        bVar8 = true;
        in_stack_000011c0 = uVar20;
        fStack0000000000000150 = fVar39;
        goto LAB_061343b8;
      }
      if (*(int *)(unaff_x19 + 0x354) == -1) {
        *(uint *)(unaff_x19 + 0x354) = uVar18;
      }
      if (*(char *)(unaff_x22 + 200) != '\0') {
        fVar45 = *(float *)(unaff_x22 + 0xfc);
        if ((fVar45 < *(float *)(unaff_x19 + 0x15b4)) &&
           (*(int *)(unaff_x19 + 0x15a8) < *(int *)(unaff_x19 + 0x15ac))) {
          fVar53 = *(float *)(unaff_x19 + 0x15b4) +
                   ((unaff_s15 - fVar42) / (float)(*(int *)(unaff_x19 + 0x348) + 1)) / fVar59;
          if (fVar53 <= fVar45) {
            fVar53 = fVar45;
          }
LAB_06134658:
          *(float *)(unaff_x19 + 0x15b4) = fVar53;
          return;
        }
        fVar41 = *(float *)(unaff_x19 + 0x159c);
        fVar45 = *(float *)(unaff_x22 + 0x134) / 100.0;
        if ((fVar41 < fVar45) && (*(int *)(unaff_x19 + 0x15a8) < *(int *)(unaff_x19 + 0x15ac)))
        goto LAB_0613478c;
        fVar57 = *(float *)(unaff_x19 + 0xec);
        fVar45 = *(float *)(unaff_x22 + 0xcc);
        if ((fVar45 < fVar57) && (*(int *)(unaff_x19 + 0x15a8) < *(int *)(unaff_x19 + 0x15ac)))
        goto LAB_061346c0;
      }
      switch(*(undefined4 *)(unaff_x22 + 0x94)) {
      case 0:
      case 2:
      case 4:
        FUN_0613f3d0(fVar59);
        bVar9 = false;
        break;
      case 1:
        iVar16 = FUN_04306ab4(lVar2,*(undefined8 *)
                                     Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<DocumentReference>__
                             );
        if (iVar16 == 0) {
          bVar9 = false;
          goto LAB_06134614;
        }
        FUN_04306f74(&stack0x000011d0,lVar2,
                     *(undefined8 *)
                      Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<EventHandler<LoadBundleTaskProgress>>__
                    );
        memcpy(&stack0x000008f0,&stack0x000011d0,0x398);
        iVar16 = UnityEngine_UIElements_UIR_RenderChain___cctor();
        bVar9 = false;
        goto LAB_06132c7c;
      case 3:
        uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
        bVar9 = false;
        goto LAB_06132de4;
      case 5:
        *(undefined1 *)(unaff_x19 + 900) = 1;
        FUN_0613f3d0(fVar59);
        bVar9 = false;
        *(undefined4 *)(unaff_x19 + 0x15b0) = 0;
        *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
        *(undefined4 *)(unaff_x19 + 0x37c) = 0;
        *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
        *(int *)(unaff_x19 + 0x358) = *(int *)(unaff_x19 + 0x358) + 1;
        break;
      case 6:
        bVar9 = false;
        uVar36 = uVar18;
LAB_06132de4:
        in_stack_000011c0 = CONCAT44(3,uVar36);
        fStack0000000000000150 = fVar39;
        goto LAB_061343b8;
      default:
        bVar9 = false;
        uVar36 = uVar18;
        goto LAB_06132acc;
      }
LAB_06133fe4:
      bVar10 = 1;
      bVar8 = true;
      in_stack_000011c0 = uVar20;
      fStack0000000000000150 = fVar39;
LAB_061343b8:
      uVar66 = uVar66 + 1;
      lVar27 = *(long *)(unaff_x19 + 0x20);
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      goto LAB_0613054c;
    }
LAB_06132acc:
    if (uStack000000000000018c == 0) {
      if (*unaff_x21 != 0xad) {
        if (*unaff_x24 == '\x02') {
          FUN_0613d260();
        }
        else if (*unaff_x24 == '\x01') {
          FUN_0613c624(fStack0000000000000184);
        }
        uVar18 = *unaff_x27;
        if (bVar8) {
          *(uint *)(unaff_x19 + 0x338) = uVar18;
        }
        *(uint *)(unaff_x19 + 0x33c) = uVar18;
        *(int *)(unaff_x19 + 0x34c) = *(int *)(unaff_x19 + 0x34c) + 1;
        lVar27 = *(long *)(in_stack_00000130 + 0x48);
        if (lVar27 != 0) {
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x348)) goto LAB_061347f8;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x348) * 0x60;
          bVar8 = false;
          *(float *)(lVar27 + 100) = fVar43;
          *(float *)(lVar27 + 0x68) = fVar40;
          goto LAB_06133168;
        }
        goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      }
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= uVar36) goto LAB_061347f8;
      *(undefined1 *)(lVar27 + (long)(int)uVar36 * 0x188 + 0x1a0) = 0;
    }
    else {
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= uVar36) goto LAB_061347f8;
      *(undefined1 *)(lVar27 + (long)(int)uVar36 * 0x188 + 0x1a0) = 0;
      lVar27 = *(long *)(in_stack_00000130 + 0x48);
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      uVar18 = *(uint *)(lVar27 + 0x18);
      if (uVar18 <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
      lVar23 = lVar27 + (long)(int)*(uint *)(in_stack_00000148 + 0x5c) * 0x60;
      iVar16 = *(int *)(lVar23 + 0x30) + 1;
      *(int *)(lVar23 + 0x30) = iVar16;
      lVar23 = (long)(int)*(uint *)(unaff_x19 + 0x348);
      *(int *)(unaff_x19 + 0x350) = iVar16;
      if (uVar18 <= *(uint *)(unaff_x19 + 0x348)) goto LAB_061347f8;
      lVar33 = lVar27 + lVar23 * 0x60;
      *(float *)(lVar33 + 100) = fVar43;
      *(float *)(lVar33 + 0x68) = fVar40;
      *(int *)(in_stack_00000130 + 0x18) = *(int *)(in_stack_00000130 + 0x18) + 1;
      if (*unaff_x21 == 0xa0) goto LAB_06133150;
    }
  }
  else {
    if ((in_stack_00000110 & 0xfffffffe) == 2) {
      if ((uVar35 != 0x200b) && (uStack000000000000018c == 0)) goto LAB_06132880;
      goto LAB_061326b8;
    }
    if (uStack000000000000018c == 0) {
LAB_06132880:
      if ((uVar35 != 3) && (uVar35 != 0x200b)) {
        if (uVar35 != 0xad) goto LAB_061326b8;
        goto LAB_0613289c;
      }
    }
    else {
LAB_0613289c:
      if ((bool)(uVar35 == 0xad & (bVar9 ^ 1U))) goto LAB_061326b8;
    }
    if (*unaff_x24 == '\x02') goto LAB_061326b8;
    if (*(int *)(unaff_x22 + 0x94) == 6) {
      if ((uVar35 & 0xfffffffe) != 10) {
        if ((0x22 < uVar35 - 0x2007) ||
           ((1L << ((ulong)(uVar35 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto joined_r0x06133098;
        goto LAB_061330d0;
      }
      fVar64 = 0.0;
      if ((0.0 < fVar45) && (fVar64 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
        fVar64 = *(float *)(unaff_x19 + 0x340) - *(float *)(unaff_x19 + 0x15b0);
      }
      if ((*(float *)(unaff_x19 + 0x37c) - (*(float *)(unaff_x19 + 0x344) - fVar45)) + fVar64 <=
          fVar47) goto LAB_06132bb4;
      if (*(int *)(unaff_x19 + 0x354) == -1) {
        *(uint *)(unaff_x19 + 0x354) = uVar36;
      }
      uVar66 = UnityEngine_UIElements_UIR_RenderChain___cctor();
      goto LAB_06132de4;
    }
LAB_06132bb4:
    if ((int)uVar35 < 0x2007) {
      if (uVar35 != 10) {
joined_r0x06133098:
        if ((uVar35 != 0xb) && (uVar35 != 0xa0)) goto LAB_061330a4;
        goto LAB_061330d0;
      }
LAB_061330f0:
      lVar27 = *(long *)(in_stack_00000130 + 0x48);
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
      lVar27 = lVar27 + (long)(int)*(uint *)(in_stack_00000148 + 0x5c) * 0x60;
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
      *(int *)(in_stack_00000130 + 0x18) = *(int *)(in_stack_00000130 + 0x18) + 1;
LAB_06133128:
      if (*unaff_x21 != 0xa0) goto LAB_06133168;
      lVar27 = *(long *)(in_stack_00000130 + 0x48);
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      lVar23 = (long)(int)*(uint *)(in_stack_00000148 + 0x5c);
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
LAB_06133150:
      lVar27 = lVar27 + lVar23 * 0x60;
      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    }
    else {
      if ((0x22 < uVar35 - 0x2007) ||
         ((1L << ((ulong)(uVar35 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_061330a4:
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar22 = FUN_04f8481c(uVar35,0);
        if ((uVar22 & 1) != 0) {
          uVar35 = *unaff_x21;
          goto LAB_061330d0;
        }
        goto LAB_06133128;
      }
LAB_061330d0:
      if ((uVar35 != 0xad) && (uVar35 != 0x200b)) {
        if (uVar35 != 0x2060) goto LAB_061330f0;
        goto LAB_06133128;
      }
    }
  }
LAB_06133168:
  if ((*(int *)(unaff_x22 + 0x94) != 1) || ((bool)(bVar13 ^ 1))) {
    if (*(int *)(unaff_x22 + 0x94) == 1) goto LAB_06133198;
  }
  else if (*unaff_x21 == 0x2d) {
LAB_06133198:
    if (*(long *)(unaff_x19 + 0x19f8) == 0)
    goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar40 = *(float *)(unaff_x19 + 0xf4);
    fVar64 = (float)FUN_06114600(*(long *)(unaff_x19 + 0x19f8) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x19f8) == 0)
    goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar45 = (float)FUN_06114608(*(long *)(unaff_x19 + 0x19f8) + 0xb0,0);
    lVar27 = *(long *)(unaff_x19 + 0x19f0);
    fVar43 = in_stack_00000140;
    if (*(char *)(unaff_x22 + 0xe9) != '\0') {
      fVar43 = 1.0;
    }
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0))
    goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    fVar42 = *(float *)(unaff_x19 + 0xf0);
    fVar62 = *(float *)(lVar27 + 0x2c);
    fVar57 = (float)FUN_06114b00(*(long *)(lVar27 + 0x20),0);
    fVar41 = *in_stack_00000120;
    fVar57 = fVar42 * (fVar40 / fVar64) * fVar45 * fVar43 * fVar62 * fVar57;
    fVar64 = *(float *)(unaff_x19 + 0x360);
    if ((*unaff_x21 == 10) && (*(int *)(unaff_x19 + 0x32c) != *(int *)(unaff_x19 + 0x330))) {
      lVar27 = *plVar1;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      uVar18 = *(int *)(unaff_x19 + 0x32c) - 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_061347f8;
      if (*(long *)(unaff_x19 + 0x19f8) == 0)
      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar43 = *(float *)(lVar27 + (long)(int)uVar18 * 0x188 + 0x68);
      fVar40 = (float)FUN_06114600(*(long *)(unaff_x19 + 0x19f8) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x19f8) == 0)
      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar42 = (float)FUN_06114608(*(long *)(unaff_x19 + 0x19f8) + 0xb0,0);
      lVar27 = *(long *)(unaff_x19 + 0x19f0);
      fVar45 = in_stack_00000140;
      if (*(char *)(unaff_x22 + 0xe9) != '\0') {
        fVar45 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0))
      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar62 = *(float *)(unaff_x19 + 0xf0);
      fVar54 = *(float *)(lVar27 + 0x2c);
      fVar57 = (float)FUN_06114b00(*(long *)(lVar27 + 0x20),0);
      lVar27 = *(long *)(in_stack_00000130 + 0x48);
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
      lVar27 = lVar27 + (long)(int)*(uint *)(in_stack_00000148 + 0x5c) * 0x60;
      fVar41 = *(float *)(lVar27 + 100);
      fVar64 = *(float *)(lVar27 + 0x68);
      fVar57 = fVar62 * (fVar43 / fVar40) * fVar42 * fVar45 * fVar54 * fVar57;
    }
    fVar43 = *(float *)(unaff_x19 + 0x2f8);
    fVar40 = 0.0;
    if (*(char *)(unaff_x22 + 0xe2) == '\0') {
      if ((*(long *)(unaff_x19 + 0x19f0) == 0) ||
         (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x19f0) + 0x20), lVar27 == 0))
      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      FUN_06114ac4(&stack0x000011d0,lVar27,0);
      fVar40 = (float)FUN_0611490c(&stack0x00001110,0);
    }
    fVar45 = *(float *)(unaff_x19 + 0x364);
    fVar64 = (fVar52 - fVar41) - fVar64;
    bVar11 = true;
    if ((fVar45 <= fVar64) && (bVar11 = false, !NAN(fVar45))) {
      bVar11 = fVar45 == -1.0;
    }
    if (!bVar11) {
      fVar64 = fVar45;
    }
    if (ABS(fVar43) + fVar57 * fVar40 * (1.0 - *(float *)(unaff_x19 + 0x159c)) < fVar64) {
      FUN_0613bf50();
      uVar21 = *(undefined8 *)
                Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<Func<Transaction,_Task>>__
      ;
      memcpy(&stack0x000011d0,in_stack_00000050,0x398);
      FUN_04306e5c(lVar2,&stack0x000011d0,uVar21);
    }
  }
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x27) goto LAB_061347f8;
  uVar18 = *(uint *)(in_stack_00000148 + 0x5c);
  lVar27 = lVar27 + (long)(int)*unaff_x27 * 0x188;
  *(uint *)(lVar27 + 0x6c) = uVar18;
  *(undefined4 *)(lVar27 + 0x70) = *(undefined4 *)(unaff_x19 + 0x358);
  if ((bVar13) || ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar27 = *(long *)(in_stack_00000130 + 0x48);
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_061347f8;
    if (*(int *)(lVar27 + (long)(int)uVar18 * 0x60 + 0x24) == 1) goto LAB_06133478;
  }
  else {
    lVar27 = *(long *)(in_stack_00000130 + 0x48);
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
LAB_06133478:
    if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_061347f8;
    *(undefined4 *)(lVar27 + (long)(int)uVar18 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  uVar18 = *unaff_x21;
  if (uVar18 != 0x200b) {
    if (uVar18 == 9) {
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      fVar64 = (float)FUN_061146a8(*unaff_x26 + 0xb0,0);
      if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      bVar14 = FUN_06123178(*unaff_x26,0);
      fVar40 = *(float *)(unaff_x19 + 0x2f8);
      fVar43 = fVar39 * fVar64 * (float)bVar14;
      fVar64 = fVar43 * (float)(int)(fVar40 / fVar43);
      if (fVar64 <= fVar40) {
        fVar64 = fVar40 + fVar43;
      }
    }
    else {
      fVar64 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar64 == 0.0) {
        fVar40 = *(float *)(unaff_x19 + 0x2f8);
        if (*(char *)(unaff_x22 + 0xe2) != '\0') {
          fVar64 = (float)FUN_06118ce0(&stack0x00001130,0);
          if (*unaff_x26 != 0) {
            fVar43 = (float)FUN_06123138(*unaff_x26,0);
            fVar40 = fVar40 - (1.0 - *(float *)(unaff_x19 + 0x159c)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar39 * fVar64 + fVar38 * (fStack0000000000000128 + fVar56 + fVar43))
            ;
            *(float *)(unaff_x19 + 0x2f8) = fVar40;
            if ((uStack000000000000018c == 0) && (*unaff_x21 != 0x200b)) goto LAB_0613365c;
            fVar64 = fVar40 - fVar38 * *(float *)(unaff_x22 + 0xf0);
            goto LAB_06133658;
          }
          goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        }
        fVar64 = (float)FUN_0611490c(&stack0x00001140,0);
        fVar45 = *(float *)(unaff_x19 + 0x19a8);
        fVar43 = (float)FUN_06118ce0(&stack0x00001130,0);
        if (*(long *)(unaff_x19 + 0x68) == 0)
        goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        fVar57 = (float)FUN_06123138(*(long *)(unaff_x19 + 0x68),0);
        fVar40 = fVar40 + (1.0 - *(float *)(unaff_x19 + 0x159c)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          fVar39 * (fVar64 * fVar45 + fVar43) +
                          fVar38 * (fStack0000000000000128 + fVar56 + fVar57));
      }
      else {
        if (((*(char *)(unaff_x19 + 0x2f4) != '\0') && (uVar18 < 0x3b)) &&
           ((1L << ((ulong)uVar18 & 0x3f) & 0x400500000000000U) != 0)) {
          fVar64 = fVar64 * 0.5;
        }
        if (*unaff_x26 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
        fVar40 = *(float *)(unaff_x19 + 0x2f8);
        fVar43 = (float)FUN_06123138(*unaff_x26,0);
        fVar40 = fVar40 + (1.0 - *(float *)(unaff_x19 + 0x159c)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar64 - fStack000000000000010c) + fVar38 * (fVar56 + fVar43));
      }
      *(float *)(unaff_x19 + 0x2f8) = fVar40;
      if ((uStack000000000000018c == 0) && (*unaff_x21 != 0x200b)) goto LAB_0613365c;
      fVar64 = fVar40 + fVar38 * *(float *)(unaff_x22 + 0xf0);
    }
LAB_06133658:
    *(float *)(unaff_x19 + 0x2f8) = fVar64;
  }
LAB_0613365c:
  lVar27 = *plVar1;
  if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  uVar18 = *unaff_x27;
  if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_061347f8;
  *(undefined4 *)(lVar27 + (long)(int)uVar18 * 0x188 + 0x164) = *(undefined4 *)(unaff_x19 + 0x2f8);
  uVar36 = *unaff_x21;
  if (uVar36 == 0xd) {
    *(float *)(unaff_x19 + 0x2f8) = *(float *)(unaff_x19 + 0x300) + 0.0;
LAB_061336a0:
    if (uVar18 == uVar6) goto LAB_06133890;
    lVar27 = *plVar1;
    if (lVar27 != 0) goto LAB_06133e78;
    goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
  }
  if (((*(int *)(unaff_x22 + 0x94) == 5) && (1 < uVar36 - 10)) && (uVar36 != 0x2028)) {
    lVar27 = *in_stack_00000028;
    if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
    uVar36 = *(uint *)(unaff_x19 + 0x358);
    if (*(int *)(lVar27 + 0x18) < (int)(uVar36 + 1)) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_Rendering_Universal_PostProcessPass_RenderBloomTexture__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_0357b718(in_stack_00000028,uVar36 + 1,1,
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARFoundation_PoseExtensions_InverseTransformPositions__);
      lVar27 = *in_stack_00000028;
      if (lVar27 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      uVar36 = *(uint *)(unaff_x19 + 0x358);
    }
    if (*(uint *)(lVar27 + 0x18) <= uVar36) goto LAB_061347f8;
    lVar23 = lVar27 + (long)(int)uVar36 * 0x14;
    *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar64 = *(float *)(unaff_x19 + 0x380);
    if (*(float *)(lVar23 + 0x30) <= *(float *)(unaff_x19 + 0x380)) {
      fVar64 = *(float *)(lVar23 + 0x30);
    }
    *(float *)(lVar23 + 0x30) = fVar64;
    if (*(char *)(unaff_x19 + 900) == '\0') {
      uVar18 = *unaff_x27;
    }
    else {
      uVar18 = *(uint *)(unaff_x19 + 0x32c);
      *(undefined1 *)(unaff_x19 + 900) = 0;
      *(uint *)(lVar27 + (long)(int)uVar36 * 0x14 + 0x20) = uVar18;
    }
    *(uint *)(lVar27 + (long)(int)uVar36 * 0x14 + 0x24) = uVar18;
    uVar36 = *unaff_x21;
  }
  if ((((0xb < uVar36) || ((1 << (ulong)(uVar36 & 0x1f) & 0xc08U) == 0)) && (uVar36 != 0x2028)) &&
     (!(bool)(bVar13 & uVar36 == 0x2d))) goto LAB_061336a0;
LAB_06133890:
  if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
    fVar64 = *(float *)(unaff_x19 + 0x340);
    fVar40 = *(float *)(unaff_x19 + 0x15b0);
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    fVar64 = fVar64 - fVar40;
    if (((fVar49 < ABS(fVar64)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
       (*(char *)(unaff_x19 + 900) != '\x01')) {
      uVar44 = *(undefined4 *)(unaff_x19 + 0x330);
      uVar17 = *(undefined4 *)(unaff_x19 + 0x32c);
      if (*(int *)(*(long *)Method_UnityEngine_ManagedStreamHelpers_ManagedStreamRead__ + 0xe4) == 0
         ) {
        thunk_FUN_02dbd7b4();
      }
      FUN_06160d44(fVar64,uVar44,uVar17,in_stack_00000130,0);
      *(float *)(unaff_x19 + 0x380) = *(float *)(unaff_x19 + 0x380) - fVar64;
      *(float *)(unaff_x19 + 0x2e0) = fVar64 + *(float *)(unaff_x19 + 0x2e0);
      if (*(int *)(unaff_x19 + 0xae0) == *(int *)(unaff_x19 + 0x348)) {
        FUN_04306f74(&stack0x000011d0,lVar2,
                     *(undefined8 *)
                      Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<EventHandler<LoadBundleTaskProgress>>__
                    );
        memcpy(&stack0x000001a0,&stack0x000011d0,0x398);
        memcpy(in_stack_00000050,&stack0x000001a0,0x398);
        thunk_FUN_02dd37b4(unaff_x19 + 0xb30,0);
        *(float *)(unaff_x19 + 0xaf8) = fVar64 + *(float *)(unaff_x19 + 0xaf8);
        *(float *)(unaff_x19 + 0xb2c) = fVar64 + *(float *)(unaff_x19 + 0xb2c);
        uVar21 = *(undefined8 *)
                  Method_Firebase_Firestore_Internal_Preconditions_CheckNotNull<Func<Transaction,_Task>>__
        ;
        memcpy(&stack0x000011d0,in_stack_00000050,0x398);
        FUN_04306e5c(lVar2,&stack0x000011d0,uVar21);
      }
    }
  }
  fVar40 = *(float *)(unaff_x19 + 0x2e0);
  *(undefined1 *)(unaff_x19 + 900) = 0;
  fVar43 = *(float *)(unaff_x19 + 0x344) - fVar40;
  fVar64 = *(float *)(unaff_x19 + 0x380);
  if (fVar43 <= *(float *)(unaff_x19 + 0x380)) {
    fVar64 = fVar43;
  }
  *(float *)(unaff_x19 + 0x380) = fVar64;
  fVar45 = *(float *)(unaff_x19 + 0x340);
  if (in_stack_000011cc == '\0') {
    *in_stack_00000098 = fVar64;
  }
  if ((*(char *)(unaff_x22 + 0x114) != '\0') &&
     ((*(int *)(unaff_x22 + 0x104) <= (int)*unaff_x27 ||
      (*(int *)(unaff_x22 + 0x10c) <= *(int *)(in_stack_00000148 + 0x5c))))) {
    in_stack_000011cc = '\x01';
  }
  lVar27 = *(long *)(in_stack_00000130 + 0x48);
  if (lVar27 != 0) {
    lVar23 = (long)(int)*(uint *)(in_stack_00000148 + 0x5c);
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
    uVar18 = *(uint *)(unaff_x19 + 0x330);
    lVar31 = lVar27 + lVar23 * 0x60;
    *(uint *)(lVar31 + 0x38) = uVar18;
    lVar33 = 0x330;
    if ((int)uVar18 <= *(int *)(unaff_x19 + 0x338)) {
      lVar33 = 0x338;
    }
    uVar44 = *(undefined4 *)(unaff_x19 + lVar33);
    *(undefined4 *)(unaff_x19 + 0x338) = uVar44;
    *(undefined4 *)(lVar31 + 0x3c) = uVar44;
    uVar35 = *(uint *)(unaff_x19 + 0x32c);
    *(uint *)(unaff_x19 + 0x334) = uVar35;
    *(uint *)(lVar31 + 0x40) = uVar35;
    uVar34 = *(uint *)(unaff_x19 + 0x338);
    uVar36 = uVar34;
    if ((int)uVar34 <= (int)*(uint *)(unaff_x19 + 0x33c)) {
      uVar36 = *(uint *)(unaff_x19 + 0x33c);
    }
    *(uint *)(unaff_x19 + 0x33c) = uVar36;
    *(uint *)(lVar31 + 0x44) = uVar36;
    lVar33 = *plVar1;
    uVar29 = uVar36;
    if ((*(uint *)(unaff_x22 + 0x100) & 0xfffffffe) == 2) {
      if (lVar33 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
      if (*(uint *)(lVar33 + 0x18) <= uVar35) goto LAB_061347f8;
      if (*(float *)(lVar33 + (long)(int)uVar35 * 0x188 + 0x164) != 0.0) {
        uVar34 = uVar18;
        uVar29 = uVar35;
      }
    }
    lVar31 = lVar27 + lVar23 * 0x60;
    *(uint *)(lVar31 + 0x24) = (1 - uVar18) + uVar35;
    iVar16 = *(int *)(in_stack_00000148 + 0x60);
    *(int *)(lVar31 + 0x28) = iVar16;
    *(uint *)(lVar31 + 0x2c) = ((1 - uVar18) - iVar16) + uVar36;
    if (lVar33 != 0) {
      if (*(uint *)(lVar33 + 0x18) <= uVar34) goto LAB_061347f8;
      uVar44 = *(undefined4 *)(lVar33 + (long)(int)uVar34 * 0x188 + 0x124);
      lVar27 = lVar27 + lVar23 * 0x60;
      *(float *)(lVar27 + 0x74) = fVar43;
      *(undefined4 *)(lVar27 + 0x70) = uVar44;
      lVar27 = *(long *)(in_stack_00000130 + 0x48);
      if (lVar27 != 0) {
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
        lVar23 = *plVar1;
        if (lVar23 != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_061347f8;
          uVar44 = *(undefined4 *)(lVar23 + (long)(int)uVar29 * 0x188 + 0x130);
          fVar45 = fVar45 - fVar40;
          lVar27 = lVar27 + (long)(int)*(uint *)(in_stack_00000148 + 0x5c) * 0x60;
          *(float *)(lVar27 + 0x7c) = fVar45;
          *(undefined4 *)(lVar27 + 0x78) = uVar44;
          lVar27 = *(long *)(in_stack_00000130 + 0x48);
          if (lVar27 != 0) {
            lVar23 = (long)(int)*(uint *)(in_stack_00000148 + 0x5c);
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)(in_stack_00000148 + 0x5c)) goto LAB_061347f8;
            if (*(char *)(unaff_x22 + 0x131) == '\0') {
              fVar64 = *(float *)(lVar27 + lVar23 * 0x60 + 0x78) - fVar39 * fStack0000000000000184;
            }
            else {
              lVar33 = *plVar1;
              if (lVar33 == 0) goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
              if (*(uint *)(lVar33 + 0x18) <= uVar29) goto LAB_061347f8;
              fVar64 = *(float *)(lVar33 + (long)(int)uVar29 * 0x188 + 0x164);
            }
            lVar33 = lVar27 + lVar23 * 0x60;
            *(float *)(lVar33 + 0x48) = fVar64;
            *(float *)(lVar33 + 0x60) = fStack0000000000000168;
            if (*(int *)(lVar33 + 0x24) == 1) {
              *(undefined4 *)(lVar27 + lVar23 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
            }
            if (*unaff_x26 != 0) {
              fVar64 = (float)FUN_06123138(*unaff_x26,0);
              lVar27 = *plVar1;
              if (lVar27 != 0) {
                lVar23 = (long)(int)*(uint *)(unaff_x19 + 0x33c);
                if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x33c)) goto LAB_061347f8;
                lVar33 = *(long *)(in_stack_00000130 + 0x48);
                if (lVar33 != 0) {
                  uVar18 = *(uint *)(in_stack_00000148 + 0x5c);
                  if (((*(char *)(lVar27 + lVar23 * 0x188 + 0x1a0) == '\0') &&
                      (lVar23 = (long)(int)*(uint *)(unaff_x19 + 0x334),
                      *(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x334))) ||
                     (uVar36 = *(uint *)(lVar33 + 0x18), uVar36 <= uVar18)) goto LAB_061347f8;
                  fVar64 = (1.0 - *(float *)(unaff_x19 + 0x159c)) *
                           (*(float *)(unaff_x19 + 0x2ec) +
                           fVar38 * (fStack0000000000000128 + fVar56 + fVar64));
                  fVar56 = -fVar64;
                  if (*(char *)(unaff_x22 + 0xe2) != '\0') {
                    fVar56 = fVar64;
                  }
                  *(float *)(lVar33 + (long)(int)uVar18 * 0x60 + 0x5c) =
                       *(float *)(lVar27 + lVar23 * 0x188 + 0x164) + fVar56;
                  if (uVar36 <= uVar18) goto LAB_061347f8;
                  lVar33 = lVar33 + (long)(int)uVar18 * 0x60;
                  *(float *)(lVar33 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
                  *(float *)(lVar33 + 0x58) = fVar43;
                  *(float *)(lVar33 + 0x4c) = fVar59 * fStack0000000000000194 + (fVar45 - fVar43);
                  *(float *)(lVar33 + 0x50) = fVar45;
                  uVar36 = *unaff_x21;
                  if ((int)uVar36 < 0x2d) {
                    if (uVar36 - 10 < 2) {
LAB_06133d5c:
                      FUN_0613bf50();
                      uVar15 = *(uint *)(unaff_x19 + 0x32c);
                      iVar16 = *(int *)(unaff_x19 + 0x348) + 1;
                      *(int *)(unaff_x19 + 0x348) = iVar16;
                      *(uint *)(unaff_x19 + 0x330) = uVar15 + 1;
                      *(undefined8 *)(in_stack_00000148 + 0x60) = 0;
                      if (*(long *)(in_stack_00000130 + 0x48) != 0) {
                        if (*(int *)(*(long *)(in_stack_00000130 + 0x48) + 0x18) <= iVar16) {
                          if (*(int *)(*(long *)
                                        Method_UnityEngine_ManagedStreamHelpers_ManagedStreamRead__
                                      + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          FUN_06160ec4(iVar16,in_stack_00000130,0);
                          uVar15 = *unaff_x27;
                        }
                        lVar27 = *plVar1;
                        if (lVar27 != 0) {
                          if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
                          fVar56 = *(float *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x158);
                          if (*(float *)(unaff_x19 + 0x2e4) == DAT_01208490) {
                            if ((*unaff_x21 == 0x2029) || (fVar64 = 0.0, *unaff_x21 == 10)) {
                              fVar64 = *(float *)(unaff_x22 + 0xf8);
                            }
                            uVar26 = 0;
                            fVar64 = fVar56 + (0.0 - *(float *)(unaff_x19 + 0x344)) +
                                     fVar59 * (fStack0000000000000194 +
                                              *(float *)(unaff_x19 + 0x15b4)) +
                                     fVar38 * (*(float *)(unaff_x22 + 0xf4) + fVar64) +
                                     *(float *)(unaff_x19 + 0x2e0);
                          }
                          else {
                            if ((*unaff_x21 == 0x2029) || (fVar64 = 0.0, *unaff_x21 == 10)) {
                              fVar64 = *(float *)(unaff_x22 + 0xf8);
                            }
                            uVar26 = 1;
                            fVar64 = *(float *)(unaff_x19 + 0x2e0) +
                                     *(float *)(unaff_x19 + 0x2e4) +
                                     fVar38 * (*(float *)(unaff_x22 + 0xf4) + fVar64);
                          }
                          *(float *)(unaff_x19 + 0x2e0) = fVar64;
                          *(float *)(unaff_x19 + 0x15b0) = fVar56;
                          *(undefined1 *)(unaff_x19 + 0x2e8) = uVar26;
                          *(undefined8 *)(unaff_x19 + 0x340) = in_stack_00000068;
                          *(float *)(unaff_x19 + 0x2f8) =
                               *(float *)(unaff_x19 + 0x2fc) + 0.0 + *(float *)(unaff_x19 + 0x300);
                          FUN_0613bf50();
                          FUN_0613bf50();
                          *(int *)(unaff_x19 + 0x32c) = *(int *)(unaff_x19 + 0x32c) + 1;
                          goto LAB_06133fe4;
                        }
                      }
                      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                    }
                    if (uVar36 == 3) {
                      if (*(long *)(unaff_x19 + 0x20) == 0)
                      goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                      uVar66 = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
                    }
                  }
                  else if ((uVar36 - 0x2028 < 2) || (uVar36 == 0x2d)) goto LAB_06133d5c;
LAB_06133e78:
                  uVar35 = *unaff_x27;
                  uVar18 = *(uint *)(lVar27 + 0x18);
                  if (uVar18 <= uVar35) goto LAB_061347f8;
                  if (*(char *)(lVar27 + (long)(int)uVar35 * 0x188 + 0x1a0) != '\0') {
                    lVar23 = lVar27 + (long)(int)uVar35 * 0x188;
                    uVar22 = *(ulong *)(unaff_x19 + 0x368);
                    uVar51 = *(ulong *)(lVar23 + 0x124);
                    *(ulong *)(unaff_x19 + 0x368) =
                         uVar22 ^ (uVar22 ^ uVar51) &
                                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) <
                                                   (float)(uVar51 >> 0x20)),
                                            -(uint)((float)uVar22 < (float)uVar51));
                    uVar22 = *(ulong *)(unaff_x19 + 0x370);
                    uVar51 = *(ulong *)(lVar23 + 0x130);
                    *(ulong *)(unaff_x19 + 0x370) =
                         uVar22 ^ (uVar22 ^ uVar51) &
                                  ~CONCAT44(-(uint)((float)(uVar51 >> 0x20) <
                                                   (float)(uVar22 >> 0x20)),
                                            -(uint)((float)uVar51 < (float)uVar22));
                  }
                  if (((in_stack_00000110 != 3) && (in_stack_00000110 != 0)) ||
                     ((*(uint *)(unaff_x22 + 0x94) < 7 &&
                      ((1 << (ulong)(*(uint *)(unaff_x22 + 0x94) & 0x1f) & 0x4aU) != 0)))) {
                    if ((uStack000000000000018c == 0) && (uVar36 != 0x200b)) {
                      if (uVar36 == 0x2d) {
                        if (0 < (int)uVar35) {
                          if (uVar18 <= uVar35 - 1) goto LAB_061347f8;
                          uVar44 = *(undefined4 *)(lVar27 + (ulong)(uVar35 - 1) * 0x188 + 0x20);
                          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar22 = FUN_04f80ed4(uVar44,0);
                          if ((uVar22 & 1) != 0) {
                            uVar36 = *unaff_x21;
                            goto LAB_06134098;
                          }
                        }
                        goto LAB_06133f00;
                      }
LAB_06134098:
                      if (uVar36 == 0xad) goto LAB_06133f00;
                      if (*(char *)(unaff_x19 + 0x385) == '\0') goto LAB_061340f4;
                      if (bVar10 == 0) goto LAB_06134390;
                      uVar15 = *unaff_x21;
LAB_061340b4:
                      if (!bVar9 && uVar15 == 0xad) {
LAB_061340c8:
                        FUN_0613bf50();
                      }
                    }
                    else {
LAB_06133f00:
                      if (*(char *)(unaff_x19 + 0x385) == '\x01') {
LAB_06133f0c:
                        uVar15 = 0;
LAB_06133f14:
                        if (bVar10 == 1) {
                          uVar15 = *unaff_x21;
                          if (uStack000000000000018c == 0) goto LAB_061340b4;
                          if (uVar15 != 0xa0) goto LAB_061340c8;
                        }
                        else {
LAB_061342ac:
                          if (uVar15 == 0) goto LAB_06134390;
                        }
                      }
                      else {
                        uVar36 = *unaff_x21;
                        if ((int)uVar36 < 0x2007) {
                          if (uVar36 == 0x2d) {
                            uVar15 = *unaff_x27 - 1;
                            if (0 < (int)*unaff_x27) {
                              lVar27 = *plVar1;
                              if (lVar27 == 0)
                              goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                              if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
                              uVar44 = *(undefined4 *)(lVar27 + (ulong)uVar15 * 0x188 + 0x20);
                              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                                thunk_FUN_02dbd7b4();
                              }
                              uVar22 = FUN_04f80ed4(uVar44,0);
                              if ((uVar22 & 1) != 0) goto LAB_06134390;
                            }
                          }
                          else if (uVar36 == 0xa0) goto LAB_061340f4;
                        }
                        else if (((uVar36 - 0x2007 < 0x29) &&
                                 ((1L << ((ulong)(uVar36 - 0x2007) & 0x3f) & 0x10000000401U) != 0))
                                || (uVar36 == 0x2060)) {
LAB_061340f4:
                          if (*(int *)(*(long *)
                                        Method_UnityEngine_ManagedStreamHelpers_ManagedStreamRead__
                                      + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar22 = FUN_06161840(uVar36,0);
                          if ((uVar22 & 1) == 0) {
LAB_0613413c:
                            uVar18 = *unaff_x21;
                            if (*(int *)(*(long *)
                                          Method_UnityEngine_ManagedStreamHelpers_ManagedStreamRead__
                                        + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4();
                            }
                            uVar22 = FUN_061618b0(uVar18,0);
                            if ((uVar22 & 1) == 0) {
                              if ((*(char *)(unaff_x19 + 0x385) != '\0') ||
                                 (uVar15 = *unaff_x27 + 1, in_stack_00000078._4_4_ <= (int)uVar15))
                              goto LAB_06133f0c;
                              lVar27 = *plVar1;
                              if (lVar27 != 0) {
                                if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_061347f8;
                                uVar44 = *(undefined4 *)(lVar27 + (long)(int)uVar15 * 0x188 + 0x20);
                                if (*(int *)(*(long *)
                                              Method_UnityEngine_ManagedStreamHelpers_ManagedStreamRead__
                                            + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                }
                                uVar15 = FUN_061618b0(uVar44,0);
                                uVar15 = uVar15 & 1;
                                if (uVar15 == 0) goto LAB_06133f14;
                                goto LAB_061342ac;
                              }
                              goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                            }
                            if (in_stack_00000048 == 0)
                            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                          }
                          else {
                            if ((in_stack_00000048 == 0) ||
                               (lVar27 = FUN_0615647c(in_stack_00000048,0), lVar27 == 0))
                            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                            if (*(char *)(lVar27 + 0x28) != '\0') goto LAB_0613413c;
                          }
                          lVar27 = FUN_0615647c(in_stack_00000048,0);
                          if ((lVar27 == 0) || (lVar27 = FUN_06169df8(lVar27,0), lVar27 == 0))
                          goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                          uVar22 = FUN_0375348c(lVar27,*unaff_x21,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_ToArray<string>__
                                               );
                          if ((int)*unaff_x27 < (int)uVar6) {
                            lVar27 = FUN_0615647c(in_stack_00000048,0);
                            if (lVar27 == 0)
                            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                            lVar27 = FUN_0616a040(lVar27,0);
                            lVar23 = *plVar1;
                            if (lVar23 == 0)
                            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                            if (*(uint *)(lVar23 + 0x18) <= *unaff_x27 + 1) {
LAB_061347f8:
                    /* WARNING: Subroutine does not return */
                              FUN_02d60af0();
                            }
                            if (lVar27 == 0)
                            goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
                            uVar18 = FUN_0375348c(lVar27,*(undefined4 *)
                                                          (lVar23 + (long)(int)(*unaff_x27 + 1) *
                                                                    0x188 + 0x20),
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_ToArray<string>__
                                                 );
                            uVar18 = uVar18 & 1;
                            if ((uVar22 & 1) != 0) goto LAB_061342bc;
LAB_0613420c:
                            bVar14 = bVar10 & uVar18 != 0;
                            bVar13 = (bool)(bVar14 & uStack000000000000018c != 0);
                            bVar11 = bVar10 != 0;
                            bVar10 = bVar14;
                            if (bVar11 || uVar18 == 0) goto LAB_061342e4;
                          }
                          else {
                            uVar18 = 0;
                            if ((uVar22 & 1) == 0) goto LAB_0613420c;
LAB_061342bc:
                            bVar13 = uStack000000000000018c != 0;
                            if ((bVar10 & uVar15 == uVar19) == 0) goto LAB_06134390;
                            bVar14 = 1;
LAB_061342e4:
                            FUN_0613bf50();
                            bVar10 = bVar14;
                          }
                          if (bVar13 == false) goto LAB_06134390;
                          goto LAB_06134384;
                        }
                        bVar10 = 0;
                        *piStack0000000000000040 = -1;
                      }
                    }
LAB_06134384:
                    FUN_0613bf50();
                  }
LAB_06134390:
                  FUN_0613bf50();
                  *(int *)(unaff_x19 + 0x32c) = *(int *)(unaff_x19 + 0x32c) + 1;
                  in_stack_000011c0 = uVar20;
                  fStack0000000000000150 = fVar39;
                  goto LAB_061343b8;
                }
              }
            }
          }
        }
      }
    }
  }
  goto UnityEngine_UIElements_UIR_MeshGenerator__AdjustSpriteWinding;
}


