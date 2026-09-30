/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnMultiplayerListTitleMultiplayerServersQuotaChangesRequestEvent
ENTRY_POINT: 0526cea4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
PlayFab_Events_PlayFabEvents__add_OnMultiplayerListTitleMultiplayerServersQuotaChangesRequestEvent
          (void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  
                    /* try { // try from 0526cea8 to 0536cf07 has its CatchHandler @ 0526cf64 */
  FUN_02d4dc40(PTR_DAT_06646310);
  FUN_02d4dc40(System_Collections_Generic_IEnumerator<InputStateHistory_Record<TouchState>>_TypeInfo
              );
  FUN_02d4dc40(System_Collections_Generic_IEnumerator<ValueTuple<Ray,_Camera,_bool>>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_IEnumerator<float[]>_TypeInfo);
  FUN_02d4dc40(PTR_DAT_06646bb0);
  *(undefined1 *)(unaff_x20 + 0x450) = 1;
  uVar1 = FUN_04e7faf0();
  if ((uVar1 & 1) == 0) {
    lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                System_Action<WebClient,_OpenReadCompletedEventHandler>_TypeInfo);
    FUN_051ff7f4(lVar3,0);
    lVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_06649578);
    FUN_05209d9c(lVar6,0);
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x10) = 0;
      *(undefined4 *)(lVar6 + 0x18) = 2000;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar6;
        thunk_FUN_02dc1ef0((long *)(lVar3 + 0x18),lVar6);
        *(undefined8 *)(lVar3 + 0x10) = unaff_x21;
        thunk_FUN_02dc1ef0();
        lVar6 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined8 *)(lVar6 + 0x20) =
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerator<ValueTuple<Ray,_Camera,_bool>>_TypeInfo;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar6 + 0x28) = unaff_x21;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x28));
              if (2 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x30) =
                     *(undefined8 *)
                      System_Collections_Generic_IEnumerator<InputStateHistory_Record<TouchState>>_TypeInfo
                ;
                thunk_FUN_02dc1ef0();
                if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0526d18c;
                if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                  *(undefined8 *)(lVar6 + 0x38) =
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x50) + 0x158);
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x38));
                  if (4 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_06646bb0;
                    thunk_FUN_02dc1ef0();
                    uVar7 = FUN_04e80ce4(lVar6,0);
                    if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
                      thunk_FUN_02dabd98(*(long *)PTR_DAT_06646730);
                    }
                    FUN_05ea2238(uVar7,0);
                    if (*(long *)(unaff_x19 + 0x50) != 0) {
                      uVar7 = FUN_051ffa8c(*(long *)(unaff_x19 + 0x50),lVar3,0);
                      return uVar7;
                    }
                    goto LAB_0526d18c;
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4def0();
        }
      }
    }
  }
  else if (*(long *)(unaff_x19 + 0x48) != 0) {
                    /* try { // try from 0526cf08 to 0536cf4f has its CatchHandler @ 0526cd34 */
    plVar5 = *(long **)(*(long *)(unaff_x19 + 0x48) + 0x18);
    lVar6 = *(long *)PTR_DAT_06648110;
    lVar3 = *(long *)(lVar6 + 0x38);
    if (lVar3 == 0) {
      FUN_02d87268(lVar6);
      lVar3 = *(long *)(lVar6 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d8720c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                    /* try { // try from 0526cf50 to 0536cf57 has its CatchHandler @ 0526cf60 */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d8720c();
    }
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar7 = **(undefined8 **)(lVar3 + 0xb8);
      uVar8 = *(undefined8 *)System_Collections_Generic_IEnumerator<float[]>_TypeInfo;
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0664b728) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_0526d160;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d87540(plVar5,*(long *)PTR_DAT_0664b728,1);
LAB_0526d160:
      (*(code *)*puVar2)(plVar5,1,uVar8,uVar7,puVar2[1]);
      return 0;
    }
  }
LAB_0526d18c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


