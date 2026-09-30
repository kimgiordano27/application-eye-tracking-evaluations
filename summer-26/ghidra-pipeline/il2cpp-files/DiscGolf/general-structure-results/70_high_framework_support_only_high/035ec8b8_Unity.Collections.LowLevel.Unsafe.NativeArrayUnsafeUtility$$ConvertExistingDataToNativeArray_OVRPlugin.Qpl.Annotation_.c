/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 035ec8b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x035ecb10) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_Qpl_Annotation>
               (long param_1)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  int iVar13;
  
  puVar4 = PTR_DAT_06a0d870;
  puVar3 = PTR_DAT_06a0d860;
  iVar13 = *(int *)(param_1 + 0x18) + -1;
  if (-1 < iVar13) {
    do {
      plVar5 = (long *)FUN_0400ff1c(param_1,iVar13,*(undefined8 *)puVar4);
      if (plVar5 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((bVar2 <= *(byte *)(*plVar5 + 0x130)) &&
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar6 = (long *)(**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
          lVar7 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar6[7] = lVar7;
          LeanTween__value(plVar6 + 7);
          plVar8 = (long *)(**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*plVar8 + 0x188))(plVar8,plVar6,*(undefined8 *)(*plVar8 + 400));
          lVar7 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar7 = FUN_065c4618(lVar7,0);
          if (lVar7 == 0) {
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar11 = FUN_065b14d0(plVar6,0);
            iVar10 = 4;
            if ((uVar11 & 1) == 0) {
              iVar10 = 10;
            }
          }
          else {
            FUN_0659ea54();
            iVar10 = 4;
          }
          if (plVar6 != (long *)0x0) {
            lVar7 = *plVar6;
            uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069fbff0) {
                  puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto 
                  Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<CAPI_ovrAvatar2Vector4f>
                  ;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar9 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069fbff0,0);

            Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafeReadOnlyPtr<CAPI_ovrAvatar2Vector4f>
            :
            (*(code *)*puVar9)(plVar6,puVar9[1]);
          }
          if ((iVar10 != 10) && (iVar10 != 0)) {
            return;
          }
        }
      }
      bVar1 = 0 < iVar13;
      iVar13 = iVar13 + -1;
    } while (bVar1);
  }
  return;
}


