/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderMeta$$WaitForPermissionsAndCreateHandle
ENTRY_POINT: 04dc6140
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_permission_setup
*/


uint Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderMeta__WaitForPermissionsAndCreateHandle
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  code *pcVar7;
  long *unaff_x21;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  lVar6 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
  }
  if (unaff_x21 == (long *)0x0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
LAB_04dc6220:
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x148);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    if (unaff_x21 == (long *)0x0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if (*unaff_x21 == lVar6) {
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c();
        }
        lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x148);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c(lVar6);
        }
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar6 + 0x40)) goto LAB_04dc66d4;
        thunk_FUN_02f453b8();
        lVar3 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *(ushort *)(lVar3 + 0x135);
        lVar6 = lVar3;
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_02f41e9c(lVar3);
          uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
          lVar6 = *(long *)(unaff_x20 + 0x20);
        }
        pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x290);
        if ((uVar1 & 1) == 0) {
          FUN_02f41e9c(lVar6);
        }
        goto LAB_04dc669c;
      }
    }
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x1a8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    if (unaff_x21 == (long *)0x0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if (*unaff_x21 == lVar6) {
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c();
        }
        lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x1a8);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c(lVar6);
        }
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar6 + 0x40)) goto LAB_04dc66d4;
        pvVar4 = (void *)thunk_FUN_02f453b8();
        memcpy(&stack0x00001000,pvVar4,0x80);
        lVar3 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *(ushort *)(lVar3 + 0x135);
        lVar6 = lVar3;
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_02f41e9c(lVar3);
          uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
          lVar6 = *(long *)(unaff_x20 + 0x20);
        }
        pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x298);
        memcpy(&stack0x00002200,&stack0x00001000,0x80);
        if ((uVar1 & 1) == 0) {
          FUN_02f41e9c(lVar6);
        }
        goto LAB_04dc669c;
      }
    }
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x200);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    if (unaff_x21 == (long *)0x0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if (*unaff_x21 == lVar6) {
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c();
        }
        lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x200);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02f41e9c(lVar6);
        }
        if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar6 + 0x40)) goto LAB_04dc66d4;
        pvVar4 = (void *)thunk_FUN_02f453b8();
        memcpy(&stack0x00001000,pvVar4,0x200);
        lVar3 = *(long *)(unaff_x20 + 0x20);
        uVar1 = *(ushort *)(lVar3 + 0x135);
        lVar6 = lVar3;
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_02f41e9c(lVar3);
          uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
          lVar6 = *(long *)(unaff_x20 + 0x20);
        }
        pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x2a0);
        memcpy(&stack0x00002000,&stack0x00001000,0x200);
        if ((uVar1 & 1) == 0) {
          FUN_02f41e9c(lVar6);
        }
        goto LAB_04dc669c;
      }
    }
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar6 = *(long *)(*(long *)(lVar3 + 0xc0) + 600);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c();
    }
    if ((unaff_x21 != (long *)0x0) && (*unaff_x21 == lVar6)) {
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 600);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        FUN_02f41e9c(lVar6);
      }
      pvVar4 = (void *)FUN_02a7e8e4();
      memcpy(&stack0x00001000,pvVar4,0x1000);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar3 + 0x135);
      lVar6 = lVar3;
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar6 = *(long *)(unaff_x20 + 0x20);
      }
      pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x2a8);
      memcpy(&stack0x00000000,&stack0x00001000,0x1000);
      if ((uVar1 & 1) == 0) {
        FUN_02f41e9c(lVar6);
      }
      goto LAB_04dc669c;
    }
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (*unaff_x21 != lVar6) goto LAB_04dc6220;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    lVar6 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar6 + 0x40)) {
LAB_04dc66d4:
      if (*(long *)(unaff_x22 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
      goto LAB_04dc66ec;
    }
    thunk_FUN_02f453b8();
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar6 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02f41e9c(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x288);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar6);
    }
LAB_04dc669c:
    uVar2 = (*pcVar7)(param_1);
  }
  if (*(long *)(unaff_x22 + 0x28) == lVar5) {
    return uVar2 & 1;
  }
LAB_04dc66ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


