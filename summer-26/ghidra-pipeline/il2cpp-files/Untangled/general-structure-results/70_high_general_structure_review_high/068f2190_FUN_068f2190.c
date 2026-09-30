/*
FUNCTION_NAME: FUN_068f2190
ENTRY_POINT: 068f2190
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_4
*/


int FUN_068f2190(undefined8 param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_071d73a4 & 1) == 0) {
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XREnvironmentProbe,_AREnvironmentProbe>__ctor__
                );
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                );
    FUN_02f07e70(Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__);
    DAT_071d73a4 = 1;
  }
  lVar5 = FUN_068ec3f8(param_1);
  if ((lVar5 != 0) && (plVar6 = (long *)FUN_06789d74(lVar5,0), plVar6 != (long *)0x0)) {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_UnityEngine_XR_ARFoundation_ARTrackable<XREnvironmentProbe,_AREnvironmentProbe>__ctor__
           ) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_068f2258;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02eea86c(plVar6,*(long *)
                                  Method_UnityEngine_XR_ARFoundation_ARTrackable<XREnvironmentProbe,_AREnvironmentProbe>__ctor__
                          ,0);
LAB_068f2258:
    iVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar3 <= param_2) {
      return 0;
    }
    lVar5 = FUN_068ec3f8(param_1);
    if ((lVar5 != 0) &&
       (plVar6 = (long *)FUN_06789d74(lVar5,0),
       puVar2 = 
       Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__,
       plVar6 != (long *)0x0)) {
      lVar5 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)
               Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
             ) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_068f22e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02eea86c(plVar6,*(long *)
                                    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                            ,0);
LAB_068f22e4:
      fVar11 = (float)(*(code *)*puVar7)(plVar6,param_2,puVar7[1]);
      uVar8 = FUN_068ec3f8(param_1);
      iVar3 = FUN_068f2080(uVar8,param_2,uVar8);
      if (iVar3 < 1) {
        if ((param_3 & 1) != 0) {
          return 0;
        }
        return param_2;
      }
      lVar5 = FUN_068ec3f8(param_1);
      if ((lVar5 != 0) &&
         (plVar6 = (long *)UnityEngine_UIElements_DynamicAtlasSettings__get_defaultFilters(lVar5,0),
         puVar1 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__,
         plVar6 != (long *)0x0)) {
        lVar5 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__)
            {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_068f2394;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02eea86c(plVar6,*(long *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__
                              ,0);
LAB_068f2394:
        iVar4 = (*(code *)*puVar7)(plVar6,iVar3,puVar7[1]);
        lVar5 = FUN_068ec3f8(param_1);
        if ((lVar5 != 0) &&
           (plVar6 = (long *)UnityEngine_UIElements_DynamicAtlasSettings__get_defaultFilters
                                       (lVar5,0), plVar6 != (long *)0x0)) {
          lVar5 = *plVar6;
          iVar4 = iVar4 + -1;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_068f2418;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar1,0);
LAB_068f2418:
          iVar3 = (*(code *)*puVar7)(plVar6,iVar3 + -1,puVar7[1]);
          if (iVar4 <= iVar3) {
            return iVar4;
          }
          while ((lVar5 = FUN_068ec3f8(param_1), lVar5 != 0 &&
                 (plVar6 = (long *)FUN_06789d74(lVar5,0), plVar6 != (long *)0x0))) {
            lVar5 = *plVar6;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_068f249c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_02eea86c(plVar6,*(long *)puVar2,0);
LAB_068f249c:
            fVar12 = (float)(*(code *)*puVar7)(plVar6,iVar3,puVar7[1]);
            if (fVar11 <= fVar12) {
              return iVar3;
            }
            iVar3 = iVar3 + 1;
            if (iVar3 == iVar4) {
              return iVar4;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


