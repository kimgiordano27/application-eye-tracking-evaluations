/*
FUNCTION_NAME: FUN_05daae94
ENTRY_POINT: 05daae94
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05daae94(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((DAT_06bc3b24 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cb890);
    FUN_02f08768(PTR_DAT_067d1478);
    FUN_02f08768(PTR_DAT_067d1480);
    FUN_02f08768(PTR_DAT_067d1470);
    FUN_02f08768(PTR_DAT_067ce900);
    FUN_02f08768(PTR_DAT_067ce920);
    FUN_02f08768(PTR_DAT_067d1468);
    FUN_02f08768(PTR_DAT_067cea80);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArrayExtensions_HaveEqualReferences<InputDevice>__
                );
    FUN_02f08768(
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArrayExtensions_IndexOfReference<InputControl>__
                );
    DAT_06bc3b24 = 1;
  }
  puVar2 = PTR_DAT_067c8f20;
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar3;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x80);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar2);
  }
  uVar5 = FUN_060f078c(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
LAB_05dab424:
    return *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
  }
  lVar4 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cea80);
  FUN_060c4650(lVar4,0);
  if (lVar4 != 0) {
    thunk_FUN_060f6284(lVar4,*(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArrayExtensions_IndexOfReference<InputControl>__
                       ,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar6 = *(long *)puVar3;
    }
    uVar9 = *(undefined8 *)PTR_DAT_067ce920;
    *(long *)(*(long *)(lVar6 + 0xb8) + 0x80) = lVar4;
    lVar6 = thunk_FUN_02f45270(uVar9);
    FUN_03b62fcc(lVar6,*(undefined8 *)PTR_DAT_067ce900);
    puVar2 = PTR_DAT_067d1478;
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_067d1478;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          uVar9 = NEON_fmov(0xbf800000,4);
          lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + 0x20) = uVar9;
          *(undefined4 *)(lVar7 + 0x28) = 0;
        }
        else {
          FUN_03b63838(0xbf800000,0xbf800000,0,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        uVar9 = DAT_011b1528;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + 0x20) = uVar9;
            *(undefined4 *)(lVar7 + 0x28) = 0;
          }
          else {
            FUN_03b63838(0xbf800000,0x3f800000,0,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)puVar2;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          uVar9 = DAT_011b18c8;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + 0x20) = uVar9;
              *(undefined4 *)(lVar7 + 0x28) = 0;
            }
            else {
              FUN_03b63838(0x3f800000,0xbf800000,0,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            lVar7 = *(long *)(lVar6 + 0x10);
            lVar8 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                uVar9 = NEON_fmov(0x3f800000,4);
                lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar7 + 0x20) = uVar9;
                *(undefined4 *)(lVar7 + 0x28) = 0;
              }
              else {
                FUN_03b63838(0x3f800000,0x3f800000,0,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              UnityEngine_TextCore_Text_TextGeneratorUtilities__ReplaceClosingStyleTag
                        (lVar4,lVar6,0);
              lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
              lVar4 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d1468);
              FUN_03b60818(lVar4,*(undefined8 *)PTR_DAT_067d1470);
              puVar2 = PTR_DAT_067d1480;
              if (lVar4 != 0) {
                lVar7 = *(long *)(lVar4 + 0x10);
                lVar8 = *(long *)PTR_DAT_067d1480;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = 0;
                  }
                  else {
                    FUN_03b61054(0,0,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar7 = *(long *)(lVar4 + 0x10);
                  lVar8 = *(long *)puVar2;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  uVar9 = DAT_011b0bc8;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                    }
                    else {
                      FUN_03b61054(0,0x3f800000,lVar4,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    lVar7 = *(long *)(lVar4 + 0x10);
                    lVar8 = *(long *)puVar2;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    uVar9 = DAT_011b0bd0;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                      }
                      else {
                        FUN_03b61054(0x3f800000,0,lVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar7 = *(long *)(lVar4 + 0x10);
                      lVar8 = *(long *)puVar2;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          uVar9 = NEON_fmov(0x3f800000,4);
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                        }
                        else {
                          FUN_03b61054(0x3f800000,0x3f800000,lVar4,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        if (lVar6 != 0) {
                          FUN_060c87d4(lVar6,0,lVar4,0);
                          lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
                          uVar9 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067cb890,6);
                          FUN_05009b54(uVar9,*(undefined8 *)
                                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArrayExtensions_HaveEqualReferences<InputDevice>__
                                       ,0);
                          if (lVar4 != 0) {
                            FUN_060ca220(lVar4,uVar9,0,0,0,0);
                            lVar4 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
                            if (lVar4 != 0) {
                              FUN_060ca930(lVar4,1,0);
                              goto LAB_05dab424;
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
  FUN_02f089c8();
}


