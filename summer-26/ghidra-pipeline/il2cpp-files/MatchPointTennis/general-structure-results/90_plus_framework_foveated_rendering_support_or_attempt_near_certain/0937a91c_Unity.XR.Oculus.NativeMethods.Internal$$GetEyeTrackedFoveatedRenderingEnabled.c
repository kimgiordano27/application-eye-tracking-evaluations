/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0937a91c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 133
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0937aa90) */

void Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingEnabled
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0937a948;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_044822ac();
LAB_0937a948:
        uVar3 = (*(code *)*puVar2)();
        if ((uVar3 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_04485110();
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 == 0) goto LAB_0937aa40;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0937aa28;
        }
        lVar6 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x22) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0937a9a8;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_044822ac();
LAB_0937a9a8:
        plVar4 = (long *)(*(code *)*puVar2)();
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        bVar1 = *(byte *)(*unaff_x23 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4();
        }
        uVar5 = FUN_095259a0(plVar4,0);
        FUN_0937a860(uVar5,unaff_w20);
        param_1 = *unaff_x19;
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
LAB_0937aa28:
    if (*(long *)(piVar7 + -2) == *unaff_x21) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0937aa5c;
    }
  }
LAB_0937aa40:
  puVar2 = (undefined8 *)FUN_044822ac(plVar4,*unaff_x21,0);
LAB_0937aa5c:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  return;
}


