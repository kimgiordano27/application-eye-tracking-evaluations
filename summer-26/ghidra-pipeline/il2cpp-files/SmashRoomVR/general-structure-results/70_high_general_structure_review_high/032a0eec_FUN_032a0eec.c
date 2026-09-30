/*
FUNCTION_NAME: FUN_032a0eec
ENTRY_POINT: 032a0eec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_18;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_032a0eec(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  undefined8 local_68;
  
                    /* try { // try from 032a0f10 to 033a0f17 has its CatchHandler @ 032a10e0 */
  if ((DAT_03ff5802 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakAsync>d__91_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86558);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
                    /* try { // try from 032a0f58 to 033a0f8b has its CatchHandler @ 032a10e8 */
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__);
    thunk_FUN_01ad9084(StringLiteral_2992);
    thunk_FUN_01ad9084(PTR_DAT_03d86560);
    thunk_FUN_01ad9084(PTR_DAT_03d86568);
    thunk_FUN_01ad9084(PTR_DAT_03d86570);
    thunk_FUN_01ad9084(PTR_DAT_03d86578);
    thunk_FUN_01ad9084(Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__);
                    /* try { // try from 032a0fbc to 033a0fc7 has its CatchHandler @ 032a10d0 */
    thunk_FUN_01ad9084(PTR_DAT_03d86580);
    thunk_FUN_01ad9084(PTR_DAT_03d86588);
    thunk_FUN_01ad9084(PTR_DAT_03d86590);
    thunk_FUN_01ad9084(PTR_DAT_03d86598);
    thunk_FUN_01ad9084(PTR_DAT_03d865a0);
    DAT_03ff5802 = 1;
  }
  puVar4 = Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__;
  local_68 = 0;
                    /* try { // try from 032a1000 to 033a1033 has its CatchHandler @ 032a10e4 */
  if (param_1 == (long *)0x0) {
LAB_032a164c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar7 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  uVar8 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  uVar9 = FUN_02ee6cf0(param_2,0);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar11 = FUN_02fb5be4(param_2,0);
    uVar10 = FUN_02fb10c4(param_2,0);
    if (lVar11 == 0) goto LAB_032a164c;
                    /* try { // try from 032a10b4 to 033a10b7 has its CatchHandler @ 032a10dc */
                    /* try { // try from 032a10b8 to 033a10bb has its CatchHandler @ 032a10d8 */
                    /* try { // try from 032a10bc to 033a10bf has its CatchHandler @ 032a10d4 */
                    /* try { // try from 032a10c0 to 033a10c3 has its CatchHandler @ 032a10c8 */
                    /* try { // try from 032a10c4 to 033a10ff has its CatchHandler @ 032a0cc8 */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a10c0 with catch @ 032a10c8
                        */
    sVar6 = FUN_02ee1ff0(lVar11,*(int *)(lVar11 + 0x10) + -1,0);
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a1064 with catch @ 032a10cc
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a0fbc with catch @ 032a10d0
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a10bc with catch @ 032a10d4
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a10b8 with catch @ 032a10d8
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a10b4 with catch @ 032a10dc
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a0f10 with catch @ 032a10e0
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a1000 with catch @ 032a10e4
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 032a0f58 with catch @ 032a10e8
                        */
    if ((sVar6 != 0x2f) ||
       (sVar6 = FUN_02ee1ff0(lVar11,*(int *)(lVar11 + 0x10) + -1,0), sVar6 != 0x5c)) {
                    /* try { // try from 032a1100 to 033a1103 has its CatchHandler @ 032a1124 */
                    /* try { // try from 032a1104 to 033a112b has its CatchHandler @ 032a0cc8 */
      lVar11 = FUN_02edd6e8(lVar11,*(undefined8 *)Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__,0)
      ;
    }
  }
  else {
    if (*(int *)(*(long *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_038eeb08(0);
                    /* try { // try from 032a1064 to 033a106f has its CatchHandler @ 032a10cc */
                    /* try { // try from 032a1070 to 033a10b3 has its CatchHandler @ 032a0cc8 */
    lVar11 = FUN_02edd6e8(uVar10,*(undefined8 *)PTR_DAT_03d86598,0);
    uVar10 = 0;
  }
  puVar5 = PTR_DAT_03d86580;
                    /* catch() { ... } // from try @ 032a1100 with catch @ 032a1124 */
  uVar9 = FUN_02ee6cf0(uVar10,0);
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 032a112c to 033a1133 has its CatchHandler @ 032a1148 */
                    /* try { // try from 032a1134 to 033a113f has its CatchHandler @ 032a0cc8 */
    if (*(int *)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_5__ + 0xe0) == 0) {
                    /* try { // try from 032a1140 to 033a1147 has its CatchHandler @ 032a1148 */
      thunk_FUN_01ac7298();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a112c with catch @ 032a1148
                       catch(type#2 @ 00000000) { ... } // from try @ 032a1140 with catch @ 032a1148
                        */
    local_68 = FUN_03024480(0);
    uVar10 = FUN_03025078(&local_68,*(undefined8 *)PTR_DAT_03d86578,0);
    uVar10 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d86568,uVar10,*(undefined8 *)puVar5,0);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_02fba92c(uVar10,0);
  uVar9 = thunk_FUN_02ee6388(uVar12,*(undefined8 *)puVar5,0);
  if (((uVar9 & 1) == 0) &&
     (uVar13 = thunk_FUN_02ee6388(uVar12,*(undefined8 *)PTR_DAT_03d86570,0), (uVar13 & 1) == 0)) {
    uVar10 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d86588,uVar12,0);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        );
    }
  }
  else {
    FUN_02fa7e84(lVar11,0);
    puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    lVar14 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_2992);
    FUN_03907774(lVar14,uVar7 * 6,uVar8,3,0,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar13 = FUN_03922f24(lVar14,0,0);
    if ((uVar13 & 1) == 0) {
      lVar15 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d86558,6);
      FUN_02f80f34(lVar15,*(undefined8 *)PTR_DAT_03d86560,0);
      if (lVar15 != 0) {
        if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
          iVar25 = 0;
          uVar13 = 0;
          uVar19 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
          do {
            if (uVar19 <= uVar13) {
LAB_032a14f4:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            lVar16 = FUN_039083b4(param_1,*(undefined4 *)(lVar15 + uVar13 * 4 + 0x20),0);
            if (lVar16 == 0) goto LAB_032a164c;
            lVar17 = FUN_01b47fd0(*(undefined8 *)
                                   Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<SpeakAsync>d__91_System_Collections_IEnumerator_Reset__
                                  ,*(undefined4 *)(lVar16 + 0x18));
            if (0 < (int)uVar8) {
              uVar21 = 0;
              uVar19 = 0;
              uVar20 = uVar7 * (uVar8 - 1);
              do {
                uVar22 = (ulong)uVar21;
                if (0 < (int)uVar7) {
                  lVar23 = uVar22 << 0x20;
                  uVar24 = (ulong)uVar7;
                  uVar2 = uVar20;
                  do {
                    if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_032a14f4;
                    if (lVar17 == 0) goto LAB_032a164c;
                    if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_032a14f4;
                    lVar1 = lVar16 + (long)(int)uVar2 * 0x10;
                    uVar12 = *(undefined8 *)(lVar1 + 0x20);
                    lVar3 = lVar17 + (lVar23 >> 0x1c);
                    lVar23 = lVar23 + 0x100000000;
                    uVar22 = uVar22 + 1;
                    uVar24 = uVar24 - 1;
                    uVar2 = uVar2 + 1;
                    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
                    *(undefined8 *)(lVar3 + 0x20) = uVar12;
                  } while (uVar24 != 0);
                }
                uVar19 = uVar19 + 1;
                uVar21 = uVar21 + uVar7;
                uVar20 = uVar20 - uVar7;
              } while (uVar19 != uVar8);
            }
            if (lVar14 == 0) goto LAB_032a164c;
            FUN_03907b34(lVar14,iVar25,0,uVar7,uVar8,lVar17,0);
            uVar19 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar13 = uVar13 + 1;
            iVar25 = iVar25 + uVar7;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
        if ((uVar9 & 1) == 0) {
          uVar12 = FUN_0393a388(lVar14,0);
        }
        else {
          uVar12 = FUN_0393a308(lVar14,0);
        }
        puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        uVar18 = FUN_02edd6e8(lVar11,uVar10,0);
        FUN_02faa660(uVar18,uVar12,0);
        uVar10 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d865a0,lVar11,uVar10,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(uVar10,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923b4c(lVar14,0);
        return 1;
      }
      goto LAB_032a164c;
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = *(undefined8 *)PTR_DAT_03d86590;
  }
  FUN_038f2e04(uVar10,0);
  return 0;
}


