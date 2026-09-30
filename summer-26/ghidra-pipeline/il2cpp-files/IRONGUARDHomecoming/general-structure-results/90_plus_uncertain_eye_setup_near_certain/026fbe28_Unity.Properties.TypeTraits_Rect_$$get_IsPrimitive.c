/*
FUNCTION_NAME: Unity.Properties.TypeTraits<Rect>$$get_IsPrimitive
ENTRY_POINT: 026fbe28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026fbff0) */

void Unity_Properties_TypeTraits<Rect>__get_IsPrimitive(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  
  FUN_02e6d028();
  lVar4 = FUN_02444fcc();
  if (lVar4 != 0) {
    uVar5 = FUN_03fe3c18(lVar4,0);
    *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0xa0),uVar5);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (*(long *)(unaff_x20 + 0x98) != 0) {
      plVar6 = (long *)FUN_0265d924(*(long *)(unaff_x20 + 0x98),
                                    *(undefined8 *)
                                     Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar4 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_026fbef0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_026fbef0:
        uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar8 & 1) == 0) goto LAB_026fbf70;
        lVar4 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_026fbf4c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_026fbf4c:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
        thunk_FUN_03fe9acc();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_026fbf70:
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_026fbfc4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_026fbfc4:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


