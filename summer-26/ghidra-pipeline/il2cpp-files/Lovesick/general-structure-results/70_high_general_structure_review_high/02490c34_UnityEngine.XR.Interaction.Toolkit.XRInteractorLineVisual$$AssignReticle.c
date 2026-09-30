/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual$$AssignReticle
ENTRY_POINT: 02490c34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AssignReticle
               (long param_1,undefined1 param_2 [16],float param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 in_x9;
  uint uVar18;
  float in_w11;
  long lVar19;
  long lVar20;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar21;
  long unaff_x21;
  long lVar22;
  uint unaff_w22;
  long lVar23;
  undefined8 uVar24;
  long *unaff_x25;
  long unaff_x26;
  uint uVar25;
  long *unaff_x27;
  undefined1 *unaff_x28;
  long unaff_x29;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_s13;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_s15;
  undefined8 in_stack_00000020;
  int iStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  int iStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  float in_stack_00000090;
  undefined4 uStack0000000000000094;
  float in_stack_00000098;
  float fStack00000000000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  uint uStack00000000000000e8;
  uint uStack00000000000000ec;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  uint in_stack_00000138;
  int *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  undefined4 in_stack_000017a4;
  
code_r0x02490c34:
                    /* catch() { ... } // from try @ 024908cc with catch @ 02490c34 */
                    /* catch() { ... } // from try @ 02490a70 with catch @ 02490c38 */
  uStack0000000000000094 = 0;
  fStack00000000000000a0 = param_3;
LAB_02490c44:
                    /* try { // try from 02490c48 to 02590c4b has its CatchHandler @ 02490d70 */
  if (unaff_w22 < (uint)in_x9) {
                    /* try { // try from 02490c4c to 02590c77 has its CatchHandler @ 024906d4 */
    param_1 = param_1 + unaff_x26 * unaff_x29;
    in_stack_00000178 = *(undefined8 *)(unaff_x28 + 0xf18);
    in_stack_00000170 = *(undefined8 *)(unaff_x28 + 0xf10);
    fVar27 = *(float *)(param_1 + 0x128);
    fVar33 = *(float *)(param_1 + 0x188);
                    /* catch() { ... } // from try @ 02490948 with catch @ 02490c68 */
    uVar24 = *(undefined8 *)(param_1 + 0x17c);
    fVar37 = *(float *)(param_1 + 0x184);
    uVar21 = *(undefined8 *)(param_1 + 0x184);
    fVar35 = *(float *)(param_1 + 0x18c);
    fVar30 = *(float *)(param_1 + 0x11c);
                    /* try { // try from 02490c78 to 02590c7b has its CatchHandler @ 02490d4c */
    fVar29 = *(float *)(param_1 + 0x148);
                    /* try { // try from 02490c7c to 02590ca7 has its CatchHandler @ 024906d4 */
    fVar31 = *(float *)(param_1 + 0x150);
    in_stack_00000158 = uVar24;
    fStack0000000000000160 = fVar37;
    fStack0000000000000164 = fVar33;
    in_stack_00000168 = fVar35;
    in_stack_00000180 = in_w11;
                    /* catch() { ... } // from try @ 02490828 with catch @ 02490c98 */
                    /* try { // try from 02490ca8 to 02590cab has its CatchHandler @ 02490d28 */
    uVar11 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
                    /* try { // try from 02490cac to 02590d37 has its CatchHandler @ 024906d4 */
    lVar15 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 02490c48 with catch @ 02490d70 */
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
      }
                    /* try { // try from 02490d88 to 02590d93 has its CatchHandler @ 024906d4 */
                    /* try { // try from 02490d94 to 02590d9b has its CatchHandler @ 02490d9c */
                    /* catch() { ... } // from try @ 02490d38 with catch @ 02490d9c
                       catch() { ... } // from try @ 02490d94 with catch @ 02490d9c */
      fVar27 = fVar27 + (float)in_stack_00001798;
                    /* try { // try from 02490da0 to 0259107f has its CatchHandler @ 02490da0
                       catch() { ... } // from try @ 02490da0 with catch @ 02490da0
                       catch() { ... } // from try @ 02491208 with catch @ 02490da0
                       catch() { ... } // from try @ 0249123c with catch @ 02490da0
                       catch() { ... } // from try @ 024912bc with catch @ 02490da0
                       catch() { ... } // from try @ 02491308 with catch @ 02490da0
                       catch() { ... } // from try @ 02491390 with catch @ 02490da0
                       catch() { ... } // from try @ 024913c0 with catch @ 02490da0 */
      fVar30 = fVar30 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar29 = fVar29 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar30 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar30;
      }
      if (fVar31 - in_w11 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar31 - in_w11;
      }
      if (in_stack_00000098 <= fVar27) {
        in_stack_00000098 = fVar27;
      }
      if (fStack00000000000000a0 <= fVar29) {
        fStack00000000000000a0 = fVar29;
      }
    }
    else {
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar15);
      }
      fVar30 = (fVar30 + (in_stack_00000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar31 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar31;
      }
      if (fStack00000000000000a0 <= fVar29) {
        fStack00000000000000a0 = fVar29;
      }
                    /* catch() { ... } // from try @ 02490ca8 with catch @ 02490d28 */
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar30,
                 fStack00000000000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar31 - fVar35;
                    /* try { // try from 02490d38 to 02590d87 has its CatchHandler @ 02490d9c */
                    /* catch() { ... } // from try @ 02490c78 with catch @ 02490d4c */
      in_stack_00000098 = fVar27 + fVar37;
      uStack0000000000000094 = 0;
      fStack00000000000000a0 = fVar29 + fVar33;
      fStack00000000000000a8 = fVar30;
      in_stack_00001790 = uVar24;
      in_stack_00001798 = uVar21;
      in_w11 = fVar35;
    }
    uVar14 = in_stack_00000138;
    if ((((*in_stack_00000148 == 1) || (unaff_w22 == (uint)in_stack_000000b0)) ||
        ((int)in_stack_00000118 <= (int)unaff_w22)) || ((unaff_w20 & 1) == 0)) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 in_stack_00000098,fStack00000000000000a0,uStack0000000000000094);
      bVar6 = false;
      unaff_w22 = in_stack_00000130._4_4_;
    }
    else {
      bVar6 = true;
      unaff_w22 = in_stack_00000130._4_4_;
    }
LAB_02490e2c:
    puVar7 = PTR_DAT_033ed410;
    iVar9 = *in_stack_00000148;
    in_stack_000000e0._4_4_ = in_stack_000000e0._4_4_ + 1;
    in_stack_00000130._4_4_ = unaff_w22 + 1;
    in_stack_00000128 = in_stack_00000128 + 0x178;
    if (iVar9 <= (int)unaff_w22) {
      lVar15 = *unaff_x25;
      if (lVar15 == 0) goto LAB_02491464;
      *(int *)(lVar15 + 0x18) = iVar9;
      lVar23 = unaff_x19[0xd3];
      *(uint *)(lVar15 + 0x2c) = uVar14 + 1;
      iVar10 = iStack00000000000000a4;
      if (iVar9 < 1) {
        iVar10 = 1;
      }
      if (iStack00000000000000a4 == 0) {
        iVar10 = 1;
      }
      *(int *)(lVar15 + 0x1c) = (int)lVar23;
      *(int *)(lVar15 + 0x24) = iVar10;
      *(int *)(lVar15 + 0x30) = (int)unaff_x19[0x95] + 1;
      if (((int)unaff_x19[0x62] != 0xff) ||
         (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_02491468;
      lVar15 = unaff_x19[0xda];
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 0x18))
                  (*(undefined8 *)(lVar15 + 0x40),*unaff_x25,*(undefined8 *)(lVar15 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*unaff_x25 == 0) || (lVar15 = *(long *)(*unaff_x25 + 0x60), lVar15 == 0))
        goto LAB_02491464;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar15 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        FUN_024e8000(lVar15 + 0x20,1,0);
      }
      if (unaff_x19[0x73] == 0) goto LAB_02491464;
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
      goto LAB_02491464;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x73] == 0) goto LAB_02491464;
      FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x30),0);
      if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
      goto LAB_02491464;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x73] == 0) goto LAB_02491464;
      FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x48),0);
      if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
      goto LAB_02491464;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x73] == 0) goto LAB_02491464;
      FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x50),0);
      if ((unaff_x19[0x6c] == 0) || (lVar15 = *(long *)(unaff_x19[0x6c] + 0x60), lVar15 == 0))
      goto LAB_02491464;
      if (*(int *)(lVar15 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x73] == 0) goto LAB_02491464;
      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar15 + 0x58),0);
      if (unaff_x19[0x73] == 0) goto LAB_02491464;
      FUN_0266ed90(unaff_x19[0x73],0);
      lVar15 = *unaff_x25;
      if (lVar15 == 0) goto LAB_02491464;
      lVar22 = 0;
      lVar23 = 0;
      goto LAB_024911f4;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*unaff_x25 == 0) || (lVar15 = *(long *)(*unaff_x25 + 0x50), lVar15 == 0))
    goto LAB_02491464;
    unaff_x26 = (long)(int)unaff_w22;
    lVar23 = unaff_x21 + unaff_x26 * unaff_x29;
    in_stack_00000138 = *(uint *)(lVar23 + 100);
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000138)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = *(long *)(lVar23 + 0x38);
    uVar18 = (uint)*(ushort *)(lVar23 + 0x20);
    lVar23 = (long)(int)in_stack_00000138;
    lVar15 = lVar15 + lVar23 * 0x5c;
    uVar2 = *(uint *)(lVar15 + 0x3c);
    in_stack_000000b0 = (long)(int)uVar2;
    uVar3 = *(uint *)(lVar15 + 0x40);
    in_stack_00000118 = (long)(int)uVar3;
    iVar9 = *(int *)(lVar15 + 0x28);
    iVar10 = *(int *)(lVar15 + 0x2c);
    uVar25 = *(uint *)(lVar15 + 0x68);
    fVar32 = *(float *)(lVar15 + 0x5c);
    fVar34 = *(float *)(lVar15 + 0x60);
    iVar4 = *(int *)(lVar15 + 0x20);
    fVar29 = *(float *)(lVar15 + 0x4c);
    fVar33 = *(float *)(lVar15 + 0x54);
    fVar30 = *(float *)(lVar15 + 0x58);
    fVar37 = *(float *)(lVar15 + 0x6c);
    fVar35 = *(float *)(lVar15 + 0x70);
    fVar27 = *(float *)(lVar15 + 0x74);
    fVar31 = *(float *)(lVar15 + 0x78);
    fVar36 = fVar32 + fVar34;
    if ((int)uVar25 < 9) {
      switch(uVar25) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c0._4_4_ = fVar34 + 0.0;
        }
        else {
          in_stack_000000c0._4_4_ = 0.0 - fVar30;
        }
        break;
      case 2:
LAB_0248f124:
        in_stack_000000c0._4_4_ = (fVar34 + fVar32 * 0.5) - fVar30 * 0.5;
        break;
      default:
        goto switchD_0248f070_caseD_3;
      case 4:
        in_stack_000000c0._4_4_ = fVar36 - fVar30;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar36;
        }
        break;
      case 8:
        goto switchD_0248f070_caseD_8;
      }
LAB_0248f194:
      in_stack_000000b8 = 0;
    }
    else if (uVar25 == 0x10) {
switchD_0248f070_caseD_8:
      if (uVar18 < 0xad) {
        if ((uVar18 != 3) && (uVar18 != 10)) goto LAB_0248f0c8;
      }
      else if ((uVar18 != 0xad) && ((uVar18 != 0x200b && (uVar18 != 0x2060)))) {
LAB_0248f0c8:
        if (*(uint *)(unaff_x21 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar5 = *(undefined2 *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f9f84(uVar5,0);
        if ((uVar11 & 1) == 0) {
          bVar1 = (int)in_stack_00000138 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar30 <= fVar32) && (!bVar1 && (uVar25 >> 4 & 1) == 0)) {
          in_stack_000000c0._4_4_ = fVar34;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c0._4_4_ = fVar36;
          }
          goto LAB_0248f194;
        }
        if (((in_stack_00000130._4_4_ == 1) || (in_stack_00000138 != uVar14)) ||
           (unaff_w22 == *(uint *)((long)unaff_x19 + 0x31c))) {
          in_stack_000000c0._4_4_ = fVar34;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c0._4_4_ = fVar36;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00000020._4_4_ = FUN_016fa418(uVar18,0);
          in_stack_000000b8 = 0;
        }
        else {
          cVar13 = (char)unaff_x19[0x1d];
          fVar34 = -fVar30;
          if (cVar13 != '\0') {
            fVar34 = fVar30;
          }
          if (*(uint *)(unaff_x21 + 0x18) <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar30 = 1.0;
          iVar10 = (int)*(char *)(unaff_x21 + in_stack_000000b0 * unaff_x29 + 0x194) +
                   (-iVar4 - (in_stack_00000020._4_4_ & 1)) + iVar10 + -1;
          if (0 < iVar10) {
            fVar30 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar10 < 1) {
            iVar10 = 1;
          }
          if (uVar18 == 9) {
LAB_02490fe0:
            fVar30 = 1.0 - fVar30;
          }
          else {
            if (uVar18 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_016fa418(uVar18,0);
              cVar13 = (char)unaff_x19[0x1d];
              if ((uVar11 & 1) != 0) goto LAB_02490fe0;
            }
            iVar10 = (iVar4 - (~in_stack_00000020._4_4_ & 1)) + iVar9;
          }
          fVar30 = ((fVar32 + fVar34) * fVar30) / (float)iVar10;
          if (cVar13 == '\0') {
            in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar30;
            in_stack_000000b8 =
                 CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                          (float)in_stack_000000b8 + 0.0);
          }
          else {
            in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar30;
          }
        }
      }
    }
    else if (uVar25 == 0x20) {
      fVar30 = fVar37 + fVar27;
      goto LAB_0248f124;
    }
switchD_0248f070_caseD_3:
    uVar25 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
    if (uVar25 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar15 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar34 = in_stack_00000090 + in_stack_000000c0._4_4_;
    fVar30 = (float)in_stack_00000088 + (float)in_stack_000000b8;
    fVar32 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
    unaff_x27 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (*(char *)(lVar15 + 0x194) == '\0') goto LAB_0248fabc;
    iVar9 = *(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x2c);
    if (iVar9 != 0) goto LAB_0248f808;
    fVar36 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)in_stack_00000138,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
      *(undefined4 *)(lVar16 + 0x84) = 0;
      *(undefined4 *)(lVar16 + 0xac) = 0;
      *(undefined4 *)(lVar16 + 0xd4) = 0x3f800000;
      fVar36 = 1.0;
      break;
    case 1:
      fVar31 = *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
        fVar27 = (in_stack_000000c0._4_4_ + fVar31) - *(float *)(in_stack_00000070 + 0x230);
        fVar31 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_0248f2dc;
      }
      lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar27 = fVar27 - fVar37;
      *(float *)(lVar16 + 0x84) = fVar36 + (fVar31 - fVar37) / fVar27;
      *(float *)(lVar16 + 0xac) = fVar36 + (*(float *)(lVar16 + 0x98) - fVar37) / fVar27;
      *(float *)(lVar16 + 0xd4) = fVar36 + (*(float *)(lVar16 + 0xc0) - fVar37) / fVar27;
      fVar36 = fVar36 + (*(float *)(lVar16 + 0xe8) - fVar37) / fVar27;
      break;
    case 2:
      lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar31 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar27 = (in_stack_000000c0._4_4_ + *(float *)(lVar16 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
      *(float *)(lVar16 + 0x84) = fVar36 + fVar27 / fVar31;
      *(float *)(lVar16 + 0xac) =
           fVar36 + ((in_stack_000000c0._4_4_ + *(float *)(lVar16 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar16 + 0xd4) =
           fVar36 + ((in_stack_000000c0._4_4_ + *(float *)(lVar16 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar36 = fVar36 + ((in_stack_000000c0._4_4_ + *(float *)(lVar16 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
        *(undefined4 *)(lVar16 + 0x88) = 0;
        *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar16 + 0xd8) = 0;
        *(undefined4 *)(lVar16 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
        fVar31 = fVar31 - fVar35;
        fVar27 = fVar36 + (*(float *)(lVar16 + 0x74) - fVar35) / fVar31;
        fVar31 = fVar36 + (*(float *)(lVar16 + 0x9c) - fVar35) / fVar31;
        *(float *)(lVar16 + 0x88) = fVar27;
        *(float *)(lVar16 + 0xb0) = fVar31;
        *(float *)(lVar16 + 0xd8) = fVar27;
        *(float *)(lVar16 + 0x100) = fVar31;
        break;
      case 2:
        lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
        fVar27 = fVar36 + (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar16 + 0x88) = fVar27;
        fVar31 = *(float *)(unaff_x19 + 0x9b);
        fVar35 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar16 + 0xd8) = fVar27;
        fVar27 = fVar36 + (*(float *)(lVar16 + 0x9c) - fVar31) / (fVar35 - fVar31);
        *(float *)(lVar16 + 0xb0) = fVar27;
        *(float *)(lVar16 + 0x100) = fVar27;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar25 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
      }
      if (uVar25 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar27 = *(float *)(lVar16 + 0x15c);
      fVar31 = (1.0 - (*(float *)(lVar16 + 0x88) + *(float *)(lVar16 + 0xb0)) * fVar27) * 0.5;
      fVar35 = fVar36 + *(float *)(lVar16 + 0x88) * fVar27 + fVar31;
      fVar36 = fVar36 + fVar31 + *(float *)(lVar16 + 0xb0) * fVar27;
      *(float *)(lVar16 + 0x84) = fVar35;
      *(float *)(lVar16 + 0xac) = fVar35;
      *(float *)(lVar16 + 0xd4) = fVar36;
      break;
    default:
      goto switchD_0248f240_default;
    }
    *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = fVar36;
switchD_0248f240_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar25 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
      *(undefined4 *)(lVar16 + 0x88) = 0;
      *(undefined4 *)(lVar16 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar16 + 0x100) = 0;
      break;
    case 1:
      if (unaff_w22 < uVar25) {
        lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
        fVar29 = fVar29 - fVar33;
        fVar27 = (*(float *)(lVar16 + 0x74) - fVar33) / fVar29;
        fVar29 = (*(float *)(lVar16 + 0x9c) - fVar33) / fVar29;
        *(float *)(lVar16 + 0x88) = fVar27;
        goto LAB_0248f644;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    case 2:
      if (uVar25 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar27 = (*(float *)(lVar16 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar16 + 0x88) = fVar27;
      fVar29 = (*(float *)(lVar16 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
      *(float *)(lVar16 + 0xb0) = fVar29;
      *(float *)(lVar16 + 0xd8) = fVar29;
      *(float *)(lVar16 + 0x100) = fVar27;
      break;
    case 3:
      if (uVar25 <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
      fVar31 = *(float *)(lVar16 + 0x15c);
      fVar29 = (1.0 - (*(float *)(lVar16 + 0x84) + *(float *)(lVar16 + 0xd4)) / fVar31) * 0.5;
      fVar27 = *(float *)(lVar16 + 0x84) / fVar31 + fVar29;
      fVar29 = fVar29 + *(float *)(lVar16 + 0xd4) / fVar31;
      *(float *)(lVar16 + 0x88) = fVar27;
      *(float *)(lVar16 + 0xb0) = fVar29;
      *(float *)(lVar16 + 0x100) = fVar27;
      *(float *)(lVar16 + 0xd8) = fVar29;
    }
    if (uVar25 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
    unaff_s13 = in_stack_00000040 * *(float *)(lVar16 + 0x160) *
                (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar16 + 0x5c) == '\0') &&
       ((*(byte *)(unaff_x21 + unaff_x26 * unaff_x29 + 400) & 1) != 0)) {
      unaff_s13 = -unaff_s13;
    }
    lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
    fVar29 = *(float *)(lVar16 + 0x88);
    fVar31 = *(float *)(lVar16 + 0x84);
    fVar27 = -2.1474836e+09;
    if (fVar31 != INFINITY) {
      fVar27 = (float)(int)fVar31;
    }
    fVar35 = *(float *)(lVar16 + 0xd4);
    fVar37 = *(float *)(lVar16 + 0xd8);
    fVar33 = -2.1474836e+09;
    if (fVar29 != INFINITY) {
      fVar33 = (float)(int)fVar29;
    }
    uVar26 = FUN_024e0374(fVar31 - fVar27,fVar29 - fVar33);
    *(undefined4 *)(lVar16 + 0x84) = uVar26;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar37 = fVar37 - fVar33;
    *(float *)(lVar16 + 0x88) = unaff_s13;
    uVar26 = FUN_024e0374(fVar31 - fVar27,fVar37);
    *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xac) = uVar26;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar35 = fVar35 - fVar27;
    *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xb0) = unaff_s13;
    fVar27 = (float)FUN_024e0374(fVar35,fVar37);
    *(float *)(lVar16 + 0xd4) = fVar27;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(float *)(lVar16 + 0xd8) = unaff_s13;
    uVar26 = FUN_024e0374(fVar35,fVar29 - fVar33);
    *(undefined4 *)(unaff_x21 + unaff_x26 * unaff_x29 + 0xfc) = uVar26;
    uVar25 = (uint)*(undefined8 *)(unaff_x21 + 0x18);
    if (uVar25 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(float *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x100) = unaff_s13;
LAB_0248f808:
    if (((int)unaff_w22 < (int)unaff_x19[100]) &&
       (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
      if (((int)in_stack_00000138 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
        if (uVar25 <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = unaff_x21 + unaff_x26 * unaff_x29;
        *(ulong *)(lVar15 + 0x70) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                      fVar34 + (float)*(undefined8 *)(lVar15 + 0x70));
        *(float *)(lVar15 + 0x78) = fVar32 + *(float *)(lVar15 + 0x78);
        unaff_x27 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = unaff_x21 + unaff_x26 * unaff_x29;
        *(ulong *)(lVar15 + 0x98) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                      fVar34 + (float)*(undefined8 *)(lVar15 + 0x98));
        *(float *)(lVar15 + 0xa0) = fVar32 + *(float *)(lVar15 + 0xa0);
        uVar25 = *(uint *)(unaff_x21 + 0x18);
LAB_0248fa4c:
        if (uVar25 <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = unaff_x21 + unaff_x26 * unaff_x29;
        *(ulong *)(lVar15 + 0xc0) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0xc0) >> 0x20),
                      fVar34 + (float)*(undefined8 *)(lVar15 + 0xc0));
        *(float *)(lVar15 + 200) = fVar32 + *(float *)(lVar15 + 200);
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = unaff_x21 + unaff_x26 * unaff_x29;
        *(ulong *)(lVar15 + 0xe8) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0xe8) >> 0x20),
                      fVar34 + (float)*(undefined8 *)(lVar15 + 0xe8));
        *(float *)(lVar15 + 0xf0) = fVar32 + *(float *)(lVar15 + 0xf0);
        if (iVar9 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
        pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
        (*pcVar17)();
        goto LAB_0248fabc;
      }
      if (((int)in_stack_00000138 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (unaff_w22 < uVar25) {
          if (*(int *)(unaff_x21 + unaff_x26 * unaff_x29 + 0x68) != iStack0000000000000030)
          goto LAB_0248f8d8;
          lVar15 = unaff_x21 + unaff_x26 * unaff_x29;
          *(ulong *)(lVar15 + 0x70) =
               CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20),
                        fVar34 + (float)*(undefined8 *)(lVar15 + 0x70));
          *(float *)(lVar15 + 0x78) = fVar32 + *(float *)(lVar15 + 0x78);
          if (unaff_w22 < *(uint *)(unaff_x21 + 0x18)) {
            lVar15 = unaff_x21 + unaff_x26 * unaff_x29;
            *(ulong *)(lVar15 + 0x98) =
                 CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20),
                          fVar34 + (float)*(undefined8 *)(lVar15 + 0x98));
            *(float *)(lVar15 + 0xa0) = fVar32 + *(float *)(lVar15 + 0xa0);
            uVar25 = *(uint *)(unaff_x21 + 0x18);
            unaff_x27 = (long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
            goto LAB_0248fa4c;
          }
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
    }
LAB_0248f8d8:
    if (uVar25 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
    uVar26 = *(undefined4 *)
              (*(undefined8 **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8) + 1);
    *(undefined8 *)(lVar16 + 0x70) =
         **(undefined8 **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    *(undefined4 *)(lVar16 + 0x78) = uVar26;
    unaff_x27 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
    uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar16 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar16 + 0xa0) = uVar26;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
    uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar16 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar16 + 200) = uVar26;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar16 = unaff_x21 + unaff_x26 * unaff_x29;
    uVar26 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
    *(undefined8 *)(lVar16 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
    *(undefined4 *)(lVar16 + 0xf0) = uVar26;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar15 + 0x194) = 0;
    if (iVar9 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
    if (iVar9 == 1) {
      pcVar17 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_0248faa8;
    }
LAB_0248fabc:
    if ((*in_stack_00000150 == 0) || (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar15 = lVar15 + unaff_x26 * unaff_x29;
    uVar21 = *(undefined8 *)(lVar15 + 0x11c);
    *(undefined8 *)(lVar15 + 0x11c) =
         CONCAT44(fVar30 + (float)((ulong)uVar21 >> 0x20),fVar34 + (float)uVar21);
    *(float *)(lVar15 + 0x124) = fVar32 + *(float *)(lVar15 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar15 = lVar15 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar15 + 0x110) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0x110) >> 0x20),
                  fVar34 + (float)*(undefined8 *)(lVar15 + 0x110));
    *(float *)(lVar15 + 0x118) = fVar32 + *(float *)(lVar15 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar15 = lVar15 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar15 + 0x128) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar15 + 0x128) >> 0x20),
                  fVar34 + (float)*(undefined8 *)(lVar15 + 0x128));
    *(float *)(lVar15 + 0x130) = fVar32 + *(float *)(lVar15 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar15 = lVar15 + unaff_x26 * unaff_x29;
    *(float *)(lVar15 + 0x134) = fVar34 + *(float *)(lVar15 + 0x134);
    *(ulong *)(lVar15 + 0x138) =
         CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar15 + 0x138) >> 0x20),
                  fVar30 + (float)*(undefined8 *)(lVar15 + 0x138));
    lVar15 = *in_stack_00000150;
    if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x38), lVar16 == 0)) goto LAB_02491464;
    uVar25 = *(uint *)(lVar16 + 0x18);
    if (uVar25 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = lVar16 + unaff_x26 * unaff_x29;
    *(ulong *)(lVar19 + 0x140) =
         CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar19 + 0x140) >> 0x20),
                  fVar34 + (float)*(undefined8 *)(lVar19 + 0x140));
    *(ulong *)(lVar19 + 0x148) =
         CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar19 + 0x148) >> 0x20),
                  fVar30 + (float)*(undefined8 *)(lVar19 + 0x148));
    *(float *)(lVar19 + 0x150) = fVar30 + *(float *)(lVar19 + 0x150);
    if (in_stack_00000138 == uVar14) {
      uVar14 = *in_stack_00000148 - 1;
      if (unaff_w22 == uVar14) goto LAB_0248fccc;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x50);
      if (lVar15 == 0) goto LAB_02491464;
      if (*(uint *)(lVar15 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar19 = (long)(int)uVar14;
      lVar20 = lVar15 + lVar19 * 0x5c;
      fVar27 = fVar30 + *(float *)(lVar20 + 0x54);
      *(ulong *)(lVar20 + 0x4c) =
           CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar20 + 0x4c) >> 0x20),
                    fVar30 + (float)*(undefined8 *)(lVar20 + 0x4c));
      *(float *)(lVar20 + 0x54) = fVar27;
      *(float *)(lVar20 + 0x58) = fVar34 + *(float *)(lVar20 + 0x58);
      if (uVar25 <= *(uint *)(lVar20 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar26 = *(undefined4 *)(lVar16 + (int)*(uint *)(lVar20 + 0x34) * unaff_x29 + 0x11c);
      lVar15 = lVar15 + lVar19 * 0x5c;
      *(float *)(lVar15 + 0x70) = fVar27;
      *(undefined4 *)(lVar15 + 0x6c) = uVar26;
      lVar15 = *in_stack_00000150;
      if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar16 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar15 = *(long *)(lVar15 + 0x38);
      if (lVar15 == 0) goto LAB_02491464;
      uVar14 = *(uint *)(lVar16 + lVar19 * 0x5c + 0x40);
      if (*(uint *)(lVar15 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = lVar16 + lVar19 * 0x5c;
      *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar15 + (int)uVar14 * unaff_x29 + 0x128);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      uVar14 = *in_stack_00000148 - 1;
LAB_0248fccc:
      if (unaff_w22 == uVar14) {
        lVar15 = *in_stack_00000150;
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000138)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = lVar16 + lVar23 * 0x5c;
        fVar27 = fVar30 + *(float *)(lVar19 + 0x54);
        *(ulong *)(lVar19 + 0x4c) =
             CONCAT44(fVar30 + (float)((ulong)*(undefined8 *)(lVar19 + 0x4c) >> 0x20),
                      fVar30 + (float)*(undefined8 *)(lVar19 + 0x4c));
        *(float *)(lVar19 + 0x54) = fVar27;
        *(float *)(lVar19 + 0x58) = fVar34 + *(float *)(lVar19 + 0x58);
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_02491464;
        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar19 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar26 = *(undefined4 *)(lVar15 + (int)*(uint *)(lVar19 + 0x34) * unaff_x29 + 0x11c);
        lVar16 = lVar16 + lVar23 * 0x5c;
        *(float *)(lVar16 + 0x70) = fVar27;
        *(undefined4 *)(lVar16 + 0x6c) = uVar26;
        lVar15 = *in_stack_00000150;
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x50), lVar16 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000138)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_02491464;
        uVar14 = *(uint *)(lVar16 + lVar23 * 0x5c + 0x40);
        if (*(uint *)(lVar15 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar16 = lVar16 + lVar23 * 0x5c;
        *(undefined4 *)(lVar16 + 0x74) = *(undefined4 *)(lVar15 + (int)uVar14 * unaff_x29 + 0x128);
        *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_016f9468(uVar18,0);
    if (((((uVar11 & 1) == 0) && (1 < uVar18 - 0x2010)) && (uVar18 != 0xad)) && (uVar18 != 0x2d)) {
      if ((in_stack_000000d8._4_4_ & 1) == 0) {
        if (in_stack_00000130._4_4_ != 1) {
LAB_024909a0:
          in_stack_000000d8._4_4_ = 0;
          goto LAB_0248fee8;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f93a0(uVar18,0);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f68bc(uVar18,0);
          if (((uVar18 != 0x200b) && ((uVar11 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024909a0;
        }
      }
      else if (((in_stack_00000130._4_4_ != 1) &&
               ((int)unaff_w22 < (int)(*(uint *)(unaff_x21 + 0x18) - 1))) &&
              (((int)unaff_w22 < *in_stack_00000148 && ((uVar18 == 0x2019 || (uVar18 == 0x27)))))) {
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w22 - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar5 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f9468(uVar5,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar5 = *(undefined2 *)(unaff_x21 + in_stack_00000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f9468(uVar5,0);
          if ((uVar11 & 1) != 0) goto LAB_0248fee0;
        }
      }
      if (unaff_w22 == *in_stack_00000148 - 1U) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f9468(uVar18,0);
        iVar9 = in_stack_000000e0._4_4_;
        if ((uVar11 & 1) == 0) goto LAB_02490204;
      }
      else {
LAB_02490204:
        iVar9 = unaff_w22 - 1;
      }
      lVar15 = *in_stack_00000150;
      if (lVar15 == 0) goto LAB_02491464;
      lVar16 = *(long *)(lVar15 + 0x40);
      if (lVar16 == 0) goto LAB_02491464;
      uVar14 = *(uint *)(lVar15 + 0x24);
      iVar10 = *(int *)(lVar16 + 0x18);
      if (iVar10 < (int)(uVar14 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar15 + 0x40),iVar10 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar15 = *in_stack_00000150;
        if (lVar15 == 0) goto LAB_02491464;
      }
      lVar16 = *(long *)(lVar15 + 0x40);
      if (lVar16 == 0) goto LAB_02491464;
      if (*(uint *)(lVar16 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = lVar16 + (long)(int)uVar14 * 0x18;
      *(long **)(lVar16 + 0x20) = unaff_x19;
      *(uint *)(lVar16 + 0x28) = in_stack_00000110._4_4_;
      *(int *)(lVar16 + 0x2c) = iVar9;
      *(uint *)(lVar16 + 0x30) = (iVar9 - in_stack_00000110._4_4_) + 1;
      lVar16 = *(long *)(lVar15 + 0x50);
      *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
      if (lVar16 == 0) goto LAB_02491464;
      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000138)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar16 = lVar16 + lVar23 * 0x5c;
      in_stack_000000d8._4_4_ = 0;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
    }
    else {
      if ((in_stack_000000d8._4_4_ & 1) == 0) {
        in_stack_00000110._4_4_ = unaff_w22;
      }
      if (unaff_w22 == *in_stack_00000148 - 1U) {
        lVar15 = *in_stack_00000150;
        if (lVar15 == 0) goto LAB_02491464;
        lVar16 = *(long *)(lVar15 + 0x40);
        if (lVar16 == 0) goto LAB_02491464;
        uVar14 = *(uint *)(lVar15 + 0x24);
        iVar9 = *(int *)(lVar16 + 0x18);
        if (iVar9 < (int)(uVar14 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar15 + 0x40),iVar9 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar15 = *in_stack_00000150;
          if (lVar15 == 0) goto LAB_02491464;
        }
        lVar16 = *(long *)(lVar15 + 0x40);
        if (lVar16 == 0) goto LAB_02491464;
        if (*(uint *)(lVar16 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar16 = lVar16 + (long)(int)uVar14 * 0x18;
        *(long **)(lVar16 + 0x20) = unaff_x19;
        *(uint *)(lVar16 + 0x28) = in_stack_00000110._4_4_;
        *(uint *)(lVar16 + 0x2c) = unaff_w22;
        *(uint *)(lVar16 + 0x30) = in_stack_00000130._4_4_ - in_stack_00000110._4_4_;
        lVar16 = *(long *)(lVar15 + 0x50);
        *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
        if (lVar16 == 0) goto LAB_02491464;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000138)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar16 = lVar16 + lVar23 * 0x5c;
        iStack00000000000000a4 = iStack00000000000000a4 + 1;
        *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
      }
LAB_0248fee0:
      in_stack_000000d8._4_4_ = 1;
    }
LAB_0248fee8:
    if ((*in_stack_00000150 == 0) || (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0))
    goto LAB_02491464;
    uVar14 = *(uint *)(lVar15 + 0x18);
    if (uVar14 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(byte *)(lVar15 + unaff_x26 * unaff_x29 + 400) >> 2 & 1) == 0) {
      if ((uStack00000000000000ec & 1) == 0) {
LAB_024903d8:
        uStack00000000000000ec = 0;
      }
      else {
LAB_0248ff18:
        if (uVar14 <= unaff_w22 - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar23 = *unaff_x19;
        uVar26 = *(undefined4 *)(lVar15 + in_stack_00000128 + -0x330);
        uVar28 = *(undefined4 *)(lVar15 + in_stack_00000128 + -0x2f8);
LAB_02490474:
        pcVar17 = *(code **)(lVar23 + 0x908);
LAB_0249047c:
        (*pcVar17)(uStack0000000000000054,fStack000000000000004c,uStack0000000000000050,uVar26,
                   fStack00000000000000cc,0,fStack0000000000000058,uVar28);
        puVar7 = System_Threading_Mutex_TypeInfo;
        lVar15 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar15 = *(long *)puVar7;
        }
LAB_024904cc:
        uStack00000000000000ec = 0;
        unaff_s15 = 0.0;
        fStack00000000000000cc = *(float *)(*(long *)(lVar15 + 0xb8) + 0x15a8);
        fStack00000000000000c8 = 0.0;
      }
    }
    else {
      lVar15 = lVar15 + unaff_x26 * unaff_x29;
      iVar9 = *(int *)(lVar15 + 0x68);
      *(undefined4 *)(lVar15 + 0x16c) = in_stack_000017a4;
      if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)in_stack_00000138)
          ) || (((int)unaff_x19[0x5b] == 5 && (iVar9 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_016f68bc(uVar18,0);
      if ((uVar18 != 0x200b) && ((uVar11 & 1) == 0)) {
        lVar15 = *in_stack_00000150;
        if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x38), lVar23 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar23 + 0x18) <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar27 = *(float *)(lVar23 + unaff_x26 * unaff_x29 + 0x160);
        if (unaff_s15 <= fVar27) {
          unaff_s15 = fVar27;
        }
        if (fStack00000000000000c8 <= ABS(unaff_s13)) {
          fStack00000000000000c8 = ABS(unaff_s13);
        }
        if (iVar9 != iStack0000000000000048) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar15 = *in_stack_00000150;
            if (lVar15 == 0) goto LAB_02491464;
            lVar23 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar23 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000cc = *(float *)(lVar23 + 0x15a8);
        }
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_02491464;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (unaff_x19[0x1e] == 0) goto LAB_02491464;
        fVar29 = *(float *)(lVar15 + unaff_x26 * unaff_x29 + 0x14c);
        fVar27 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar29 = fVar29 + unaff_s15 * fVar27;
        iStack0000000000000048 = iVar9;
        if (fVar29 <= fStack00000000000000cc) {
          fStack00000000000000cc = fVar29;
        }
      }
      if ((uStack00000000000000ec & 1) == 0) {
        uStack00000000000000ec = 0;
        if ((((uVar18 == 0xd) || ((uVar18 | 1) == 0xb)) || ((int)uVar3 < (int)unaff_w22)) ||
           (!bVar1)) goto LAB_024904e8;
        if (unaff_w22 == uVar3) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016fa418(uVar18,0);
          if ((uVar11 & 1) != 0) goto LAB_024903d8;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = lVar15 + unaff_x26 * unaff_x29;
        fStack0000000000000058 = *(float *)(lVar15 + 0x160);
        uStack0000000000000054 = *(undefined4 *)(lVar15 + 0x11c);
        bVar8 = unaff_s15 != 0.0;
        fVar27 = fStack0000000000000058;
        if (bVar8) {
          fVar27 = unaff_s15;
        }
        unaff_s15 = fVar27;
        uStack000000000000005c = *(undefined4 *)(lVar15 + 0x168);
        uStack0000000000000050 = 0;
        fVar27 = unaff_s13;
        if (bVar8) {
          fVar27 = fStack00000000000000c8;
        }
        fStack000000000000004c = fStack00000000000000cc;
        fStack00000000000000c8 = fVar27;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
          if (unaff_w22 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + unaff_x26 * unaff_x29;
            lVar23 = *unaff_x19;
            uVar26 = *(undefined4 *)(lVar15 + 0x128);
            uVar28 = *(undefined4 *)(lVar15 + 0x160);
            goto LAB_02490474;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
      if ((unaff_w22 == uVar2) || ((int)uVar3 <= (int)unaff_w22)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f68bc(uVar18,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
          if (uVar18 == 0x200b || (uVar11 & 1) != 0) {
            lVar23 = in_stack_00000118;
            if (*(uint *)(lVar15 + 0x18) <= uVar3)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          else {
            lVar23 = unaff_x26;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          lVar15 = lVar15 + lVar23 * unaff_x29;
          uVar26 = *(undefined4 *)(lVar15 + 0x128);
          uVar28 = *(undefined4 *)(lVar15 + 0x160);
          pcVar17 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_0249047c;
        }
        goto LAB_02491464;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
          uVar14 = *(uint *)(lVar15 + 0x18);
          goto LAB_0248ff18;
        }
        goto LAB_02491464;
      }
      if ((int)unaff_w22 < *in_stack_00000148 + -1) {
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar11 = FUN_024a9e4c(uStack000000000000005c,*(undefined4 *)(lVar15 + in_stack_00000128),0);
        if ((uVar11 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
            if (unaff_w22 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + unaff_x26 * unaff_x29;
              (**(code **)(*unaff_x19 + 0x908))
                        (uStack0000000000000054,fStack000000000000004c,uStack0000000000000050,
                         *(undefined4 *)(lVar15 + 0x128),fStack00000000000000cc,0,
                         fStack0000000000000058,*(undefined4 *)(lVar15 + 0x160));
              puVar7 = System_Threading_Mutex_TypeInfo;
              lVar15 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *(long *)puVar7;
              }
              goto LAB_024904cc;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
      }
      uStack00000000000000ec = 1;
    }
LAB_024904e8:
    unaff_x28 = &stack0x00000880;
    if ((*in_stack_00000150 == 0) || (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (lVar22 == 0) goto LAB_02491464;
    uVar14 = *(uint *)(lVar15 + unaff_x26 * unaff_x29 + 400);
    fVar27 = (float)FUN_026fd1f0(lVar22 + 0x50,0);
    if ((uVar14 >> 6 & 1) == 0) {
      if ((uStack00000000000000e8 & 1) != 0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w22 - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar26 = *(undefined4 *)(lVar15 + in_stack_00000128 + -0x330);
        pcVar17 = *(code **)(*unaff_x19 + 0x908);
        fVar30 = in_stack_00000080._4_4_ * fVar27 + *(float *)(lVar15 + in_stack_00000128 + -0x30c);
LAB_02490a68:
        (*pcVar17)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,in_stack_00000060,uVar26,fVar30,0
                   ,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
      }
LAB_02490a9c:
      uStack00000000000000e8 = 0;
    }
    else {
      lVar15 = *in_stack_00000150;
      if ((lVar15 == 0) || (lVar23 = *(long *)(lVar15 + 0x38), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= unaff_w22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined4 *)(lVar23 + unaff_x26 * unaff_x29 + 0x174) = in_stack_000017a4;
      if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)in_stack_00000138)
          ) || (((int)unaff_x19[0x5b] == 5 &&
                (*(int *)(lVar23 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar18 == 0xd) || ((uVar18 | 1) == 0xb)) || ((int)uVar3 < (int)unaff_w22)) ||
         ((uStack00000000000000e8 & 1) != 0 || !bVar1)) {
LAB_02490668:
        if ((uStack00000000000000e8 & 1) == 0) goto LAB_02490a9c;
      }
      else {
        if (unaff_w22 == uVar3) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016fa418(uVar18,0);
          if ((uVar11 & 1) != 0) goto LAB_02490668;
          lVar15 = *in_stack_00000150;
          if (lVar15 == 0) goto LAB_02491464;
        }
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 == 0) goto LAB_02491464;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = lVar15 + unaff_x26 * unaff_x29;
        in_stack_00000038 = *(float *)(lVar15 + 0x60);
        in_stack_00000080._4_4_ = *(float *)(lVar15 + 0x160);
        fStack0000000000000034 = *(float *)(lVar15 + 0x14c);
        in_stack_00000078._4_4_ = *(undefined4 *)(lVar15 + 0x11c);
        in_stack_00000068._4_4_ = fVar27 * in_stack_00000080._4_4_ + fStack0000000000000034;
        in_stack_00000060 = 0;
      }
      iVar9 = *in_stack_00000148;
      if (iVar9 == 1) {
        if (*in_stack_00000150 != 0) {
          lVar15 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
          if (lVar15 != 0) {
            if (unaff_w22 < *(uint *)(lVar15 + 0x18)) {
              lVar15 = lVar15 + unaff_x26 * unaff_x29;
              lVar23 = *unaff_x19;
              uVar26 = *(undefined4 *)(lVar15 + 0x128);
              fVar30 = *(float *)(lVar15 + 0x14c);
LAB_024907e8:
              pcVar17 = *(code **)(lVar23 + 0x908);
LAB_02490a64:
              fVar30 = fVar27 * in_stack_00000080._4_4_ + fVar30;
              goto LAB_02490a68;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
        }
        goto LAB_02491464;
      }
      lVar15 = in_stack_00000118;
      if (unaff_w22 == uVar2) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f68bc(uVar18,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0)) {
          uVar14 = *(uint *)(lVar23 + 0x18);
          if (uVar18 == 0x200b || (uVar11 & 1) != 0) {
            if (uVar14 <= uVar3)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          else {
LAB_02490a40:
            lVar15 = unaff_x26;
            if (uVar14 <= unaff_w22)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
LAB_02490a48:
          lVar23 = lVar23 + lVar15 * unaff_x29;
          fVar30 = *(float *)(lVar23 + 0x14c);
          uVar26 = *(undefined4 *)(lVar23 + 0x128);
          pcVar17 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02490a64;
        }
        goto LAB_02491464;
      }
      if ((int)unaff_w22 < iVar9) {
        lVar23 = *in_stack_00000150;
        if ((lVar23 != 0) && (lVar16 = *(long *)(lVar23 + 0x38), lVar16 != 0)) {
          if (in_stack_00000130._4_4_ < *(uint *)(lVar16 + 0x18)) {
            if (*(float *)(lVar16 + in_stack_00000128 + -0x108) == in_stack_00000038) {
              fVar29 = *(float *)(lVar16 + in_stack_00000128 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_024aa280(fVar30 + fVar29,fStack0000000000000034,0);
              if ((uVar11 & 1) != 0) {
                iVar9 = *in_stack_00000148;
                goto LAB_024908ec;
              }
              lVar23 = *in_stack_00000150;
              if (lVar23 == 0) goto LAB_02491464;
            }
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 != 0) {
              uVar14 = *(uint *)(lVar23 + 0x18);
              if ((int)unaff_w22 <= (int)uVar3) goto LAB_02490a40;
              if (uVar3 < uVar14) goto LAB_02490a48;
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
LAB_024908ec:
      if ((int)unaff_w22 < iVar9) {
        iVar9 = FUN_02681c0c(lVar22,0);
        if (*(uint *)(unaff_x21 + 0x18) <= in_stack_00000130._4_4_)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = *(long *)(unaff_x21 + in_stack_00000128 + -0x130);
        if (lVar15 == 0) goto LAB_02491464;
        iVar10 = FUN_02681c0c(lVar15,0);
        if (iVar9 != iVar10) {
          if (*in_stack_00000150 != 0) {
            lVar15 = *(long *)(*in_stack_00000150 + 0x38);
            goto joined_r0x024907c8;
          }
          goto LAB_02491464;
        }
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar15 = *(long *)(*in_stack_00000150 + 0x38), lVar15 != 0)) {
          if (unaff_w22 - 1 < *(uint *)(lVar15 + 0x18)) {
            lVar23 = *unaff_x19;
            uVar26 = *(undefined4 *)(lVar15 + in_stack_00000128 + -0x330);
            fVar30 = *(float *)(lVar15 + in_stack_00000128 + -0x30c);
            goto LAB_024907e8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
      uStack00000000000000e8 = 1;
    }
    if ((*in_stack_00000150 == 0) || (param_1 = *(long *)(*in_stack_00000150 + 0x38), param_1 == 0))
    goto LAB_02491464;
    in_x9 = *(undefined8 *)(param_1 + 0x18);
    if ((uint)in_x9 <= unaff_w22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    unaff_x25 = in_stack_00000150;
    if ((*(byte *)(param_1 + unaff_x26 * unaff_x29 + 0x191) >> 1 & 1) == 0) {
      if (bVar6) {
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                   in_stack_00000098,fStack00000000000000a0,uStack0000000000000094);
      }
    }
    else {
      if ((((int)unaff_x19[100] < (int)unaff_w22) || ((int)unaff_x19[0x65] < (int)in_stack_00000138)
          ) || (((int)unaff_x19[0x5b] == 5 &&
                (*(int *)(param_1 + unaff_x26 * unaff_x29 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        unaff_w20 = 0;
      }
      else {
        unaff_w20 = 1;
      }
      if (bVar6) goto LAB_02490c44;
      if ((((uVar18 != 0xd) && ((uVar18 | 1) != 0xb)) && ((int)unaff_w22 <= (int)uVar3)) &&
         (unaff_w20 == 1)) {
        if (unaff_w22 == uVar3) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016fa418(uVar18,0);
          if ((uVar11 & 1) != 0) goto LAB_02490b04;
        }
        puVar7 = System_Threading_Mutex_TypeInfo;
        lVar15 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar15 = *(long *)puVar7;
        }
        if ((*in_stack_00000150 == 0) ||
           (param_1 = *(long *)(*in_stack_00000150 + 0x38), param_1 == 0)) goto LAB_02491464;
        in_x9 = *(undefined8 *)(param_1 + 0x18);
        if ((uint)in_x9 <= unaff_w22)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar15 = *(long *)(lVar15 + 0xb8);
        lVar23 = param_1 + unaff_x26 * unaff_x29;
        in_stack_00001798 = *(undefined8 *)(lVar23 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar23 + 0x17c);
        fStack00000000000000a8 = *(float *)(lVar15 + 0x1598);
        in_w11 = *(float *)(lVar23 + 0x18c);
        fStack00000000000000ac = *(float *)(lVar15 + 0x159c);
        in_stack_00000098 = *(float *)(lVar15 + 0x15a0);
        param_3 = *(float *)(lVar15 + 0x15a4);
        goto code_r0x02490c34;
      }
    }
LAB_02490b04:
    bVar6 = false;
    unaff_w22 = in_stack_00000130._4_4_;
    uVar14 = in_stack_00000138;
    goto LAB_02490e2c;
  }
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
  while( true ) {
    lVar15 = *unaff_x25;
    lVar23 = lVar23 + 1;
    lVar22 = lVar22 + 0x50;
    if (lVar15 == 0) break;
LAB_024911f4:
    uVar11 = lVar23 + 1;
    if ((long)*(int *)(lVar15 + 0x34) <= (long)uVar11) {
LAB_02491468:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x60);
    if (lVar15 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7ecc(lVar15 + lVar22 + 0x70,0);
    lVar15 = unaff_x19[0xe0];
    if (lVar15 == 0) break;
    if (*(uint *)(lVar15 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar21 = *(undefined8 *)(lVar15 + lVar23 * 8 + 0x28);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_0268b4e0(uVar21,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x314) != 0) {
        if ((*unaff_x25 == 0) || (lVar15 = *(long *)(*unaff_x25 + 0x60), lVar15 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar11)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        FUN_024e8000(lVar15 + lVar22 + 0x70,1,0);
      }
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024eefa0(lVar15,0);
      if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar15 == 0) break;
      FUN_0266b9c4(lVar15,*(undefined8 *)(lVar16 + lVar22 + 0x80),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024eefa0(lVar15,0);
      if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar15 == 0) break;
      FUN_0266bbc8(lVar15,*(undefined8 *)(lVar16 + lVar22 + 0x98),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024eefa0(lVar15,0);
      if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar15 == 0) break;
      FUN_0266bc74(lVar15,*(undefined8 *)(lVar16 + lVar22 + 0xa0),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x28);
      if (lVar15 == 0) break;
      lVar15 = FUN_024eefa0(lVar15,0);
      if ((*unaff_x25 == 0) || (lVar16 = *(long *)(*unaff_x25 + 0x60), lVar16 == 0)) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar15 == 0) break;
      FUN_0266c1dc(lVar15,*(undefined8 *)(lVar16 + lVar22 + 0xa8),0);
      lVar15 = unaff_x19[0xe0];
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar15 = *(long *)(lVar15 + lVar23 * 8 + 0x28);
      if ((lVar15 == 0) || (lVar15 = FUN_024eefa0(lVar15,0), lVar15 == 0)) break;
      FUN_0266ed90(lVar15,0);
    }
  }
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


