/*
FUNCTION_NAME: OVRPlugin$$get_cpuLevel
ENTRY_POINT: 05133050
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05133290) */

void OVRPlugin__get_cpuLevel(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *extraout_x1;
  long lVar6;
  long lVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_05133084;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05133084:
      uVar4 = (*(code *)*puVar3)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar6 = *unaff_x19;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 == 0) goto LAB_05133238;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_05133220;
      }
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_051330e0;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051330e0:
      (*(code *)*puVar3)();
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = FUN_0512fbac();
      if (lVar6 == 0) {
        OVRPlugin__set_occlusionMesh();
      }
      else if (extraout_x1 != (long *)0x0) {
        if (*(long *)(lVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar9 = *(long **)(*(long *)(lVar6 + 0x58) + 0x10);
        if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          bVar1 = *(byte *)(*unaff_x28 + 0x130);
          if ((bVar1 <= *(byte *)(lVar7 + 0x130)) &&
             (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
            iVar2 = (**(code **)(lVar7 + 0x228))(plVar9,*(undefined8 *)(lVar7 + 0x230));
            uVar5 = (**(code **)(*extraout_x1 + 0x228))
                              (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x230));
            if (iVar2 == (int)uVar5) {
              FUN_0512f3a4(uVar5,extraout_x1);
              (**(code **)(*plVar9 + 0x6f8))(plVar9,extraout_x1);
              goto LAB_05133038;
            }
          }
        }
        uVar4 = FUN_05133454(extraout_x1);
        if (((uVar4 & 1) == 0) || ((unaff_x20 != 0 && (*(int *)(unaff_x20 + 0x14) == 1)))) {
          FUN_051334f8(lVar6,extraout_x1);
        }
      }
LAB_05133038:
      param_1 = *unaff_x19;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar8 = piVar8 + 4;
    if (uVar4 == 0) break;
LAB_05133220:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05133254;
    }
  }
LAB_05133238:
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05133254:
  (*(code *)*puVar3)();
  return;
}


