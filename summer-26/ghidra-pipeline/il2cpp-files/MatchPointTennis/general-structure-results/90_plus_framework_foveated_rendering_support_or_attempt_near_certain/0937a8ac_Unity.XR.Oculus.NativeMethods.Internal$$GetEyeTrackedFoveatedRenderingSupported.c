/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0937a8ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 131
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0937aa90) */

void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 in_w8;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x879) = in_w8;
  if (unaff_x19 != 0) {
    FUN_09531244();
    lVar5 = FUN_0952a094();
    puVar2 = PTR_DAT_09f1f008;
    if (lVar5 != 0) {
      plVar6 = (long *)FUN_0953dea8(lVar5,0);
      puVar4 = PTR_DAT_09f24428;
      puVar3 = PTR_DAT_09f1f018;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      do {
        lVar10 = *plVar6;
        lVar5 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0937a948;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(plVar6,lVar5,0);
LAB_0937a948:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_04485110(plVar6,*(undefined8 *)puVar2);
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar10 = *plVar6;
          lVar5 = *(long *)puVar2;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_0937aa40;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0937aa28;
        }
        lVar10 = *plVar6;
        lVar5 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar5) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0937a9a8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_044822ac(plVar6,lVar5,1);
LAB_0937a9a8:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4();
        }
        uVar9 = FUN_095259a0(plVar8,0);
        FUN_0937a860(uVar9,unaff_w20);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0937aa28:
    if (*(long *)(piVar12 + -2) == lVar5) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0937aa5c;
    }
  }
LAB_0937aa40:
  puVar7 = (undefined8 *)FUN_044822ac(plVar6,lVar5,0);
LAB_0937aa5c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


