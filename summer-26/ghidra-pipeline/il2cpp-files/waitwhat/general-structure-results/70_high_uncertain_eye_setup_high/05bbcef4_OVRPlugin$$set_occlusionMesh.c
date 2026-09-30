/*
FUNCTION_NAME: OVRPlugin$$set_occlusionMesh
ENTRY_POINT: 05bbcef4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_occlusionMesh
               (undefined8 param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  
  if ((DAT_0754ea83 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071162a8);
    DAT_0754ea83 = 1;
  }
  puVar2 = PTR_DAT_071162a8;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar4 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_071162a8) {
                    /* try { // try from 05bbcf6c to 05cbcf8f has its CatchHandler @ 05bbcfa4 */
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_05bbcf7c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08(param_2,*(long *)PTR_DAT_071162a8,4);
LAB_05bbcf7c:
  lVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  *param_4 = 0;
  *param_3 = 0;
                    /* try { // try from 05bbcf90 to 05cbcfbb has its CatchHandler @ 05bbceb4 */
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *param_2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05bbcfe4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar2,0);
LAB_05bbcfe4:
  uVar6 = (*(code *)*puVar3)(param_2,puVar3[1]);
  iVar1 = *(int *)(lVar4 + 0x20);
  if ((uVar6 & 1) == 0) {
    if (iVar1 == 3) {
      lVar4 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_05bbd1a8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar2,1);
      goto LAB_05bbd1a8;
    }
    if (iVar1 != 2) {
      return;
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_05bbd130;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar2,1);
LAB_05bbd130:
    uVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
    *param_3 = uVar8;
    lVar4 = *(long *)puVar2;
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) goto LAB_05bbd180;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_05bbd0dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(param_2,*(long *)puVar2,1);
LAB_05bbd0dc:
    uVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
    *param_3 = uVar8;
    lVar4 = *(long *)puVar2;
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) goto LAB_05bbd180;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_031c0d08(param_2,lVar4,2);
  param_3 = param_4;
LAB_05bbd1a8:
  uVar8 = (*(code *)*puVar3)(param_2,puVar3[1]);
  *param_3 = uVar8;
  return;
LAB_05bbd180:
  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
  param_3 = param_4;
  goto LAB_05bbd1a8;
}


