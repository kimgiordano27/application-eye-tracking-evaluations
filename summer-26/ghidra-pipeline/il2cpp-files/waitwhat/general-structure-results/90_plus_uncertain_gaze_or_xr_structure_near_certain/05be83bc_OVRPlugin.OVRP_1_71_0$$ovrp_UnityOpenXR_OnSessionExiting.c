/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 05be83bc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar16;
  
  if ((*(byte *)(unaff_x21 + 0xd38) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f5e08);
    *(undefined1 *)(unaff_x21 + 0xd38) = 1;
  }
  if (unaff_x19 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\0') {
      return;
    }
    iVar2 = *(int *)((long)param_1 + 0x94);
    plVar7 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    puVar4 = PTR_DAT_070f5e08;
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_070f5e08) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05be845c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)PTR_DAT_070f5e08,0);
LAB_05be845c:
      iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (iVar2 == iVar5) {
        lVar9 = param_1[0x11];
LAB_05be8474:
        iVar5 = (int)param_1[0x10];
        iVar1 = *(int *)((long)param_1 + 0x84);
        iVar2 = iVar1;
        if (iVar5 <= iVar1) {
          iVar2 = iVar5;
        }
        iVar3 = 0;
        if (-1 < iVar1) {
          iVar3 = iVar2;
        }
        *(int *)((long)param_1 + 0x84) = iVar3;
        if (lVar9 != 0) {
          iVar3 = ((int)param_1[0x12] + iVar5) - iVar3;
          iVar2 = 0;
          if (iVar5 != 0) {
            iVar2 = iVar3 / iVar5;
          }
          uVar10 = iVar3 - iVar2 * iVar5;
          lVar14 = 0;
          do {
            uVar13 = (uint)lVar14;
            if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar13) {
              return;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_05be8618:
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            lVar9 = *(long *)(lVar9 + lVar14 * 8 + 0x20);
            if (lVar9 == 0) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_05be8618;
            lVar15 = *(long *)(unaff_x19 + 0x38);
            if (lVar15 == 0) break;
            if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_05be8618;
            lVar9 = lVar9 + (long)(int)uVar10 * 0x10;
            uVar16 = *(undefined8 *)(lVar9 + 0x20);
            lVar15 = lVar15 + lVar14 * 0x10;
            lVar14 = lVar14 + 1;
            *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
            *(undefined8 *)(lVar15 + 0x20) = uVar16;
            lVar9 = param_1[0x11];
          } while (lVar9 != 0);
        }
      }
      else {
        plVar7 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
        if (plVar7 != (long *)0x0) {
          lVar9 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto FUN_05be8584;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar4,0);
FUN_05be8584:
          uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          iVar5 = (int)param_1[0x10];
          iVar2 = (int)param_1[0x12] + 1;
          iVar1 = 0;
          if (iVar5 != 0) {
            iVar1 = iVar2 / iVar5;
          }
          lVar9 = param_1[0x11];
          *(int *)(param_1 + 0x12) = iVar2 - iVar1 * iVar5;
          *(undefined4 *)((long)param_1 + 0x94) = uVar6;
          if (lVar9 != 0) {
            lVar14 = 0;
            do {
              uVar10 = (uint)lVar14;
              if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar10) goto LAB_05be8474;
              if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_05be8618;
              lVar15 = *(long *)(unaff_x19 + 0x38);
              if (lVar15 == 0) break;
              if (*(uint *)(lVar15 + 0x18) <= uVar10) goto LAB_05be8618;
              lVar9 = *(long *)(lVar9 + lVar14 * 8 + 0x20);
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= *(uint *)(param_1 + 0x12)) goto LAB_05be8618;
              lVar15 = lVar15 + lVar14 * 0x10;
              lVar9 = lVar9 + (long)(int)*(uint *)(param_1 + 0x12) * 0x10;
              lVar14 = lVar14 + 1;
              uVar16 = *(undefined8 *)(lVar15 + 0x20);
              *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar15 + 0x28);
              *(undefined8 *)(lVar9 + 0x20) = uVar16;
              lVar9 = param_1[0x11];
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


