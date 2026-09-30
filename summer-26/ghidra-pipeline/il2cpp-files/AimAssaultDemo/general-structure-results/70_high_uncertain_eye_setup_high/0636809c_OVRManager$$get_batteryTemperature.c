/*
FUNCTION_NAME: OVRManager$$get_batteryTemperature
ENTRY_POINT: 0636809c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x06368318) */

undefined8 OVRManager__get_batteryTemperature(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long in_x11;
  int unaff_w20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar8;
  long *unaff_x24;
  long *unaff_x25;
  
  do {
    if (in_x11 == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_063680cc;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_0377596c(unaff_x23,param_3,0);
LAB_063680cc:
        (*(code *)*puVar4)(unaff_x23,unaff_w20,puVar4[1]);
        FUN_0636926c();
        plVar8 = *(long **)(unaff_x22 + 0x98);
        unaff_w20 = unaff_w20 + 1;
        if (plVar8 == (long *)0x0) {
LAB_063680fc:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_06368064;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(plVar8,*unaff_x24,0);
LAB_06368064:
        iVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        if (iVar3 <= unaff_w20) {
          if (*(long *)(unaff_x22 + 0xa8) != 0) {
            FUN_063693c8();
          }
          if (*(long *)(unaff_x22 + 0xc0) != 0) {
            FUN_063693f4();
          }
          plVar8 = *(long **)(unaff_x22 + 0xf8);
          if (plVar8 == (long *)0x0) {
            return unaff_x21;
          }
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_06368168;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_06368150;
        }
        unaff_x23 = *(long **)(unaff_x22 + 0x98);
        if (unaff_x23 == (long *)0x0) goto LAB_063680fc;
        param_1 = *unaff_x23;
        param_3 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_06368150:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07db52f0) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0636818c;
    }
  }
LAB_06368168:
  puVar4 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07db52f0,0);
LAB_0636818c:
  plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
  puVar2 = PTR_DAT_07db52f8;
  puVar1 = PTR_DAT_07d89700;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06368204;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar1,0);
LAB_06368204:
    uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return unaff_x21;
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_063682c0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06368260;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,0);
LAB_06368260:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
    unaff_x21 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto FUN_063682dc;
    }
  }
LAB_063682c0:
  puVar4 = (undefined8 *)FUN_0377596c(plVar8,*(long *)PTR_DAT_07d896f8,0);
FUN_063682dc:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
  return unaff_x21;
}


