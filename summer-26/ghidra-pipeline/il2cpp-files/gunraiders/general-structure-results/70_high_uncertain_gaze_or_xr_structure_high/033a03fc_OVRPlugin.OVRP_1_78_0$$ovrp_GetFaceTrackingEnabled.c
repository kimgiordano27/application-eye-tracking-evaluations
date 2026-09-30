/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 033a03fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if (unaff_x21 == 0) {
LAB_033a0518:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (1 < *(int *)(unaff_x21 + 0x24) - 3U) {
    in_stack_00000008._4_2_ = FUN_033a400c();
    if ((in_stack_00000008._4_2_ & 0xff) == 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_033a0518;
      uVar1 = 1;
      if (*(int *)(unaff_x21 + 0x24) == 2) {
        uVar1 = 2;
      }
      System_Collections_ObjectModel_ReadOnlyCollection<FrameTimeSample>__System_Collections_IList_set_Item
                ((long)&stack0x00000008 + 4,
                 (*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18) & uVar1) != 0,
                 *(undefined8 *)PTR_DAT_04231370);
    }
    if (in_stack_00000008._5_1_ != '\0') {
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (plVar2 = (long *)FUN_0335fda8(*(long *)(unaff_x20 + 0x20),0), plVar2 == (long *)0x0))
      goto LAB_033a0518;
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<Face>_Add__) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_033a0500;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(plVar2,*(long *)Method_System_Collections_Generic_HashSet<Face>_Add__,2)
      ;
LAB_033a0500:
      uVar1 = (*(code *)*puVar3)(plVar2);
      goto LAB_033a04d4;
    }
  }
  uVar1 = 0;
LAB_033a04d4:
  return uVar1 & 1;
}


