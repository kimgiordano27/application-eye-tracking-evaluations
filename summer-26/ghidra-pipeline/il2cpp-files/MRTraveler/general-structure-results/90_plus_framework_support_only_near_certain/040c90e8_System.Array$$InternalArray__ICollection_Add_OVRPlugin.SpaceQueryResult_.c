/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 040c90e8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *plVar9;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xe98));
  FUN_03c8f898(PTR_DAT_08e7d0f0);
  FUN_03c8f898(PTR_DAT_08e7d178);
  FUN_03c8f898(PTR_DAT_08e7d180);
  FUN_03c8f898(PTR_DAT_08e7d188);
                    /* try { // try from 040c9120 to 041c9123 has its CatchHandler @ 040c91ac */
                    /* try { // try from 040c9124 to 041c9127 has its CatchHandler @ 040c91d0 */
                    /* try { // try from 040c9128 to 041c912b has its CatchHandler @ 040c91a8 */
  FUN_03c8f898(PTR_DAT_08e7d190);
                    /* try { // try from 040c912c to 041c912f has its CatchHandler @ 040c91a4 */
  *(undefined1 *)(unaff_x20 + 0x667) = 1;
  puVar1 = PTR_DAT_08e69e98;
  if (DAT_094116e2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e7d108);
    DAT_094116e2 = '\x01';
  }
  puVar3 = PTR_DAT_08e7d108;
  plVar9 = (long *)**(undefined8 **)(*(long *)PTR_DAT_08e7d108 + 0xb8);
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_07064478();
  puVar2 = PTR_DAT_08e7d0f0;
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e7d0f0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_040c91f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e7d0f0,4);
LAB_040c91f0:
    (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
    if (DAT_094116e2 == '\0') {
      FUN_03c8f898(PTR_DAT_08e7d108);
      DAT_094116e2 = '\x01';
    }
    plVar9 = (long *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_07064478();
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
            goto LAB_040c92a0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar2,8);
LAB_040c92a0:
      (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
      if (DAT_094116e2 == '\0') {
        FUN_03c8f898(PTR_DAT_08e7d108);
        DAT_094116e2 = '\x01';
      }
      plVar9 = (long *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
      uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_07064478();
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_040c9350;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar2,6);
LAB_040c9350:
        (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
        if (DAT_094116e2 == '\0') {
          FUN_03c8f898(PTR_DAT_08e7d108);
          DAT_094116e2 = '\x01';
        }
        plVar9 = (long *)**(undefined8 **)(*(long *)puVar3 + 0xb8);
        uVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        FUN_07064478();
        if (plVar9 != (long *)0x0) {
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
                goto 
                System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>
                ;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar2,10);
System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>:
                    /* WARNING: Could not recover jumptable at 0x040c9420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


