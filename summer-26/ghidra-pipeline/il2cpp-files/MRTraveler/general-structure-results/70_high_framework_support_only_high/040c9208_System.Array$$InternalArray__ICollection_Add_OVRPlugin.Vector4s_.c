/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Vector4s>
ENTRY_POINT: 040c9208
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Vector4s>(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
                    /* try { // try from 040c9208 to 041c92db has its CatchHandler @ 040c8864 */
  if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
    FUN_03c8f898(PTR_DAT_08e7d108);
    *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
  }
  plVar6 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
  uVar1 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_07064478();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_040c92a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,8);
LAB_040c92a0:
    (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
    if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
      FUN_03c8f898(PTR_DAT_08e7d108);
      *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
    }
    plVar6 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
    uVar1 = thunk_FUN_03cf5234(*unaff_x22);
    FUN_07064478();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
            goto LAB_040c9350;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,6);
LAB_040c9350:
      (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
      if (*(char *)(unaff_x23 + 0x6e2) == '\0') {
        FUN_03c8f898(PTR_DAT_08e7d108);
        *(undefined1 *)(unaff_x23 + 0x6e2) = 1;
      }
      plVar6 = (long *)**(undefined8 **)(*unaff_x24 + 0xb8);
      uVar1 = thunk_FUN_03cf5234(*unaff_x22);
      FUN_07064478();
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
              goto 
              System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,10);
System_Array__InternalArray__ICollection_Add<OVRTrackedKeyboardHands_HandBoneMapping>:
                    /* WARNING: Could not recover jumptable at 0x040c9420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


