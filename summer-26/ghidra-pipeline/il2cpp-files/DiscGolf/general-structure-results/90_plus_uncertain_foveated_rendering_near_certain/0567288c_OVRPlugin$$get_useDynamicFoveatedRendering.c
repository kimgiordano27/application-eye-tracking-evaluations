/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 0567288c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFoveatedRendering(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long lVar6;
  long unaff_x21;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xff8));
  FUN_02d965b8(System_Collections_Generic_List<LayoutManager>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<Leaderboard>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<LeaderboardEntry>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x678) = 1;
  if (*(long *)(unaff_x20 + 0x198) == 0) {
    return 0;
  }
  if (*(long *)(unaff_x20 + 0x188) != 0) {
    uVar3 = FUN_03bff3e8(*(long *)(unaff_x20 + 0x188),unaff_w19,
                         *(undefined8 *)System_Collections_Generic_List<Leaderboard>_TypeInfo);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (*(long *)(unaff_x20 + 0x188) != 0) {
      FUN_03bfff24(*(long *)(unaff_x20 + 0x188),unaff_w19,
                   *(undefined8 *)System_Collections_Generic_List<LayoutManager>_TypeInfo);
      iVar2 = FUN_0566e6f0();
      if (iVar2 == 0) {
        return 1;
      }
      if (*(long *)(unaff_x20 + 0xf8) != 0) {
        FUN_04e02bc4(*(long *)(unaff_x20 + 0xf8),iVar2,
                     *(undefined8 *)System_Collections_Generic_List<LabelScopeInfo>_TypeInfo);
        lVar6 = *(long *)(unaff_x20 + 400);
        FUN_0567ce64();
        if (lVar6 != 0) {
          lVar4 = *(long *)(lVar6 + 0x10);
          lVar5 = *(long *)System_Collections_Generic_List<LeaderboardEntry>_TypeInfo;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar1 * 0x24;
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar4 + 0x28) = 0;
              *(undefined8 *)(lVar4 + 0x20) = 0;
              *(undefined8 *)(lVar4 + 0x38) = 0;
              *(undefined8 *)(lVar4 + 0x30) = 0;
              *(undefined4 *)(lVar4 + 0x40) = 0;
              return 1;
            }
            in_stack_00000068 = 0;
            in_stack_00000060 = 0;
            in_stack_00000078 = 0;
            in_stack_00000070 = 0;
            in_stack_00000080 = 0;
            FUN_04018ed8(lVar6,&stack0x00000060,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


