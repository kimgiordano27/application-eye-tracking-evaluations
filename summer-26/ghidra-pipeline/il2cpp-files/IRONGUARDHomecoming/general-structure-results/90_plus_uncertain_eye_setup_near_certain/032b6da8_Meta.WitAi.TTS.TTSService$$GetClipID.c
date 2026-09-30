/*
FUNCTION_NAME: Meta.WitAi.TTS.TTSService$$GetClipID
ENTRY_POINT: 032b6da8
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


/* WARNING: Removing unreachable block (ram,0x032b6fc0) */

void Meta_WitAi_TTS_TTSService__GetClipID(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  
  (*(code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x20))();
  lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28))();
  if (lVar4 != 0) {
    FUN_03fe3c18(lVar4,0);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30))();
    lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (lVar4 != 0) {
      plVar5 = (long *)FUN_0265d924(lVar4,*(undefined8 *)
                                           Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                                   );
      puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_032b6ea4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_032b6ea4:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar7 & 1) == 0) goto LAB_032b6f40;
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_032b6f00;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_032b6f00:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40))();
        thunk_FUN_03fe9acc();
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032b6fb8 to 033b70df has its CatchHandler @ 032b6fb8
                       catch() { ... } // from try @ 032b6fb8 with catch @ 032b6fb8
                       catch() { ... } // from try @ 032b7228 with catch @ 032b6fb8
                       catch() { ... } // from try @ 032b72b4 with catch @ 032b6fb8
                       catch() { ... } // from try @ 032b72bc with catch @ 032b6fb8
                       catch() { ... } // from try @ 032b7364 with catch @ 032b6fb8 */
  FUN_01f08a3c();
LAB_032b6f40:
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_032b6f94;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_032b6f94:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


