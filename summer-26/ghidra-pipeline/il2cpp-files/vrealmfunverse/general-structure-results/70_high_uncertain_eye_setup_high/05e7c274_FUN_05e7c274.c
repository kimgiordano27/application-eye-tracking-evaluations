/*
FUNCTION_NAME: FUN_05e7c274
ENTRY_POINT: 05e7c274
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e7c274(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
  if ((DAT_066dc708 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313c10);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_PowerOfTwoTextureAtlas_<>c_<RelayoutEntries>b__23_0__)
    ;
    DAT_066dc708 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar2;
  }
  iVar1 = *(int *)(*(long *)(lVar3 + 0xb8) + 0x130);
  *(int *)(*(long *)(lVar3 + 0xb8) + 0x130) = iVar1 + 1;
  if (iVar1 != 0) {
    return;
  }
  uVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313c10);
  FUN_05c6aedc(uVar4,0x40,0x40,0x14,0,0);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  *(undefined8 *)(lVar3 + 0x138) = uVar4;
  thunk_FUN_02bb0e9c(lVar3 + 0x138,uVar4);
  lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x138);
  if (lVar3 != 0) {
    thunk_FUN_05c9238c(lVar3,*(undefined8 *)
                              Method_UnityEngine_Rendering_PowerOfTwoTextureAtlas_<>c_<RelayoutEntries>b__23_0__
                       ,0);
    lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x138);
    if (lVar3 != 0) {
      FUN_05c9364c(lVar3,0x3d,0);
      lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x138);
      if (lVar3 != 0) {
        FUN_05c68198(lVar3,0,0);
        puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        if (*(long *)(puVar5 + 0x4e) != 0) {
          FUN_05c6b088(puVar5[0x1a],puVar5[0x1b],puVar5[0x1c],puVar5[0x1d],*(long *)(puVar5 + 0x4e),
                       *puVar5,puVar5[1],0);
          puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
          if (*(long *)(puVar5 + 0x4e) != 0) {
            FUN_05c6b088(puVar5[0x1e],puVar5[0x1f],puVar5[0x20],puVar5[0x21],
                         *(long *)(puVar5 + 0x4e),*puVar5,puVar5[1] + 1,0);
            puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
            if (*(long *)(puVar5 + 0x4e) != 0) {
              FUN_05c6b088(puVar5[0x22],puVar5[0x23],puVar5[0x24],puVar5[0x25],
                           *(long *)(puVar5 + 0x4e),*puVar5,puVar5[1] + 2,0);
              lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
              if (*(long *)(lVar3 + 0x138) != 0) {
                FUN_05c6b088(*(undefined4 *)(lVar3 + 0x98),*(undefined4 *)(lVar3 + 0x9c),
                             *(undefined4 *)(lVar3 + 0xa0),*(undefined4 *)(lVar3 + 0xa4),
                             *(long *)(lVar3 + 0x138),*(undefined4 *)(lVar3 + 8),
                             *(undefined4 *)(lVar3 + 0xc),0);
                lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
                if (*(long *)(lVar3 + 0x138) != 0) {
                  FUN_05c6b088(*(undefined4 *)(lVar3 + 0xa8),*(undefined4 *)(lVar3 + 0xac),
                               *(undefined4 *)(lVar3 + 0xb0),*(undefined4 *)(lVar3 + 0xb4),
                               *(long *)(lVar3 + 0x138),*(undefined4 *)(lVar3 + 0x10),
                               *(undefined4 *)(lVar3 + 0x14),0);
                  lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
                  if (*(long *)(lVar3 + 0x138) != 0) {
                    FUN_05c6b088(0x3f800000,0x3f800000,0x3f800000,0x3f800000,
                                 *(long *)(lVar3 + 0x138),*(undefined4 *)(lVar3 + 0x20),
                                 *(undefined4 *)(lVar3 + 0x24),0);
                    lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
                    if (*(long *)(lVar3 + 0x138) != 0) {
                      FUN_05c6b088(0,0,0,0,*(long *)(lVar3 + 0x138),*(undefined4 *)(lVar3 + 0x20),
                                   *(int *)(lVar3 + 0x24) + 1,0);
                      lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
                      if (*(long *)(lVar3 + 0x138) != 0) {
                        FUN_05c6b088(0,0,0,0,*(long *)(lVar3 + 0x138),*(undefined4 *)(lVar3 + 0x20),
                                     *(int *)(lVar3 + 0x24) + 2,0);
                        lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
                        if (*(long *)(lVar3 + 0x138) != 0) {
                          FUN_05c6b088(0,0,0,0,*(long *)(lVar3 + 0x138),
                                       *(undefined4 *)(lVar3 + 0x20),*(int *)(lVar3 + 0x24) + 3,0);
                          lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x138);
                          if (lVar3 != 0) {
                            FUN_05c6b520(lVar3,0,1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


