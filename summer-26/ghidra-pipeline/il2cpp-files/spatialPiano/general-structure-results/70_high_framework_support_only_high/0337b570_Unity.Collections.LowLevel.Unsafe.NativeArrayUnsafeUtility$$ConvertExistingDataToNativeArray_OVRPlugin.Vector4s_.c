/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Vector4s>
ENTRY_POINT: 0337b570
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Vector4s>
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong in_x9;
  long in_x10;
  int *piVar7;
  long unaff_x20;
  int unaff_w23;
  int iVar8;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x27;
  int unaff_w28;
  
  do {
    piVar7 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0337b5a8;
      }
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
      puVar6 = (undefined8 *)FUN_02f421d0(unaff_x25,param_3,0);
LAB_0337b5a8:
      (*(code *)*puVar6)(unaff_x25,puVar6[1]);
      do {
        if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c0(unaff_x24);
        }
        iVar8 = unaff_w23;
        if ((unaff_w28 != 0xc) && (unaff_w28 != 0)) {
          return;
        }
        do {
          do {
            unaff_w23 = iVar8 + -1;
            if (iVar8 < 1) {
              return;
            }
            plVar2 = (long *)FUN_03abf644();
            iVar8 = unaff_w23;
          } while (plVar2 == (long *)0x0);
          bVar1 = *(byte *)(*unaff_x27 + 0x130);
        } while (((*(byte *)(*plVar2 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) ||
                (uVar3 = FUN_06384aa8(plVar2,0), (uVar3 & 1) != 0));
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        unaff_x25 = (long *)(**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
        lVar4 = (**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
        if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        unaff_x25[7] = lVar4;
        plVar5 = (long *)(**(code **)(*plVar2 + 0x3f8))(plVar2,*(undefined8 *)(*plVar2 + 0x400));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        (**(code **)(*plVar5 + 0x188))(plVar5,unaff_x25,*(undefined8 *)(*plVar5 + 400));
        lVar4 = (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar4 = FUN_0637014c(lVar4,0);
        if (lVar4 == 0) {
          if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          uVar3 = FUN_0635bbbc(unaff_x25,0);
          unaff_w28 = 4;
          if ((uVar3 & 1) == 0) {
            unaff_w28 = 0xc;
          }
        }
        else {
          FUN_06371d58();
          unaff_w28 = 4;
        }
        unaff_x24 = 0;
      } while (unaff_x25 == (long *)0x0);
      param_1 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_067c91b0;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


