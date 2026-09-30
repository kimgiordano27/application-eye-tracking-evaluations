/*
FUNCTION_NAME: FUN_06724410
ENTRY_POINT: 06724410
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long FUN_06724410(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_MoveNext__;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_Dispose__;
  if ((DAT_076e065d & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_MoveNext__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List_Enumerator<RegisteredMatchIntent>_Dispose__
                      );
    DAT_076e065d = 1;
  }
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(lVar7,*(undefined8 *)puVar3);
  if ((param_1 != 0) && (uVar4 = FUN_06717ce0(param_1), lVar7 != 0)) {
    FUN_041e27fc(lVar7,uVar4,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<PostProcessBundle>_MoveNext__);
    iVar5 = FUN_06717ce0(param_1);
    puVar3 = Method_System_Collections_Generic_List_Enumerator<Popup>_MoveNext__;
    puVar2 = Method_System_Collections_Generic_List_Enumerator<OvrAvatarJointPose>_get_Current__;
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (lVar8 = FUN_041e29a8(*(long *)(param_1 + 0x30),iVar5,*(undefined8 *)puVar2), lVar8 == 0)
           ) goto LAB_06724598;
        if (*(char *)(lVar8 + 0x38) != '\0') {
          if ((*(long *)(param_1 + 0x30) == 0) ||
             (lVar8 = FUN_041e29a8(*(long *)(param_1 + 0x30),iVar5,*(undefined8 *)puVar2),
             lVar8 == 0)) goto LAB_06724598;
          uVar9 = *(undefined8 *)(lVar8 + 0x18);
          lVar8 = *(long *)(lVar7 + 0x10);
          lVar10 = *(long *)puVar3;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_06724598;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            thunk_FUN_0333a630();
          }
          else {
            FUN_041e2c78(lVar7,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = FUN_06717ce0(param_1);
      } while (iVar5 < iVar6);
    }
    return lVar7;
  }
LAB_06724598:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


