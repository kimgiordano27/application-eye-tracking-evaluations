/*
FUNCTION_NAME: OVRPlugin$$set_vsyncCount
ENTRY_POINT: 051331f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05133290) */

void OVRPlugin__set_vsyncCount(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *extraout_x1;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
code_r0x051331f0:
  FUN_051334f8(param_1,param_2);
LAB_05133038:
  do {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05133084;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05133084:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_05133238;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_05133220;
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_051330e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051330e0:
    (*(code *)*puVar3)();
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    param_1 = FUN_0512fbac();
    if (param_1 == 0) {
      OVRPlugin__set_occlusionMesh();
      goto LAB_05133038;
    }
  } while (extraout_x1 == (long *)0x0);
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x58) + 0x10);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
    if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
      iVar2 = (**(code **)(lVar5 + 0x228))(plVar8,*(undefined8 *)(lVar5 + 0x230));
      uVar4 = (**(code **)(*extraout_x1 + 0x228))(extraout_x1,*(undefined8 *)(*extraout_x1 + 0x230))
      ;
      if (iVar2 == (int)uVar4) {
        FUN_0512f3a4(uVar4,extraout_x1);
        (**(code **)(*plVar8 + 0x6f8))(plVar8,extraout_x1);
        goto LAB_05133038;
      }
    }
  }
  uVar6 = FUN_05133454(extraout_x1);
  param_2 = extraout_x1;
  if (((uVar6 & 1) == 0) || ((unaff_x20 != 0 && (*(int *)(unaff_x20 + 0x14) == 1))))
  goto code_r0x051331f0;
  goto LAB_05133038;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_05133220:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05133254;
    }
  }
LAB_05133238:
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05133254:
  (*(code *)*puVar3)();
  return;
}


