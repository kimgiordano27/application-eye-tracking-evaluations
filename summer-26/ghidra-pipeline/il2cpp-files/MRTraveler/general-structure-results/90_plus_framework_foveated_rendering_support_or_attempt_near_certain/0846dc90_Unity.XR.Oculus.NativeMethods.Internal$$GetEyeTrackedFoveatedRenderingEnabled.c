/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0846dc90
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0846e004) */

void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled
               (ulong param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x23;
  long *plVar14;
  undefined1 auVar15 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08f0f1d0);
    FUN_03c8f898(PTR_DAT_08f0f1d8);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08f10168);
    FUN_03c8f898(PTR_DAT_08f10170);
    FUN_03c8f898(PTR_DAT_08f10178);
    FUN_03c8f898(PTR_DAT_08f10180);
    FUN_03c8f898(PTR_DAT_08f10188);
    *(undefined1 *)(unaff_x23 + 0xfc7) = 1;
  }
  plVar9 = (long *)thunk_FUN_0844747c(param_2,0);
  if (plVar9 != (long *)0x0) {
    lVar11 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_08f0f1d0) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0846dd78;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08f0f1d0,0);
LAB_0846dd78:
    puVar3 = PTR_DAT_08e6a288;
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar6 = PTR_DAT_08f10188;
    puVar5 = PTR_DAT_08f0f1d8;
    puVar4 = PTR_DAT_08e6a290;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0846ddf8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar4,0);
LAB_0846ddf8:
      uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_0846df18;
        lVar11 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_0846def0;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0846ded8;
      }
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0846de54;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar5,0);
LAB_0846de54:
      lVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      plVar14 = *(long **)(lVar11 + 0x28);
      if (plVar14 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((bVar2 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar6)) {
          plVar14[3] = *(long *)(lVar11 + 0x18);
          lVar11 = FUN_0844bc50(lVar11,0);
          plVar14[4] = lVar11;
        }
      }
    } while( true );
  }
  goto LAB_0846dffc;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0846ded8:
    if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0846df0c;
    }
  }
LAB_0846def0:
  puVar10 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar3,0);
LAB_0846df0c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0846df18:
  puVar3 = PTR_DAT_08f10180;
  if (*(int *)(*(long *)PTR_DAT_08f10180 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  auVar15 = FUN_05a5638c();
  lVar11 = FUN_05a56d80();
  iVar1 = *(int *)(param_2 + 0xa4);
  if (iVar1 == 1) {
    bVar7 = true;
LAB_0846df98:
    bVar8 = iVar1 == 3;
  }
  else {
    bVar7 = iVar1 == 3;
    if (iVar1 != 2) goto LAB_0846df98;
    bVar8 = true;
  }
  if (lVar11 != 0) {
    *(bool *)(lVar11 + 0x20) = bVar7;
    *(bool *)(lVar11 + 0x21) = bVar8;
    puVar4 = PTR_DAT_08f10178;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_05a56df8(auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar4);
    return;
  }
LAB_0846dffc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


