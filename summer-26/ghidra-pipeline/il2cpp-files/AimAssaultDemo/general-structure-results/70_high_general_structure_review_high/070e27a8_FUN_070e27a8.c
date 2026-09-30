/*
FUNCTION_NAME: FUN_070e27a8
ENTRY_POINT: 070e27a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_070e27a8(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_DAT_07dfbd28;
  if ((DAT_08267c6e & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d87068);
    FUN_0373b518(PTR_DAT_07d899b8);
    FUN_0373b518(PTR_DAT_07d8b8f8);
    FUN_0373b518(PTR_DAT_07d8b918);
    FUN_0373b518(PTR_DAT_07d899c0);
    FUN_0373b518(PTR_DAT_07d899c8);
    FUN_0373b518(PTR_DAT_07d8b910);
    FUN_0373b518(PTR_DAT_07d94738);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07dfbd28);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var);
    DAT_08267c6e = 1;
  }
  puVar2 = PTR_DAT_07d86398;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar4 = *(long *)puVar3;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x80);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)puVar2);
  }
  uVar5 = FUN_075aa744(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
LAB_070e2d50:
    return *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
  }
  lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d94738);
  FUN_0757bf64(lVar4,0);
  if (lVar4 != 0) {
    thunk_FUN_075b0334(lVar4,*(undefined8 *)
                              UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar6 = *(long *)puVar3;
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0xb8) + 0x80);
    *plVar7 = lVar4;
    thunk_FUN_037aeb94(plVar7,lVar4);
    lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
    lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d899c8);
    FUN_04a78420(lVar4,*(undefined8 *)PTR_DAT_07d899c0);
    puVar2 = PTR_DAT_07d899b8;
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar4 + 0x10);
      lVar9 = *(long *)PTR_DAT_07d899b8;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          uVar10 = NEON_fmov(0xbf800000,4);
          lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + 0x20) = uVar10;
          *(undefined4 *)(lVar8 + 0x28) = 0;
        }
        else {
          FUN_04a78cb4(0xbf800000,0xbf800000,0,lVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = *(long *)(lVar4 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        uVar10 = DAT_0158b398;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + 0x20) = uVar10;
            *(undefined4 *)(lVar8 + 0x28) = 0;
          }
          else {
            FUN_04a78cb4(0xbf800000,0x3f800000,0,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          lVar8 = *(long *)(lVar4 + 0x10);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          uVar10 = DAT_0158b0f8;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + 0x20) = uVar10;
              *(undefined4 *)(lVar8 + 0x28) = 0;
            }
            else {
              FUN_04a78cb4(0x3f800000,0xbf800000,0,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar8 = *(long *)(lVar4 + 0x10);
            lVar9 = *(long *)puVar2;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                uVar10 = NEON_fmov(0x3f800000,4);
                lVar8 = lVar8 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + 0x20) = uVar10;
                *(undefined4 *)(lVar8 + 0x28) = 0;
              }
              else {
                FUN_04a78cb4(0x3f800000,0x3f800000,0,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              if (lVar6 != 0) {
                FUN_07581508(lVar6,lVar4,0);
                lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
                lVar4 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8b910);
                FUN_04a75c58(lVar4,*(undefined8 *)PTR_DAT_07d8b918);
                puVar2 = PTR_DAT_07d8b8f8;
                if (lVar4 != 0) {
                  lVar8 = *(long *)(lVar4 + 0x10);
                  lVar9 = *(long *)PTR_DAT_07d8b8f8;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = 0;
                    }
                    else {
                      FUN_04a764c0(0,0,lVar4,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    lVar8 = *(long *)(lVar4 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    uVar10 = DAT_0158b9d8;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                      }
                      else {
                        FUN_04a764c0(0,0x3f800000,lVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar8 = *(long *)(lVar4 + 0x10);
                      lVar9 = *(long *)puVar2;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      uVar10 = DAT_0158acd8;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                        }
                        else {
                          FUN_04a764c0(0x3f800000,0,lVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar8 = *(long *)(lVar4 + 0x10);
                        lVar9 = *(long *)puVar2;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            uVar10 = NEON_fmov(0x3f800000,4);
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                          }
                          else {
                            FUN_04a764c0(0x3f800000,0x3f800000,lVar4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          if (lVar6 != 0) {
                            FUN_07581d1c(lVar6,0,lVar4,0);
                            lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
                            uVar10 = RootMotion_FinalIK_Finger___ctor
                                               (*(undefined8 *)PTR_DAT_07d87068,6);
                            FUN_061683b8(uVar10,*(undefined8 *)
                                                 UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var
                                         ,0);
                            if (lVar4 != 0) {
                              FUN_07583738(lVar4,uVar10,0,0,0,0);
                              lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
                              if (lVar4 != 0) {
                                FUN_07583eb8(lVar4,1,0);
                                goto LAB_070e2d50;
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


