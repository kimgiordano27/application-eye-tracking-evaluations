/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorAdded$$BeginInvoke
ENTRY_POINT: 057d267c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorAdded__BeginInvoke(long param_1)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar5;
  long in_stack_000022e8;
  
  if (unaff_x23 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x98);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    if (unaff_x21 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = unaff_x21;
      if (*unaff_x21 != lVar4) {
        plVar5 = (long *)0x0;
      }
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4();
    }
    if (plVar5 == (long *)0x0) {
      lVar4 = **(long **)(lVar4 + 0xc0);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4();
      }
      if (unaff_x21 == (long *)0x0) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar5 = unaff_x21;
        if (*unaff_x21 != lVar4) {
          plVar5 = (long *)0x0;
        }
      }
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4();
      }
      if (plVar5 == (long *)0x0) {
        lVar4 = (*(long **)(lVar4 + 0xc0))[0x19];
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4();
        }
        if (unaff_x21 == (long *)0x0) {
          bVar1 = true;
        }
        else {
          bVar1 = *unaff_x21 != lVar4;
        }
        lVar4 = *(long *)(unaff_x20 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4();
        }
        if (bVar1) {
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xf0);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02feb2c4();
          }
          if ((unaff_x21 == (long *)0x0) || (*unaff_x21 != lVar4)) {
            uVar2 = 0;
          }
          else {
            lVar4 = *(long *)(unaff_x20 + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02feb2c4();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xf0);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_02feb2c4(lVar4);
            }
            if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40)) {
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__BeginInvoke:
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884();
            }
            pvVar3 = (void *)thunk_FUN_03010960();
            memcpy(&stack0x00000000,pvVar3,0x1000);
            if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
              FUN_02feb2c4();
            }
            memcpy(&stack0x000012e0,&stack0x00000000,0x1000);
            uVar2 = FUN_057d2550();
          }
        }
        else {
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 200);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02feb2c4(lVar4);
          }
          if (unaff_x21 == (long *)0x0) goto LAB_057d2a78;
          if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40))
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__BeginInvoke;
          pvVar3 = (void *)thunk_FUN_03010960();
          memcpy(&stack0x00001000,pvVar3,0x200);
          if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          memcpy(&stack0x000012e0,&stack0x00001000,0x200);
          uVar2 = FUN_057d22d4();
        }
      }
      else {
        lVar4 = **(long **)(lVar4 + 0xc0);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02feb2c4(lVar4);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_057d2a78;
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40))
        goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__BeginInvoke;
        pvVar3 = (void *)thunk_FUN_03010960();
        memcpy(&stack0x00001200,pvVar3,0x80);
        if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        memcpy(&stack0x000012e0,&stack0x00001200,0x80);
        uVar2 = FUN_057d2058();
      }
    }
    else {
      lVar4 = (*(long **)(lVar4 + 0xc0))[0x13];
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02feb2c4(lVar4);
      }
      if (unaff_x21 == (long *)0x0) goto LAB_057d2a78;
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40))
      goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__BeginInvoke;
      thunk_FUN_03010960();
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      uVar2 = FUN_057d1de4();
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x68);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    if (unaff_x21 == (long *)0x0) {
LAB_057d2a78:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40))
    goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__BeginInvoke;
    thunk_FUN_03010960();
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    uVar2 = FUN_057d1b7c();
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_000022e8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


