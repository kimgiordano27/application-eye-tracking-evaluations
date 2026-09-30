/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSurfacePosition
ENTRY_POINT: 057d9c44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;pose_vector;data_collection
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSurfacePosition(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar5;
  long in_stack_000022e8;
  
  lVar3 = FUN_02feb2c4();
  if (unaff_x21 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = unaff_x21;
    if (*unaff_x21 != lVar3) {
      plVar5 = (long *)0x0;
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  if (plVar5 == (long *)0x0) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xd0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    if (unaff_x21 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = unaff_x21;
      if (*unaff_x21 != lVar3) {
        plVar5 = (long *)0x0;
      }
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4();
    }
    if (plVar5 == (long *)0x0) {
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xf8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4();
      }
      if (unaff_x21 == (long *)0x0) {
        bVar1 = true;
      }
      else {
        bVar1 = *unaff_x21 != lVar3;
      }
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4();
      }
      if (bVar1) {
        lVar3 = **(long **)(lVar3 + 0xc0);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4();
        }
        if ((unaff_x21 == (long *)0x0) || (*unaff_x21 != lVar3)) {
          uVar2 = 0;
        }
        else {
          lVar3 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4();
          }
          lVar3 = **(long **)(lVar3 + 0xc0);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02feb2c4(lVar3);
          }
          if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40)) {
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_DebugAction___ctor:
                    /* WARNING: Subroutine does not return */
            FUN_02fe9884();
          }
          pvVar4 = (void *)thunk_FUN_03010960();
          memcpy(&stack0x00000000,pvVar4,0x1000);
          if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_02feb2c4();
          }
          memcpy(&stack0x000012e0,&stack0x00000000,0x1000);
          uVar2 = FUN_057d9a84();
        }
      }
      else {
        lVar3 = (*(long **)(lVar3 + 0xc0))[0x1f];
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_057d9fac;
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40))
        goto Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_DebugAction___ctor;
        pvVar4 = (void *)thunk_FUN_03010960();
        memcpy(&stack0x00001000,pvVar4,0x200);
        if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_02feb2c4();
        }
        memcpy(&stack0x000012e0,&stack0x00001000,0x200);
        uVar2 = FUN_057d980c();
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xd0);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4(lVar3);
      }
      if (unaff_x21 == (long *)0x0) goto LAB_057d9fac;
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40))
      goto Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_DebugAction___ctor;
      pvVar4 = (void *)thunk_FUN_03010960();
      memcpy(&stack0x00001200,pvVar4,0x80);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_02feb2c4();
      }
      memcpy(&stack0x000012e0,&stack0x00001200,0x80);
      uVar2 = FUN_057d9590();
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xa8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    if (unaff_x21 == (long *)0x0) {
LAB_057d9fac:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40))
    goto Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_DebugAction___ctor;
    thunk_FUN_03010960();
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    uVar2 = FUN_057d9318();
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_000022e8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


