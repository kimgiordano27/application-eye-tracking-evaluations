/*
FUNCTION_NAME: FUN_068f7c64
ENTRY_POINT: 068f7c64
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ray_or_cast_sink_hits_10;telemetry_or_network_hits_2
*/


void FUN_068f7c64(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  
  if ((DAT_071d73f3 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d37ab8);
    FUN_02f07e70(PTR_DAT_06d37ac0);
    FUN_02f07e70(PTR_DAT_06d37ac8);
    FUN_02f07e70(Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>__ctor__);
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__
                );
    FUN_02f07e70(PTR_DAT_06d0ab70);
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_trackableId__
                );
    FUN_02f07e70(PTR_DAT_06d04ef0);
    FUN_02f07e70(PTR_DAT_06d37ae0);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(PTR_DAT_06d05858);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    DAT_071d73f3 = 1;
  }
  puVar2 = PTR_DAT_06d37ac8;
  lVar12 = *(long *)(param_1 + 0x58);
  if (lVar12 != 0) {
    iVar15 = *(int *)(lVar12 + 0x18);
    *(undefined4 *)(lVar12 + 0x18) = 0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (0 < iVar15) {
      FUN_05624da8(*(undefined8 *)(lVar12 + 0x10),0,iVar15,0);
    }
    puVar3 = PTR_DAT_06d37ab8;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar12 = FUN_049913f0(*(undefined8 *)puVar3);
    lVar6 = FUN_068f82b0(param_1);
    puVar4 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_sessionRelativeData__;
    puVar3 = PTR_DAT_06d37ae0;
    puVar2 = PTR_DAT_06d01e20;
    if (lVar6 != 0) {
      iVar15 = 0;
      do {
        iVar5 = FUN_066d6148(lVar6,0);
        if (iVar5 <= iVar15) {
          if (*(int *)(*(long *)PTR_DAT_06d37ac8 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_04991530(lVar12,*(undefined8 *)PTR_DAT_06d37ac0);
          FUN_066d3700(param_1 + 0x38,0);
          return;
        }
        lVar6 = FUN_068f82b0(param_1);
        if (lVar6 == 0) break;
        plVar7 = (long *)FUN_066d6570(lVar6,iVar15,0);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
        }
        else if (*plVar7 != *(long *)PTR_DAT_06d05858) {
          plVar7 = (long *)0x0;
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar8 = FUN_066ca6a0(plVar7,0,0);
        if ((uVar8 & 1) == 0) {
          if ((plVar7 == (long *)0x0) || (lVar6 = FUN_066c67ec(plVar7,0), lVar6 == 0)) break;
          uVar8 = FUN_066c9b84(lVar6,0);
          if ((uVar8 & 1) != 0) {
            uVar16 = *(undefined8 *)
                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>__ctor__;
            if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar16 = FUN_056109c0(uVar16,0);
            FUN_066c7030(plVar7,uVar16,lVar12,0);
            if (lVar12 == 0) break;
            if (*(int *)(lVar12 + 0x18) == 0) {
LAB_068f7f40:
              lVar6 = *(long *)(param_1 + 0x58);
              if (lVar6 == 0) break;
              lVar9 = *(long *)(lVar6 + 0x10);
              lVar13 = *(long *)PTR_DAT_06d0ab70;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 == 0) break;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                puVar11 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *puVar11 = plVar7;
                thunk_FUN_02f411dc(puVar11,plVar7);
              }
              else {
                FUN_03fd0c9c(lVar6,plVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
            else if (0 < *(int *)(lVar12 + 0x18)) {
              iVar5 = 0;
              do {
                lVar6 = FUN_03fd09cc(lVar12,iVar5,*(undefined8 *)puVar3);
                if (lVar6 == 0) goto LAB_068f7fbc;
                uVar16 = *(undefined8 *)puVar4;
                lVar9 = thunk_FUN_02ef170c(lVar6,uVar16);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08440(lVar6,uVar16);
                }
                lVar9 = *(long *)puVar4;
                plVar10 = (long *)thunk_FUN_02ef170c(lVar6,lVar9);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f08440(lVar6,lVar9);
                }
                lVar6 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar8 != 0) {
                  piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar9) {
                      puVar11 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_068f7f1c;
                    }
                    uVar8 = uVar8 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar8 != 0);
                }
                puVar11 = (undefined8 *)FUN_02eea86c(plVar10,lVar9,0);
LAB_068f7f1c:
                uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                if ((uVar8 & 1) == 0) goto LAB_068f7f40;
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(lVar12 + 0x18));
            }
          }
        }
        iVar15 = iVar15 + 1;
        lVar6 = FUN_068f82b0(param_1);
      } while (lVar6 != 0);
    }
  }
LAB_068f7fbc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


