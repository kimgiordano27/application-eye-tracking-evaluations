/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 05be8438
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionDestroy(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar15;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_05be845c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar6 = (undefined8 *)FUN_031c0d08();
LAB_05be845c:
  iVar4 = (*(code *)*puVar6)();
  if (unaff_w23 == iVar4) {
    lVar8 = unaff_x20[0x11];
LAB_05be8474:
    iVar1 = (int)unaff_x20[0x10];
    iVar2 = *(int *)((long)unaff_x20 + 0x84);
    iVar4 = iVar2;
    if (iVar1 <= iVar2) {
      iVar4 = iVar1;
    }
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar3 = iVar4;
    }
    *(int *)((long)unaff_x20 + 0x84) = iVar3;
    if (lVar8 != 0) {
      iVar3 = ((int)unaff_x20[0x12] + iVar1) - iVar3;
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = iVar3 / iVar1;
      }
      uVar9 = iVar3 - iVar4 * iVar1;
      lVar13 = 0;
      do {
        uVar12 = (uint)lVar13;
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar12) {
          return;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar12) {
LAB_05be8618:
                    /* WARNING: Subroutine does not return */
          FUN_03188ce0();
        }
        lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_05be8618;
        lVar14 = *(long *)(unaff_x19 + 0x38);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_05be8618;
        lVar8 = lVar8 + (long)(int)uVar9 * 0x10;
        uVar15 = *(undefined8 *)(lVar8 + 0x20);
        lVar14 = lVar14 + lVar13 * 0x10;
        lVar13 = lVar13 + 1;
        *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar14 + 0x20) = uVar15;
        lVar8 = unaff_x20[0x11];
      } while (lVar8 != 0);
    }
  }
  else {
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x268))();
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x22) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto FUN_05be8584;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_031c0d08(plVar7,*unaff_x22,0);
FUN_05be8584:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar1 = (int)unaff_x20[0x10];
      iVar4 = (int)unaff_x20[0x12] + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar4 / iVar1;
      }
      lVar8 = unaff_x20[0x11];
      *(int *)(unaff_x20 + 0x12) = iVar4 - iVar2 * iVar1;
      *(undefined4 *)((long)unaff_x20 + 0x94) = uVar5;
      if (lVar8 != 0) {
        lVar13 = 0;
        do {
          uVar9 = (uint)lVar13;
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar9) goto LAB_05be8474;
          if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_05be8618;
          lVar14 = *(long *)(unaff_x19 + 0x38);
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05be8618;
          lVar8 = *(long *)(lVar8 + lVar13 * 8 + 0x20);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x20 + 0x12)) goto LAB_05be8618;
          lVar14 = lVar14 + lVar13 * 0x10;
          lVar8 = lVar8 + (long)(int)*(uint *)(unaff_x20 + 0x12) * 0x10;
          lVar13 = lVar13 + 1;
          uVar15 = *(undefined8 *)(lVar14 + 0x20);
          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
          *(undefined8 *)(lVar8 + 0x20) = uVar15;
          lVar8 = unaff_x20[0x11];
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


