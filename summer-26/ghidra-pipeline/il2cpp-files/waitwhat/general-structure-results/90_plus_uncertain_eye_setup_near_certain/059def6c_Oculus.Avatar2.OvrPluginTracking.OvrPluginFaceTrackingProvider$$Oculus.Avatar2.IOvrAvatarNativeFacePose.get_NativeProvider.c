/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginFaceTrackingProvider$$Oculus.Avatar2.IOvrAvatarNativeFacePose.get_NativeProvider
ENTRY_POINT: 059def6c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059df15c) */
/* WARNING: Removing unreachable block (ram,0x059df3c8) */
/* WARNING: Removing unreachable block (ram,0x059df3c0) */

void Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider__Oculus_Avatar2_IOvrAvatarNativeFacePose_get_NativeProvider
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  
  plVar3 = (long *)FUN_03a928f8();
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059defc4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x24,0);
LAB_059defc4:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df044;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0);
LAB_059df044:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar3 == (long *)0x0) goto LAB_059df150;
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_059df128;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_059df110;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df0a8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar2,0);
LAB_059df0a8:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
    } while( true );
  }
  goto LAB_059df3b8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_059df330:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df364;
    }
  }
LAB_059df348:
  puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x23,0);
LAB_059df364:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_059df110:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059df144;
    }
  }
LAB_059df128:
  puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x23,0);
LAB_059df144:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_059df150:
  uVar5 = FUN_03188b1c(*unaff_x26,5);
  FUN_0585c08c(uVar5,*(undefined8 *)PTR_DAT_07109be8,0);
  plVar3 = (long *)FUN_03a928f8();
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059df1e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*unaff_x24,0);
LAB_059df1e8:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = PTR_DAT_07109be0;
    puVar1 = PTR_DAT_070c7c80;
    do {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df268;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0);
LAB_059df268:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_059df348;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_059df330;
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_059df2cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar2,0);
LAB_059df2cc:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar6 + 0x18) <= ((uint)uVar7 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined1 *)(lVar6 + (uVar7 & 0xffff) + 0x20) = 1;
    } while( true );
  }
LAB_059df3b8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


