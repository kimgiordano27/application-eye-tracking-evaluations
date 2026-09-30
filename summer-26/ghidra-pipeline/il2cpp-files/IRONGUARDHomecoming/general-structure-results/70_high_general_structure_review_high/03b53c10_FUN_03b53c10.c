/*
FUNCTION_NAME: FUN_03b53c10
ENTRY_POINT: 03b53c10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_03b53c10(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  
  puVar6 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
                    /* try { // try from 03b53c18 to 03c53c1f has its CatchHandler @ 03b5393c */
                    /* try { // try from 03b53c20 to 03c53c23 has its CatchHandler @ 03b53ca0 */
                    /* try { // try from 03b53c24 to 03c53c6b has its CatchHandler @ 03b53c9c */
  if ((DAT_04839510 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Convert_ToUInt64__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04839510 = 1;
  }
                    /* try { // try from 03b53c6c to 03c53c73 has its CatchHandler @ 03b53cb4 */
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 03b53c74 to 03c53cd3 has its CatchHandler @ 03b5393c */
  uVar3 = FUN_03582560(param_1,0,0);
                    /* catch() { ... } // from try @ 03b53aa0 with catch @ 03b53c84 */
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 03b53b28 with catch @ 03b53c88 */
                    /* catch() { ... } // from try @ 03b53b20 with catch @ 03b53c8c */
                    /* catch() { ... } // from try @ 03b53af8 with catch @ 03b53c90 */
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03b53ae4 with catch @ 03b53c94 */
      thunk_FUN_01ee6d7c();
    }
                    /* catch() { ... } // from try @ 03b53aa8 with catch @ 03b53c98 */
                    /* catch() { ... } // from try @ 03b53c24 with catch @ 03b53c9c */
                    /* catch() { ... } // from try @ 03b53c20 with catch @ 03b53ca0 */
                    /* catch() { ... } // from try @ 03b53bd0 with catch @ 03b53ca4 */
    uVar3 = FUN_03582560(param_2,0,0);
    if ((uVar3 & 1) == 0) {
      if (-1 < (int)param_3) {
        if (param_2 != 0) {
                    /* catch() { ... } // from try @ 03b53b44 with catch @ 03b53cb4
                       catch() { ... } // from try @ 03b53c6c with catch @ 03b53cb4 */
                    /* catch() { ... } // from try @ 03b53b0c with catch @ 03b53cbc */
          uVar3 = FUN_03583944(param_2,0);
          puVar2 = Method_System_Convert_ToUInt64__;
          plVar8 = param_1;
          if ((uVar3 & 1) == 0) {
            do {
              if (plVar8 == (long *)0x0) goto LAB_03b53f34;
              uVar3 = (**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
              if ((uVar3 & 1) != 0) {
                uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
                    /* try { // try from 03b53e64 to 03c53e6f has its CatchHandler @ 03b5393c */
                    /* try { // try from 03b53e70 to 03c53e77 has its CatchHandler @ 03b53e78 */
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03b53cf0 with catch @ 03b53e78
                       catch() { ... } // from try @ 03b53e20 with catch @ 03b53e78
                       catch() { ... } // from try @ 03b53e70 with catch @ 03b53e78 */
                  thunk_FUN_01ee6d7c(*(long *)puVar6);
                }
                    /* try { // try from 03b53e84 to 03c53f67 has its CatchHandler @ 03b53e84
                       catch() { ... } // from try @ 03b53e84 with catch @ 03b53e84
                       catch() { ... } // from try @ 03b53fdc with catch @ 03b53e84
                       catch() { ... } // from try @ 03b540d8 with catch @ 03b53e84
                       catch() { ... } // from try @ 03b54150 with catch @ 03b53e84
                       catch() { ... } // from try @ 03b541b0 with catch @ 03b53e84
                       catch() { ... } // from try @ 03b54240 with catch @ 03b53e84
                       catch() { ... } // from try @ 03b542d0 with catch @ 03b53e84 */
                uVar3 = FUN_03583338(uVar5,param_2,0);
                if ((uVar3 & 1) == 0) goto LAB_03b53eec;
              }
              plVar8 = (long *)(**(code **)(*plVar8 + 0x888))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x890));
              uVar5 = *(undefined8 *)puVar2;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar6);
              }
              uVar5 = FUN_03579868(uVar5,0);
              uVar3 = FUN_03582560(plVar8,uVar5,0);
            } while ((uVar3 & 1) == 0);
          }
          else {
            do {
                    /* try { // try from 03b53cd4 to 03c53cd7 has its CatchHandler @ 03b53d08 */
              if ((param_1 == (long *)0x0) ||
                 (lVar4 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0))
                 , lVar4 == 0)) goto LAB_03b53f34;
              uVar1 = *(uint *)(lVar4 + 0x18);
                    /* try { // try from 03b53cf0 to 03c53d07 has its CatchHandler @ 03b53e78 */
              if (0 < (int)uVar1) {
                uVar9 = 0;
                do {
                  if (uVar1 <= uVar9) goto LAB_03b53f38;
                    /* catch() { ... } // from try @ 03b53cd4 with catch @ 03b53d08
                       try { // try from 03b53d08 to 03c53d3b has its CatchHandler @ 03b5393c */
                  plVar8 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
                  if (plVar8 == (long *)0x0) goto LAB_03b53f34;
                    /* catch() { ... } // from try @ 03b53ac0 with catch @ 03b53d10 */
                  uVar3 = (**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
                  if ((uVar3 & 1) != 0) {
                    uVar5 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
                    /* try { // try from 03b53d3c to 03c53d3f has its CatchHandler @ 03b53e28 */
                    /* try { // try from 03b53d40 to 03c53d53 has its CatchHandler @ 03b5393c */
                    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)puVar6);
                    }
                    /* try { // try from 03b53d54 to 03c53d6b has its CatchHandler @ 03b53e18 */
                    uVar3 = FUN_03582560(uVar5,param_2,0);
                    if ((uVar3 & 1) != 0) goto LAB_03b53eec;
                  }
                    /* try { // try from 03b53d74 to 03c53d77 has its CatchHandler @ 03b53e0c */
                  uVar5 = FUN_03b53c10(plVar8,param_2,param_3);
                    /* try { // try from 03b53d78 to 03c53d8f has its CatchHandler @ 03b53e08 */
                  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)puVar6);
                  }
                    /* try { // try from 03b53d90 to 03c53d93 has its CatchHandler @ 03b53e04 */
                    /* try { // try from 03b53d98 to 03c53dcb has its CatchHandler @ 03b53dfc */
                  uVar3 = FUN_03583338(uVar5,0,0);
                  if ((uVar3 & 1) != 0) {
                    return uVar5;
                  }
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < (int)uVar1);
              }
              param_1 = (long *)(**(code **)(*param_1 + 0x888))
                                          (param_1,*(undefined8 *)(*param_1 + 0x890));
                    /* try { // try from 03b53dcc to 03c53dd3 has its CatchHandler @ 03b53e00 */
                    /* try { // try from 03b53dd4 to 03c53deb has its CatchHandler @ 03b5393c */
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)puVar6);
              }
                    /* try { // try from 03b53dec to 03c53dfb has its CatchHandler @ 03b53e18 */
              uVar3 = FUN_03582560(param_1,0,0);
              if ((uVar3 & 1) != 0) {
                return 0;
              }
              uVar5 = *(undefined8 *)puVar2;
                    /* catch() { ... } // from try @ 03b53d98 with catch @ 03b53dfc */
                    /* catch() { ... } // from try @ 03b53dcc with catch @ 03b53e00 */
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 03b53d90 with catch @ 03b53e04 */
                thunk_FUN_01ee6d7c();
              }
                    /* catch() { ... } // from try @ 03b53d78 with catch @ 03b53e08 */
                    /* catch() { ... } // from try @ 03b53d74 with catch @ 03b53e0c */
              uVar5 = FUN_03579868(uVar5,0);
                    /* catch() { ... } // from try @ 03b53d54 with catch @ 03b53e18
                       catch() { ... } // from try @ 03b53dec with catch @ 03b53e18 */
                    /* try { // try from 03b53e20 to 03c53e63 has its CatchHandler @ 03b53e78 */
              uVar3 = FUN_03582560(param_1,uVar5,0);
            } while ((uVar3 & 1) == 0);
          }
          return 0;
        }
        goto LAB_03b53f34;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
                    /* try { // try from 03b53fa0 to 03c53fa7 has its CatchHandler @ 03b54164 */
      uVar7 = thunk_FUN_01efb3a4(StringLiteral_12290);
                    /* try { // try from 03b53fbc to 03c53fc3 has its CatchHandler @ 03b54158 */
      FUN_034f7db4(uVar5,uVar7,0);
      goto LAB_03b53fc0;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
                    /* try { // try from 03b53f68 to 03c53f73 has its CatchHandler @ 03b54170 */
    uVar5 = thunk_FUN_01f117cc();
    puVar6 = Method_OVRTouchSample_TouchController_OnInputFocusAcquired__;
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar6 = Method_System_DateTime_FromBinary__;
  }
  uVar7 = thunk_FUN_01efb3a4(puVar6);
                    /* try { // try from 03b53f84 to 03c53f8b has its CatchHandler @ 03b5415c */
  FUN_034efd20(uVar5,uVar7,0);
LAB_03b53fc0:
  uVar7 = thunk_FUN_01efb3a4(StringLiteral_12291);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03b53fd4 to 03c53fdb has its CatchHandler @ 03b54154 */
  FUN_01f08910(uVar5,uVar7);
LAB_03b53eec:
  lVar4 = (**(code **)(*plVar8 + 0x468))(plVar8,*(undefined8 *)(*plVar8 + 0x470));
  if (lVar4 != 0) {
    if (param_3 < *(uint *)(lVar4 + 0x18)) {
      return *(undefined8 *)(lVar4 + (long)(int)param_3 * 8 + 0x20);
    }
LAB_03b53f38:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_03b53f34:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


