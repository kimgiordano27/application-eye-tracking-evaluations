/*
FUNCTION_NAME: Oculus.Interaction.Input.Hand$$get_IsHighConfidence
ENTRY_POINT: 0524342c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;active_gaze_state_retrieval_with_validity_and_pose
*/


void Oculus_Interaction_Input_Hand__get_IsHighConfidence(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar7;
  
                    /* catch(type#1 @ 06402238) { ... } // from try @ 052432f8 with catch @ 0524342c
                       catch(type#1 @ 06402238) { ... } // from try @ 052433ec with catch @ 0524342c
                        */
  FUN_02f08768(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x933) = 1;
  FUN_05243638();
                    /* try { // try from 05243448 to 0534344b has its CatchHandler @ 05243458 */
  plVar7 = *(long **)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x98) = unaff_w20;
  if (plVar7 != (long *)0x0) {
                    /* catch() { ... } // from try @ 05243448 with catch @ 05243458 */
    lVar4 = *plVar7;
                    /* try { // try from 0524345c to 05343463 has its CatchHandler @ 0524346c */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 05243464 to 0534346f has its CatchHandler @ 05243290 */
    if (uVar5 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0524345c with catch @ 0524346c
                        */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_052434a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02f421d0(plVar7,*(long *)
                                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo
                          ,0);
LAB_052434a8:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,unaff_w20,puVar2[1]);
    *(long **)(unaff_x19 + 0x90) = plVar7;
    puVar1 = PTR_DAT_067cbb40;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Predicate<Tab>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_0524352c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)System_Predicate<Tab>_TypeInfo,6);
LAB_0524352c:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      plVar7 = *(long **)(unaff_x19 + 0x90);
      uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0475f968();
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067cbb48) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
              goto LAB_052435b4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067cbb48,7);
LAB_052435b4:
        (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
        FUN_05242034();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


