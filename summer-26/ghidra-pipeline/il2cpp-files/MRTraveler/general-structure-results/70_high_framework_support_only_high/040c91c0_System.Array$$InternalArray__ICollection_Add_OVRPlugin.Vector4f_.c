/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector4f>
ENTRY_POINT: 040c91c0
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


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector4f>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long *plVar6;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
                    /* catch() { ... } // from try @ 040c8dac with catch @ 040c91c0 */
  while (!(bool)in_ZR) {
                    /* catch() { ... } // from try @ 040c8ba8 with catch @ 040c91c4 */
    in_x9 = in_x9 + -1;
                    /* catch() { ... } // from try @ 040c8d9c with catch @ 040c91c8
                       catch() { ... } // from try @ 040c9134 with catch @ 040c91c8 */
                    /* catch() { ... } // from try @ 040c8fa0 with catch @ 040c91cc
                       catch() { ... } // from try @ 040c9138 with catch @ 040c91cc */
    if (in_x9 == 0) {
                    /* catch() { ... } // from try @ 040c8b98 with catch @ 040c91d0
                       catch() { ... } // from try @ 040c9124 with catch @ 040c91d0 */
                    /* catch() { ... } // from try @ 040c8a3c with catch @ 040c91d4 */
                    /* catch() { ... } // from try @ 040c8c40 with catch @ 040c91d8 */
      puVar1 = (undefined8 *)FUN_03cf1348();
                    /* catch() { ... } // from try @ 040c8e44 with catch @ 040c91dc */
      goto LAB_040c91f0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
                    /* catch() { ... } // from try @ 040c8af0 with catch @ 040c91e0
                       catch() { ... } // from try @ 040c8cf4 with catch @ 040c91e0
                       catch() { ... } // from try @ 040c8ef8 with catch @ 040c91e0 */
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 4) * 0x10 + 0x138);
LAB_040c91f0:
                    /* try { // try from 040c91f0 to 041c9207 has its CatchHandler @ 040c92ec */
  (*(code *)*puVar1)();
  if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
    FUN_03c8f898(PTR_DAT_08e7d108);
    *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
  }
  plVar6 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
  uVar2 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_07064478();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_040c92a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,8);
LAB_040c92a0:
    (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
    if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
      FUN_03c8f898(PTR_DAT_08e7d108);
      *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
    }
    plVar6 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
    uVar2 = thunk_FUN_03cf5234(*unaff_x22);
    FUN_07064478();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
            goto LAB_040c9350;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,6);
LAB_040c9350:
      (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
      if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
        FUN_03c8f898(PTR_DAT_08e7d108);
        *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
      }
      plVar6 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
      uVar2 = thunk_FUN_03cf5234(*unaff_x22);
      FUN_07064478();
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
              goto 
              System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,10);
System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>:
                    /* WARNING: Could not recover jumptable at 0x040c9420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


