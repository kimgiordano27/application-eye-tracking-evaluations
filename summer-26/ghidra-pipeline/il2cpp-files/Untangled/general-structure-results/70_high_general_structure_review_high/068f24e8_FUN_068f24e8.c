/*
FUNCTION_NAME: FUN_068f24e8
ENTRY_POINT: 068f24e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


int FUN_068f24e8(long param_1,int param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_071d73a5 & 1) == 0) {
    FUN_02f07e70(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                );
    FUN_02f07e70(Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__);
    FUN_02f07e70(Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__);
    DAT_071d73a5 = 1;
  }
  lVar4 = FUN_068ec3f8(param_1);
  if (lVar4 == 0) goto LAB_068f2798;
  iVar2 = FUN_06789160(lVar4,0);
  if (param_2 < iVar2) {
    lVar4 = FUN_068ec3f8(param_1);
    if ((lVar4 == 0) ||
       (plVar5 = (long *)FUN_06789d74(lVar4,0),
       puVar1 = 
       Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__,
       plVar5 == (long *)0x0)) goto LAB_068f2798;
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
           ) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_068f25c8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02eea86c(plVar5,*(long *)
                                  Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                          ,0);
LAB_068f25c8:
    fVar10 = (float)(*(code *)*puVar6)(plVar5,param_2,puVar6[1]);
    uVar7 = FUN_068ec3f8(param_1);
    iVar2 = FUN_068f2080(uVar7,param_2,uVar7);
    lVar4 = FUN_068ec3f8(param_1);
    if (lVar4 == 0) goto LAB_068f2798;
    iVar3 = FUN_06789e70(lVar4,0);
    iVar2 = iVar2 + 1;
    if (iVar2 < iVar3) {
      uVar7 = FUN_068ec3f8(param_1);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)
                            Method_UnityEngine_XR_ARFoundation_ARTrackable<BoundedPlane,_ARPlane>__ctor__
                          );
      }
      iVar3 = FUN_068f0af4(uVar7,iVar2);
      lVar4 = FUN_068ec3f8(param_1);
      if ((lVar4 != 0) &&
         (plVar5 = (long *)UnityEngine_UIElements_DynamicAtlasSettings__get_defaultFilters(lVar4,0),
         plVar5 != (long *)0x0)) {
        lVar4 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__)
            {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_068f26e4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02eea86c(plVar5,*(long *)
                                      Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>__ctor__
                              ,0);
LAB_068f26e4:
        iVar2 = (*(code *)*puVar6)(plVar5,iVar2,puVar6[1]);
        if (iVar3 <= iVar2) {
          return iVar3;
        }
        while ((lVar4 = FUN_068ec3f8(param_1), lVar4 != 0 &&
               (plVar5 = (long *)FUN_06789d74(lVar4,0), plVar5 != (long *)0x0))) {
          lVar4 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_068f2768;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar1,0);
LAB_068f2768:
          fVar11 = (float)(*(code *)*puVar6)(plVar5,iVar2,puVar6[1]);
          if (fVar10 <= fVar11) {
            return iVar2;
          }
          iVar2 = iVar2 + 1;
          if (iVar2 == iVar3) {
            return iVar3;
          }
        }
      }
      goto LAB_068f2798;
    }
    if ((param_3 & 1) == 0) {
      return param_2;
    }
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    return *(int *)(*(long *)(param_1 + 0x180) + 0x10);
  }
LAB_068f2798:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


