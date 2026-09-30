/*
FUNCTION_NAME: FUN_02496538
ENTRY_POINT: 02496538
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_15;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02496538(undefined8 param_1,float param_2,float param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  double __x;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  char cVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *unaff_x19;
  uint uVar34;
  long *unaff_x21;
  long lVar35;
  undefined8 uVar36;
  long *plVar37;
  uint uVar38;
  long *unaff_x27;
  long lVar39;
  int iVar40;
  long *unaff_x29;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  double dVar44;
  float fVar45;
  ulong uVar46;
  ulong uVar47;
  float fVar48;
  uint uVar49;
  ulong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  uint uStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  int iStack000000000000004c;
  float fStack0000000000000050;
  uint uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint uStack0000000000000060;
  uint uStack000000000000006c;
  long in_stack_00000070;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000088;
  undefined8 uStack0000000000000090;
  float fStack0000000000000098;
  uint in_stack_000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000c0;
  float in_stack_000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  int *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  double in_stack_00000880;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined4 in_stack_000017a4;
  
  fStack0000000000000098 = in_stack_00000030 + 0.0 + param_2;
  fStack0000000000000024 = fStack0000000000000024 + (0.0 - param_3);
  uStack0000000000000090 =
       CONCAT44((float)((ulong)param_1 >> 0x20) + 0.0,(float)param_1 + fStack0000000000000024);
  if (unaff_x19[0xe4] != 0) {
    uVar19 = FUN_0285a188(unaff_x19[0xe4],0);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x21);
    }
    uVar20 = FUN_0268b4e0(uVar19,0,0);
    lVar21 = FUN_024c933c();
    if (lVar21 == 0) goto LAB_0249920c;
    FUN_026a125c(lVar21,0);
    *(float *)(unaff_x19 + 0xe1) = fStack0000000000000024;
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar15 = FUN_02859798(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    fVar41 = (float)FUN_028598f0(unaff_x19[0xe4],0);
    __x = DAT_028aa048;
    dVar44 = modf(DAT_028aa048,(double *)&stack0x00000880);
    if (dVar44 == 0.5) {
      fVar59 = (float)in_stack_00000880;
      if (((long)in_stack_00000880 & 1U) != 0) {
        fVar59 = (float)in_stack_00000880 + 1.0;
      }
    }
    else {
      fVar59 = 255.0;
    }
    dVar44 = modf(__x,(double *)&stack0x00000880);
    if (dVar44 == 0.5) {
      fVar42 = (float)in_stack_00000880;
      if (((long)in_stack_00000880 & 1U) != 0) {
        fVar42 = (float)in_stack_00000880 + 1.0;
      }
    }
    else {
      fVar42 = 255.0;
    }
    dVar44 = modf(__x,(double *)&stack0x00000880);
    if (dVar44 == 0.5) {
      fVar55 = (float)in_stack_00000880;
      if (((long)in_stack_00000880 & 1U) != 0) {
        fVar55 = (float)in_stack_00000880 + 1.0;
      }
    }
    else {
      fVar55 = 255.0;
    }
    dVar44 = modf(__x,(double *)&stack0x00000880);
    if (dVar44 == 0.5) {
      fVar56 = (float)in_stack_00000880;
      if (((long)in_stack_00000880 & 1U) != 0) {
        fVar56 = (float)in_stack_00000880 + 1.0;
      }
    }
    else {
      fVar56 = 255.0;
    }
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037825d3 == '\0') {
      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
      DAT_037825d3 = '\x01';
    }
    lVar21 = *unaff_x27;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar21 = *unaff_x27;
    }
    puVar24 = *(undefined4 **)(lVar21 + 0xb8);
    uVar46 = (ulong)(uint)puVar24[1];
    uVar47 = (ulong)(uint)puVar24[2];
    uVar50 = (ulong)(uint)puVar24[3];
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar24,uVar46,uVar47,uVar50,&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar21 = *in_stack_00000150;
    if (lVar21 == 0) goto LAB_0249920c;
    iVar16 = *in_stack_00000148;
    if (iVar16 < 1) {
      iStack00000000000000ac = 0;
      iVar15 = 0;
    }
    else {
      lVar21 = *(long *)(lVar21 + 0x38);
      fStack0000000000000024 = ABS(fStack0000000000000024);
      fVar45 = 1.0;
      if ((uVar20 & 1) == 0) {
        fVar45 = fStack0000000000000024;
      }
      if (lVar21 == 0) goto LAB_0249920c;
      bVar11 = false;
      bVar9 = false;
      bVar10 = false;
      bVar14 = false;
      uStack0000000000000060 =
           (int)fVar59 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar55 & 0xffU) << 0x10 |
           (int)fVar56 << 0x18;
      fStack00000000000000d0 = *(float *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
      fStack00000000000000cc = 0.0;
      fStack0000000000000058 = fStack00000000000000b0;
      fStack000000000000005c = 0.0;
      fStack0000000000000034 = 0.0;
      fStack0000000000000088 = 0.0;
      in_stack_00000030 = 0.0;
      uVar18 = 0;
      iVar40 = 0;
      lVar35 = 0x2e0;
      fVar42 = 0.0;
      fVar59 = 0.0;
      iStack00000000000000ac = 0;
      uStack0000000000000020 = 0;
      iStack000000000000004c = 0;
      fStack00000000000000a4 = fStack00000000000000b0;
      fStack00000000000000a8 = fStack00000000000000b4;
      fStack0000000000000050 = fStack00000000000000b4;
      uStack0000000000000054 = in_stack_000000a0;
      fStack000000000000007c = fStack00000000000000b4;
      fStack0000000000000080 = fStack00000000000000b0;
      uStack000000000000006c = in_stack_000000a0;
      uVar49 = 0;
      uVar30 = 1;
      do {
        uVar8 = uVar30 - 1;
        if (*(uint *)(lVar21 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x50), lVar26 == 0)) goto LAB_0249920c;
        lVar39 = (long)(int)uVar8;
        lVar28 = lVar21 + lVar39 * 0x178;
        uVar2 = *(uint *)(lVar28 + 100);
        if (*(uint *)(lVar26 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = *(long *)(lVar28 + 0x38);
        uVar4 = *(ushort *)(lVar28 + 0x20);
        lVar29 = (long)(int)uVar2;
        lVar26 = lVar26 + lVar29 * 0x5c;
        uVar6 = *(uint *)(lVar26 + 0x3c);
        iVar16 = *(int *)(lVar26 + 0x28);
        iVar17 = *(int *)(lVar26 + 0x2c);
        uVar7 = *(uint *)(lVar26 + 0x40);
        lVar28 = (long)(int)uVar7;
        uVar38 = *(uint *)(lVar26 + 0x68);
        fVar57 = *(float *)(lVar26 + 0x5c);
        fVar60 = *(float *)(lVar26 + 0x60);
        iVar3 = *(int *)(lVar26 + 0x20);
        fVar48 = *(float *)(lVar26 + 0x4c);
        fVar51 = *(float *)(lVar26 + 0x54);
        fVar55 = *(float *)(lVar26 + 0x58);
        fVar54 = *(float *)(lVar26 + 0x6c);
        fVar52 = *(float *)(lVar26 + 0x70);
        fVar56 = *(float *)(lVar26 + 0x74);
        fVar53 = *(float *)(lVar26 + 0x78);
        fVar58 = fVar57 + fVar60;
        uVar34 = (uint)uVar4;
        if ((int)uVar38 < 9) {
          switch(uVar38) {
          case 1:
            if ((char)unaff_x19[0x1d] == '\0') {
              in_stack_000000c8 = fVar60 + 0.0;
            }
            else {
              in_stack_000000c8 = 0.0 - fVar55;
            }
            break;
          case 2:
LAB_02496c1c:
            in_stack_000000c8 = (fVar60 + fVar57 * 0.5) - fVar55 * 0.5;
            break;
          default:
            goto switchD_02496b58_caseD_3;
          case 4:
            in_stack_000000c8 = fVar58 - fVar55;
            if ((char)unaff_x19[0x1d] != '\0') {
              in_stack_000000c8 = fVar58;
            }
            break;
          case 8:
            goto switchD_02496b58_caseD_8;
          }
LAB_02496c90:
          in_stack_000000c0 = 0;
        }
        else if (uVar38 == 0x10) {
switchD_02496b58_caseD_8:
          if (uVar4 < 0xad) {
            if ((uVar34 != 3) && (uVar34 != 10)) goto LAB_02496bac;
          }
          else if ((uVar34 != 0xad) && ((uVar34 != 0x200b && (uVar34 != 0x2060)))) {
LAB_02496bac:
            if (*(uint *)(lVar21 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar5 = *(undefined2 *)(lVar21 + (long)(int)uVar6 * 0x178 + 0x20);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016f9f84(uVar5,0);
            if ((uVar20 & 1) == 0) {
              bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
            }
            else {
              bVar1 = false;
            }
            if ((fVar55 <= fVar57) && (!bVar1 && (uVar38 >> 4 & 1) == 0)) {
              in_stack_000000c8 = fVar60;
              if ((char)unaff_x19[0x1d] != '\0') {
                in_stack_000000c8 = fVar58;
              }
              goto LAB_02496c90;
            }
            if (((uVar30 == 1) || (uVar2 != uVar49)) ||
               (uVar8 == *(uint *)((long)unaff_x19 + 0x31c))) {
              in_stack_000000c8 = fVar60;
              if ((char)unaff_x19[0x1d] != '\0') {
                in_stack_000000c8 = fVar58;
              }
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uStack0000000000000020 = FUN_016fa418(uVar4,0);
              in_stack_000000c0 = 0;
            }
            else {
              cVar23 = (char)unaff_x19[0x1d];
              fVar58 = -fVar55;
              if (cVar23 != '\0') {
                fVar58 = fVar55;
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar6)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar55 = 1.0;
              iVar17 = (int)*(char *)(lVar21 + (long)(int)uVar6 * 0x178 + 0x194) +
                       (-iVar3 - (uStack0000000000000020 & 1)) + iVar17 + -1;
              if (0 < iVar17) {
                fVar55 = *(float *)((long)unaff_x19 + 0x2d4);
              }
              if (iVar17 < 1) {
                iVar17 = 1;
              }
              if (uVar34 == 9) {
LAB_02498bb8:
                fVar55 = 1.0 - fVar55;
              }
              else {
                if (uVar34 != 0xa0) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar20 = FUN_016fa418(uVar4,0);
                  cVar23 = (char)unaff_x19[0x1d];
                  if ((uVar20 & 1) != 0) goto LAB_02498bb8;
                }
                iVar17 = (iVar3 - (~uStack0000000000000020 & 1)) + iVar16;
              }
              fVar55 = ((fVar57 + fVar58) * fVar55) / (float)iVar17;
              if (cVar23 == '\0') {
                in_stack_000000c8 = in_stack_000000c8 + fVar55;
                in_stack_000000c0 =
                     CONCAT44((float)((ulong)in_stack_000000c0 >> 0x20) + 0.0,
                              (float)in_stack_000000c0 + 0.0);
              }
              else {
                in_stack_000000c8 = in_stack_000000c8 - fVar55;
              }
            }
          }
        }
        else if (uVar38 == 0x20) {
          fVar55 = fVar54 + fVar56;
          goto LAB_02496c1c;
        }
switchD_02496b58_caseD_3:
        uVar38 = (uint)*(undefined8 *)(lVar21 + 0x18);
        if (uVar38 <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar21 + lVar39 * 0x178;
        fVar58 = fStack0000000000000098 + in_stack_000000c8;
        fVar55 = (float)uStack0000000000000090 + (float)in_stack_000000c0;
        fVar57 = (float)((ulong)uStack0000000000000090 >> 0x20) +
                 (float)((ulong)in_stack_000000c0 >> 0x20);
        if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_02497688;
        iVar16 = *(int *)(lVar21 + lVar39 * 0x178 + 0x2c);
        if (iVar16 != 0) goto LAB_02497374;
        fVar42 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
        switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
        case 0:
          lVar25 = lVar21 + lVar39 * 0x178;
          *(undefined4 *)(lVar25 + 0x84) = 0;
          *(undefined4 *)(lVar25 + 0xac) = 0;
          *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
          fVar42 = 1.0;
          break;
        case 1:
          fVar53 = *(float *)(lVar21 + lVar39 * 0x178 + 0x70);
          if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
            lVar25 = lVar21 + lVar39 * 0x178;
            fVar56 = (in_stack_000000c8 + fVar53) - *(float *)(in_stack_00000070 + 0x230);
            fVar53 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
            goto LAB_02496df8;
          }
          lVar25 = lVar21 + lVar39 * 0x178;
          fVar56 = fVar56 - fVar54;
          *(float *)(lVar25 + 0x84) = fVar42 + (fVar53 - fVar54) / fVar56;
          *(float *)(lVar25 + 0xac) = fVar42 + (*(float *)(lVar25 + 0x98) - fVar54) / fVar56;
          *(float *)(lVar25 + 0xd4) = fVar42 + (*(float *)(lVar25 + 0xc0) - fVar54) / fVar56;
          fVar42 = fVar42 + (*(float *)(lVar25 + 0xe8) - fVar54) / fVar56;
          break;
        case 2:
          lVar25 = lVar21 + lVar39 * 0x178;
          fVar53 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
          fVar56 = (in_stack_000000c8 + *(float *)(lVar25 + 0x70)) -
                   *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
          *(float *)(lVar25 + 0x84) = fVar42 + fVar56 / fVar53;
          *(float *)(lVar25 + 0xac) =
               fVar42 + ((in_stack_000000c8 + *(float *)(lVar25 + 0x98)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
          *(float *)(lVar25 + 0xd4) =
               fVar42 + ((in_stack_000000c8 + *(float *)(lVar25 + 0xc0)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
          fVar42 = fVar42 + ((in_stack_000000c8 + *(float *)(lVar25 + 0xe8)) -
                            *(float *)(in_stack_00000070 + 0x230)) /
                            (*(float *)(in_stack_00000070 + 0x238) -
                            *(float *)(in_stack_00000070 + 0x230));
          break;
        case 3:
          switch((int)unaff_x19[0x61]) {
          case 0:
            lVar25 = lVar21 + lVar39 * 0x178;
            *(undefined4 *)(lVar25 + 0x88) = 0;
            *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
            *(undefined4 *)(lVar25 + 0xd8) = 0;
            *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
            break;
          case 1:
            lVar25 = lVar21 + lVar39 * 0x178;
            fVar53 = fVar53 - fVar52;
            fVar56 = fVar42 + (*(float *)(lVar25 + 0x74) - fVar52) / fVar53;
            fVar53 = fVar42 + (*(float *)(lVar25 + 0x9c) - fVar52) / fVar53;
            *(float *)(lVar25 + 0x88) = fVar56;
            *(float *)(lVar25 + 0xb0) = fVar53;
            *(float *)(lVar25 + 0xd8) = fVar56;
            *(float *)(lVar25 + 0x100) = fVar53;
            break;
          case 2:
            lVar25 = lVar21 + lVar39 * 0x178;
            fVar56 = fVar42 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                              (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
            *(float *)(lVar25 + 0x88) = fVar56;
            fVar53 = *(float *)(unaff_x19 + 0x9b);
            fVar52 = *(float *)(unaff_x19 + 0x9c);
            *(float *)(lVar25 + 0xd8) = fVar56;
            fVar56 = fVar42 + (*(float *)(lVar25 + 0x9c) - fVar53) / (fVar52 - fVar53);
            *(float *)(lVar25 + 0xb0) = fVar56;
            *(float *)(lVar25 + 0x100) = fVar56;
            break;
          case 3:
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
            uVar38 = (uint)*(undefined8 *)(lVar21 + 0x18);
          }
          if (uVar38 <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar25 = lVar21 + lVar39 * 0x178;
          fVar56 = *(float *)(lVar25 + 0x15c);
          fVar53 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar56) * 0.5;
          fVar52 = fVar42 + *(float *)(lVar25 + 0x88) * fVar56 + fVar53;
          fVar42 = fVar42 + fVar53 + *(float *)(lVar25 + 0xb0) * fVar56;
          *(float *)(lVar25 + 0x84) = fVar52;
          *(float *)(lVar25 + 0xac) = fVar52;
          *(float *)(lVar25 + 0xd4) = fVar42;
          break;
        default:
          goto switchD_02496d4c_default;
        }
        *(float *)(lVar21 + lVar39 * 0x178 + 0xfc) = fVar42;
switchD_02496d4c_default:
        switch((int)unaff_x19[0x61]) {
        case 0:
          if (uVar38 <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar25 = lVar21 + lVar39 * 0x178;
          *(undefined4 *)(lVar25 + 0x88) = 0;
          *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
          *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
          *(undefined4 *)(lVar25 + 0x100) = 0;
          break;
        case 1:
          if (uVar8 < uVar38) {
            lVar25 = lVar21 + lVar39 * 0x178;
            fVar48 = fVar48 - fVar51;
            fVar42 = (*(float *)(lVar25 + 0x74) - fVar51) / fVar48;
            fVar48 = (*(float *)(lVar25 + 0x9c) - fVar51) / fVar48;
            *(float *)(lVar25 + 0x88) = fVar42;
            goto LAB_02497174;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        case 2:
          if (uVar38 <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar25 = lVar21 + lVar39 * 0x178;
          fVar42 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                   (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
          *(float *)(lVar25 + 0x88) = fVar42;
          fVar48 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
                   (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
          *(float *)(lVar25 + 0xb0) = fVar48;
          *(float *)(lVar25 + 0xd8) = fVar48;
          *(float *)(lVar25 + 0x100) = fVar42;
          break;
        case 3:
          if (uVar38 <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar25 = lVar21 + lVar39 * 0x178;
          fVar48 = *(float *)(lVar25 + 0x15c);
          fVar56 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar48) * 0.5;
          fVar42 = *(float *)(lVar25 + 0x84) / fVar48 + fVar56;
          fVar56 = fVar56 + *(float *)(lVar25 + 0xd4) / fVar48;
          *(float *)(lVar25 + 0x88) = fVar42;
          *(float *)(lVar25 + 0xb0) = fVar56;
          *(float *)(lVar25 + 0x100) = fVar42;
          *(float *)(lVar25 + 0xd8) = fVar56;
        }
        if (uVar38 <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar25 = lVar21 + lVar39 * 0x178;
        fVar42 = *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
        if ((*(char *)(lVar25 + 0x5c) == '\0') &&
           ((*(byte *)(lVar21 + lVar39 * 0x178 + 400) & 1) != 0)) {
          fVar42 = -fVar42;
        }
        fVar56 = fStack0000000000000024;
        if (((iVar15 == 2) || (fVar56 = fVar45, iVar15 == 1)) ||
           (fVar56 = fStack0000000000000024 / fVar41, iVar15 == 0)) {
          fVar42 = fVar56 * fVar42;
        }
        lVar25 = lVar21 + lVar39 * 0x178;
        fVar48 = *(float *)(lVar25 + 0x88);
        fVar53 = *(float *)(lVar25 + 0x84);
        fVar56 = -2.1474836e+09;
        if (fVar53 != INFINITY) {
          fVar56 = (float)(int)fVar53;
        }
        fVar52 = *(float *)(lVar25 + 0xd4);
        fVar54 = *(float *)(lVar25 + 0xd8);
        fVar51 = -2.1474836e+09;
        if (fVar48 != INFINITY) {
          fVar51 = (float)(int)fVar48;
        }
        uVar43 = FUN_024e0374(fVar53 - fVar56,fVar48 - fVar51);
        *(undefined4 *)(lVar25 + 0x84) = uVar43;
        if (*(uint *)(lVar21 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar54 = fVar54 - fVar51;
        *(float *)(lVar25 + 0x88) = fVar42;
        uVar43 = FUN_024e0374(fVar53 - fVar56,fVar54);
        *(undefined4 *)(lVar21 + lVar39 * 0x178 + 0xac) = uVar43;
        if (*(uint *)(lVar21 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar52 = fVar52 - fVar56;
        *(float *)(lVar21 + lVar39 * 0x178 + 0xb0) = fVar42;
        fVar56 = (float)FUN_024e0374(fVar52,fVar54);
        *(float *)(lVar25 + 0xd4) = fVar56;
        if (*(uint *)(lVar21 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(float *)(lVar25 + 0xd8) = fVar42;
        uVar43 = FUN_024e0374(fVar52,fVar48 - fVar51);
        *(undefined4 *)(lVar21 + lVar39 * 0x178 + 0xfc) = uVar43;
        uVar38 = (uint)*(undefined8 *)(lVar21 + 0x18);
        if (uVar38 <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(float *)(lVar21 + lVar39 * 0x178 + 0x100) = fVar42;
LAB_02497374:
        if (((int)unaff_x19[100] <= (int)uVar8) ||
           (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
        if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
          if (uVar38 <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar26 = lVar21 + lVar39 * 0x178;
          *(ulong *)(lVar26 + 0x70) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar26 + 0x70));
          *(float *)(lVar26 + 0x78) = fVar57 + *(float *)(lVar26 + 0x78);
          if (*(uint *)(lVar21 + 0x18) <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar26 = lVar21 + lVar39 * 0x178;
          *(ulong *)(lVar26 + 0x98) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar26 + 0x98));
          *(float *)(lVar26 + 0xa0) = fVar57 + *(float *)(lVar26 + 0xa0);
          if (*(uint *)(lVar21 + 0x18) <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar26 = lVar21 + lVar39 * 0x178;
          *(ulong *)(lVar26 + 0xc0) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar26 + 0xc0));
          *(float *)(lVar26 + 200) = fVar57 + *(float *)(lVar26 + 200);
          if (*(uint *)(lVar21 + 0x18) <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar26 = lVar21 + lVar39 * 0x178;
          *(ulong *)(lVar26 + 0xe8) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar26 + 0xe8));
          *(float *)(lVar26 + 0xf0) = fVar57 + *(float *)(lVar26 + 0xf0);
          if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
          pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
          (*pcVar27)();
        }
        else {
          if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
            if (uVar38 <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (*(int *)(lVar21 + lVar39 * 0x178 + 0x68) != in_stack_00000028._4_4_)
            goto LAB_02497490;
            lVar26 = lVar21 + lVar39 * 0x178;
            *(ulong *)(lVar26 + 0x70) =
                 CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                          fVar58 + (float)*(undefined8 *)(lVar26 + 0x70));
            *(float *)(lVar26 + 0x78) = fVar57 + *(float *)(lVar26 + 0x78);
            if (*(uint *)(lVar21 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar26 = lVar21 + lVar39 * 0x178;
            *(ulong *)(lVar26 + 0x98) =
                 CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                          fVar58 + (float)*(undefined8 *)(lVar26 + 0x98));
            *(float *)(lVar26 + 0xa0) = fVar57 + *(float *)(lVar26 + 0xa0);
            if (*(uint *)(lVar21 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar26 = lVar21 + lVar39 * 0x178;
            *(ulong *)(lVar26 + 0xc0) =
                 CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                          fVar58 + (float)*(undefined8 *)(lVar26 + 0xc0));
            *(float *)(lVar26 + 200) = fVar57 + *(float *)(lVar26 + 200);
            if (*(uint *)(lVar21 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar26 = lVar21 + lVar39 * 0x178;
            *(ulong *)(lVar26 + 0xe8) =
                 CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                          fVar58 + (float)*(undefined8 *)(lVar26 + 0xe8));
            *(float *)(lVar26 + 0xf0) = fVar57 + *(float *)(lVar26 + 0xf0);
          }
          else {
LAB_02497490:
            if (uVar38 <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            puVar12 = 
            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
            lVar25 = lVar21 + lVar39 * 0x178;
            uVar43 = *(undefined4 *)
                      (*(undefined8 **)
                        (*(long *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        + 0xb8) + 1);
            *(undefined8 *)(lVar25 + 0x70) =
                 **(undefined8 **)
                   (*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
            *(undefined4 *)(lVar25 + 0x78) = uVar43;
            if (*(uint *)(lVar21 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar25 = lVar21 + lVar39 * 0x178;
            uVar43 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
            *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
            *(undefined4 *)(lVar25 + 0xa0) = uVar43;
            if (*(uint *)(lVar21 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar25 = lVar21 + lVar39 * 0x178;
            uVar43 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
            *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
            *(undefined4 *)(lVar25 + 200) = uVar43;
            if (*(uint *)(lVar21 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar25 = lVar21 + lVar39 * 0x178;
            uVar43 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
            *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
            *(undefined4 *)(lVar25 + 0xf0) = uVar43;
            if (*(uint *)(lVar21 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            *(undefined1 *)(lVar26 + 0x194) = 0;
          }
          if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
          if (iVar16 == 1) {
            pcVar27 = *(code **)(*unaff_x19 + 0x8f8);
            goto LAB_02497674;
          }
        }
LAB_02497688:
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar26 + lVar39 * 0x178;
        uVar19 = *(undefined8 *)(lVar26 + 0x11c);
        *(undefined8 *)(lVar26 + 0x11c) =
             CONCAT44(fVar55 + (float)((ulong)uVar19 >> 0x20),fVar58 + (float)uVar19);
        *(float *)(lVar26 + 0x124) = fVar57 + *(float *)(lVar26 + 0x124);
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar26 + lVar39 * 0x178;
        *(ulong *)(lVar26 + 0x110) =
             CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                      fVar58 + (float)*(undefined8 *)(lVar26 + 0x110));
        *(float *)(lVar26 + 0x118) = fVar57 + *(float *)(lVar26 + 0x118);
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar26 + lVar39 * 0x178;
        *(ulong *)(lVar26 + 0x128) =
             CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                      fVar58 + (float)*(undefined8 *)(lVar26 + 0x128));
        *(float *)(lVar26 + 0x130) = fVar57 + *(float *)(lVar26 + 0x130);
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar26 = lVar26 + lVar39 * 0x178;
        *(float *)(lVar26 + 0x134) = fVar58 + *(float *)(lVar26 + 0x134);
        *(ulong *)(lVar26 + 0x138) =
             CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                      fVar55 + (float)*(undefined8 *)(lVar26 + 0x138));
        lVar26 = *in_stack_00000150;
        if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0)) goto LAB_0249920c;
        uVar38 = *(uint *)(lVar25 + 0x18);
        if (uVar38 <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar25 + lVar39 * 0x178;
        uVar46 = CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar32 + 0x140) >> 0x20),
                          fVar58 + (float)*(undefined8 *)(lVar32 + 0x140));
        fVar56 = fVar55 + *(float *)(lVar32 + 0x150);
        uVar47 = (ulong)(uint)fVar56;
        uVar50 = CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar32 + 0x148) >> 0x20),
                          fVar55 + (float)*(undefined8 *)(lVar32 + 0x148));
        *(ulong *)(lVar32 + 0x140) = uVar46;
        *(ulong *)(lVar32 + 0x148) = uVar50;
        *(float *)(lVar32 + 0x150) = fVar56;
        if (uVar2 == uVar49) {
          uVar49 = *in_stack_00000148 - 1;
          if (uVar8 == uVar49) goto LAB_0249788c;
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x50);
          if (lVar26 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar26 + 0x18) <= uVar49)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar32 = (long)(int)uVar49;
          lVar33 = lVar26 + lVar32 * 0x5c;
          uVar50 = (ulong)(uint)*(float *)(lVar33 + 0x58);
          fVar56 = fVar55 + *(float *)(lVar33 + 0x54);
          uVar46 = (ulong)(uint)fVar56;
          fVar48 = fVar58 + *(float *)(lVar33 + 0x58);
          uVar47 = (ulong)(uint)fVar48;
          *(ulong *)(lVar33 + 0x4c) =
               CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar33 + 0x4c));
          *(float *)(lVar33 + 0x54) = fVar56;
          *(float *)(lVar33 + 0x58) = fVar48;
          if (uVar38 <= *(uint *)(lVar33 + 0x34))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar43 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
          lVar26 = lVar26 + lVar32 * 0x5c;
          *(float *)(lVar26 + 0x70) = fVar56;
          *(undefined4 *)(lVar26 + 0x6c) = uVar43;
          lVar26 = *in_stack_00000150;
          if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar25 + 0x18) <= uVar49)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 == 0) goto LAB_0249920c;
          uVar49 = *(uint *)(lVar25 + lVar32 * 0x5c + 0x40);
          if (*(uint *)(lVar26 + 0x18) <= uVar49)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar25 = lVar25 + lVar32 * 0x5c;
          *(undefined4 *)(lVar25 + 0x74) =
               *(undefined4 *)(lVar26 + (long)(int)uVar49 * 0x178 + 0x128);
          *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
          uVar49 = *in_stack_00000148 - 1;
LAB_0249788c:
          if (uVar8 == uVar49) {
            lVar26 = *in_stack_00000150;
            if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar25 + 0x18) <= uVar2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar32 = lVar25 + lVar29 * 0x5c;
            uVar50 = (ulong)(uint)*(float *)(lVar32 + 0x58);
            uVar46 = CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar32 + 0x4c) >> 0x20),
                              fVar55 + (float)*(undefined8 *)(lVar32 + 0x4c));
            fVar56 = fVar55 + *(float *)(lVar32 + 0x54);
            fVar58 = fVar58 + *(float *)(lVar32 + 0x58);
            uVar47 = (ulong)(uint)fVar58;
            *(ulong *)(lVar32 + 0x4c) = uVar46;
            *(float *)(lVar32 + 0x54) = fVar56;
            *(float *)(lVar32 + 0x58) = fVar58;
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar32 + 0x34))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar43 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar32 + 0x34) * 0x178 + 0x11c);
            lVar25 = lVar25 + lVar29 * 0x5c;
            *(float *)(lVar25 + 0x70) = fVar56;
            *(undefined4 *)(lVar25 + 0x6c) = uVar43;
            lVar26 = *in_stack_00000150;
            if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar25 + 0x18) <= uVar2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 == 0) goto LAB_0249920c;
            uVar49 = *(uint *)(lVar25 + lVar29 * 0x5c + 0x40);
            if (*(uint *)(lVar26 + 0x18) <= uVar49)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar25 = lVar25 + lVar29 * 0x5c;
            *(undefined4 *)(lVar25 + 0x74) =
                 *(undefined4 *)(lVar26 + (long)(int)uVar49 * 0x178 + 0x128);
            *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
          }
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar20 = FUN_016f9468(uVar34,0);
        if (((((uVar20 & 1) == 0) && (1 < uVar34 - 0x2010)) && (uVar34 != 0xad)) && (uVar34 != 0x2d)
           ) {
          if (bVar9) {
            if (((uVar30 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar21 + 0x18) - 1))) &&
               (((int)uVar8 < *in_stack_00000148 && ((uVar34 == 0x2019 || (uVar34 == 0x27)))))) {
              if (*(uint *)(lVar21 + 0x18) <= uVar30 - 2)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar5 = *(undefined2 *)(lVar21 + lVar35 + -0x438);
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar20 = FUN_016f9468(uVar5,0);
              if ((uVar20 & 1) != 0) {
                if (*(uint *)(lVar21 + 0x18) <= uVar30)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                uVar5 = *(undefined2 *)(lVar21 + lVar35 + -0x148);
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar20 = FUN_016f9468(uVar5,0);
                if ((uVar20 & 1) != 0) goto LAB_02497aa4;
              }
            }
          }
          else {
            if (uVar30 != 1) {
LAB_024985a0:
              bVar9 = false;
              goto LAB_02497aac;
            }
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016f93a0(uVar34,0);
            if ((uVar20 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar20 = FUN_016f68bc(uVar34,0);
              if (((uVar34 != 0x200b) && ((uVar20 & 1) == 0)) && (*in_stack_00000148 != 1))
              goto LAB_024985a0;
            }
          }
          if (uVar8 == *in_stack_00000148 - 1U) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016f9468(uVar34,0);
            iVar16 = iVar40;
            if ((uVar20 & 1) == 0) goto LAB_02497de0;
          }
          else {
LAB_02497de0:
            iVar16 = uVar30 - 2;
          }
          lVar26 = *in_stack_00000150;
          if (lVar26 == 0) goto LAB_0249920c;
          lVar25 = *(long *)(lVar26 + 0x40);
          if (lVar25 == 0) goto LAB_0249920c;
          uVar49 = *(uint *)(lVar26 + 0x24);
          iVar17 = *(int *)(lVar25 + 0x18);
          if (iVar17 < (int)(uVar49 + 1)) {
            if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01147b84((long *)(lVar26 + 0x40),iVar17 + 1,
                         *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
            lVar26 = *in_stack_00000150;
            if (lVar26 == 0) goto LAB_0249920c;
          }
          lVar25 = *(long *)(lVar26 + 0x40);
          if (lVar25 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar25 + 0x18) <= uVar49)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar25 = lVar25 + (long)(int)uVar49 * 0x18;
          *(uint *)(lVar25 + 0x28) = uVar18;
          *(int *)(lVar25 + 0x2c) = iVar16;
          *(uint *)(lVar25 + 0x30) = (iVar16 - uVar18) + 1;
          *(long **)(lVar25 + 0x20) = unaff_x19;
          lVar25 = *(long *)(lVar26 + 0x50);
          *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
          if (lVar25 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar25 + 0x18) <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar25 = lVar25 + lVar29 * 0x5c;
          bVar9 = false;
          iStack00000000000000ac = iStack00000000000000ac + 1;
          *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
        }
        else {
          if (!bVar9) {
            uVar18 = uVar8;
          }
          if (uVar8 == *in_stack_00000148 - 1U) {
            lVar26 = *in_stack_00000150;
            if (lVar26 == 0) goto LAB_0249920c;
            lVar25 = *(long *)(lVar26 + 0x40);
            if (lVar25 == 0) goto LAB_0249920c;
            uVar49 = *(uint *)(lVar26 + 0x24);
            iVar16 = *(int *)(lVar25 + 0x18);
            if (iVar16 < (int)(uVar49 + 1)) {
              if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01147b84((long *)(lVar26 + 0x40),iVar16 + 1,
                           *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
              lVar26 = *in_stack_00000150;
              if (lVar26 == 0) goto LAB_0249920c;
            }
            lVar25 = *(long *)(lVar26 + 0x40);
            if (lVar25 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar25 + 0x18) <= uVar49)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar25 = lVar25 + (long)(int)uVar49 * 0x18;
            *(uint *)(lVar25 + 0x28) = uVar18;
            *(uint *)(lVar25 + 0x2c) = uVar8;
            *(long **)(lVar25 + 0x20) = unaff_x19;
            *(uint *)(lVar25 + 0x30) = uVar30 - uVar18;
            lVar25 = *(long *)(lVar26 + 0x50);
            *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
            if (lVar25 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar25 + 0x18) <= uVar2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar25 = lVar25 + lVar29 * 0x5c;
            iStack00000000000000ac = iStack00000000000000ac + 1;
            *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
          }
LAB_02497aa4:
          bVar9 = true;
        }
LAB_02497aac:
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        uVar49 = *(uint *)(lVar26 + 0x18);
        if (uVar49 <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*(byte *)(lVar26 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
          if (bVar14) {
LAB_02497adc:
            if (uVar49 <= uVar30 - 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar29 = *unaff_x19;
            uVar49 = *(uint *)(lVar26 + lVar35 + -0x330);
            uVar43 = *(undefined4 *)(lVar26 + lVar35 + -0x2f8);
LAB_0249805c:
            pcVar27 = *(code **)(lVar29 + 0x908);
LAB_02498064:
            uVar50 = (ulong)uVar49;
            uVar46 = (ulong)(uint)fStack0000000000000050;
            uVar47 = (ulong)uStack0000000000000054;
            (*pcVar27)(fStack0000000000000058,uVar46,uVar47,uVar50,fStack00000000000000d0,0,
                       fStack000000000000005c,uVar43);
            puVar12 = System_Threading_Mutex_TypeInfo;
            lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar26 = *(long *)puVar12;
            }
LAB_024980b4:
            bVar14 = false;
            fVar59 = 0.0;
            fStack00000000000000d0 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
            fStack00000000000000cc = 0.0;
          }
          else {
LAB_02497fc4:
            bVar14 = false;
          }
        }
        else {
          lVar26 = lVar26 + lVar39 * 0x178;
          iVar16 = *(int *)(lVar26 + 0x68);
          *(undefined4 *)(lVar26 + 0x16c) = in_stack_000017a4;
          if ((((int)unaff_x19[100] < (int)uVar8) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
             (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar20 = FUN_016f68bc(uVar34,0);
          if ((uVar34 != 0x200b) && ((uVar20 & 1) == 0)) {
            lVar26 = *in_stack_00000150;
            if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar29 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar56 = *(float *)(lVar29 + lVar39 * 0x178 + 0x160);
            if (fVar59 <= fVar56) {
              fVar59 = fVar56;
            }
            if (fStack00000000000000cc <= ABS(fVar42)) {
              fStack00000000000000cc = ABS(fVar42);
            }
            if (iVar16 != iStack000000000000004c) {
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar26 = *in_stack_00000150;
                if (lVar26 == 0) goto LAB_0249920c;
                lVar29 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              else {
                lVar29 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              fStack00000000000000d0 = *(float *)(lVar29 + 0x15a8);
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar26 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
            fVar48 = *(float *)(lVar26 + lVar39 * 0x178 + 0x14c);
            fVar56 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
            fVar48 = fVar48 + fVar59 * fVar56;
            if (fVar48 <= fStack00000000000000d0) {
              fStack00000000000000d0 = fVar48;
            }
            uVar46 = (ulong)(uint)fStack00000000000000d0;
            iStack000000000000004c = iVar16;
          }
          if (!bVar14) {
            bVar14 = false;
            if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar7 < (int)uVar8)) ||
               ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
            if (uVar8 == uVar7) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar20 = FUN_016fa418(uVar34,0);
              if ((uVar20 & 1) != 0) goto LAB_02497fc4;
            }
            if ((*in_stack_00000150 == 0) ||
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar26 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar26 = lVar26 + lVar39 * 0x178;
            fStack000000000000005c = *(float *)(lVar26 + 0x160);
            fStack0000000000000058 = *(float *)(lVar26 + 0x11c);
            bVar14 = fVar59 != 0.0;
            fVar56 = fStack000000000000005c;
            if (bVar14) {
              fVar56 = fVar59;
            }
            fVar59 = fVar56;
            uStack0000000000000060 = *(uint *)(lVar26 + 0x168);
            uStack0000000000000054 = 0;
            fVar56 = fVar42;
            if (bVar14) {
              fVar56 = fStack00000000000000cc;
            }
            uVar46 = (ulong)(uint)fVar56;
            fStack0000000000000050 = fStack00000000000000d0;
            fStack00000000000000cc = fVar56;
          }
          if (*in_stack_00000148 == 1) {
            if ((*in_stack_00000150 != 0) &&
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
              if (uVar8 < *(uint *)(lVar26 + 0x18)) {
                lVar26 = lVar26 + lVar39 * 0x178;
                lVar29 = *unaff_x19;
                uVar49 = *(uint *)(lVar26 + 0x128);
                uVar43 = *(undefined4 *)(lVar26 + 0x160);
                goto LAB_0249805c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          if ((uVar8 == uVar6) || ((int)uVar7 <= (int)uVar8)) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016f68bc(uVar34,0);
            if ((*in_stack_00000150 != 0) &&
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
              if (uVar34 == 0x200b || (uVar20 & 1) != 0) {
                lVar29 = lVar28;
                if (*(uint *)(lVar26 + 0x18) <= uVar7)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              else {
                lVar29 = lVar39;
                if (*(uint *)(lVar26 + 0x18) <= uVar8)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              lVar26 = lVar26 + lVar29 * 0x178;
              uVar49 = *(uint *)(lVar26 + 0x128);
              uVar43 = *(undefined4 *)(lVar26 + 0x160);
              pcVar27 = *(code **)(*unaff_x19 + 0x908);
              goto LAB_02498064;
            }
            goto LAB_0249920c;
          }
          if (!bVar1) {
            if ((*in_stack_00000150 != 0) &&
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
              uVar49 = *(uint *)(lVar26 + 0x18);
              goto LAB_02497adc;
            }
            goto LAB_0249920c;
          }
          if ((int)uVar8 < *in_stack_00000148 + -1) {
            if ((*in_stack_00000150 == 0) ||
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar26 + 0x18) <= uVar30)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar20 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar26 + lVar35),0);
            if ((uVar20 & 1) == 0) {
              if ((*in_stack_00000150 != 0) &&
                 (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
                if (uVar8 < *(uint *)(lVar26 + 0x18)) {
                  lVar26 = lVar26 + lVar39 * 0x178;
                  uVar50 = (ulong)*(uint *)(lVar26 + 0x128);
                  uVar47 = (ulong)uStack0000000000000054;
                  uVar46 = (ulong)(uint)fStack0000000000000050;
                  (**(code **)(*unaff_x19 + 0x908))
                            (fStack0000000000000058,uVar46,uVar47,uVar50,fStack00000000000000d0,0,
                             fStack000000000000005c,*(undefined4 *)(lVar26 + 0x160));
                  puVar12 = System_Threading_Mutex_TypeInfo;
                  lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar26 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar26 = *(long *)puVar12;
                  }
                  goto LAB_024980b4;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
          }
          bVar14 = true;
        }
LAB_024980d0:
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar26 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (lVar31 == 0) goto LAB_0249920c;
        uVar49 = *(uint *)(lVar26 + lVar39 * 0x178 + 400);
        fVar56 = (float)FUN_026fd1f0(lVar31 + 0x50,0);
        if ((uVar49 >> 6 & 1) == 0) {
          if (bVar10) {
            if ((*in_stack_00000150 == 0) ||
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar26 + 0x18) <= uVar30 - 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar49 = *(uint *)(lVar26 + lVar35 + -0x330);
            pcVar27 = *(code **)(*unaff_x19 + 0x908);
            fVar55 = fStack0000000000000088 * fVar56 + *(float *)(lVar26 + lVar35 + -0x30c);
LAB_02498648:
            uVar50 = (ulong)uVar49;
            uVar46 = (ulong)(uint)fStack000000000000007c;
            uVar47 = (ulong)uStack000000000000006c;
            (*pcVar27)(fStack0000000000000080,uVar46,uVar47,uVar50,fVar55,0,fStack0000000000000088,
                       fStack0000000000000088);
          }
LAB_0249867c:
          bVar10 = false;
        }
        else {
          lVar26 = *in_stack_00000150;
          if ((lVar26 == 0) || (lVar29 = *(long *)(lVar26 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(undefined4 *)(lVar29 + lVar39 * 0x178 + 0x174) = in_stack_000017a4;
          if ((((int)unaff_x19[100] < (int)uVar8) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
             (((int)unaff_x19[0x5b] == 5 &&
              (*(int *)(lVar29 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar7 < (int)uVar8)) ||
             (bVar10 || !bVar1)) {
LAB_02498228:
            if (!bVar10) goto LAB_0249867c;
          }
          else {
            if (uVar8 == uVar7) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar20 = FUN_016fa418(uVar34,0);
              if ((uVar20 & 1) != 0) goto LAB_02498228;
              lVar26 = *in_stack_00000150;
              if (lVar26 == 0) goto LAB_0249920c;
            }
            lVar26 = *(long *)(lVar26 + 0x38);
            if (lVar26 == 0) goto LAB_0249920c;
            if (*(uint *)(lVar26 + 0x18) <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar26 = lVar26 + lVar39 * 0x178;
            fStack0000000000000034 = *(float *)(lVar26 + 0x60);
            fStack0000000000000088 = *(float *)(lVar26 + 0x160);
            in_stack_00000030 = *(float *)(lVar26 + 0x14c);
            uVar46 = (ulong)(uint)in_stack_00000030;
            fStack0000000000000080 = *(float *)(lVar26 + 0x11c);
            fStack000000000000007c = fVar56 * fStack0000000000000088 + in_stack_00000030;
            uStack000000000000006c = 0;
          }
          iVar16 = *in_stack_00000148;
          if (iVar16 == 1) {
LAB_024983ac:
            if ((*in_stack_00000150 != 0) &&
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
              if (uVar8 < *(uint *)(lVar26 + 0x18)) {
                lVar26 = lVar26 + lVar39 * 0x178;
                lVar28 = *unaff_x19;
                uVar49 = *(uint *)(lVar26 + 0x128);
                fVar55 = *(float *)(lVar26 + 0x14c);
LAB_024983d8:
                pcVar27 = *(code **)(lVar28 + 0x908);
FUN_02498644:
                fVar55 = fVar56 * fStack0000000000000088 + fVar55;
                goto LAB_02498648;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          if (uVar8 == uVar6) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar20 = FUN_016f68bc(uVar34,0);
            if ((*in_stack_00000150 != 0) &&
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
              uVar49 = *(uint *)(lVar26 + 0x18);
              if (uVar34 == 0x200b || (uVar20 & 1) != 0) {
                if (uVar49 <= uVar7)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              else {
LAB_02498620:
                lVar28 = lVar39;
                if (uVar49 <= uVar8)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
LAB_02498628:
              lVar26 = lVar26 + lVar28 * 0x178;
              fVar55 = *(float *)(lVar26 + 0x14c);
              uVar49 = *(uint *)(lVar26 + 0x128);
              pcVar27 = *(code **)(*unaff_x19 + 0x908);
              goto FUN_02498644;
            }
            goto LAB_0249920c;
          }
          if ((int)uVar8 < iVar16) {
            lVar26 = *in_stack_00000150;
            if ((lVar26 != 0) && (lVar29 = *(long *)(lVar26 + 0x38), lVar29 != 0)) {
              if (uVar30 < *(uint *)(lVar29 + 0x18)) {
                if (*(float *)(lVar29 + lVar35 + -0x108) == fStack0000000000000034) {
                  fVar48 = *(float *)(lVar29 + lVar35 + -0x1c);
                  if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar46 = (ulong)(uint)in_stack_00000030;
                  uVar20 = FUN_024aa280(fVar55 + fVar48,uVar46,0);
                  if ((uVar20 & 1) != 0) {
                    iVar16 = *in_stack_00000148;
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                    ;
                  }
                  lVar26 = *in_stack_00000150;
                  if (lVar26 == 0) goto LAB_0249920c;
                }
                lVar26 = *(long *)(lVar26 + 0x38);
                if (lVar26 != 0) {
                  uVar49 = *(uint *)(lVar26 + 0x18);
                  if ((int)uVar8 <= (int)uVar7) goto LAB_02498620;
                  if (uVar7 < uVar49) goto LAB_02498628;
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                }
                goto LAB_0249920c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }

          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
          :
          if ((int)uVar8 < iVar16) {
            iVar16 = FUN_02681c0c(lVar31,0);
            if (*(uint *)(lVar21 + 0x18) <= uVar30)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar26 = *(long *)(lVar21 + lVar35 + -0x130);
            if (lVar26 == 0) goto LAB_0249920c;
            iVar17 = FUN_02681c0c(lVar26,0);
            if (iVar16 != iVar17) goto LAB_024983ac;
          }
          if (!bVar1) {
            if ((*in_stack_00000150 != 0) &&
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
              if (uVar30 - 2 < *(uint *)(lVar26 + 0x18)) {
                lVar28 = *unaff_x19;
                uVar49 = *(uint *)(lVar26 + lVar35 + -0x330);
                fVar55 = *(float *)(lVar26 + lVar35 + -0x30c);
                goto LAB_024983d8;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          bVar10 = true;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
        uVar49 = (uint)*(undefined8 *)(lVar26 + 0x18);
        if (uVar49 <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*(byte *)(lVar26 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
          if (bVar11) {
            uVar47 = (ulong)in_stack_000000a0;
            uVar50 = (ulong)(uint)fStack00000000000000a4;
            uVar46 = (ulong)(uint)fStack00000000000000b4;
            (**(code **)(*unaff_x19 + 0x918))
                      (fStack00000000000000b0,uVar46,uVar47,uVar50,fStack00000000000000a8,uVar47);
          }
LAB_024986e8:
          bVar11 = false;
        }
        else {
          if ((((int)unaff_x19[100] < (int)uVar8) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
             (((int)unaff_x19[0x5b] == 5 &&
              (*(int *)(lVar26 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar11) {
            if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar7 < (int)uVar8)) ||
               (!bVar1)) goto LAB_024986e8;
            if (uVar8 == uVar7) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar20 = FUN_016fa418(uVar34,0);
              if ((uVar20 & 1) != 0) goto LAB_024986e8;
            }
            puVar12 = System_Threading_Mutex_TypeInfo;
            lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar28 = *(long *)puVar12;
            }
            if ((*in_stack_00000150 == 0) ||
               (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_0249920c;
            uVar49 = (uint)*(undefined8 *)(lVar26 + 0x18);
            if (uVar49 <= uVar8)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar28 = *(long *)(lVar28 + 0xb8);
            lVar29 = lVar26 + lVar39 * 0x178;
            in_stack_00001798 = *(undefined8 *)(lVar29 + 0x184);
            in_stack_00001790 = *(undefined8 *)(lVar29 + 0x17c);
            fStack00000000000000b0 = *(float *)(lVar28 + 0x1598);
            in_stack_000017a0 = *(float *)(lVar29 + 0x18c);
            fStack00000000000000b4 = *(float *)(lVar28 + 0x159c);
            fStack00000000000000a4 = *(float *)(lVar28 + 0x15a0);
            fStack00000000000000a8 = *(float *)(lVar28 + 0x15a4);
            in_stack_000000a0 = 0;
          }
          if (uVar49 <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar26 = lVar26 + lVar39 * 0x178;
          fVar51 = *(float *)(lVar26 + 0x188);
          uVar36 = *(undefined8 *)(lVar26 + 0x17c);
          fVar54 = *(float *)(lVar26 + 0x184);
          uVar19 = *(undefined8 *)(lVar26 + 0x184);
          fVar52 = *(float *)(lVar26 + 0x18c);
          fVar55 = *(float *)(lVar26 + 0x11c);
          fVar48 = *(float *)(lVar26 + 0x128);
          fVar53 = *(float *)(lVar26 + 0x148);
          fVar56 = *(float *)(lVar26 + 0x150);
          in_stack_00000158 = uVar36;
          fStack0000000000000160 = fVar54;
          fStack0000000000000164 = fVar51;
          in_stack_00000168 = fVar52;
          in_stack_00000170 = in_stack_00001790;
          in_stack_00000178 = in_stack_00001798;
          in_stack_00000180 = in_stack_000017a0;
          uVar20 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
          lVar26 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
          if ((uVar20 & 1) == 0) {
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar26);
            }
            fVar55 = fVar55 - (float)((ulong)in_stack_00001790 >> 0x20);
            if (fVar55 <= fStack00000000000000b0) {
              fStack00000000000000b0 = fVar55;
            }
            fVar56 = fVar56 - in_stack_000017a0;
            uVar46 = (ulong)(uint)fVar56;
            fVar48 = fVar48 + (float)in_stack_00001798;
            uVar47 = (ulong)(uint)fVar48;
            if (fVar56 <= fStack00000000000000b4) {
              fStack00000000000000b4 = fVar56;
            }
            fVar53 = fVar53 + (float)((ulong)in_stack_00001798 >> 0x20);
            uVar50 = (ulong)(uint)fVar53;
            if (fStack00000000000000a4 <= fVar48) {
              fStack00000000000000a4 = fVar48;
            }
            if (fStack00000000000000a8 <= fVar53) {
              fStack00000000000000a8 = fVar53;
            }
          }
          else {
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar26);
            }
            fVar55 = (fVar55 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
            uVar50 = (ulong)(uint)fVar55;
            if (fVar56 <= fStack00000000000000b4) {
              fStack00000000000000b4 = fVar56;
            }
            uVar46 = (ulong)(uint)fStack00000000000000b4;
            uVar47 = (ulong)in_stack_000000a0;
            if (fStack00000000000000a8 <= fVar53) {
              fStack00000000000000a8 = fVar53;
            }
            (**(code **)(*unaff_x19 + 0x918))
                      (fStack00000000000000b0,uVar46,uVar47,uVar50,fStack00000000000000a8,uVar47);
            fStack00000000000000b4 = fVar56 - fVar52;
            fStack00000000000000a4 = fVar48 + fVar54;
            in_stack_000000a0 = 0;
            fStack00000000000000a8 = fVar53 + fVar51;
            fStack00000000000000b0 = fVar55;
            in_stack_00001790 = uVar36;
            in_stack_00001798 = uVar19;
            in_stack_000017a0 = fVar52;
          }
          if (((*in_stack_00000148 == 1) || (uVar8 == uVar6)) ||
             (((int)uVar7 <= (int)uVar8 || (!bVar1)))) {
            uVar47 = (ulong)in_stack_000000a0;
            uVar50 = (ulong)(uint)fStack00000000000000a4;
            uVar46 = (ulong)(uint)fStack00000000000000b4;
            (**(code **)(*unaff_x19 + 0x918))
                      (fStack00000000000000b0,uVar46,uVar47,uVar50,fStack00000000000000a8,uVar47);
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
        }
        iVar16 = *in_stack_00000148;
        iVar40 = iVar40 + 1;
        lVar35 = lVar35 + 0x178;
        bVar1 = (int)uVar30 < iVar16;
        uVar49 = uVar2;
        uVar30 = uVar30 + 1;
      } while (bVar1);
      lVar21 = *in_stack_00000150;
      if (lVar21 == 0) goto LAB_0249920c;
      iVar15 = uVar2 + 1;
    }
    puVar13 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar12 = PTR_DAT_033ed410;
    *(int *)(lVar21 + 0x18) = iVar16;
    lVar35 = unaff_x19[0xd3];
    *(int *)(lVar21 + 0x2c) = iVar15;
    iVar15 = iStack00000000000000ac;
    if (iVar16 < 1) {
      iVar15 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar15 = 1;
    }
    *(int *)(lVar21 + 0x1c) = (int)lVar35;
    *(int *)(lVar21 + 0x24) = iVar15;
    *(int *)(lVar21 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar21 = unaff_x19[0xde];
    if (lVar21 != 0) {
      (**(code **)(lVar21 + 0x18))
                (*(undefined8 *)(lVar21 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar21 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar15 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar15 != 0x19) {
      lVar21 = unaff_x19[0xe4];
      if (lVar21 == 0) goto LAB_0249920c;
      uVar18 = FUN_02859dc4(lVar21,0);
      FUN_02859e00(lVar21,uVar18 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar21 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar21 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
        if (*(int *)(lVar21 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
            if (*(int *)(lVar21 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
                if (*(int *)(lVar21 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
                    if (*(int *)(lVar21 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar19 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar18 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar21 = *in_stack_00000150;
                              if (lVar21 != 0) {
                                lVar26 = 0;
                                lVar35 = 0;
                                do {
                                  uVar20 = lVar35 + 1;
                                  if ((long)*(int *)(lVar21 + 0x34) <= (long)uVar20)
                                  goto LAB_02496098;
                                  lVar21 = *(long *)(lVar21 + 0x60);
                                  if (lVar21 == 0) break;
                                  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar21 + lVar26 + 0x70,0);
                                  lVar21 = unaff_x19[0xe0];
                                  if (lVar21 == 0) break;
                                  if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar36 = *(undefined8 *)(lVar21 + lVar35 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar22 = FUN_0268b4e0(uVar36,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar21 + lVar26 + 0x70,1,0);
                                    }
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if (lVar21 == 0) break;
                                    lVar21 = FUN_024f0144(lVar21,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar21 == 0) break;
                                    FUN_0266b9c4(lVar21,*(undefined8 *)(lVar28 + lVar26 + 0x80),0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if (lVar21 == 0) break;
                                    lVar21 = FUN_024f0144(lVar21,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar21 == 0) break;
                                    FUN_0266bbc8(lVar21,*(undefined8 *)(lVar28 + lVar26 + 0x98),0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if (lVar21 == 0) break;
                                    lVar21 = FUN_024f0144(lVar21,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar21 == 0) break;
                                    FUN_0266bc74(lVar21,*(undefined8 *)(lVar28 + lVar26 + 0xa0),0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if (lVar21 == 0) break;
                                    lVar21 = FUN_024f0144(lVar21,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
                                    break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar21 == 0) break;
                                    FUN_0266c1dc(lVar21,*(undefined8 *)(lVar28 + lVar26 + 0xa8),0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (lVar21 = FUN_024f0144(lVar21,0), lVar21 == 0)) break;
                                    FUN_0266ed90(lVar21,0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if (lVar21 == 0) break;
                                    lVar21 = FUN_02738ef4(lVar21,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar35 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (uVar36 = FUN_024f0144(lVar28,0), lVar21 == 0)) break;
                                    FUN_02858f1c(lVar21,uVar36,0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (lVar21 = FUN_02738ef4(lVar21,0), lVar21 == 0)) break;
                                    FUN_02858b14(uVar19,uVar46,uVar47,uVar50,lVar21,0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar21 = *(long *)(lVar21 + lVar35 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (lVar21 = FUN_02738ef4(lVar21,0), lVar21 == 0)) break;
                                    FUN_02858a50(lVar21,uVar18 & 1,0);
                                    lVar21 = unaff_x19[0xe0];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar37 = *(long **)(lVar21 + lVar35 * 8 + 0x28);
                                    uVar49 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar37 == (long *)0x0) break;
                                    (**(code **)(*plVar37 + 0x2c8))
                                              (plVar37,uVar49 & 1,*(undefined8 *)(*plVar37 + 0x2d0))
                                    ;
                                  }
                                  lVar21 = *in_stack_00000150;
                                  lVar35 = lVar35 + 1;
                                  lVar26 = lVar26 + 0x50;
                                } while (lVar21 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


