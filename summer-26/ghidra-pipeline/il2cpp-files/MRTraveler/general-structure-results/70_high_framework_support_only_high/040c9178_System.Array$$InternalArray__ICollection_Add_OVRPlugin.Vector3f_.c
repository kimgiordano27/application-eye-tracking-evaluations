/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector3f>
ENTRY_POINT: 040c9178
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector3f>(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
                    /* catch() { ... } // from try @ 040c9140 with catch @ 040c9178 */
  plVar7 = (long *)*param_1;
                    /* catch() { ... } // from try @ 040c8a20 with catch @ 040c917c */
  uVar2 = thunk_FUN_03cf5234();
                    /* catch() { ... } // from try @ 040c8a00 with catch @ 040c9180 */
                    /* catch() { ... } // from try @ 040c89e4 with catch @ 040c9184 */
                    /* catch() { ... } // from try @ 040c89d0 with catch @ 040c9188 */
                    /* catch() { ... } // from try @ 040c8c04 with catch @ 040c918c */
                    /* catch() { ... } // from try @ 040c8dd8 with catch @ 040c9190 */
  FUN_07064478();
  puVar1 = PTR_DAT_08e7d0f0;
                    /* catch() { ... } // from try @ 040c8e08 with catch @ 040c9194 */
  if (plVar7 != (long *)0x0) {
                    /* catch() { ... } // from try @ 040c8be8 with catch @ 040c9198 */
                    /* catch() { ... } // from try @ 040c913c with catch @ 040c919c */
    lVar4 = *plVar7;
                    /* catch() { ... } // from try @ 040c9130 with catch @ 040c91a0 */
                    /* catch() { ... } // from try @ 040c912c with catch @ 040c91a4 */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 040c9128 with catch @ 040c91a8 */
                    /* catch() { ... } // from try @ 040c9120 with catch @ 040c91ac */
    if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 040c8bd4 with catch @ 040c91b0 */
                    /* catch() { ... } // from try @ 040c8dec with catch @ 040c91b4 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 040c8e28 with catch @ 040c91b8 */
                    /* catch() { ... } // from try @ 040c8c24 with catch @ 040c91bc */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e7d0f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_040c91f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e7d0f0,4);
LAB_040c91f0:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
      FUN_03c8f898(PTR_DAT_08e7d108);
      *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
    }
    plVar7 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
    uVar2 = thunk_FUN_03cf5234(*unaff_x22);
    FUN_07064478();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
            goto LAB_040c92a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar1,8);
LAB_040c92a0:
      (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
        FUN_03c8f898(PTR_DAT_08e7d108);
        *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
      }
      plVar7 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
      uVar2 = thunk_FUN_03cf5234(*unaff_x22);
      FUN_07064478();
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
              goto LAB_040c9350;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar1,6);
LAB_040c9350:
        (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
        if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
          FUN_03c8f898(PTR_DAT_08e7d108);
          *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
        }
        plVar7 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
        uVar2 = thunk_FUN_03cf5234(*unaff_x22);
        FUN_07064478();
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
                goto 
                System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>
                ;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar1,10);
System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>:
                    /* WARNING: Could not recover jumptable at 0x040c9420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


