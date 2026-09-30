/*
FUNCTION_NAME: Meta.WitAi.Speech.VoiceSpeechEvents$$.ctor
ENTRY_POINT: 032a30ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 221
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x032a32f8) */

void Meta_WitAi_Speech_VoiceSpeechEvents___ctor(long param_1)

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
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x4f0));
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__)
  ;
  thunk_FUN_01efb3a4(Method_Unity_Collections_FixedStringMethods_Append<FixedString32Bytes>__);
  *(undefined1 *)(unaff_x21 + 0xe0b) = 1;
  if (unaff_x20 != 0) {
    FUN_032bf548();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032a3090 with catch @ 032a3110
                       try { // try from 032a3110 to 033a3127 has its CatchHandler @ 032a3044 */
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18) + 0x135) & 1) ==
        0) {
      FUN_01ecaf44();
    }
    thunk_FUN_01f117cc();
                    /* try { // try from 032a3128 to 033a313f has its CatchHandler @ 032a31b8 */
    FUN_02e6d028();
                    /* try { // try from 032a3140 to 033a31a7 has its CatchHandler @ 032a3044 */
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
                    /* catch() { ... } // from try @ 032a3128 with catch @ 032a31b8
                       catch() { ... } // from try @ 032a31a8 with catch @ 032a31b8 */
          if (uVar8 != 0) {
                    /* try { // try from 032a31bc to 033a31bf has its CatchHandler @ 032a31c8 */
                    /* try { // try from 032a31c0 to 033a31cb has its CatchHandler @ 032a3044 */
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a31bc with catch @ 032a31c8
                        */
                    /* try { // try from 032a31cc to 033a34cf has its CatchHandler @ 032a31cc
                       catch() { ... } // from try @ 032a31cc with catch @ 032a31cc
                       catch() { ... } // from try @ 032a35a8 with catch @ 032a31cc
                       catch() { ... } // from try @ 032a3670 with catch @ 032a31cc
                       catch() { ... } // from try @ 032a371c with catch @ 032a31cc */
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto Meta_WitAi_Requests_AudioStreamHandler__set_ClipStream;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
Meta_WitAi_Requests_AudioStreamHandler__set_ClipStream:
          uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar8 & 1) == 0) goto LAB_032a3278;
          lVar4 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_032a3254;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_032a3254:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
          thunk_FUN_03fe9acc();
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_032a3278:
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_032a32cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_032a32cc:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


