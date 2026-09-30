/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.DefaultElementBuilder$$DrawVisualElementStencilMask
ENTRY_POINT: 07d70cb8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_UIElements_UIR_DefaultElementBuilder__DrawVisualElementStencilMask
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 *puVar17;
  char cVar18;
  undefined1 uVar19;
  uint uVar20;
  long lVar21;
  float *pfVar22;
  float *pfVar23;
  int *piVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long unaff_x19;
  uint unaff_w20;
  long *plVar28;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar29;
  long unaff_x23;
  uint unaff_w24;
  uint uVar30;
  uint *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w29;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  undefined8 uVar36;
  float fVar35;
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float unaff_s8;
  float fVar43;
  float fVar44;
  float unaff_s10;
  float fVar45;
  float fVar46;
  float fVar47;
  float unaff_s12;
  float fVar48;
  float fVar49;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  float *in_stack_00000040;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  uint uStack0000000000000058;
  int iStack000000000000005c;
  ulong in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000090;
  undefined8 in_stack_00000098;
  float *in_stack_000000a0;
  float fStack00000000000000a8;
  int iStack00000000000000b0;
  float fStack00000000000000b4;
  float *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  uint uStack00000000000000d8;
  float fStack00000000000000dc;
  long *in_stack_000000e0;
  float in_stack_000000e8;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack0000000000000100;
  uint uStack0000000000000104;
  int in_stack_00000108;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  long *in_stack_00000148;
  float fStack0000000000000150;
  undefined8 in_stack_00000160;
  char *in_stack_00000168;
  uint in_stack_000010fc;
  uint in_stack_0000112c;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
  uVar3 = in_stack_00000060;
code_r0x07d70cb8:
  *(float *)(unaff_x22 + 0x380) = param_4;
  if (param_1 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  fVar43 = *(float *)(unaff_x22 + 0x37c);
  fVar35 = (float)FUN_07d532c4(param_1 + 0xb0,0);
  fVar35 = (unaff_s14 * fVar35) / unaff_s10;
  if (fVar43 <= fVar35) {
    fVar43 = fVar35;
  }
  fVar35 = *(float *)(unaff_x22 + 0x2e8);
  *(float *)(unaff_x22 + 0x37c) = fVar43;
LAB_07d70ce8:
  if (fVar35 == 0.0) {
    fVar43 = *(float *)(unaff_x22 + 0x19d0);
    if (*(float *)(unaff_x22 + 0x19d0) <= unaff_s8) {
      fVar43 = unaff_s8;
    }
    *(float *)(unaff_x22 + 0x19d0) = fVar43;
  }
LAB_07d70d00:
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  uVar6 = *unaff_x25;
  if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
  lVar21 = lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar21 + 0x194) = 0;
  uVar9 = *unaff_x21;
  if (uVar9 == 9) {
LAB_07d70d34:
    *(undefined1 *)(lVar21 + 0x194) = 1;
    pfVar22 = in_stack_000000a0;
    pfVar23 = in_stack_000000b8;
    if (in_stack_00000160._4_4_ == unaff_w26) {
      lVar21 = *(long *)(unaff_x19 + 0x48);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      pfVar23 = (float *)(lVar21 + 100);
      pfVar22 = (float *)(lVar21 + 0x68);
    }
    fVar35 = *pfVar23;
    fVar44 = *pfVar22;
    fVar43 = *(float *)(unaff_x22 + 0x368);
    fVar46 = 0.0;
    fVar45 = *(float *)(unaff_x22 + 0x300);
    fStack0000000000000100 = (fStack00000000000000b4 - fVar35) - fVar44;
    bVar4 = true;
    if ((fVar43 <= fStack0000000000000100) && (bVar4 = false, !NAN(fVar43))) {
      bVar4 = fVar43 == -1.0;
    }
    if (!bVar4) {
      fStack0000000000000100 = fVar43;
    }
    fVar43 = 0.0;
    if (*(char *)(unaff_x23 + 0x82) == '\0') {
      fVar43 = (float)FUN_07d53598(&stack0x00001110,0);
      uVar9 = *unaff_x21;
    }
    if (uVar9 != 0xad) {
      in_stack_000000e8 = unaff_s14;
    }
    if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar46 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    uVar6 = *unaff_x25;
    if (fStack00000000000000a8 <
        (*(float *)(unaff_x22 + 0x380) -
        (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar46) {
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar6;
      }
      iVar7 = *(int *)(unaff_x23 + 100);
      if (iVar7 != 1) {
        if ((iVar7 != 6) && (iVar7 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
        in_stack_0000112c = FUN_07d79b5c();
        goto LAB_07d71040;
      }
      if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
      iVar7 = FUN_059137dc(unaff_x22 + 0x15f0,
                           *(undefined8 *)
                            Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
      if (iVar7 == 0) {
        unaff_x25[0] = 0;
        unaff_x25[1] = 0;
        in_stack_0000112c = 0xffffffff;
        in_stack_00001190 = DAT_015c3d00;
        goto LAB_07d72ac8;
      }
      Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                (&stack0x000011a0,unaff_x22 + 0x15f0,
                 *(undefined8 *)
                  Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo);
      memcpy(&stack0x00000c58,&stack0x000011a0,0x398);
      iVar10 = FUN_07d79b5c();
      iVar7 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
      in_stack_00000108 = in_stack_00000108 + 1;
      *(int *)(unaff_x22 + 0x334) = iVar7 + -1;
      in_stack_00001190 = CONCAT44(0x2026,iVar7 + -1);
      in_stack_0000112c = iVar10 - 1;
      goto LAB_07d72ac8;
    }
LAB_07d70fbc:
    uVar9 = uVar6;
    if ((uStack00000000000000d8 &
        fStack0000000000000100 <
        ABS(fVar45) + fVar43 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) * in_stack_000000e8) ==
        1) {
      if (((iStack00000000000000b0 == 0) || (iStack00000000000000b0 == 3)) ||
         (uVar6 == *(uint *)(unaff_x22 + 0x338))) {
        iVar7 = *(int *)(unaff_x23 + 100);
        if (iVar7 == 1) {
          iVar7 = FUN_059137dc(unaff_x22 + 0x15f0,
                               *(undefined8 *)
                                Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
          if (iVar7 != 0) {
            Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                      (&stack0x000011a0,unaff_x22 + 0x15f0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                      );
            memcpy(&stack0x00000528,&stack0x000011a0,0x398);
            iVar10 = FUN_07d79b5c();
LAB_07d712c4:
            iVar7 = *(int *)(unaff_x22 + 0x334);
            goto LAB_07d712d0;
          }
LAB_07d72aac:
          unaff_x25[0] = 0;
          unaff_x25[1] = 0;
          in_stack_0000112c = 0xffffffff;
          in_stack_00001190 = DAT_015c3d00;
          goto LAB_07d72ac8;
        }
        if (iVar7 == 6) {
          in_stack_0000112c = FUN_07d79b5c();
          uVar6 = *(uint *)(unaff_x22 + 0x334);
          goto LAB_07d71040;
        }
        if (iVar7 == 3) goto LAB_07d7102c;
        goto LAB_07d7166c;
      }
      in_stack_0000112c = FUN_07d79b5c();
      fVar43 = *(float *)(unaff_x22 + 0x2ec);
      if (fVar43 == DAT_015c55ac) {
        lVar21 = *(long *)(unaff_x19 + 0x30);
        if (lVar21 == 0) goto LAB_07d72adc;
        uVar9 = *unaff_x25;
        if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_07d72b20;
        fVar45 = *(float *)(unaff_x22 + 0x2e8);
        fVar43 = 0.0;
        if ((0.0 < fVar45) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
          fVar43 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
        }
        fVar43 = *(float *)(lVar21 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x14c) +
                 (fVar43 - *(float *)(unaff_x22 + 0x34c)) +
                 in_stack_00000020._4_4_ * (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc))
        ;
      }
      else {
        *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
        lVar21 = *(long *)(unaff_x19 + 0x30);
        if (lVar21 == 0) goto LAB_07d72adc;
        fVar45 = *(float *)(unaff_x22 + 0x2e8);
        uVar9 = *(uint *)(unaff_x22 + 0x334);
      }
      if ((*(uint *)(lVar21 + 0x18) <= uVar9) ||
         (uVar30 = uVar9 - 1, *(uint *)(lVar21 + 0x18) <= uVar30)) goto LAB_07d72b20;
      piVar24 = (int *)(lVar21 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27);
      fVar43 = (fStack0000000000000014 + fVar43 + *(float *)(unaff_x22 + 0x380) + fVar45) -
               (float)piVar24[0x4c];
      if ((*(int *)(lVar21 + 0x20 + (long)(int)uVar30 * (long)(int)unaff_w27) != 0xad ||
           (in_stack_00000038._4_4_ & 1) != 0) ||
         ((*(int *)(unaff_x23 + 100) != 0 && (fStack00000000000000a8 <= fVar43)))) {
        if (*piVar24 == 0xad) {
          in_stack_00000038._4_4_ = 1;
        }
        else {
          if ((((in_stack_00000060._4_4_ & 1) != 0) &&
              (iVar7 = *(int *)(unaff_x22 + 0x11f0), iVar7 != -1)) &&
             (iVar7 != in_stack_00000008._4_4_)) {
            in_stack_0000112c = FUN_07d79b5c();
            lVar21 = *(long *)(unaff_x19 + 0x30);
            if (lVar21 == 0) goto LAB_07d72adc;
            uVar9 = *unaff_x25;
            uVar30 = uVar9 - 1;
            if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_07d72b20;
            in_stack_00000008._4_4_ = iVar7;
            if (*(int *)(lVar21 + (long)(int)uVar30 * (long)(int)unaff_w27 + 0x20) == 0xad) {
              in_stack_00000038._4_4_ = 0;
              in_stack_00001190 = CONCAT44(0x2d,uVar30);
              *unaff_x25 = uVar30;
              in_stack_0000112c = in_stack_0000112c - 1;
              goto LAB_07d72ac8;
            }
          }
          if (fStack00000000000000a8 < fVar43) {
            if (*(int *)(unaff_x22 + 0x35c) == -1) {
              *(uint *)(unaff_x22 + 0x35c) = uVar9;
            }
            iVar7 = *(int *)(unaff_x23 + 100);
            in_stack_00000038._4_4_ = 0;
            if (iVar7 < 3) {
              if (iVar7 != 0) {
                if (iVar7 == 1) {
                  iVar7 = FUN_059137dc(unaff_x22 + 0x15f0,
                                       *(undefined8 *)
                                        Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                      );
                  if (iVar7 == 0) {
                    in_stack_00000038._4_4_ = 0;
                    goto LAB_07d72aac;
                  }
                  Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                            (&stack0x000011a0,unaff_x22 + 0x15f0,
                             *(undefined8 *)
                              Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                            );
                  memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                  iVar10 = FUN_07d79b5c();
                  in_stack_00000038._4_4_ = 0;
                  goto LAB_07d712c4;
                }
                if (iVar7 != 2) goto LAB_07d7166c;
              }
LAB_07d729d0:
              FUN_07d7bce4();
              in_stack_00000038._4_4_ = 0;
              in_stack_00000060._4_4_ = 1;
              uStack0000000000000058 = 1;
            }
            else {
              if (iVar7 == 3) {
                in_stack_0000112c = FUN_07d79b5c();
                in_stack_00000038._4_4_ = 0;
              }
              else {
                if (iVar7 != 6) {
                  if (iVar7 != 4) goto LAB_07d7166c;
                  goto LAB_07d729d0;
                }
                in_stack_00000038._4_4_ = 0;
                uVar6 = uVar9;
              }
LAB_07d71040:
              in_stack_00001190 = CONCAT44(3,uVar6);
            }
          }
          else {
            FUN_07d7bce4();
            in_stack_00000038._4_4_ = 0;
            in_stack_00000060._4_4_ = 1;
            uStack0000000000000058 = 1;
          }
        }
      }
      else {
        in_stack_00000038._4_4_ = 0;
        in_stack_00001190 = CONCAT44(0x2d,uVar30);
        *unaff_x25 = uVar30;
        in_stack_0000112c = in_stack_0000112c - 1;
      }
      goto LAB_07d72ac8;
    }
LAB_07d7166c:
    if ((unaff_w24 & 1) == 0) {
      if (*unaff_x21 == 0xad) {
        lVar21 = *(long *)(unaff_x19 + 0x30);
        if (lVar21 != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_07d72b20;
          *(undefined1 *)(lVar21 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x194) = 0;
          goto LAB_07d717bc;
        }
        goto LAB_07d72adc;
      }
      if (*in_stack_00000168 == '\x02') {
        FUN_07d7a738();
      }
      else if (*in_stack_00000168 == '\x01') {
        FUN_07d79ee4();
      }
      uVar6 = *unaff_x25;
      if ((uStack0000000000000058 & 1) != 0) {
        *(uint *)(unaff_x22 + 0x340) = uVar6;
      }
      *(uint *)(unaff_x22 + 0x344) = uVar6;
      *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
      lVar21 = *(long *)(unaff_x19 + 0x48);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      uStack0000000000000058 = 0;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(float *)(lVar21 + 100) = fVar35;
      *(float *)(lVar21 + 0x68) = fVar44;
    }
    else {
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_07d72b20;
      *(undefined1 *)(lVar21 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x194) = 0;
      lVar21 = *(long *)(unaff_x19 + 0x48);
      if (lVar21 == 0) goto LAB_07d72adc;
      uVar6 = *(uint *)(lVar21 + 0x18);
      if (uVar6 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar21 = lVar21 + 0x20;
      lVar27 = lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      iVar7 = *(int *)(lVar27 + 0x10) + 1;
      *(int *)(lVar27 + 0x10) = iVar7;
      uVar9 = *(uint *)(unaff_x22 + 0x350);
      *(int *)(unaff_x22 + 0x358) = iVar7;
      if (uVar6 <= uVar9) goto LAB_07d72b20;
      lVar27 = lVar21 + (long)(int)uVar9 * 0x60;
      *(float *)(lVar27 + 0x44) = fVar35;
      *(float *)(lVar27 + 0x48) = fVar44;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      if (*unaff_x21 == 0xa0) {
        *(int *)(lVar21 + (long)(int)uVar9 * 0x60) = *(int *)(lVar21 + (long)(int)uVar9 * 0x60) + 1;
      }
    }
  }
  else {
    if (iStack000000000000005c == 2) {
      if ((unaff_w24 & 1) == 0 && uVar9 != 0x200b) goto LAB_07d70e7c;
      goto LAB_07d70d34;
    }
    if ((unaff_w24 & 1) == 0) {
LAB_07d70e7c:
      if ((uVar9 != 3) && (uVar9 != 0x200b)) {
        if (uVar9 != 0xad) goto LAB_07d70d34;
        goto LAB_07d70e98;
      }
    }
    else {
LAB_07d70e98:
      if (uVar9 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
    }
    if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
    if (*(int *)(unaff_x23 + 100) == 6) {
      if ((uVar9 & 0xfffffffe) != 10) {
        if ((0x22 < uVar9 - 0x2007) ||
           ((1L << ((ulong)(uVar9 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
        goto LAB_07d71420;
      }
      fVar43 = 0.0;
      if ((0.0 < fVar35) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        fVar43 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
      }
      if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar35)) + fVar43 <=
          fStack00000000000000a8) goto LAB_07d71228;
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar6;
      }
      in_stack_0000112c = FUN_07d79b5c();
      goto LAB_07d71040;
    }
LAB_07d71228:
    if ((int)uVar9 < 0x2007) {
      if (uVar9 != 10) {
LAB_07d713e4:
        if ((uVar9 != 0xb) && (uVar9 != 0xa0)) goto LAB_07d713f4;
        goto LAB_07d71420;
      }
LAB_07d71440:
      lVar21 = *(long *)(unaff_x19 + 0x48);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      uVar9 = *unaff_x21;
LAB_07d7147c:
      if (uVar9 == 0xa0) {
        lVar21 = *(long *)(unaff_x19 + 0x48);
        if (lVar21 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
      }
    }
    else {
      if ((0x22 < uVar9 - 0x2007) || ((1L << ((ulong)(uVar9 - 0x2007) & 0x3f) & 0x600000001U) == 0))
      {
LAB_07d713f4:
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_066bcb80(uVar9,0);
        uVar9 = *unaff_x21;
        if ((uVar13 & 1) != 0) goto LAB_07d71420;
        goto LAB_07d7147c;
      }
LAB_07d71420:
      if (((uVar9 != 0xad) && (uVar9 != 0x200b)) && (uVar9 != 0x2060)) goto LAB_07d71440;
    }
  }
LAB_07d717bc:
  if ((in_stack_00000160._4_4_ == unaff_w26) && (*(int *)(unaff_x23 + 100) == 1)) {
    if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar35 = *(float *)(unaff_x22 + 0xf8);
      fVar43 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar44 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      lVar21 = *(long *)(unaff_x22 + 0x19f8);
      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_07d72adc;
      fVar46 = *(float *)(unaff_x22 + 0xf0);
      fVar31 = *(float *)(lVar21 + 0x2c);
      fVar45 = (float)FUN_07d5378c(*(long *)(lVar21 + 0x20),0);
      uVar11 = *(undefined8 *)in_stack_000000b8;
      fVar45 = (fVar35 / fVar43) * fVar44 * fVar46 * fVar31 * fVar45;
      if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
        lVar21 = *(long *)(unaff_x19 + 0x30);
        if (lVar21 == 0) goto LAB_07d72adc;
        uVar6 = *(int *)(unaff_x22 + 0x334) - 1;
        if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar35 = *(float *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x60);
        fVar43 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar44 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar21 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_07d72adc;
        fVar46 = *(float *)(unaff_x22 + 0xf0);
        fVar31 = *(float *)(lVar21 + 0x2c);
        fVar45 = (float)FUN_07d5378c(*(long *)(lVar21 + 0x20),0);
        lVar21 = *(long *)(unaff_x19 + 0x48);
        if (lVar21 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uVar11 = *(undefined8 *)(lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
        unaff_s12 = 1.0;
        fVar45 = (fVar35 / fVar43) * fVar44 * fVar46 * fVar31 * fVar45;
      }
      fVar43 = 0.0;
      fVar35 = *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x23 + 0x82) == '\0') {
        if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
           (lVar21 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar21 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar21,0);
        fVar43 = (float)FUN_07d53598(&stack0x000010e0,0);
      }
      fVar44 = (fStack00000000000000b4 - (float)uVar11) - (float)((ulong)uVar11 >> 0x20);
      fVar46 = *(float *)(unaff_x22 + 0x368);
      bVar4 = true;
      if ((fVar46 <= fVar44) && (bVar4 = false, !NAN(fVar46))) {
        bVar4 = fVar46 == -1.0;
      }
      if (!bVar4) {
        fVar44 = fVar46;
      }
      if (ABS(fVar35) + fVar45 * fVar43 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) < fVar44) {
        FUN_07d79804();
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  else if (*(int *)(unaff_x23 + 100) == 1) goto LAB_07d717ec;
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
  uVar6 = *(uint *)(unaff_x22 + 0x350);
  *(uint *)(lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) = uVar6;
  if ((in_stack_00000160._4_4_ == unaff_w26) ||
     ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar21 = *(long *)(unaff_x19 + 0x48);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
    if (*(int *)(lVar21 + (long)(int)uVar6 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
  }
  else {
    lVar21 = *(long *)(unaff_x19 + 0x48);
    if (lVar21 == 0) goto LAB_07d72adc;
LAB_07d71a94:
    if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
    *(undefined4 *)(lVar21 + (long)(int)uVar6 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160);
  }
  uVar6 = *unaff_x21;
  if (uVar6 != 0x200b) {
    if (uVar6 == 9) {
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar43 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      bVar5 = FUN_07d617d8(*in_stack_00000148,0);
      fVar44 = *(float *)(unaff_x22 + 0x300);
      cVar18 = *(char *)(unaff_x22 + 0xf4);
      fVar35 = unaff_s14 * fVar43 * (float)bVar5;
      fVar43 = fVar35 * (float)(int)(fVar44 / fVar35);
      if (fVar43 <= fVar44) {
        fVar43 = fVar44 + fVar35;
      }
    }
    else {
      fVar43 = *(float *)(unaff_x22 + 0x2f8);
      if (fVar43 == 0.0) {
        fVar35 = *(float *)(unaff_x22 + 0x300);
        if (*(char *)(unaff_x23 + 0x82) != '\0') {
          fVar43 = (float)FUN_07d57ad0(&stack0x00001100,0);
          if (*in_stack_00000148 != 0) {
            fVar44 = (float)FUN_07d61798(*in_stack_00000148,0);
            cVar18 = *(char *)(unaff_x22 + 0xf4);
            fVar35 = fVar35 - (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              unaff_s14 * fVar43 +
                              fStack00000000000000dc *
                              (fStack00000000000000d0 + fStack00000000000000d4 + fVar44));
            if (cVar18 != '\0') {
              fVar35 = (float)(int)(fVar35 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x300) = fVar35;
            if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
            fVar43 = fVar35 - fStack00000000000000dc * *(float *)(unaff_x23 + 0x90);
            goto FUN_07d71c94;
          }
          goto LAB_07d72adc;
        }
        fVar43 = (float)FUN_07d53598(&stack0x00001110,0);
        fVar45 = *(float *)(unaff_x22 + 0x19b0);
        fVar44 = (float)FUN_07d57ad0(&stack0x00001100,0);
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar46 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
        fVar35 = fVar35 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          unaff_s14 * (fVar43 * fVar45 + fVar44) +
                          fStack00000000000000dc *
                          (fStack00000000000000d0 + fStack00000000000000d4 + fVar46));
      }
      else {
        if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar6 < 0x3b)) &&
           ((1L << ((ulong)uVar6 & 0x3f) & 0x400500000000000U) != 0)) {
          fVar43 = fVar43 * 0.5;
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar35 = *(float *)(unaff_x22 + 0x300);
        fVar44 = (float)FUN_07d61798(*in_stack_00000148,0);
        fVar35 = fVar35 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          (fVar43 - in_stack_00000098._4_4_) +
                          fStack00000000000000dc * (fStack00000000000000d4 + fVar44));
      }
      cVar18 = *(char *)(unaff_x22 + 0xf4);
      if (cVar18 != '\0') {
        fVar35 = (float)(int)(fVar35 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar35;
      if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
      fVar43 = fVar35 + fStack00000000000000dc * *(float *)(unaff_x23 + 0x90);
    }
FUN_07d71c94:
    if (cVar18 != '\0') {
      fVar43 = (float)(int)(fVar43 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar43;
  }
LAB_07d71ca8:
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  uVar6 = *unaff_x25;
  uVar9 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar9 <= uVar6) goto LAB_07d72b20;
  *(undefined4 *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x158) =
       *(undefined4 *)(unaff_x22 + 0x300);
  uVar30 = *unaff_x21;
  if ((int)uVar30 < 0xd) {
    if ((uVar30 - 10 < 2) || (uVar30 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
    if ((uVar30 == 0x2d && in_stack_00000160._4_4_ == unaff_w26) ||
       (uVar6 == uStack000000000000004c)) goto LAB_07d71d54;
    goto LAB_07d72314;
  }
  if (uVar30 != 0x2028) {
    if (uVar30 != 0xd) goto LAB_07d71d38;
    fVar43 = *(float *)(unaff_x22 + 0x308) + unaff_s13;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar43 = (float)(int)(fVar43 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar43;
    if (uVar6 != uStack000000000000004c) {
      uVar30 = 0xd;
      goto LAB_07d72314;
    }
  }
LAB_07d71d54:
  if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
    fVar43 = *(float *)(unaff_x22 + 0x348);
    fVar35 = *(float *)(unaff_x22 + 0x15b8);
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar43 = fVar43 - fVar35;
    if ((fStack0000000000000054 < ABS(fVar43)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      uVar33 = *(undefined4 *)(unaff_x22 + 0x338);
      uVar8 = *(undefined4 *)(unaff_x22 + 0x334);
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      FUN_07d8f610(uVar33,uVar8);
      fVar35 = fVar43 + *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar43;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar35 = (float)(int)(fVar35 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x2e8) = fVar35;
      if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                  (&stack0x00000170,unaff_x22 + 0x15f0,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                  );
        memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
        thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
        *(float *)(unaff_x22 + 0xb00) = fVar43 + *(float *)(unaff_x22 + 0xb00);
        *(float *)(unaff_x22 + 0xb34) = fVar43 + *(float *)(unaff_x22 + 0xb34);
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  fVar35 = *(float *)(unaff_x22 + 0x2e8);
  fVar44 = *(float *)(unaff_x22 + 0x34c) - fVar35;
  fVar43 = *(float *)(unaff_x22 + 900);
  if (fVar44 <= *(float *)(unaff_x22 + 900)) {
    fVar43 = fVar44;
  }
  fVar45 = *(float *)(unaff_x22 + 0x348);
  *(float *)(unaff_x22 + 900) = fVar43;
  if (in_stack_0000119c == '\0') {
    *in_stack_00000040 = fVar43;
  }
  lVar21 = *(long *)(unaff_x19 + 0x48);
  if (lVar21 == 0) goto LAB_07d72adc;
  uVar6 = *(uint *)(unaff_x22 + 0x350);
  if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
  lVar14 = lVar21 + 0x20 + (long)(int)uVar6 * 0x60;
  uVar9 = *(uint *)(unaff_x22 + 0x338);
  *(uint *)(lVar14 + 0x18) = uVar9;
  lVar27 = 0x338;
  if ((int)uVar9 <= *(int *)(unaff_x22 + 0x340)) {
    lVar27 = 0x340;
  }
  uVar25 = *(uint *)(unaff_x22 + lVar27);
  *(uint *)(unaff_x22 + 0x340) = uVar25;
  *(uint *)(lVar14 + 0x1c) = uVar25;
  uVar1 = *(uint *)(unaff_x22 + 0x334);
  *(uint *)(unaff_x22 + 0x33c) = uVar1;
  *(uint *)(lVar14 + 0x20) = uVar1;
  uVar30 = *(uint *)(unaff_x22 + 0x340);
  if ((int)uVar25 <= (int)*(uint *)(unaff_x22 + 0x344)) {
    uVar30 = *(uint *)(unaff_x22 + 0x344);
  }
  *(uint *)(unaff_x22 + 0x344) = uVar30;
  *(uint *)(lVar14 + 0x24) = uVar30;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  uVar20 = uVar30;
  if ((*(uint *)(unaff_x23 + 0x98) & 0xfffffffe) == 2) {
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar1) goto LAB_07d72b20;
    if (*(float *)(lVar27 + (long)(int)uVar1 * (long)(int)unaff_w27 + 0x158) != 0.0) {
      uVar25 = uVar9;
      uVar20 = uVar1;
    }
  }
  lVar21 = lVar21 + 0x20 + (long)(int)uVar6 * 0x60;
  *(uint *)(lVar21 + 4) = (uVar1 - uVar9) + 1;
  iVar7 = *(int *)(in_stack_00000068 + 0x60);
  *(int *)(lVar21 + 8) = iVar7;
  *(uint *)(lVar21 + 0xc) = (uVar30 - (uVar9 + iVar7)) + 1;
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_07d72b20;
  *(undefined4 *)(lVar21 + 0x50) =
       *(undefined4 *)(lVar27 + (long)(int)uVar25 * (long)(int)unaff_w27 + 0x118);
  *(float *)(lVar21 + 0x54) = fVar44;
  lVar21 = *(long *)(unaff_x19 + 0x48);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_07d72b20;
  fVar45 = fVar45 - fVar35;
  lVar21 = lVar21 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
  uVar33 = *(undefined4 *)(lVar27 + (long)(int)uVar20 * (long)(int)unaff_w27 + 0x124);
  *(float *)(lVar21 + 0x5c) = fVar45;
  *(undefined4 *)(lVar21 + 0x58) = uVar33;
  lVar21 = *(long *)(unaff_x19 + 0x48);
  if (lVar21 == 0) goto LAB_07d72adc;
  uVar9 = *(uint *)(unaff_x22 + 0x350);
  uVar6 = *(uint *)(lVar21 + 0x18);
  if (*(char *)(unaff_x23 + 0xa0) == '\0') {
    if (uVar6 <= uVar9) goto LAB_07d72b20;
    lVar27 = lVar21 + (long)(int)uVar9 * 0x60;
    fVar43 = *(float *)(lVar27 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
  }
  else {
    if (uVar6 <= uVar9) goto LAB_07d72b20;
    lVar14 = *(long *)(unaff_x19 + 0x30);
    if (lVar14 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_07d72b20;
    lVar27 = lVar21 + (long)(int)uVar9 * 0x60;
    fVar43 = *(float *)(lVar14 + (long)(int)uVar20 * (long)(int)unaff_w27 + 0x158);
  }
  *(float *)(lVar27 + 0x48) = fVar43;
  if (uVar6 <= uVar9) goto LAB_07d72b20;
  lVar27 = lVar21 + 0x20 + (long)(int)uVar9 * 0x60;
  *(float *)(lVar27 + 0x40) = fStack0000000000000100;
  if (*(int *)(lVar27 + 4) == 1) {
    *(undefined4 *)(lVar21 + 0x20 + (long)(int)uVar9 * 0x60 + 0x4c) =
         *(undefined4 *)(unaff_x22 + 0x160);
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar43 = (float)FUN_07d61798(*in_stack_00000148,0);
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  uVar6 = *(uint *)(unaff_x22 + 0x344);
  uVar9 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar9 <= uVar6) goto LAB_07d72b20;
  uVar30 = *(uint *)(unaff_x22 + 0x350);
  lVar27 = *(long *)(unaff_x19 + 0x48);
  fVar43 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
           (*(float *)(unaff_x22 + 0x2f4) +
           fStack00000000000000dc * (fStack00000000000000d0 + fStack00000000000000d4 + fVar43));
  if (*(char *)(lVar21 + 0x20 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x174) == '\0') {
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar6 = *(uint *)(unaff_x22 + 0x33c);
    if (uVar9 <= uVar6) goto LAB_07d72b20;
  }
  else if (lVar27 == 0) goto LAB_07d72adc;
  bVar4 = *(uint *)(lVar27 + 0x18) <= uVar30;
  if (*(char *)(unaff_x23 + 0x82) == '\0') {
    if (bVar4) goto LAB_07d72b20;
    fVar43 = -fVar43;
  }
  else if (bVar4) goto LAB_07d72b20;
  *(float *)(lVar27 + (long)(int)uVar30 * 0x60 + 0x5c) =
       *(float *)(lVar21 + 0x20 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x138) + fVar43;
  if (*(uint *)(lVar27 + 0x18) <= uVar30) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)uVar30 * 0x60;
  *(float *)(lVar27 + 0x54) = unaff_s13 - *(float *)(unaff_x22 + 0x2e8);
  *(float *)(lVar27 + 0x58) = fVar44;
  *(float *)(lVar27 + 0x4c) = fStack0000000000000048 + (fVar45 - fVar44);
  *(float *)(lVar27 + 0x50) = fVar45;
  uVar30 = *unaff_x21;
  if ((int)uVar30 < 0x2d) {
    if (uVar30 - 10 < 2) {
LAB_07d72208:
      FUN_07d79804();
      uVar6 = *(uint *)(unaff_x22 + 0x334);
      iVar7 = *(int *)(unaff_x22 + 0x350) + 1;
      *(uint *)(unaff_x22 + 0x338) = uVar6 + 1;
      *(int *)(unaff_x22 + 0x350) = iVar7;
      *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar7) {
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07d8f790(iVar7);
          uVar6 = *unaff_x25;
        }
        lVar21 = *(long *)(unaff_x19 + 0x30);
        if (lVar21 != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
          fVar35 = *(float *)(unaff_x22 + 0x2ec);
          fVar43 = *(float *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x14c);
          if (fVar35 == DAT_015c55ac) {
            if ((*unaff_x21 == 0x2029) || (fVar44 = 0.0, *unaff_x21 == 10)) {
              fVar44 = *(float *)(unaff_x23 + 0x94);
            }
            uVar19 = 0;
            fVar35 = fVar43 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                     in_stack_00000020._4_4_ *
                     (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
          }
          else {
            if ((*unaff_x21 == 0x2029) || (fVar44 = 0.0, *unaff_x21 == 10)) {
              fVar44 = *(float *)(unaff_x23 + 0x94);
            }
            uVar19 = 1;
          }
          fVar35 = *(float *)(unaff_x22 + 0x2e8) +
                   fVar35 + fStack00000000000000dc * (fVar44 + unaff_s13);
          bVar4 = *(char *)(unaff_x22 + 0xf4) != '\0';
          *(undefined1 *)(unaff_x22 + 0x2f0) = uVar19;
          *(float *)(unaff_x22 + 0x15b8) = fVar43;
          fVar43 = *(float *)(unaff_x22 + 0x304) + unaff_s13 + *(float *)(unaff_x22 + 0x308);
          if (bVar4) {
            fVar35 = (float)(int)(fVar35 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x2e8) = fVar35;
          if (bVar4) {
            fVar43 = (float)(int)(fVar43 + unaff_s15);
          }
          *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
          *(float *)(unaff_x22 + 0x300) = fVar43;
          FUN_07d79804();
          FUN_07d79804();
          *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
          in_stack_00000060._4_4_ = 1;
          uStack0000000000000058 = 1;
          goto LAB_07d72ac8;
        }
      }
      goto LAB_07d72adc;
    }
    if (uVar30 == 3) {
      if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
      uVar30 = 3;
      in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
    }
  }
  else if ((uVar30 - 0x2028 < 2) || (uVar30 == 0x2d)) goto LAB_07d72208;
LAB_07d72314:
  uVar6 = *unaff_x25;
  if (uVar9 <= uVar6) goto LAB_07d72b20;
  lVar21 = lVar21 + 0x20;
  if (*(char *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x174) != '\0') {
    lVar27 = lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27;
    auVar37 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
    uVar11 = *(undefined8 *)(lVar27 + 0xf8);
    auVar39 = NEON_ext(auVar37,auVar37,8,1);
    uVar12 = *(undefined8 *)(lVar27 + 0x104);
    auVar40._0_4_ = -(uint)(auVar37._0_4_ < (float)uVar11);
    auVar40._4_4_ = -(uint)(auVar37._4_4_ < (float)((ulong)uVar11 >> 0x20));
    auVar40._8_4_ = -(uint)((float)uVar12 < auVar39._0_4_);
    auVar40._12_4_ = -(uint)((float)((ulong)uVar12 >> 0x20) < auVar39._4_4_);
    auVar39._8_8_ = uVar12;
    auVar39._0_8_ = uVar11;
    auVar37 = auVar37 ^ (auVar37 ^ auVar39) & ~auVar40;
    *(long *)(in_stack_00000068 + 0x80) = auVar37._8_8_;
    *(long *)(in_stack_00000068 + 0x78) = auVar37._0_8_;
  }
  if (((iStack00000000000000b0 != 3) && (iStack00000000000000b0 != 0)) ||
     ((*(uint *)(unaff_x23 + 100) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x23 + 100) & 0x1f) & 0x4aU) != 0)))) {
    if (((uStack0000000000000104 & 1) == 0) && (uVar30 != 0x200b)) {
      if (uVar30 == 0x2d) {
        if (0 < (int)uVar6) {
          if (uVar9 <= uVar6 - 1) goto LAB_07d72b20;
          uVar33 = *(undefined4 *)(lVar21 + (ulong)(uVar6 - 1) * (ulong)unaff_w27);
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar13 = FUN_066b9610(uVar33,0);
          if ((uVar13 & 1) != 0) {
            uVar30 = *unaff_x21;
            goto LAB_07d72408;
          }
        }
        goto LAB_07d72410;
      }
LAB_07d72408:
      if (uVar30 == 0xad) goto LAB_07d72410;
      if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
      if ((in_stack_00000060._4_4_ & 1) == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
        in_stack_00000060._4_4_ = 0;
        goto LAB_07d72940;
      }
LAB_07d72618:
      if ((in_stack_00000038._4_4_ & 1) == 0 && *unaff_x21 == 0xad) {
LAB_07d72434:
        FUN_07d79804();
        in_stack_00000060._4_4_ = 1;
      }
      else {
LAB_07d72630:
        in_stack_00000060._4_4_ = 1;
      }
    }
    else {
LAB_07d72410:
      if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
      uVar30 = *unaff_x21;
      if ((int)uVar30 < 0x2007) {
        if (uVar30 == 0x2d) {
          uVar6 = *unaff_x25 - 1;
          if (0 < (int)*unaff_x25) {
            lVar21 = *(long *)(unaff_x19 + 0x30);
            if (lVar21 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
            uVar33 = *(undefined4 *)(lVar21 + (ulong)uVar6 * (ulong)unaff_w27 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_066b9610(uVar33,0);
            if ((uVar13 & 1) != 0) goto LAB_07d72940;
          }
        }
        else if (uVar30 == 0xa0) goto LAB_07d72644;
      }
      else if (((uVar30 - 0x2007 < 0x29) &&
               ((1L << ((ulong)(uVar30 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
              (uVar30 == 0x2060)) {
LAB_07d72644:
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_07d90128(uVar30,0);
        if ((uVar13 & 1) == 0) {
LAB_07d7268c:
          uVar6 = *unaff_x21;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar13 = FUN_07d901bc(uVar6,0);
          if ((uVar13 & 1) == 0) {
            if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
               (uVar6 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar6)) {
LAB_07d72418:
              if ((in_stack_00000060._4_4_ & 1) != 0) {
                if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72618;
                if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                goto LAB_07d72630;
              }
              goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
            }
            lVar21 = *(long *)(unaff_x19 + 0x30);
            if (lVar21 != 0) {
              if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
              uVar33 = *(undefined4 *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x20);
              if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                          0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_07d901bc(uVar33,0);
              if ((uVar13 & 1) == 0) goto LAB_07d72418;
              lVar21 = *(long *)(unaff_x19 + 0x30);
              if (lVar21 != 0) {
                if (*(uint *)(lVar21 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
                if (in_stack_00000018 != 0) {
                  uVar33 = *(undefined4 *)
                            (lVar21 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
                  lVar21 = FUN_07d86e90(in_stack_00000018,0);
                  if ((lVar21 != 0) && (lVar21 = FUN_07d98b58(lVar21,0), lVar21 != 0)) {
                    uVar6 = FUN_049ddf40(lVar21,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                    lVar21 = FUN_07d86e90(in_stack_00000018,0);
                    if ((lVar21 != 0) && (lVar21 = FUN_07d98b58(lVar21,0), lVar21 != 0)) {
                      uVar9 = FUN_049ddf40(lVar21,uVar33,*(undefined8 *)PTR_DAT_084b5110);
                      if (((uVar6 | uVar9) & 1) != 0) goto LAB_07d72940;
                      goto LAB_07d72934;
                    }
                  }
                }
              }
            }
            goto LAB_07d72adc;
          }
          if (in_stack_00000018 == 0) goto LAB_07d72adc;
        }
        else {
          if ((in_stack_00000018 == 0) || (lVar21 = FUN_07d86e90(in_stack_00000018,0), lVar21 == 0))
          goto LAB_07d72adc;
          if (*(char *)(lVar21 + 0x28) != '\0') goto LAB_07d7268c;
        }
        lVar21 = FUN_07d86e90(in_stack_00000018,0);
        if ((lVar21 == 0) || (lVar21 = FUN_07d98b58(lVar21,0), lVar21 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_049ddf40(lVar21,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
        if ((int)*unaff_x25 < (int)uStack000000000000004c) {
          lVar21 = FUN_07d86e90(in_stack_00000018,0);
          if (lVar21 == 0) goto LAB_07d72adc;
          lVar21 = FUN_07d98da0(lVar21,0);
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
          if (lVar21 == 0) goto LAB_07d72adc;
          uVar6 = FUN_049ddf40(lVar21,*(undefined4 *)
                                       (lVar27 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27
                                       + 0x20),*(undefined8 *)PTR_DAT_084b5110);
          if ((uVar13 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
          in_stack_00000060._4_4_ = uVar6 & in_stack_00000060._4_4_;
          uStack0000000000000104 = in_stack_00000060._4_4_ & uStack0000000000000104;
          if (((in_stack_00000060._4_4_ & 1) != 0) || (((uVar6 ^ 1) & 1) != 0)) goto LAB_07d728a8;
          in_stack_00000060._4_4_ = 0;
        }
        else {
          uVar6 = 0;
          if ((uVar13 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
          if ((in_stack_00000060._4_4_ & unaff_w29 == unaff_w20) == 0) goto LAB_07d72940;
          in_stack_00000060._4_4_ = 1;
LAB_07d728a8:
          FUN_07d79804();
        }
        if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72940;
        goto LAB_07d72934;
      }
      in_stack_00000060._4_4_ = 0;
      *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
    }
LAB_07d72934:
    FUN_07d79804();
  }
LAB_07d72940:
  FUN_07d79804();
  *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
LAB_07d72ac8:
  do {
    lVar21 = *(long *)(unaff_x22 + 0x20);
    in_stack_0000112c = in_stack_0000112c + 1;
    if (lVar21 == 0) goto LAB_07d72adc;
    if ((int)*(uint *)(lVar21 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
      FUN_07d797b8();
      return;
    }
    if (*(uint *)(lVar21 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
    uVar6 = *(uint *)(lVar21 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
    if (uVar6 == 0) goto LAB_07d72ae0;
    *unaff_x21 = uVar6;
    if (5 < in_stack_00000108) {
      uVar11 = FUN_0676d8dc();
      uVar12 = FUN_0674e2a4(&stack0x0000112c,0);
      uVar11 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar11,
                            *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4fb40(uVar11,0);
      uVar6 = *unaff_x21;
      in_stack_00001190 = CONCAT44(3,*unaff_x25);
    }
  } while (uVar6 == 0x1a);
  if ((uVar6 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
    in_stack_00000168[0] = '\x01';
    in_stack_00000168[1] = '\x01';
    uVar13 = FUN_07d74ca8();
    if (((uVar13 & 1) != 0) && (in_stack_0000112c = in_stack_000010fc, *in_stack_00000168 == '\x01')
       ) goto LAB_07d72ac8;
  }
  else {
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *in_stack_00000168 = *(char *)(lVar21 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar21 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar21 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
  }
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  unaff_w26 = *(uint *)(unaff_x22 + 0x334);
  uVar6 = *(uint *)(lVar21 + 0x18);
  if (uVar6 <= unaff_w26) goto LAB_07d72b20;
  lVar27 = lVar21 + 0x20;
  in_stack_00000160._4_4_ = (uint)in_stack_00001190;
  uVar33 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar18 = *(char *)(lVar27 + (long)(int)unaff_w26 * (long)(int)unaff_w27 + 0x3c);
  in_stack_00000168[1] = '\0';
  if (in_stack_00000160._4_4_ == unaff_w26) {
    uVar9 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar9;
    *in_stack_00000168 = '\x01';
    if (uVar9 == 0x2026) {
      if (uVar6 <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
           *(undefined8 *)(unaff_x22 + 0x19f8);
      thunk_FUN_03afed3c();
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(undefined8 *)(lVar21 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
      *(undefined1 *)(lVar21 + 0x28) = 1;
      thunk_FUN_03afed3c();
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
           *(undefined8 *)(unaff_x22 + 0x1a08);
      thunk_FUN_03afed3c();
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
           *(undefined4 *)(unaff_x22 + 0x1a10);
      lVar21 = *(long *)(unaff_x22 + 0x15c0);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
      lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
      *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
      uVar6 = *(uint *)(unaff_x22 + 0x334);
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      in_stack_00001190 = CONCAT44(3,uVar6 + 1);
      goto joined_r0x07d6f120;
    }
    if (uVar9 == 3) {
      if (*in_stack_00000148 != 0) {
        uVar6 = *unaff_x25;
        lVar14 = FUN_07d61598(*in_stack_00000148,0);
        if (lVar14 != 0) {
          uVar11 = FUN_060344a4(lVar14,3,*(undefined8 *)
                                          System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                               );
          if (uVar6 < *(uint *)(lVar21 + 0x18)) {
            *(undefined8 *)(lVar27 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x10) = uVar11;
            thunk_FUN_03afed3c();
            *(undefined1 *)(unaff_x22 + 0x4d) = 1;
            goto LAB_07d6efec;
          }
          goto LAB_07d72b20;
        }
      }
      goto LAB_07d72adc;
    }
  }
LAB_07d6efec:
  uVar6 = *unaff_x25;
joined_r0x07d6f120:
  unaff_x23 = in_stack_00000140;
  if (((int)uVar6 < 0) && (*unaff_x21 != 3)) {
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
    lVar21 = lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar21 + 0x194) = 0;
    *(undefined4 *)(lVar21 + 0x20) = 0x200b;
    *(undefined4 *)(lVar21 + 100) = 0;
    *unaff_x25 = uVar6 + 1;
    goto LAB_07d72ac8;
  }
  cVar2 = *in_stack_00000168;
  if (cVar2 == '\x01') {
    uVar6 = *(uint *)(unaff_x22 + 300);
    if ((uVar6 >> 4 & 1) == 0) {
      if ((uVar6 >> 3 & 1) == 0) {
        unaff_s10 = 1.0;
        if ((uVar6 >> 5 & 1) != 0) {
          uVar6 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar13 = FUN_066bbc7c(uVar6,0);
          unaff_s10 = 1.0;
          if ((uVar13 & 1) != 0) {
            uVar6 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar6 = FUN_066bbf04(uVar6,0);
            unaff_s10 = fStack0000000000000010;
            goto LAB_07d6f260;
          }
        }
      }
      else {
        uVar6 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_066bbbdc(uVar6,0);
        unaff_s10 = 1.0;
        if ((uVar13 & 1) != 0) {
          uVar6 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar6 = FUN_066bc07c(uVar6,0);
          goto LAB_07d6f25c;
        }
      }
    }
    else {
      uVar6 = *unaff_x21;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_066bbc7c(uVar6,0);
      unaff_s10 = 1.0;
      if ((uVar13 & 1) != 0) {
        uVar6 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar6 = FUN_066bbf04(uVar6,0);
LAB_07d6f25c:
        unaff_s10 = 1.0;
LAB_07d6f260:
        *unaff_x21 = uVar6 & 0xffff;
      }
    }
    cVar2 = *in_stack_00000168;
  }
  else {
    unaff_s10 = 1.0;
  }
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (cVar2 != '\x01') {
    if (cVar2 != '\x02') {
      uVar6 = *unaff_x21;
      fVar43 = 0.0;
      if (uVar6 != 3 && uVar6 != 0xad) {
        fVar43 = unaff_s14;
      }
      fVar35 = 0.0;
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      in_stack_000000e8 = unaff_s14;
      if (lVar21 == 0) goto LAB_07d72adc;
      goto LAB_07d6fa24;
    }
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    plVar28 = *(long **)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
    if (plVar28 == (long *)0x0) goto LAB_07d72adc;
    bVar5 = *(byte *)(*(long *)
                       Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                     + 0x130);
    if ((*(byte *)(*plVar28 + 0x130) < bVar5) ||
       (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar5 * 8 + -8) !=
        *(long *)Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar28);
    }
    plVar15 = (long *)FUN_07d8466c(plVar28,0);
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)0x0;
      *in_stack_000000e0 = 0;
    }
    else {
      lVar21 = *(long *)Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
      bVar5 = *(byte *)(lVar21 + 0x130);
      if (*(byte *)(*plVar15 + 0x130) < bVar5) {
        plVar26 = (long *)0x0;
      }
      else {
        plVar26 = plVar15;
        if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) != lVar21) {
          plVar26 = (long *)0x0;
        }
      }
      *in_stack_000000e0 = (long)plVar26;
      if (*(byte *)(*plVar15 + 0x130) < bVar5) {
        plVar15 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) != lVar21) {
        plVar15 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(in_stack_000000e0,plVar15);
    iVar7 = FUN_07d85970(plVar28,0);
    *(int *)(unaff_x22 + 0x158c) = iVar7;
    if (*unaff_x21 == 0x3c) {
      *unaff_x21 = iVar7 + 0xe000;
    }
    else {
      uVar8 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
      *(undefined4 *)(unaff_x22 + 0x1590) = uVar8;
    }
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    fVar35 = *(float *)(unaff_x22 + 0xf8);
    FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
    memcpy(&stack0x00001130,&stack0x000011a0,0x60);
    fVar43 = (float)FUN_07d5328c(&stack0x00001130,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
    memcpy(&stack0x00001130,&stack0x00000170,0x60);
    fVar44 = (float)FUN_07d53294(&stack0x00001130,0);
    if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
    fVar44 = (fVar35 / fVar43) * fVar44;
    fVar43 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
    fVar45 = *(float *)(unaff_x22 + 0xf8);
    if (fVar43 <= 0.0) {
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar43 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar46 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
      if (plVar28[4] == 0) goto LAB_07d72adc;
      FUN_07d53750(&stack0x000011a0,plVar28[4],0);
      fVar31 = (float)FUN_07d53580(&stack0x000010e0,0);
      if (plVar28[4] == 0) goto LAB_07d72adc;
      fVar42 = *(float *)((long)plVar28 + 0x2c);
      fVar32 = (float)FUN_07d5378c(plVar28[4],0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar48 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar34 = *(float *)(unaff_x22 + 0xf0);
      fVar35 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fStack00000000000000f4 = (fVar45 / fVar43) * fStack00000000000000f4;
      in_stack_000000e8 = fStack00000000000000f4 * (fVar46 / fVar31) * fVar42 * fVar32;
      fStack00000000000000f4 = fStack00000000000000f4 / in_stack_000000e8;
      fVar35 = fVar44 * fVar48 * fVar34 * fVar35;
      fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
      fVar43 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      fStack00000000000000f4 = fStack00000000000000f4 * fVar43;
    }
    else {
      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
      fVar43 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
      fVar46 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
      if (plVar28[4] == 0) goto LAB_07d72adc;
      fVar42 = *(float *)((long)plVar28 + 0x2c);
      fVar31 = (float)FUN_07d5378c(plVar28[4],0);
      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
      fVar32 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
      fVar48 = *(float *)(unaff_x22 + 0xf0);
      fVar35 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
      if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
      fVar35 = fVar44 * fVar32 * fVar48 * fVar35;
      in_stack_000000e8 = (fVar45 / fVar43) * fVar46 * fVar42 * fVar31;
      fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0);
    }
    *(long **)(unaff_x22 + 0x1598) = plVar28;
    thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar28);
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(long *)(lVar21 + 0x48) = *in_stack_000000e0;
    *(undefined1 *)(lVar21 + 0x28) = 2;
    *(float *)(lVar21 + 0x160) = in_stack_000000e8;
    thunk_FUN_03afed3c();
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(long *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) = *in_stack_00000148;
    thunk_FUN_03afed3c();
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined4 *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
         *(undefined4 *)(unaff_x22 + 0x78);
    in_stack_00000138._4_4_ = 0.0;
    *(undefined4 *)(unaff_x22 + 0x78) = uVar33;
    unaff_s15 = in_stack_000000c0._4_4_;
    goto LAB_07d6fa0c;
  }
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined8 *)(unaff_x22 + 0x1598) =
       *(undefined8 *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
  thunk_FUN_03afed3c(unaff_x22 + 0x1598);
  if (*(long *)(unaff_x22 + 0x1598) != 0) goto LAB_07d6f348;
  goto LAB_07d72ac8;
LAB_07d70c24:
  fVar45 = *(float *)(unaff_x22 + 0x188);
  unaff_s8 = fVar43 + fVar45;
  fVar44 = fVar44 + fVar45;
  fVar43 = unaff_s8;
  fVar35 = fVar44;
  if (fVar45 != 0.0) {
    fVar43 = (unaff_s8 - fVar45) / *(float *)(unaff_x22 + 0xf0);
    fVar35 = (fVar44 - fVar45) / *(float *)(unaff_x22 + 0xf0);
    if (fVar43 <= unaff_s8) {
      fVar43 = unaff_s8;
    }
    if (fVar44 <= fVar35) {
      fVar35 = fVar44;
    }
  }
  lVar21 = lVar21 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
  param_4 = fVar43;
  if (fVar43 <= *(float *)(unaff_x22 + 0x348)) {
    param_4 = *(float *)(unaff_x22 + 0x348);
  }
  fVar45 = fVar35;
  if (*(float *)(unaff_x22 + 0x34c) <= fVar35) {
    fVar45 = *(float *)(unaff_x22 + 0x34c);
  }
  *(float *)(unaff_x22 + 0x348) = param_4;
  *(float *)(unaff_x22 + 0x34c) = fVar45;
  *(float *)(lVar21 + 300) = fVar43;
  *(float *)(lVar21 + 0x130) = fVar35;
  fVar35 = *(float *)(unaff_x22 + 0x2e8);
  *(float *)(lVar21 + 0x120) = unaff_s8 - fVar35;
  *(float *)(lVar21 + 0x128) = fVar44 - fVar35;
  *(float *)(unaff_x22 + 900) = fVar44 - fVar35;
  if (*(int *)(unaff_x22 + 0x350) == 0) goto code_r0x07d70cb4;
  goto LAB_07d70ce8;
code_r0x07d70cb4:
  param_1 = *(long *)(unaff_x22 + 0x68);
  goto code_r0x07d70cb8;
LAB_07d6f348:
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *in_stack_00000148 = *(long *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
  thunk_FUN_03afed3c(in_stack_00000148);
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *in_stack_00000090 = *(long *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50);
  thunk_FUN_03afed3c();
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  uVar9 = *unaff_x25;
  uVar6 = *(uint *)(lVar21 + 0x18);
  if (uVar6 <= uVar9) goto LAB_07d72b20;
  *(undefined4 *)(unaff_x22 + 0x78) =
       *(undefined4 *)(lVar21 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x38);
  if (in_stack_00000160._4_4_ == unaff_w26) {
    lVar27 = *(long *)(unaff_x22 + 0x20);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
    if ((*(int *)(lVar27 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
       (uVar9 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
    if (uVar6 <= uVar9 - 1) goto LAB_07d72b20;
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar35 = *(float *)(lVar21 + 0x20 + (long)(int)(uVar9 - 1) * (long)(int)unaff_w27 + 0x40);
    fVar43 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar44 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar44 = ((unaff_s10 * fVar35) / fVar43) * fVar44;
LAB_07d6f900:
    fStack00000000000000f4 = 0.0;
    fStack00000000000000f8 = 0.0;
    if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
  }
  else {
LAB_07d6f408:
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    fVar35 = *(float *)(unaff_x22 + 0xf8);
    fVar43 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar44 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar44 = ((unaff_s10 * fVar35) / fVar43) * fVar44;
    if (in_stack_00000160._4_4_ == unaff_w26) goto LAB_07d6f900;
LAB_07d6f918:
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
  }
  lVar21 = *(long *)(unaff_x22 + 0x1598);
  if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_07d72adc;
  fVar43 = *(float *)(unaff_x22 + 0xf0);
  fVar45 = *(float *)(lVar21 + 0x2c);
  in_stack_000000e8 = (float)FUN_07d5378c(*(long *)(lVar21 + 0x20),0);
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar46 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar31 = *(float *)(unaff_x22 + 0xf0);
  fVar35 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
  lVar21 = *(long *)(unaff_x19 + 0x30);
  fVar35 = fVar44 * fVar46 * fVar31 * fVar35;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar35 = (float)(int)(fVar35 + unaff_s15);
  }
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar27 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar27 + 0x28) = 1;
  in_stack_000000e8 = fVar44 * fVar43 * fVar45 * in_stack_000000e8;
  *(float *)(lVar27 + 0x160) = in_stack_000000e8;
  in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
  unaff_s12 = 1.0;
  unaff_s13 = 0.0;
  uVar6 = *unaff_x21;
  fVar43 = 0.0;
  if (uVar6 != 3 && uVar6 != 0xad) {
    fVar43 = in_stack_000000e8;
  }
LAB_07d6fa24:
  unaff_s14 = fVar43;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(uint *)(lVar21 + 0x20) = uVar6;
  *(undefined4 *)(lVar21 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
  *(undefined4 *)(lVar21 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
       *(undefined4 *)(unaff_x22 + 0x1b8);
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
       *(undefined4 *)(unaff_x22 + 0x1bc);
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  auVar39 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
  *(undefined4 *)(lVar21 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
  *(long *)(lVar21 + 0x184) = auVar39._8_8_;
  *(long *)(lVar21 + 0x17c) = auVar39._0_8_;
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  uVar6 = *(uint *)(unaff_x22 + 0x334);
  uVar9 = *(uint *)(lVar21 + 0x18);
  if (uVar9 <= uVar6) goto LAB_07d72b20;
  lVar27 = lVar21 + 0x20 + (long)(int)uVar6 * (long)(int)unaff_w27;
  uVar30 = *(uint *)(unaff_x22 + 300);
  *(uint *)(lVar27 + 0x170) = uVar30;
  if (*(int *)(unaff_x22 + 0x13c) == 700) {
    *(uint *)(lVar27 + 0x170) = uVar30 | 1;
    uVar6 = *unaff_x25;
  }
  if (uVar9 <= uVar6) goto LAB_07d72b20;
  lVar21 = *(long *)(lVar21 + 0x20 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x18);
  if (lVar21 == 0) {
    if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
       (lVar21 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar21 == 0)) goto LAB_07d72adc;
    FUN_07d53750(&stack0x000011a0,lVar21,0);
  }
  else {
    FUN_07d53750(&stack0x00000510,lVar21,0);
  }
  uVar6 = *unaff_x21;
  if (uVar6 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    unaff_w24 = FUN_066b9610(uVar6,0);
  }
  else {
    unaff_w24 = 0;
  }
  fStack00000000000000d4 = *(float *)(in_stack_00000140 + 0x8c);
  if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*in_stack_00000168 == '\x01')) {
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
    uVar6 = *unaff_x25;
    uVar9 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
    if ((int)uVar6 < (int)uStack000000000000004c) {
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      uVar6 = uVar6 + 1;
      if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
      if (*(char *)(lVar21 + 0x20 + (long)(int)uVar6 * (long)(int)unaff_w27 + 8) == '\x01') {
        lVar21 = *(long *)(lVar21 + 0x20 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x10);
        if ((((lVar21 == 0) || (*in_stack_00000148 == 0)) ||
            (lVar27 = *(long *)(*in_stack_00000148 + 0x170), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_05ffa6e0(lVar27,uVar9 | *(int *)(lVar21 + 0x28) << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar13 & 1) != 0) {
          FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          uVar13 = FUN_07d57e7c(&stack0x000010b0,0);
          if ((uVar13 & 0x100) != 0) {
            fStack00000000000000d4 = unaff_s13;
          }
        }
      }
      uVar6 = *unaff_x25;
    }
    uVar30 = uVar6 - 1;
    if (0 < (int)uVar6) {
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= uVar30) goto LAB_07d72b20;
      lVar27 = *(long *)(lVar21 + 0x20 + (ulong)uVar30 * (ulong)unaff_w27 + 0x10);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(char *)(lVar21 + 0x20 + (ulong)uVar30 * (ulong)unaff_w27 + 8) == '\x01') {
        if (((*in_stack_00000148 == 0) ||
            (lVar21 = *(long *)(*in_stack_00000148 + 0x170), lVar21 == 0)) ||
           (lVar21 = *(long *)(lVar21 + 0x40), lVar21 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_05ffa6e0(lVar21,*(uint *)(lVar27 + 0x28) | uVar9 << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar13 & 1) != 0) {
          FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          FUN_07d57af4(0);
          uVar13 = FUN_07d57e7c(&stack0x000010b0,0);
          unaff_s15 = in_stack_000000c0._4_4_;
          if ((uVar13 & 0x100) != 0) {
            fStack00000000000000d4 = unaff_s13;
          }
        }
      }
    }
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    uVar6 = *unaff_x25;
    uVar33 = FUN_07d57ad0(&stack0x00001100,0);
    if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
    *(undefined4 *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x154) = uVar33;
  }
  uVar6 = *unaff_x21;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uStack00000000000000d8 = FUN_07d8fcc4(uVar6,0);
  uVar6 = *unaff_x25;
  uVar13 = (ulong)uVar6;
  if ((uStack00000000000000d8 & 1) == 0) {
    if (0 < (int)uVar6) {
      if ((((uVar3 & 1) == 0) || (uVar9 = *(uint *)(unaff_x22 + 0x19cc), uVar9 == 0x80000000)) ||
         (uVar9 != uVar6 - 1)) {
        if ((_iStack0000000000000028 & 0x100000000) == 0) {
          bVar4 = false;
        }
        else {
          lVar21 = uVar13 * unaff_w27 + 0x144;
          uVar29 = uVar13;
          do {
            uVar29 = uVar29 - 1;
            iVar7 = (int)uVar13;
            uVar6 = iVar7 - 1;
            uVar13 = (ulong)uVar6;
            if ((iVar7 < 1) || (uVar29 == *(uint *)(unaff_x22 + 0x19cc))) {
              bVar4 = false;
              goto LAB_07d71064;
            }
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= uVar29) goto LAB_07d72b20;
            lVar27 = *(long *)(lVar27 + lVar21 + -0x28c);
            if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
            uVar9 = FUN_07d53740(lVar27,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar7 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar27 = FUN_07d61740(*in_stack_00000148,0), lVar27 == 0)) ||
               (*(long *)(lVar27 + 0x50) == 0)) goto LAB_07d72adc;
            uVar16 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                               (*(long *)(lVar27 + 0x50),uVar9 | iVar7 << 0x10,&stack0x00001050,
                                *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
            lVar21 = lVar21 + -0x178;
          } while ((uVar16 & 1) == 0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar6) goto LAB_07d72b20;
          FUN_07d580c8(&stack0x00001050,0);
          UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
          FUN_07d580e8(&stack0x00001050,0);
          FUN_07d58058(&stack0x00001068,0);
          FUN_07d57ab8(&stack0x00001100,0);
          FUN_07d580c8(&stack0x00001050,0);
          FUN_07d58048(&stack0x00001070,0);
          FUN_07d580e8(&stack0x00001050,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fStack00000000000000d4 = 0.0;
          bVar4 = true;
        }
LAB_07d71064:
        if ((uVar3 & 1) != 0) {
          uVar6 = *(uint *)(unaff_x22 + 0x19cc);
          if (uVar6 == 0x80000000) {
            bVar4 = true;
          }
          if (!bVar4) {
            lVar21 = *(long *)(unaff_x19 + 0x30);
            if (lVar21 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar21 + 0x18) <= uVar6) goto LAB_07d72b20;
            lVar21 = *(long *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x30);
            if ((lVar21 == 0) || (lVar21 = FUN_07d88988(lVar21,0), lVar21 == 0)) goto LAB_07d72adc;
            uVar6 = FUN_07d53740(lVar21,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar7 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar21 = FUN_07d61740(*in_stack_00000148,0), lVar21 == 0)) ||
               (*(long *)(lVar21 + 0x48) == 0)) goto LAB_07d72adc;
            uVar13 = FUN_06008730(*(long *)(lVar21 + 0x48),uVar6 | iVar7 << 0x10,&stack0x00001038,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            if ((uVar13 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
              if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= *(uint *)(unaff_x22 + 0x19cc))
              goto LAB_07d72b20;
              FUN_07d58088(&stack0x00001038,0);
              UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
              FUN_07d580a8(&stack0x00001038,0);
              FUN_07d58058(&stack0x00001068,0);
              FUN_07d57ab8(&stack0x00001100,0);
              FUN_07d58088(&stack0x00001038,0);
              FUN_07d58048(&stack0x00001070,0);
              puVar17 = &stack0x00001038;
              goto LAB_07d711ec;
            }
          }
        }
      }
      else {
        lVar21 = *(long *)(unaff_x19 + 0x30);
        if (lVar21 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar21 + 0x18) <= uVar9) goto LAB_07d72b20;
        lVar21 = *(long *)(lVar21 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x30);
        if ((lVar21 == 0) || (lVar21 = FUN_07d88988(lVar21,0), lVar21 == 0)) goto LAB_07d72adc;
        uVar6 = FUN_07d53740(lVar21,0);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        iVar7 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
        if (((*in_stack_00000148 == 0) || (lVar21 = FUN_07d61740(*in_stack_00000148,0), lVar21 == 0)
            ) || (*(long *)(lVar21 + 0x48) == 0)) goto LAB_07d72adc;
        uVar13 = FUN_06008730(*(long *)(lVar21 + 0x48),uVar6 | iVar7 << 0x10,&stack0x00001078,
                              *(undefined8 *)
                               UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
        if ((uVar13 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= *(uint *)(unaff_x22 + 0x19cc))
          goto LAB_07d72b20;
          FUN_07d58088(&stack0x00001078,0);
          UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
          FUN_07d580a8(&stack0x00001078,0);
          FUN_07d58058(&stack0x00001068,0);
          FUN_07d57ab8(&stack0x00001100,0);
          FUN_07d58088(&stack0x00001078,0);
          FUN_07d58048(&stack0x00001070,0);
          puVar17 = &stack0x00001078;
LAB_07d711ec:
          FUN_07d580a8(puVar17,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fStack00000000000000d4 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x22 + 0x19cc) = uVar6;
  }
  fVar43 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar44 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
    fVar45 = *(float *)(unaff_x22 + 0x300);
    fVar46 = (float)FUN_07d53598(&stack0x00001110,0);
    fVar45 = fVar45 - unaff_s14 * fVar46 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4));
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar45 = (float)(int)(fVar45 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar45;
    if (((unaff_w24 & 1) != 0) || (*unaff_x21 == 0x200b)) {
      fVar45 = fVar45 - fStack00000000000000dc * *(float *)(in_stack_00000140 + 0x90);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar45 = (float)(int)(fVar45 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar45;
    }
  }
  fVar45 = *(float *)(unaff_x22 + 0x2f8);
  in_stack_00000098._4_4_ = 0.0;
  if (fVar45 != 0.0) {
    uVar6 = *unaff_x21;
    if (uVar6 != 0x200b) {
      if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar6)) ||
         (fVar46 = 0.25, (1L << ((ulong)uVar6 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar46 = 0.5;
      }
      fVar31 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar42 = (float)FUN_07d53588(&stack0x00001110,0);
      in_stack_00000098._4_4_ =
           (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
           (fVar45 * fVar46 - unaff_s14 * (fVar31 * 0.5 + fVar42));
      fVar45 = in_stack_00000098._4_4_ + *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar45 = (float)(int)(fVar45 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar45;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar7 = FUN_07d616d4(*in_stack_00000148,0);
  if (iVar7 == 0x1015) {
    bVar4 = false;
  }
  else {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar7 = FUN_07d616d4(*in_stack_00000148,0);
    bVar4 = iVar7 != 0x11014;
  }
  if ((cVar18 == '\0') && (*in_stack_00000168 == '\x01')) {
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    if ((*(byte *)(lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
    goto LAB_07d701e4;
    if (bVar4) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar7 = FUN_07d616c4(*in_stack_00000148,0);
        fVar46 = (float)(iVar7 + 1);
      }
      else {
        lVar21 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar21 == 0) goto LAB_07d72adc;
        uVar13 = thunk_FUN_07c662cc(lVar21,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        if ((uVar13 & 1) == 0) goto LAB_07d70594;
        lVar21 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar21 == 0) goto LAB_07d72adc;
        fVar46 = (float)thunk_FUN_07c69050(lVar21,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar45 = (float)FUN_07d617a8(*in_stack_00000148,0);
      fVar45 = fVar46 * fVar45 * 0.25;
      if (fVar46 < in_stack_00000138._4_4_ + fVar45) {
        in_stack_00000138._4_4_ = fVar46 - fVar45;
      }
    }
    else {
      fVar45 = 0.0;
    }
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fStack00000000000000d0 = (float)FUN_07d617b8(*in_stack_00000148,0);
  }
  else {
LAB_07d701e4:
    fStack00000000000000d0 = 0.0;
    if (bVar4) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar7 = FUN_07d616c4(*in_stack_00000148,0);
        fVar46 = (float)(iVar7 + 1);
      }
      else {
        lVar21 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar21 == 0) goto LAB_07d72adc;
        uVar13 = thunk_FUN_07c662cc(lVar21,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        if ((uVar13 & 1) == 0) goto LAB_07d70290;
        lVar21 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar21 == 0) goto LAB_07d72adc;
        fVar46 = (float)thunk_FUN_07c69050(lVar21,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar45 = fVar46 * *(float *)(*in_stack_00000148 + 400) * 0.25;
      if (fVar46 < in_stack_00000138._4_4_ + fVar45) {
        in_stack_00000138._4_4_ = fVar46 - fVar45;
      }
    }
    else {
      fVar45 = 0.0;
    }
  }
  fVar42 = *(float *)(unaff_x22 + 0x300);
  fVar46 = (float)FUN_07d53588(&stack0x00001110,0);
  fVar32 = *(float *)(unaff_x22 + 0x19b0);
  fVar31 = (float)FUN_07d57ab0(&stack0x00001100,0);
  fVar42 = fVar42 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 * (fVar31 + ((fVar46 * fVar32 - in_stack_00000138._4_4_) - fVar45));
  fVar46 = (float)FUN_07d53590(&stack0x00001110,0);
  fVar31 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar46 = unaff_s14 * (in_stack_00000138._4_4_ + fVar46 + fVar31);
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar46 = (float)(int)(fVar46 + unaff_s15);
  }
  fStack0000000000000150 =
       *(float *)(unaff_x22 + 0x188) + ((fVar35 + fVar46) - *(float *)(unaff_x22 + 0x2e8));
  fVar46 = (float)FUN_07d53580(&stack0x00001110,0);
  fVar32 = fStack0000000000000150 -
           unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar46);
  fVar46 = (float)FUN_07d53578(&stack0x00001110,0);
  fVar46 = fVar42 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 *
                    (fVar45 + fVar45 +
                    in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                    fVar46 * *(float *)(unaff_x22 + 0x19b0));
  fVar48 = fVar46;
  fVar31 = fVar42;
  if (((cVar18 == '\0') && (*in_stack_00000168 == '\x01')) &&
     ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    iVar7 = *(int *)(unaff_x22 + 0x19ac);
    fVar31 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar34 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar47 = *(float *)(unaff_x22 + 0xf0);
    fVar49 = *(float *)(unaff_x22 + 0x188);
    fVar48 = (float)iVar7 * fStack0000000000000054;
    fVar41 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar41 = fVar41 * fVar47 * (fVar31 - (fVar34 + fVar49)) * 0.5;
    fVar31 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar49 = fVar48 * unaff_s14 * ((fVar45 + in_stack_00000138._4_4_ + fVar31) - fVar41);
    fVar34 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar47 = (float)FUN_07d53580(&stack0x00001110,0);
    fStack0000000000000150 = fStack0000000000000150 + 0.0;
    fVar31 = fVar42 + fVar49;
    fVar32 = fVar32 + 0.0;
    fVar48 = fVar48 * unaff_s14 *
                      ((((fVar34 - fVar47) - in_stack_00000138._4_4_) - fVar45) - fVar41);
    fVar42 = fVar42 + fVar48;
    fVar48 = fVar46 + fVar48;
    unaff_s15 = in_stack_000000c0._4_4_;
    fVar46 = fVar46 + fVar49;
  }
  uVar12 = *in_stack_000000c8;
  uVar11 = in_stack_000000c8[1];
  if (DAT_08974d8a == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  uVar36 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  uVar38 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  if (DAT_015c5bb4 <
      (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar38 >> 0x20) +
      (float)uVar11 * (float)uVar38 +
      (float)uVar12 * (float)uVar36 +
      (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar36 >> 0x20)) {
    fVar45 = 0.0;
    auVar37._4_12_ = SUB1612(ZEXT816(0),4);
    auVar37._0_4_ = fVar32;
    uVar12 = auVar37._0_8_;
    uVar13 = (ulong)(uint)fStack0000000000000150;
    uVar11 = uVar12;
  }
  else {
    FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                 *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                 *(undefined4 *)(unaff_x22 + 0x19c8),0);
    fVar48 = (fVar46 + fVar42) * 0.5;
    fVar41 = (fVar32 + fStack0000000000000150) * 0.5;
    fVar45 = 0.0;
    auVar39 = ZEXT416((uint)(fStack0000000000000150 - fVar41));
    fVar31 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar31 = fVar48 + fVar31;
    fVar46 = 0.0;
    uVar13 = CONCAT44(fVar45 + 0.0,fVar41 + auVar39._0_4_);
    auVar39 = ZEXT416((uint)(fVar32 - fVar41));
    fVar42 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar42 = fVar48 + fVar42;
    fVar45 = 0.0;
    uVar12 = CONCAT44(fVar46 + 0.0,fVar41 + auVar39._0_4_);
    auVar39 = ZEXT416((uint)(fStack0000000000000150 - fVar41));
    fVar46 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar46 = fVar48 + fVar46;
    fVar34 = 0.0;
    fStack0000000000000150 = fVar41 + auVar39._0_4_;
    fVar45 = fVar45 + 0.0;
    auVar39 = ZEXT416((uint)(fVar32 - fVar41));
    fVar32 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar48 = fVar48 + fVar32;
    unaff_s15 = in_stack_000000c0._4_4_;
    uVar11 = CONCAT44(fVar34 + 0.0,fVar41 + auVar39._0_4_);
  }
  lVar21 = *(long *)(unaff_x19 + 0x30);
  if (lVar21 == 0) goto LAB_07d72adc;
  if (*unaff_x25 < *(uint *)(lVar21 + 0x18)) {
    lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(float *)(lVar21 + 0x118) = fVar42;
    *(undefined8 *)(lVar21 + 0x11c) = uVar12;
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*unaff_x25 < *(uint *)(lVar21 + 0x18)) {
      lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar21 + 0x10c) = fVar31;
      *(ulong *)(lVar21 + 0x110) = uVar13;
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*unaff_x25 < *(uint *)(lVar21 + 0x18)) {
        lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(float *)(lVar21 + 0x124) = fVar46;
        *(ulong *)(lVar21 + 0x128) = CONCAT44(fVar45,fStack0000000000000150);
        lVar21 = *(long *)(unaff_x19 + 0x30);
        if (lVar21 == 0) goto LAB_07d72adc;
        if (*unaff_x25 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
          *(float *)(lVar21 + 0x130) = fVar48;
          *(undefined8 *)(lVar21 + 0x134) = uVar11;
          lVar21 = *(long *)(unaff_x19 + 0x30);
          if (lVar21 == 0) goto LAB_07d72adc;
          uVar6 = *(uint *)(unaff_x22 + 0x334);
          fVar45 = *(float *)(unaff_x22 + 0x300);
          fVar31 = (float)FUN_07d57ab0(&stack0x00001100,0);
          if (uVar6 < *(uint *)(lVar21 + 0x18)) {
            fVar45 = fVar45 + unaff_s14 * fVar31;
            if (*(char *)(unaff_x22 + 0xf4) != '\0') {
              fVar45 = (float)(int)(fVar45 + unaff_s15);
            }
            *(float *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x13c) = fVar45;
            lVar21 = *(long *)(unaff_x19 + 0x30);
            if (lVar21 == 0) goto LAB_07d72adc;
            uVar6 = *(uint *)(unaff_x22 + 0x334);
            fVar31 = *(float *)(unaff_x22 + 0x2e8);
            fVar32 = *(float *)(unaff_x22 + 0x188);
            fVar45 = (float)FUN_07d57ac0(&stack0x00001100,0);
            if (uVar6 < *(uint *)(lVar21 + 0x18)) {
              fVar35 = (fVar35 - fVar31) + fVar32 + unaff_s14 * fVar45;
              if (*(char *)(unaff_x22 + 0xf4) != '\0') {
                fVar35 = (float)(int)(fVar35 + unaff_s15);
              }
              *(float *)(lVar21 + (long)(int)uVar6 * (long)(int)unaff_w27 + 0x144) = fVar35;
              lVar21 = *(long *)(unaff_x19 + 0x30);
              if (lVar21 == 0) goto LAB_07d72adc;
              unaff_w29 = *(uint *)(unaff_x22 + 0x334);
              if (unaff_w29 < *(uint *)(lVar21 + 0x18)) {
                lVar21 = lVar21 + 0x20;
                *(float *)(lVar21 + (long)(int)unaff_w29 * (long)(int)unaff_w27 + 0x13c) =
                     (fVar46 - fVar42) / ((float)uVar13 - (float)uVar12);
                fVar43 = unaff_s14 * (fStack00000000000000f8 + fVar43);
                if (*in_stack_00000168 == '\x01') {
                  fVar43 = fVar43 / unaff_s10;
                  fVar44 = (unaff_s14 * (fStack00000000000000f4 + fVar44)) / unaff_s10;
                }
                else {
                  fVar44 = unaff_s14 * (fStack00000000000000f4 + fVar44);
                }
                unaff_w20 = *(uint *)(unaff_x22 + 0x338);
                unaff_s13 = 0.0;
                unaff_s12 = 1.0;
                uStack0000000000000104 = unaff_w24;
                if ((unaff_w29 != unaff_w20 & unaff_w24) == 0) goto LAB_07d70c24;
                lVar21 = lVar21 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
                uVar11 = *(undefined8 *)(unaff_x22 + 0x348);
                *(undefined8 *)(lVar21 + 300) = uVar11;
                fVar35 = *(float *)(unaff_x22 + 0x2e8);
                fVar43 = (float)((ulong)uVar11 >> 0x20) - fVar35;
                *(float *)(lVar21 + 0x120) = (float)uVar11 - fVar35;
                *(float *)(lVar21 + 0x128) = fVar43;
                *(float *)(unaff_x22 + 900) = fVar43;
                goto LAB_07d70d00;
              }
            }
          }
        }
      }
    }
  }
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


