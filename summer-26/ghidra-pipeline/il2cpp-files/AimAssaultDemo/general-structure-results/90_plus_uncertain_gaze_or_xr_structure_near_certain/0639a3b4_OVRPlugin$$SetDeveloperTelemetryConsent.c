/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 0639a3b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0639a6a8) */
/* WARNING: Removing unreachable block (ram,0x0639a63c) */

void OVRPlugin__SetDeveloperTelemetryConsent(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  long in_x10;
  int *piVar12;
  uint in_w11;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  
  if (in_w11 < (uint)in_x10) {
    param_2 = 0;
  }
  else if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_1) {
    param_2 = 0;
  }
  plVar5 = (long *)thunk_FUN_037788cc(*unaff_x23);
  FUN_062d6b60(plVar5,0);
  puVar3 = PTR_DAT_07db6880;
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x578))();
    puVar2 = PTR_DAT_07d896f8;
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    plVar6 = (long *)unaff_x20[5];
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
      puVar4 = PTR_DAT_07db6888;
      puVar3 = PTR_DAT_07d89700;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0639a4cc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar6,lVar9,0);
LAB_0639a4cc:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_037787d0(plVar6,*(undefined8 *)puVar2);
          if (plVar5 == (long *)0x0) goto LAB_0639a630;
          lVar10 = *plVar5;
          lVar9 = *(long *)puVar2;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_0639a608;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0639a5f0;
        }
        lVar10 = *plVar6;
        lVar9 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0639a52c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar6,lVar9,1);
LAB_0639a52c:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
          if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar8);
        }
        if (param_2 != 0) {
          FUN_063401c0(param_2,plVar8[0x12],0);
        }
        (**(code **)(*unaff_x19 + 0x5d8))();
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        (**(code **)(*plVar5 + 0x178))(plVar5);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0639a5f0:
    if (*(long *)(piVar12 + -2) == lVar9) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0639a624;
    }
  }
LAB_0639a608:
  puVar7 = (undefined8 *)FUN_0377596c(plVar5,lVar9,0);
LAB_0639a624:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_0639a630:
                    /* WARNING: Could not recover jumptable at 0x0639a664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


