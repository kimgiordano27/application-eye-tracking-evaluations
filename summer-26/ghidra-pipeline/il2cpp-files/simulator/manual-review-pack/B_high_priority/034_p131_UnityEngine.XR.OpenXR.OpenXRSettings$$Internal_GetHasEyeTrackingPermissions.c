/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_GetHasEyeTrackingPermissions
ENTRY_POINT: 02ef9bc0
PROGRAM: simulator-libil2cpp.so
SCORE: 83
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_GetHasEyeTrackingPermissions
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  int unaff_w20;
  long unaff_x21;
  long lVar6;
  uint unaff_w22;
  uint *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_00000000;
  float in_stack_00000008;
  undefined8 in_stack_00000010;
  float in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  long in_stack_00000068;
  
  *(undefined4 *)(unaff_x28 + 0x28) = param_3;
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_02ef9fe8;
    lVar4 = *(long *)(lVar4 + unaff_x27 * 8 + 0x20);
    if (lVar4 != 0) {
      lVar7 = **(long **)(*unaff_x26 + 0xb8);
      lVar4 = FUN_0307feec(lVar4,0);
      if ((lVar4 != 0) && (uVar8 = FUN_0308a1c8(lVar4,0), lVar7 != 0)) {
        if (*(uint *)(lVar7 + 0x18) < 2) {
LAB_02ef9fe8:
                    /* WARNING: Subroutine does not return */
          FUN_018c4b04();
        }
        *(undefined4 *)(lVar7 + 0x2c) = uVar8;
        *(undefined4 *)(lVar7 + 0x30) = param_2;
        *(undefined4 *)(lVar7 + 0x34) = param_3;
        lVar4 = *(long *)(unaff_x21 + 0x30);
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_02ef9fe8;
          lVar4 = *(long *)(lVar4 + unaff_x27 * 8 + 0x20);
          if (lVar4 != 0) {
            FUN_0305c924(lVar4,**(undefined8 **)(*unaff_x26 + 0xb8),0);
            if ((unaff_x25 & 1) != 0) {
              *(undefined8 *)((long)unaff_x24 + 0x14) = uStack0000000000000034;
              *(ulong *)((long)unaff_x24 + 0xc) =
                   CONCAT44(uStack0000000000000030,in_stack_00000028._4_4_);
              unaff_x24[1] = in_stack_00000028;
              *unaff_x24 = in_stack_00000020;
              *unaff_x23 = unaff_w22;
            }
            if (unaff_w20 == 2) {
              return;
            }
            lVar4 = *(long *)(unaff_x21 + 0x28);
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_02ef9fe8;
              lVar4 = *(long *)(lVar4 + unaff_x27 * 8 + 0x20);
              if (lVar4 != 0) {
                uVar3 = FUN_01b601ec(lVar4,&stack0x00000068,*(undefined8 *)PTR_DAT_034c6ed8);
                if ((uVar3 & 1) == 0) {
                  return;
                }
                lVar4 = *(long *)(unaff_x21 + 0x28);
                if (lVar4 != 0) {
                  if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_02ef9fe8;
                  lVar4 = *(long *)(lVar4 + unaff_x27 * 8 + 0x20);
                  if (lVar4 != 0) {
                    lVar4 = FUN_0307feec(lVar4,0);
                    if (DAT_036c28c1 == '\0') {
                      FUN_018c48dc(PTR_DAT_03495448);
                      DAT_036c28c1 = '\x01';
                    }
                    puVar1 = PTR_DAT_03495448;
                    if (lVar4 != 0) {
                      puVar5 = *(undefined4 **)(*(long *)PTR_DAT_03495448 + 0xb8);
                      FUN_03089878(*puVar5,puVar5[1],puVar5[2],lVar4,0);
                      lVar4 = *(long *)(unaff_x21 + 0x28);
                      if (lVar4 != 0) {
                        if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_02ef9fe8;
                        lVar4 = *(long *)(lVar4 + unaff_x27 * 8 + 0x20);
                        if (lVar4 != 0) {
                          lVar4 = FUN_0307feec(lVar4,0);
                          if (DAT_036c2996 == '\0') {
                            FUN_018c48dc(PTR_DAT_03496050);
                            DAT_036c2996 = '\x01';
                          }
                          if (lVar4 != 0) {
                            puVar5 = *(undefined4 **)(*(long *)PTR_DAT_03496050 + 0xb8);
                            uVar12 = puVar5[2];
                            uVar8 = puVar5[1];
                            FUN_0308a4f4(*puVar5,uVar8,uVar12,puVar5[3],lVar4,0);
                            puVar2 = PTR_DAT_03499cd8;
                            lVar4 = *(long *)PTR_DAT_03499cd8;
                            if (*(int *)(lVar4 + 0xe0) == 0) {
                              thunk_FUN_018cd5b0();
                              lVar4 = *(long *)puVar2;
                            }
                            lVar7 = *(long *)(unaff_x21 + 0x28);
                            if (lVar7 != 0) {
                              if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto LAB_02ef9fe8;
                              lVar7 = *(long *)(lVar7 + unaff_x27 * 8 + 0x20);
                              if (lVar7 != 0) {
                                lVar6 = **(long **)(lVar4 + 0xb8);
                                lVar4 = FUN_0307feec(lVar7,0);
                                if ((lVar4 != 0) && (uVar9 = FUN_0308a1c8(lVar4,0), lVar6 != 0)) {
                                  if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_02ef9fe8;
                                  *(undefined4 *)(lVar6 + 0x30) = uVar8;
                                  *(undefined4 *)(lVar6 + 0x34) = uVar12;
                                  *(undefined4 *)(lVar6 + 0x20) = uVar9;
                                  *(undefined4 *)(lVar6 + 0x24) = uVar8;
                                  *(undefined4 *)(lVar6 + 0x28) = uVar12;
                                  *(undefined4 *)(lVar6 + 0x2c) = uVar9;
                                  if (unaff_w20 == 1) {
                                    uVar3 = FUN_02ee0db4();
                                    if ((uVar3 & 1) != 0) {
                                      lVar4 = *(long *)puVar2;
                                      if (*(int *)(lVar4 + 0xe0) == 0) {
                                        thunk_FUN_018cd5b0();
                                        lVar4 = *(long *)puVar2;
                                      }
                                      lVar4 = **(long **)(lVar4 + 0xb8);
                                      if (lVar4 == 0) goto LAB_02ef9fe4;
                                      if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_02ef9fe8;
                                      uVar13 = *(undefined8 *)(lVar4 + 0x2c);
                                      fVar14 = *(float *)(lVar4 + 0x34);
                                      if (DAT_036c2995 == '\0') {
                                        FUN_018c48dc(PTR_DAT_03495fa0);
                                        DAT_036c2995 = '\x01';
                                      }
                                      if (*(int *)(*(long *)PTR_DAT_03495fa0 + 0xe0) == 0) {
                                        thunk_FUN_018cd5b0();
                                      }
                                      fVar15 = (float)in_stack_00000000;
                                      fVar16 = (float)((ulong)in_stack_00000000 >> 0x20);
                                      fVar10 = SQRT(in_stack_00000008 * in_stack_00000008 +
                                                    fVar15 * fVar15 + fVar16 * fVar16);
                                      if (fVar10 <= DAT_009cf64c) {
                                        if (DAT_036c28c1 == '\0') {
                                          FUN_018c48dc(PTR_DAT_03495448);
                                          DAT_036c28c1 = '\x01';
                                        }
                                        uVar11 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
                                        in_stack_00000008 =
                                             *(float *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1
                                                       );
                                      }
                                      else {
                                        uVar11 = CONCAT44(fVar16 / fVar10,fVar15 / fVar10);
                                        in_stack_00000008 = in_stack_00000008 / fVar10;
                                      }
                                      in_stack_00000008 = in_stack_00000008 * DAT_009cf6c4;
                                      *(ulong *)(lVar4 + 0x2c) =
                                           CONCAT44((float)((ulong)uVar13 >> 0x20) +
                                                    (float)((ulong)uVar11 >> 0x20) * 0.05,
                                                    (float)uVar13 + (float)uVar11 * 0.05);
                                      *(float *)(lVar4 + 0x34) = fVar14 + in_stack_00000008;
                                    }
                                  }
                                  else if ((unaff_w20 == 0) &&
                                          (uVar3 = FUN_02ee0d3c(), (uVar3 & 1) != 0)) {
                                    lVar4 = *(long *)puVar2;
                                    if (*(int *)(lVar4 + 0xe0) == 0) {
                                      thunk_FUN_018cd5b0();
                                      lVar4 = *(long *)puVar2;
                                    }
                                    lVar4 = **(long **)(lVar4 + 0xb8);
                                    if (lVar4 == 0) goto LAB_02ef9fe4;
                                    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_02ef9fe8;
                                    *(ulong *)(lVar4 + 0x2c) =
                                         CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x2c) >>
                                                         0x20) +
                                                  (float)((ulong)in_stack_00000010 >> 0x20),
                                                  (float)*(undefined8 *)(lVar4 + 0x2c) +
                                                  (float)in_stack_00000010);
                                    *(float *)(lVar4 + 0x34) =
                                         *(float *)(lVar4 + 0x34) + in_stack_00000018;
                                  }
                                  lVar4 = in_stack_00000068;
                                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                    thunk_FUN_018cd5b0();
                                  }
                                  if (lVar4 != 0) {
                                    FUN_0305c924(lVar4,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
                                    return;
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
    }
  }
LAB_02ef9fe4:
                    /* WARNING: Subroutine does not return */
  FUN_018c4afc();
}


