/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 026cdf18
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_Media__SetAvailableQueueIndexVulkan(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(5);
  }
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    plVar9 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
      if (param_2 != (long *)0x0) {
        uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
        uVar3 = *(uint *)(lVar12 + 0x18);
        uVar2 = uVar2 & 0x7fffffff;
        iVar11 = 0;
        if (uVar3 != 0) {
          iVar11 = (int)uVar2 / (int)uVar3;
        }
        uVar10 = uVar2 - iVar11 * uVar3;
        if (uVar3 <= uVar10) goto LAB_026ce1e8;
        iVar11 = *(int *)(lVar12 + (ulong)uVar10 * 4 + 0x20);
        plVar9 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10)
                                     + 8))();
        if (lVar14 != 0) {
          uVar3 = *(uint *)(lVar14 + 0x18);
          uVar10 = iVar11 - 1;
          if (uVar3 <= uVar10) {
            return uVar10;
          }
          iVar11 = 0;
          do {
            if (*(uint *)(lVar14 + (long)(int)uVar10 * 0x18 + 0x20) == uVar2) {
              if (plVar9 == (long *)0x0) break;
              uVar7 = (**(code **)(*plVar9 + 0x1b8))
                                (plVar9,*(undefined8 *)(lVar14 + (long)(int)uVar10 * 0x18 + 0x28),
                                 param_2,*(undefined8 *)(*plVar9 + 0x1c0));
              if ((uVar7 & 1) != 0) {
                return uVar10;
              }
              uVar3 = *(uint *)(lVar14 + 0x18);
            }
            if (uVar3 <= uVar10) goto LAB_026ce1e8;
            uVar10 = *(uint *)(lVar14 + (long)(int)uVar10 * 0x18 + 0x24);
            if ((int)uVar3 <= iVar11) {
              FUN_031dbf48(0);
            }
            uVar3 = *(uint *)(lVar14 + 0x18);
            iVar11 = iVar11 + 1;
            if (uVar3 <= uVar10) {
              return uVar10;
            }
          } while( true );
        }
      }
LAB_026ce1ec:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_026ce0a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_015c2a80(plVar9,lVar5,1);
LAB_026ce0a8:
    uVar3 = (*(code *)*puVar4)(plVar9,param_2,puVar4[1]);
    uVar2 = *(uint *)(lVar12 + 0x18);
    uVar3 = uVar3 & 0x7fffffff;
    iVar11 = 0;
    if (uVar2 != 0) {
      iVar11 = (int)uVar3 / (int)uVar2;
    }
    uVar10 = uVar3 - iVar11 * uVar2;
    if (uVar2 <= uVar10) {
LAB_026ce1e8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    if (lVar14 == 0) goto LAB_026ce1ec;
    uVar1 = *(uint *)(lVar14 + 0x18);
    uVar2 = *(int *)(lVar12 + (ulong)uVar10 * 4 + 0x20) - 1;
    if (uVar2 < uVar1) {
      iVar11 = 0;
      do {
        if (*(uint *)(lVar14 + (long)(int)uVar2 * 0x18 + 0x20) == uVar3) {
          lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
          uVar13 = *(undefined8 *)(lVar14 + (long)(int)uVar2 * 0x18 + 0x28);
          if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
            lVar12 = FUN_015c2790(lVar12);
          }
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar12) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_026ce17c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_015c2a80(plVar9,lVar12,0);
LAB_026ce17c:
          uVar7 = (*(code *)*puVar4)(plVar9,uVar13,param_2,puVar4[1]);
          if ((uVar7 & 1) != 0) {
            return uVar2;
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar1 <= uVar2) goto LAB_026ce1e8;
        uVar2 = *(uint *)(lVar14 + (long)(int)uVar2 * 0x18 + 0x24);
        if ((int)uVar1 <= iVar11) {
          FUN_031dbf48(0);
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        iVar11 = iVar11 + 1;
      } while (uVar2 < uVar1);
    }
  }
  return uVar2;
}


